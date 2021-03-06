/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_VirtualEthernetSwitchSettingData_h
#define _CIM_VirtualEthernetSwitchSettingData_h

#include <MI.h>
#include "CIM_VirtualSystemSettingData.h"

/*
**==============================================================================
**
** CIM_VirtualEthernetSwitchSettingData [CIM_VirtualEthernetSwitchSettingData]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _CIM_VirtualEthernetSwitchSettingData /* extends CIM_VirtualSystemSettingData */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_SettingData properties */
    /* CIM_VirtualSystemSettingData properties */
    MI_ConstStringField VirtualSystemIdentifier;
    MI_ConstStringField VirtualSystemType;
    MI_ConstStringAField Notes;
    MI_ConstDatetimeField CreationTime;
    MI_ConstStringField ConfigurationID;
    MI_ConstStringField ConfigurationDataRoot;
    MI_ConstStringField ConfigurationFile;
    MI_ConstStringField SnapshotDataRoot;
    MI_ConstStringField SuspendDataRoot;
    MI_ConstStringField SwapFileDataRoot;
    MI_ConstStringField LogDataRoot;
    MI_ConstUint16Field AutomaticStartupAction;
    MI_ConstDatetimeField AutomaticStartupActionDelay;
    MI_ConstUint16Field AutomaticStartupActionSequenceNumber;
    MI_ConstUint16Field AutomaticShutdownAction;
    MI_ConstUint16Field AutomaticRecoveryAction;
    MI_ConstStringField RecoveryFile;
    /* CIM_VirtualEthernetSwitchSettingData properties */
    MI_ConstStringAField VLANConnection;
    MI_ConstStringAField AssociatedResourcePool;
    MI_ConstUint32Field MaxNumMACAddress;
    MI_ConstUint16Field EVBMode;
    MI_ConstStringField OtherEVBMode;
}
CIM_VirtualEthernetSwitchSettingData;

