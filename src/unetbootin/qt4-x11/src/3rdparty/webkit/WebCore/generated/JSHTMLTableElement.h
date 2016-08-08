/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLTableElement_h
#define JSHTMLTableElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLTableElement;

class JSHTMLTableElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLTableElement(PassRefPtr<JSC::Structure>, PassRefPtr<HTMLTableElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValuePtr, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    static JSC::JSValuePtr getConstructor(JSC::ExecState*);
};


class JSHTMLTableElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSHTMLTableElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Functions

JSC::JSValuePtr jsHTMLTableElementPrototypeFunctionCreateTHead(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLTableElementPrototypeFunctionDeleteTHead(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLTableElementPrototypeFunctionCreateTFoot(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLTableElementPrototypeFunctionDeleteTFoot(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLTableElementPrototypeFunctionCreateCaption(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLTableElementPrototypeFunctionDeleteCaption(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLTableElementPrototypeFunctionInsertRow(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLTableElementPrototypeFunctionDeleteRow(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
// Attributes

JSC::JSValuePtr jsHTMLTableElementCaption(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementCaption(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementTHead(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementTHead(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementTFoot(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementTFoot(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementRows(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLTableElementTBodies(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLTableElementAlign(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementBgColor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementBgColor(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementBorder(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementBorder(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementCellPadding(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementCellPadding(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementCellSpacing(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementCellSpacing(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementFrame(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementFrame(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementRules(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementRules(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementSummary(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementSummary(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementWidth(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLTableElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLTableElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif