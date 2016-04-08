// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "Sky.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Entity.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{



static const char* Sky_ID = "Sky";

const char* SignalWrapper_Sky_ComponentNameChanged_ID = "SignalWrapper_Sky_ComponentNameChanged";

class SignalWrapper_Sky_ComponentNameChanged
{
public:
    SignalWrapper_Sky_ComponentNameChanged(Object* owner, Signal2< const String &, const String & >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal2< const String &, const String & >* signal_;
};

class SignalReceiver_Sky_ComponentNameChanged : public SignalReceiver
{
public:
    void OnSignal(const String & param0, const String & param1)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        duk_push_string(ctx, param0.CString());
        duk_put_prop_index(ctx, -2, 0);
        duk_push_string(ctx, param1.CString());
        duk_put_prop_index(ctx, -2, 1);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_Sky_ComponentNameChanged_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Sky_ComponentNameChanged>(ctx, SignalWrapper_Sky_ComponentNameChanged_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Sky_ComponentNameChanged_Connect(duk_context* ctx)
{
    SignalWrapper_Sky_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Sky_ComponentNameChanged>(ctx, SignalWrapper_Sky_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Sky_ComponentNameChanged* receiver = new SignalReceiver_Sky_ComponentNameChanged();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Sky_ComponentNameChanged::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Sky_ComponentNameChanged_Disconnect(duk_context* ctx)
{
    SignalWrapper_Sky_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Sky_ComponentNameChanged>(ctx, SignalWrapper_Sky_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Sky_ComponentNameChanged_Emit(duk_context* ctx)
{
    SignalWrapper_Sky_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Sky_ComponentNameChanged>(ctx, SignalWrapper_Sky_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    String param0 = duk_require_string(ctx, 0);
    String param1 = duk_require_string(ctx, 1);
    wrapper->signal_->Emit(param0, param1);
    return 0;
}

static duk_ret_t Sky_Get_ComponentNameChanged(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    SignalWrapper_Sky_ComponentNameChanged* wrapper = new SignalWrapper_Sky_ComponentNameChanged(thisObj, &thisObj->ComponentNameChanged);
    PushValueObject(ctx, wrapper, SignalWrapper_Sky_ComponentNameChanged_ID, SignalWrapper_Sky_ComponentNameChanged_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Sky_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ComponentNameChanged_Emit, 2);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Sky_ParentEntitySet_ID = "SignalWrapper_Sky_ParentEntitySet";

class SignalWrapper_Sky_ParentEntitySet
{
public:
    SignalWrapper_Sky_ParentEntitySet(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Sky_ParentEntitySet : public SignalReceiver
{
public:
    void OnSignal()
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_Sky_ParentEntitySet_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Sky_ParentEntitySet>(ctx, SignalWrapper_Sky_ParentEntitySet_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Sky_ParentEntitySet_Connect(duk_context* ctx)
{
    SignalWrapper_Sky_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Sky_ParentEntitySet>(ctx, SignalWrapper_Sky_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Sky_ParentEntitySet* receiver = new SignalReceiver_Sky_ParentEntitySet();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Sky_ParentEntitySet::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Sky_ParentEntitySet_Disconnect(duk_context* ctx)
{
    SignalWrapper_Sky_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Sky_ParentEntitySet>(ctx, SignalWrapper_Sky_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Sky_ParentEntitySet_Emit(duk_context* ctx)
{
    SignalWrapper_Sky_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Sky_ParentEntitySet>(ctx, SignalWrapper_Sky_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Sky_Get_ParentEntitySet(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    SignalWrapper_Sky_ParentEntitySet* wrapper = new SignalWrapper_Sky_ParentEntitySet(thisObj, &thisObj->ParentEntitySet);
    PushValueObject(ctx, wrapper, SignalWrapper_Sky_ParentEntitySet_ID, SignalWrapper_Sky_ParentEntitySet_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntitySet_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Sky_ParentEntityAboutToBeDetached_ID = "SignalWrapper_Sky_ParentEntityAboutToBeDetached";

class SignalWrapper_Sky_ParentEntityAboutToBeDetached
{
public:
    SignalWrapper_Sky_ParentEntityAboutToBeDetached(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Sky_ParentEntityAboutToBeDetached : public SignalReceiver
{
public:
    void OnSignal()
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_Sky_ParentEntityAboutToBeDetached_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Sky_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Sky_ParentEntityAboutToBeDetached_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Sky_ParentEntityAboutToBeDetached_Connect(duk_context* ctx)
{
    SignalWrapper_Sky_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Sky_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Sky_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Sky_ParentEntityAboutToBeDetached* receiver = new SignalReceiver_Sky_ParentEntityAboutToBeDetached();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Sky_ParentEntityAboutToBeDetached::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Sky_ParentEntityAboutToBeDetached_Disconnect(duk_context* ctx)
{
    SignalWrapper_Sky_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Sky_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Sky_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Sky_ParentEntityAboutToBeDetached_Emit(duk_context* ctx)
{
    SignalWrapper_Sky_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Sky_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Sky_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Sky_Get_ParentEntityAboutToBeDetached(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    SignalWrapper_Sky_ParentEntityAboutToBeDetached* wrapper = new SignalWrapper_Sky_ParentEntityAboutToBeDetached(thisObj, &thisObj->ParentEntityAboutToBeDetached);
    PushValueObject(ctx, wrapper, SignalWrapper_Sky_ParentEntityAboutToBeDetached_ID, SignalWrapper_Sky_ParentEntityAboutToBeDetached_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Sky_ParentEntityAboutToBeDetached_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

static duk_ret_t Sky_Update(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    thisObj->Update();
    return 0;
}

static duk_ret_t Sky_TypeName(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    const String & ret = thisObj->TypeName();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t Sky_TypeId(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    u32 ret = thisObj->TypeId();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Sky_Name(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    const String & ret = thisObj->Name();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t Sky_SetName_String(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    String name = duk_require_string(ctx, 0);
    thisObj->SetName(name);
    return 0;
}

static duk_ret_t Sky_SetParentEntity_Entity(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    thisObj->SetParentEntity(entity);
    return 0;
}

static duk_ret_t Sky_SetReplicated_bool(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetReplicated(enable);
    return 0;
}

static duk_ret_t Sky_SetAttribute_String_Variant_AttributeChange__Type(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    String id = duk_require_string(ctx, 0);
    Variant value = GetVariant(ctx, 1);
    AttributeChange::Type change = numArgs > 2 ? (AttributeChange::Type)(int)duk_require_number(ctx, 2) : AttributeChange::Default;
    thisObj->SetAttribute(id, value, change);
    return 0;
}

static duk_ret_t Sky_GetAttribute_String(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    String id = duk_require_string(ctx, 0);
    Variant ret = thisObj->GetAttribute(id);
    PushVariant(ctx, ret);
    return 1;
}

static duk_ret_t Sky_IsReplicated(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    bool ret = thisObj->IsReplicated();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Sky_IsLocal(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    bool ret = thisObj->IsLocal();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Sky_IsUnacked(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    bool ret = thisObj->IsUnacked();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Sky_SetUpdateMode_AttributeChange__Type(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    AttributeChange::Type defaultmode = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->SetUpdateMode(defaultmode);
    return 0;
}

static duk_ret_t Sky_UpdateMode(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    AttributeChange::Type ret = thisObj->UpdateMode();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Sky_Id(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    component_id_t ret = thisObj->Id();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Sky_SupportsDynamicAttributes(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    bool ret = thisObj->SupportsDynamicAttributes();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Sky_NumAttributes(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    int ret = thisObj->NumAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Sky_NumStaticAttributes(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    int ret = thisObj->NumStaticAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Sky_EmitAttributeChanged_String_AttributeChange__Type(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    String attributeName = duk_require_string(ctx, 0);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 1);
    thisObj->EmitAttributeChanged(attributeName, change);
    return 0;
}

static duk_ret_t Sky_ComponentChanged_AttributeChange__Type(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->ComponentChanged(change);
    return 0;
}

static duk_ret_t Sky_ParentEntity(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    Entity * ret = thisObj->ParentEntity();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t Sky_SetTemporary_bool(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetTemporary(enable);
    return 0;
}

static duk_ret_t Sky_IsTemporary(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    bool ret = thisObj->IsTemporary();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Sky_ViewEnabled(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    bool ret = thisObj->ViewEnabled();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Sky_AttributeNames(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    StringVector ret = thisObj->AttributeNames();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Sky_AttributeIds(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    StringVector ret = thisObj->AttributeIds();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Sky_ShouldBeSerialized_bool_bool(duk_context* ctx)
{
    Sky* thisObj = GetThisWeakObject<Sky>(ctx);
    bool serializeTemporary = duk_require_boolean(ctx, 0);
    bool serializeLocal = duk_require_boolean(ctx, 1);
    bool ret = thisObj->ShouldBeSerialized(serializeTemporary, serializeLocal);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Sky_EnsureTypeNameWithoutPrefix_Static_String(duk_context* ctx)
{
    String tn = duk_require_string(ctx, 0);
    String ret = Sky::EnsureTypeNameWithoutPrefix(tn);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static const duk_function_list_entry Sky_Functions[] = {
    {"Update", Sky_Update, 0}
    ,{"TypeName", Sky_TypeName, 0}
    ,{"TypeId", Sky_TypeId, 0}
    ,{"Name", Sky_Name, 0}
    ,{"SetName", Sky_SetName_String, 1}
    ,{"SetParentEntity", Sky_SetParentEntity_Entity, 1}
    ,{"SetReplicated", Sky_SetReplicated_bool, 1}
    ,{"SetAttribute", Sky_SetAttribute_String_Variant_AttributeChange__Type, DUK_VARARGS}
    ,{"GetAttribute", Sky_GetAttribute_String, 1}
    ,{"IsReplicated", Sky_IsReplicated, 0}
    ,{"IsLocal", Sky_IsLocal, 0}
    ,{"IsUnacked", Sky_IsUnacked, 0}
    ,{"SetUpdateMode", Sky_SetUpdateMode_AttributeChange__Type, 1}
    ,{"UpdateMode", Sky_UpdateMode, 0}
    ,{"Id", Sky_Id, 0}
    ,{"SupportsDynamicAttributes", Sky_SupportsDynamicAttributes, 0}
    ,{"NumAttributes", Sky_NumAttributes, 0}
    ,{"NumStaticAttributes", Sky_NumStaticAttributes, 0}
    ,{"EmitAttributeChanged", Sky_EmitAttributeChanged_String_AttributeChange__Type, 2}
    ,{"ComponentChanged", Sky_ComponentChanged_AttributeChange__Type, 1}
    ,{"ParentEntity", Sky_ParentEntity, 0}
    ,{"SetTemporary", Sky_SetTemporary_bool, 1}
    ,{"IsTemporary", Sky_IsTemporary, 0}
    ,{"ViewEnabled", Sky_ViewEnabled, 0}
    ,{"AttributeNames", Sky_AttributeNames, 0}
    ,{"AttributeIds", Sky_AttributeIds, 0}
    ,{"ShouldBeSerialized", Sky_ShouldBeSerialized_bool_bool, 2}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry Sky_StaticFunctions[] = {
    {"EnsureTypeNameWithoutPrefix", Sky_EnsureTypeNameWithoutPrefix_Static_String, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_Sky(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, Sky_StaticFunctions);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, Sky_Functions);
    DefineProperty(ctx, "ComponentNameChanged", Sky_Get_ComponentNameChanged, nullptr);
    DefineProperty(ctx, "ParentEntitySet", Sky_Get_ParentEntitySet, nullptr);
    DefineProperty(ctx, "ParentEntityAboutToBeDetached", Sky_Get_ParentEntityAboutToBeDetached, nullptr);
    DefineProperty(ctx, "typeName", Sky_TypeName, nullptr);
    DefineProperty(ctx, "typeId", Sky_TypeId, nullptr);
    DefineProperty(ctx, "name", Sky_Name, Sky_SetName_String);
    DefineProperty(ctx, "replicated", Sky_IsReplicated, Sky_SetReplicated_bool);
    DefineProperty(ctx, "local", Sky_IsLocal, nullptr);
    DefineProperty(ctx, "unacked", Sky_IsUnacked, nullptr);
    DefineProperty(ctx, "updateMode", Sky_UpdateMode, Sky_SetUpdateMode_AttributeChange__Type);
    DefineProperty(ctx, "id", Sky_Id, nullptr);
    DefineProperty(ctx, "temporary", Sky_IsTemporary, Sky_SetTemporary_bool);
    DefineProperty(ctx, "viewEnabled", Sky_ViewEnabled, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, Sky_ID);
}

}