typedef struct _CIM_VirtualEthernetSwitchSettingData_Ref
{
    CIM_VirtualEthernetSwitchSettingData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VirtualEthernetSwitchSettingData_Ref;

typedef struct _CIM_VirtualEthernetSwitchSettingData_ConstRef
{
    MI_CONST CIM_VirtualEthernetSwitchSettingData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VirtualEthernetSwitchSettingData_ConstRef;

typedef struct _CIM_VirtualEthernetSwitchSettingData_Array
{
    struct _CIM_VirtualEthernetSwitchSettingData** data;
    MI_Uint32 size;
}
CIM_VirtualEthernetSwitchSettingData_Array;

typedef struct _CIM_VirtualEthernetSwitchSettingData_ConstArray
{
    struct _CIM_VirtualEthernetSwitchSettingData MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_VirtualEthernetSwitchSettingData_ConstArray;

typedef struct _CIM_VirtualEthernetSwitchSettingData_ArrayRef
{
    CIM_VirtualEthernetSwitchSettingData_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VirtualEthernetSwitchSettingData_ArrayRef;

typedef struct _CIM_VirtualEthernetSwitchSettingData_ConstArrayRef
{
    CIM_VirtualEthernetSwitchSettingData_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VirtualEthernetSwitchSettingData_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_VirtualEthernetSwitchSettingData_rtti;

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Construct(
    _Out_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructInstance(context, &CIM_VirtualEthernetSwitchSettingData_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clone(
    _In_ const CIM_VirtualEthernetSwitchSettingData* self,
    _Outptr_ CIM_VirtualEthernetSwitchSettingData** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_VirtualEthernetSwitchSettingData_IsA(
    _In_ const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_VirtualEthernetSwitchSettingData_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Destruct(_Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Delete(_Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Post(
    _In_ const CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_InstanceID(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_InstanceID(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_InstanceID(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_Caption(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_Caption(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_Caption(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_Description(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_Description(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_Description(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_ElementName(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_ElementName(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_ElementName(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_VirtualSystemIdentifier(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_VirtualSystemIdentifier(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_VirtualSystemIdentifier(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_VirtualSystemType(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_VirtualSystemType(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_VirtualSystemType(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_Notes(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_reads_opt_(size) const MI_Char** data,
    _In_ MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_Notes(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_reads_opt_(size) const MI_Char** data,
    _In_ MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_Notes(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_CreationTime(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Datetime x)
{
    ((MI_DatetimeField*)&self->CreationTime)->value = x;
    ((MI_DatetimeField*)&self->CreationTime)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_CreationTime(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    memset((void*)&self->CreationTime, 0, sizeof(self->CreationTime));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_ConfigurationID(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_ConfigurationID(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_ConfigurationID(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_ConfigurationDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_ConfigurationDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_ConfigurationDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_ConfigurationFile(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_ConfigurationFile(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_ConfigurationFile(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        10);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_SnapshotDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_SnapshotDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_SnapshotDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        11);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_SuspendDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        12,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_SuspendDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        12,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_SuspendDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        12);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_SwapFileDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        13,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_SwapFileDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        13,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_SwapFileDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        13);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_LogDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_LogDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_LogDataRoot(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        14);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_AutomaticStartupAction(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->AutomaticStartupAction)->value = x;
    ((MI_Uint16Field*)&self->AutomaticStartupAction)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_AutomaticStartupAction(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    memset((void*)&self->AutomaticStartupAction, 0, sizeof(self->AutomaticStartupAction));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_AutomaticStartupActionDelay(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Datetime x)
{
    ((MI_DatetimeField*)&self->AutomaticStartupActionDelay)->value = x;
    ((MI_DatetimeField*)&self->AutomaticStartupActionDelay)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_AutomaticStartupActionDelay(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    memset((void*)&self->AutomaticStartupActionDelay, 0, sizeof(self->AutomaticStartupActionDelay));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_AutomaticStartupActionSequenceNumber(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->AutomaticStartupActionSequenceNumber)->value = x;
    ((MI_Uint16Field*)&self->AutomaticStartupActionSequenceNumber)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_AutomaticStartupActionSequenceNumber(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    memset((void*)&self->AutomaticStartupActionSequenceNumber, 0, sizeof(self->AutomaticStartupActionSequenceNumber));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_AutomaticShutdownAction(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->AutomaticShutdownAction)->value = x;
    ((MI_Uint16Field*)&self->AutomaticShutdownAction)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_AutomaticShutdownAction(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    memset((void*)&self->AutomaticShutdownAction, 0, sizeof(self->AutomaticShutdownAction));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_AutomaticRecoveryAction(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->AutomaticRecoveryAction)->value = x;
    ((MI_Uint16Field*)&self->AutomaticRecoveryAction)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_AutomaticRecoveryAction(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    memset((void*)&self->AutomaticRecoveryAction, 0, sizeof(self->AutomaticRecoveryAction));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_RecoveryFile(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        20,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_RecoveryFile(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        20,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_RecoveryFile(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        20);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_VLANConnection(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_reads_opt_(size) const MI_Char** data,
    _In_ MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_VLANConnection(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_reads_opt_(size) const MI_Char** data,
    _In_ MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_VLANConnection(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        21);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_AssociatedResourcePool(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_reads_opt_(size) const MI_Char** data,
    _In_ MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_AssociatedResourcePool(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_reads_opt_(size) const MI_Char** data,
    _In_ MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_AssociatedResourcePool(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        22);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_MaxNumMACAddress(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MaxNumMACAddress)->value = x;
    ((MI_Uint32Field*)&self->MaxNumMACAddress)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_MaxNumMACAddress(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    memset((void*)&self->MaxNumMACAddress, 0, sizeof(self->MaxNumMACAddress));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_EVBMode(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_ MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EVBMode)->value = x;
    ((MI_Uint16Field*)&self->EVBMode)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_EVBMode(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    memset((void*)&self->EVBMode, 0, sizeof(self->EVBMode));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Set_OtherEVBMode(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        25,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_SetPtr_OtherEVBMode(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        25,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VirtualEthernetSwitchSettingData_Clear_OtherEVBMode(
    _Inout_ CIM_VirtualEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        25);
}

/*
**==============================================================================
**
** CIM_VirtualEthernetSwitchSettingData provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_VirtualEthernetSwitchSettingData_Self CIM_VirtualEthernetSwitchSettingData_Self;

MI_EXTERN_C void MI_CALL CIM_VirtualEthernetSwitchSettingData_Load(
    _Outptr_result_maybenull_ CIM_VirtualEthernetSwitchSettingData_Self** self,
    _In_opt_ MI_Module_Self* selfModule,
    _In_ MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_VirtualEthernetSwitchSettingData_Unload(
    _In_opt_ CIM_VirtualEthernetSwitchSettingData_Self* self,
    _In_ MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_VirtualEthernetSwitchSettingData_EnumerateInstances(
    _In_opt_ CIM_VirtualEthernetSwitchSettingData_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_ const MI_PropertySet* propertySet,
    _In_ MI_Boolean keysOnly,
    _In_opt_ const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_VirtualEthernetSwitchSettingData_GetInstance(
    _In_opt_ CIM_VirtualEthernetSwitchSettingData_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const CIM_VirtualEthernetSwitchSettingData* instanceName,
    _In_opt_ const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_VirtualEthernetSwitchSettingData_CreateInstance(
    _In_opt_ CIM_VirtualEthernetSwitchSettingData_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const CIM_VirtualEthernetSwitchSettingData* newInstance);

MI_EXTERN_C void MI_CALL CIM_VirtualEthernetSwitchSettingData_ModifyInstance(
    _In_opt_ CIM_VirtualEthernetSwitchSettingData_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const CIM_VirtualEthernetSwitchSettingData* modifiedInstance,
    _In_opt_ const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_VirtualEthernetSwitchSettingData_DeleteInstance(
    _In_opt_ CIM_VirtualEthernetSwitchSettingData_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const CIM_VirtualEthernetSwitchSettingData* instanceName);


#endif /* _CIM_VirtualEthernetSwitchSettingData_h */
