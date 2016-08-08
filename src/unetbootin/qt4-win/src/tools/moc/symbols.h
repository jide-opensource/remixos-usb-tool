/****************************************************************************
**
** Copyright (C) 1992-2008 Trolltech ASA. All rights reserved.
**
** This file is part of the tools applications of the Qt Toolkit.
**
** This file may be used under the terms of the GNU General Public
** License versions 2.0 or 3.0 as published by the Free Software
** Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file.  Alternatively you may (at
** your option) use any later version of the GNU General Public
** License if such license has been publicly approved by Trolltech ASA
** (or its successors, if any) and the KDE Free Qt Foundation. In
** addition, as a special exception, Trolltech gives you certain
** additional rights. These rights are described in the Trolltech GPL
** Exception version 1.2, which can be found at
** http://www.trolltech.com/products/qt/gplexception/ and in the file
** GPL_EXCEPTION.txt in this package.
**
** Please review the following information to ensure GNU General
** Public Licensing requirements will be met:
** http://trolltech.com/products/qt/licenses/licensing/opensource/. If
** you are unsure which license is appropriate for your use, please
** review the following information:
** http://trolltech.com/products/qt/licenses/licensing/licensingoverview
** or contact the sales department at sales@trolltech.com.
**
** In addition, as a special exception, Trolltech, as the sole
** copyright holder for Qt Designer, grants users of the Qt/Eclipse
** Integration plug-in the right for the Qt/Eclipse Integration to
** link to functionality provided by Qt Designer and its related
** libraries.
**
** This file is provided "AS IS" with NO WARRANTY OF ANY KIND,
** INCLUDING THE WARRANTIES OF DESIGN, MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE. Trolltech reserves all rights not expressly
** granted herein.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#ifndef SYMBOLS_H
#define SYMBOLS_H

#include "token.h"
#include <QString>
#include <QHash>
#include <QVector>
#include <QDebug>

QT_BEGIN_NAMESPACE

//#define USE_LEXEM_STORE

struct SubArray
{
    inline SubArray():from(0),len(-1){}
    inline SubArray(const QByteArray &a):array(a),from(0), len(a.size()){}
    inline SubArray(const char *s):array(s),from(0) { len = array.size(); }
    inline SubArray(const QByteArray &a, int from, int len):array(a), from(from), len(len){}
    QByteArray array;
    int from, len;
    inline bool operator==(const SubArray &other) const {
        if (len != other.len)
            return false;
        for (int i = 0; i < len; ++i)
            if (array.at(from + i) != other.array.at(other.from + i))
                return false;
        return true;
    }
};

inline uint qHash(const SubArray &key)
{
    const uchar *p = reinterpret_cast<const uchar *>(key.array.data() + key.from);
    int n = key.len;
    uint h = 0;
    uint g;

    while (n--) {
        h = (h << 4) + *p++;
        if ((g = (h & 0xf0000000)) != 0)
            h ^= g >> 23;
        h &= ~g;
    }
    return h;
}


struct Symbol
{

#ifdef USE_LEXEM_STORE
    typedef QHash<SubArray, QHashDummyValue> LexemStore;
    static LexemStore lexemStore;

    inline Symbol() : lineNum(-1),token(NOTOKEN){}
    inline Symbol(int lineNum, Token token):
        lineNum(lineNum), token(token){}
    inline Symbol(int lineNum, Token token, const QByteArray &lexem):
        lineNum(lineNum), token(token),lex(lexem){}
    inline Symbol(int lineNum, Token token, const QByteArray &lexem, int from, int len):
        lineNum(lineNum), token(token){
        LexemStore::const_iterator it = lexemStore.constFind(SubArray(lexem, from, len));

        if (it != lexemStore.constEnd()) {
            lex = it.key().array;
        } else {
            lex = lexem.mid(from, len);
            lexemStore.insert(lex, QHashDummyValue());
        }
    }
    int lineNum;
    Token token;
    inline QByteArray unquotedLexem() const { return lex.mid(1, lex.length()-2); }
    inline QByteArray lexem() const { return lex; }
    inline operator QByteArray() const { return lex; }
    QByteArray lex;

#else

    inline Symbol() : lineNum(-1),token(NOTOKEN), from(0),len(-1) {}
    inline Symbol(int lineNum, Token token):
        lineNum(lineNum), token(token), from(0), len(-1) {}
    inline Symbol(int lineNum, Token token, const QByteArray &lexem):
        lineNum(lineNum), token(token), lex(lexem), from(0) { len = lex.size(); }
    inline Symbol(int lineNum, Token token, const QByteArray &lexem, int from, int len):
        lineNum(lineNum), token(token),lex(lexem),from(from), len(len){}
    int lineNum;
    Token token;
    inline QByteArray lexem() const { return lex.mid(from, len); }
    inline QByteArray unquotedLexem() const { return lex.mid(from+1, len-2); }
    inline operator QByteArray() const { return lex.mid(from, len); }
    inline operator SubArray() const { return SubArray(lex, from, len); }
    QByteArray lex;
    int from, len;

#endif
};
Q_DECLARE_TYPEINFO(Symbol, Q_MOVABLE_TYPE);


typedef QVector<Symbol> Symbols;

QT_END_NAMESPACE

#endif // SYMBOLS_H