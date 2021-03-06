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

#include "config.h"


#if ENABLE(SVG)

#include "SVGElement.h"
#include "JSSVGUnitTypes.h"

#include <wtf/GetPtr.h>

#include "SVGUnitTypes.h"

#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGUnitTypes)

/* Hash table */

static const HashTableValue JSSVGUnitTypesTableValues[2] =
{
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGUnitTypesConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGUnitTypesTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGUnitTypesTableValues, 0 };
#else
    { 2, 1, JSSVGUnitTypesTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGUnitTypesConstructorTableValues[4] =
{
    { "SVG_UNIT_TYPE_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGUnitTypesSVG_UNIT_TYPE_UNKNOWN, (intptr_t)0 },
    { "SVG_UNIT_TYPE_USERSPACEONUSE", DontDelete|ReadOnly, (intptr_t)jsSVGUnitTypesSVG_UNIT_TYPE_USERSPACEONUSE, (intptr_t)0 },
    { "SVG_UNIT_TYPE_OBJECTBOUNDINGBOX", DontDelete|ReadOnly, (intptr_t)jsSVGUnitTypesSVG_UNIT_TYPE_OBJECTBOUNDINGBOX, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGUnitTypesConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSSVGUnitTypesConstructorTableValues, 0 };
#else
    { 8, 7, JSSVGUnitTypesConstructorTableValues, 0 };
#endif

class JSSVGUnitTypesConstructor : public DOMObject {
public:
    JSSVGUnitTypesConstructor(ExecState* exec)
        : DOMObject(JSSVGUnitTypesConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSSVGUnitTypesPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSSVGUnitTypesConstructor::s_info = { "SVGUnitTypesConstructor", 0, &JSSVGUnitTypesConstructorTable, 0 };

bool JSSVGUnitTypesConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGUnitTypesConstructor, DOMObject>(exec, &JSSVGUnitTypesConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGUnitTypesPrototypeTableValues[4] =
{
    { "SVG_UNIT_TYPE_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGUnitTypesSVG_UNIT_TYPE_UNKNOWN, (intptr_t)0 },
    { "SVG_UNIT_TYPE_USERSPACEONUSE", DontDelete|ReadOnly, (intptr_t)jsSVGUnitTypesSVG_UNIT_TYPE_USERSPACEONUSE, (intptr_t)0 },
    { "SVG_UNIT_TYPE_OBJECTBOUNDINGBOX", DontDelete|ReadOnly, (intptr_t)jsSVGUnitTypesSVG_UNIT_TYPE_OBJECTBOUNDINGBOX, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGUnitTypesPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSSVGUnitTypesPrototypeTableValues, 0 };
#else
    { 8, 7, JSSVGUnitTypesPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGUnitTypesPrototype::s_info = { "SVGUnitTypesPrototype", 0, &JSSVGUnitTypesPrototypeTable, 0 };

JSObject* JSSVGUnitTypesPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSSVGUnitTypes>(exec);
}

bool JSSVGUnitTypesPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGUnitTypesPrototype, JSObject>(exec, &JSSVGUnitTypesPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGUnitTypes::s_info = { "SVGUnitTypes", 0, &JSSVGUnitTypesTable, 0 };

JSSVGUnitTypes::JSSVGUnitTypes(PassRefPtr<Structure> structure, PassRefPtr<SVGUnitTypes> impl, SVGElement* context)
    : DOMObject(structure)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGUnitTypes::~JSSVGUnitTypes()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());

}

JSObject* JSSVGUnitTypes::createPrototype(ExecState* exec)
{
    return new (exec) JSSVGUnitTypesPrototype(JSSVGUnitTypesPrototype::createStructure(exec->lexicalGlobalObject()->objectPrototype()));
}

bool JSSVGUnitTypes::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGUnitTypes, Base>(exec, &JSSVGUnitTypesTable, this, propertyName, slot);
}

JSValuePtr jsSVGUnitTypesConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSSVGUnitTypes*>(asObject(slot.slotBase()))->getConstructor(exec);
}
JSValuePtr JSSVGUnitTypes::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSSVGUnitTypesConstructor>(exec);
}

// Constant getters

JSValuePtr jsSVGUnitTypesSVG_UNIT_TYPE_UNKNOWN(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValuePtr jsSVGUnitTypesSVG_UNIT_TYPE_USERSPACEONUSE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsSVGUnitTypesSVG_UNIT_TYPE_OBJECTBOUNDINGBOX(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSC::JSValuePtr toJS(JSC::ExecState* exec, SVGUnitTypes* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGUnitTypes>(exec, object, context);
}
SVGUnitTypes* toSVGUnitTypes(JSC::JSValuePtr value)
{
    return value->isObject(&JSSVGUnitTypes::s_info) ? static_cast<JSSVGUnitTypes*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
