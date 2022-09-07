#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.HashSet`1<DigitalRubyShared.GestureRecognizer>
struct HashSet_1_tB5AD2CF3C620FAB5C80D42D8725A07310CCACEAC;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.ICollection`1<DigitalRubyShared.GestureTouch>
struct ICollection_1_t1E2B6A23B6AAAECCB20670A61273B6709D4C1A1F;
// System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>
struct IEnumerable_1_t1845670C5ECB1046E2E5D7AF49DDCC382977261B;
// System.Collections.Generic.IList`1<DigitalRubyShared.GestureTouch>
struct IList_1_t679A42B8DD6DBD82E04DC75DB5FBD1B524ED86EA;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Single>>
struct List_1_t230A4206B28158811814D1F722C78A25CC1EE0E9;
// System.Collections.Generic.List`1<DigitalRubyShared.GestureRecognizer>
struct List_1_t68CD8CA9F0EEC147340CA7B82346D4366801055E;
// System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>
struct List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048;
// System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch>
struct ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// DigitalRubyShared.GestureTouch[]
struct GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DigitalRubyShared.GestureRecognizer
struct GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA;
// DigitalRubyShared.GestureRecognizerStateUpdatedDelegate
struct GestureRecognizerStateUpdatedDelegate_t3B72708F86279D27A3F323F2E25D5A34C946C347;
// DigitalRubyShared.GestureRecognizerUpdated
struct GestureRecognizerUpdated_tC3EDBC72E2EDE068D5B1DB9FBF7FDEC7E940025C;
// DigitalRubyShared.GestureVelocityTracker
struct GestureVelocityTracker_tBB367A39E24B9BBB5073853299D7512CA465A5DB;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// DigitalRubyShared.LongPressGestureRecognizer
struct LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// DigitalRubyShared.OneTouchRotateGestureRecognizer
struct OneTouchRotateGestureRecognizer_t9AD3DE2243DF1DFAA0D39E171A8D634C24B6E66E;
// DigitalRubyShared.OneTouchScaleGestureRecognizer
struct OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD;
// DigitalRubyShared.PanGestureRecognizer
struct PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760;
// DigitalRubyShared.RotateGestureRecognizer
struct RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C;
// DigitalRubyShared.ScaleGestureRecognizer
struct ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// DigitalRubyShared.SwipeGestureRecognizer
struct SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8;
// DigitalRubyShared.TapGestureRecognizer
struct TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// DigitalRubyShared.GestureRecognizer/CallbackMainThreadDelegate
struct CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1845670C5ECB1046E2E5D7AF49DDCC382977261B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5E680DDB92B1E735BE19C238B7F931B7877C5CFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB2EC6F070958447A3539FD4B51C2C8E49D2FE1B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_mD87BDCD5E58F16EFA29D983BF5AFE610F68AD599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mEA79C6994CE04616CCF357571B6F2D2B9E49C0E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7506B82AFE85D74C76361D4AC5F3924AA9D3F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapGestureRecognizer_VerifyFailGestureAfterDelay_m37946D409BA9775C8D8B24DDF7CC9997D4396CFD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>
struct List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch>
struct ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};
struct Il2CppArrayBounds;

// DigitalRubyShared.GestureLogger
struct GestureLogger_t3E26EB8A584C0A2F1B8D84CDC5AC24F9CCB985FD  : public RuntimeObject
{
};

// DigitalRubyShared.GestureRecognizer
struct GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA  : public RuntimeObject
{
	// DigitalRubyShared.GestureRecognizerState DigitalRubyShared.GestureRecognizer::state
	int32_t ___state_1;
	// System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch> DigitalRubyShared.GestureRecognizer::currentTrackedTouches
	List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* ___currentTrackedTouches_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch> DigitalRubyShared.GestureRecognizer::currentTrackedTouchesReadOnly
	ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* ___currentTrackedTouchesReadOnly_3;
	// System.Collections.Generic.HashSet`1<DigitalRubyShared.GestureRecognizer> DigitalRubyShared.GestureRecognizer::requireGestureRecognizersToFail
	HashSet_1_tB5AD2CF3C620FAB5C80D42D8725A07310CCACEAC* ___requireGestureRecognizersToFail_4;
	// System.Collections.Generic.HashSet`1<DigitalRubyShared.GestureRecognizer> DigitalRubyShared.GestureRecognizer::requireGestureRecognizersToFailThatHaveFailed
	HashSet_1_tB5AD2CF3C620FAB5C80D42D8725A07310CCACEAC* ___requireGestureRecognizersToFailThatHaveFailed_5;
	// System.Collections.Generic.HashSet`1<DigitalRubyShared.GestureRecognizer> DigitalRubyShared.GestureRecognizer::failGestures
	HashSet_1_tB5AD2CF3C620FAB5C80D42D8725A07310CCACEAC* ___failGestures_6;
	// System.Collections.Generic.List`1<DigitalRubyShared.GestureRecognizer> DigitalRubyShared.GestureRecognizer::simultaneousGestures
	List_1_t68CD8CA9F0EEC147340CA7B82346D4366801055E* ___simultaneousGestures_7;
	// DigitalRubyShared.GestureVelocityTracker DigitalRubyShared.GestureRecognizer::velocityTracker
	GestureVelocityTracker_tBB367A39E24B9BBB5073853299D7512CA465A5DB* ___velocityTracker_8;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Single>> DigitalRubyShared.GestureRecognizer::touchStartLocations
	List_1_t230A4206B28158811814D1F722C78A25CC1EE0E9* ___touchStartLocations_9;
	// System.Collections.Generic.HashSet`1<System.Int32> DigitalRubyShared.GestureRecognizer::ignoreTouchIds
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___ignoreTouchIds_10;
	// System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch> DigitalRubyShared.GestureRecognizer::tempTouches
	List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* ___tempTouches_11;
	// System.Int32 DigitalRubyShared.GestureRecognizer::minimumNumberOfTouchesToTrack
	int32_t ___minimumNumberOfTouchesToTrack_12;
	// System.Int32 DigitalRubyShared.GestureRecognizer::maximumNumberOfTouchesToTrack
	int32_t ___maximumNumberOfTouchesToTrack_13;
	// System.Boolean DigitalRubyShared.GestureRecognizer::justFailed
	bool ___justFailed_14;
	// System.Boolean DigitalRubyShared.GestureRecognizer::justEnded
	bool ___justEnded_15;
	// System.Boolean DigitalRubyShared.GestureRecognizer::isRestarting
	bool ___isRestarting_16;
	// System.Int32 DigitalRubyShared.GestureRecognizer::lastTrackTouchCount
	int32_t ___lastTrackTouchCount_17;
	// System.Boolean DigitalRubyShared.GestureRecognizer::enabled
	bool ___enabled_18;
	// System.Single DigitalRubyShared.GestureRecognizer::<PrevFocusX>k__BackingField
	float ___U3CPrevFocusXU3Ek__BackingField_19;
	// System.Single DigitalRubyShared.GestureRecognizer::<PrevFocusY>k__BackingField
	float ___U3CPrevFocusYU3Ek__BackingField_20;
	// DigitalRubyShared.GestureRecognizerUpdated DigitalRubyShared.GestureRecognizer::Updated
	GestureRecognizerUpdated_tC3EDBC72E2EDE068D5B1DB9FBF7FDEC7E940025C* ___Updated_22;
	// DigitalRubyShared.GestureRecognizerStateUpdatedDelegate DigitalRubyShared.GestureRecognizer::StateUpdated
	GestureRecognizerStateUpdatedDelegate_t3B72708F86279D27A3F323F2E25D5A34C946C347* ___StateUpdated_23;
	// System.Single DigitalRubyShared.GestureRecognizer::<FocusX>k__BackingField
	float ___U3CFocusXU3Ek__BackingField_24;
	// System.Single DigitalRubyShared.GestureRecognizer::<FocusY>k__BackingField
	float ___U3CFocusYU3Ek__BackingField_25;
	// System.Single DigitalRubyShared.GestureRecognizer::<StartFocusX>k__BackingField
	float ___U3CStartFocusXU3Ek__BackingField_26;
	// System.Single DigitalRubyShared.GestureRecognizer::<StartFocusY>k__BackingField
	float ___U3CStartFocusYU3Ek__BackingField_27;
	// System.Single DigitalRubyShared.GestureRecognizer::<DeltaX>k__BackingField
	float ___U3CDeltaXU3Ek__BackingField_28;
	// System.Single DigitalRubyShared.GestureRecognizer::<DeltaY>k__BackingField
	float ___U3CDeltaYU3Ek__BackingField_29;
	// System.Single DigitalRubyShared.GestureRecognizer::<DistanceX>k__BackingField
	float ___U3CDistanceXU3Ek__BackingField_30;
	// System.Single DigitalRubyShared.GestureRecognizer::<DistanceY>k__BackingField
	float ___U3CDistanceYU3Ek__BackingField_31;
	// System.Single DigitalRubyShared.GestureRecognizer::<Pressure>k__BackingField
	float ___U3CPressureU3Ek__BackingField_32;
	// System.Object DigitalRubyShared.GestureRecognizer::<PlatformSpecificView>k__BackingField
	RuntimeObject* ___U3CPlatformSpecificViewU3Ek__BackingField_33;
	// System.Single DigitalRubyShared.GestureRecognizer::<PlatformSpecificViewScale>k__BackingField
	float ___U3CPlatformSpecificViewScaleU3Ek__BackingField_34;
	// System.Object DigitalRubyShared.GestureRecognizer::<CustomData>k__BackingField
	RuntimeObject* ___U3CCustomDataU3Ek__BackingField_35;
	// System.Boolean DigitalRubyShared.GestureRecognizer::<ClearTrackedTouchesOnEndOrFail>k__BackingField
	bool ___U3CClearTrackedTouchesOnEndOrFailU3Ek__BackingField_36;
	// System.Boolean DigitalRubyShared.GestureRecognizer::<AllowSimultaneousExecutionIfPlatformSpecificViewsAreDifferent>k__BackingField
	bool ___U3CAllowSimultaneousExecutionIfPlatformSpecificViewsAreDifferentU3Ek__BackingField_37;
	// System.Boolean DigitalRubyShared.GestureRecognizer::<ReceivedAdditionalTouches>k__BackingField
	bool ___U3CReceivedAdditionalTouchesU3Ek__BackingField_38;
};

struct GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_StaticFields
{
	// DigitalRubyShared.GestureRecognizer DigitalRubyShared.GestureRecognizer::allGesturesReference
	GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* ___allGesturesReference_0;
	// System.Collections.Generic.HashSet`1<DigitalRubyShared.GestureRecognizer> DigitalRubyShared.GestureRecognizer::ActiveGestures
	HashSet_1_tB5AD2CF3C620FAB5C80D42D8725A07310CCACEAC* ___ActiveGestures_21;
	// DigitalRubyShared.GestureRecognizer/CallbackMainThreadDelegate DigitalRubyShared.GestureRecognizer::MainThreadCallback
	CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* ___MainThreadCallback_39;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// DigitalRubyShared.GestureTouch
struct GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 
{
	// System.Int32 DigitalRubyShared.GestureTouch::id
	int32_t ___id_0;
	// System.Single DigitalRubyShared.GestureTouch::previousX
	float ___previousX_1;
	// System.Single DigitalRubyShared.GestureTouch::previousY
	float ___previousY_2;
	// System.Single DigitalRubyShared.GestureTouch::pressure
	float ___pressure_3;
	// System.Single DigitalRubyShared.GestureTouch::screenX
	float ___screenX_4;
	// System.Single DigitalRubyShared.GestureTouch::screenY
	float ___screenY_5;
	// System.Object DigitalRubyShared.GestureTouch::platformSpecificTouch
	RuntimeObject* ___platformSpecificTouch_6;
	// DigitalRubyShared.TouchPhase DigitalRubyShared.GestureTouch::touchPhase
	int32_t ___touchPhase_7;
};
// Native definition for P/Invoke marshalling of DigitalRubyShared.GestureTouch
struct GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1_marshaled_pinvoke
{
	int32_t ___id_0;
	float ___previousX_1;
	float ___previousY_2;
	float ___pressure_3;
	float ___screenX_4;
	float ___screenY_5;
	Il2CppIUnknown* ___platformSpecificTouch_6;
	int32_t ___touchPhase_7;
};
// Native definition for COM marshalling of DigitalRubyShared.GestureTouch
struct GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1_marshaled_com
{
	int32_t ___id_0;
	float ___previousX_1;
	float ___previousY_2;
	float ___pressure_3;
	float ___screenX_4;
	float ___screenY_5;
	Il2CppIUnknown* ___platformSpecificTouch_6;
	int32_t ___touchPhase_7;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// DigitalRubyShared.LongPressGestureRecognizer
struct LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01  : public GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA
{
	// System.Diagnostics.Stopwatch DigitalRubyShared.LongPressGestureRecognizer::stopWatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___stopWatch_40;
	// System.Single DigitalRubyShared.LongPressGestureRecognizer::<MinimumDurationSeconds>k__BackingField
	float ___U3CMinimumDurationSecondsU3Ek__BackingField_41;
	// System.Single DigitalRubyShared.LongPressGestureRecognizer::<ThresholdUnits>k__BackingField
	float ___U3CThresholdUnitsU3Ek__BackingField_42;
};

// DigitalRubyShared.OneTouchScaleGestureRecognizer
struct OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD  : public GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA
{
	// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::<ScaleMultiplier>k__BackingField
	float ___U3CScaleMultiplierU3Ek__BackingField_40;
	// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::<ScaleMultiplierX>k__BackingField
	float ___U3CScaleMultiplierXU3Ek__BackingField_41;
	// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::<ScaleMultiplierY>k__BackingField
	float ___U3CScaleMultiplierYU3Ek__BackingField_42;
	// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::<ZoomSpeed>k__BackingField
	float ___U3CZoomSpeedU3Ek__BackingField_43;
	// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::<ThresholdUnits>k__BackingField
	float ___U3CThresholdUnitsU3Ek__BackingField_44;
};

// DigitalRubyShared.PanGestureRecognizer
struct PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760  : public GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA
{
	// System.Single DigitalRubyShared.PanGestureRecognizer::<ThresholdUnits>k__BackingField
	float ___U3CThresholdUnitsU3Ek__BackingField_40;
};

// DigitalRubyShared.RotateGestureRecognizer
struct RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C  : public GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA
{
	// System.Single DigitalRubyShared.RotateGestureRecognizer::startAngle
	float ___startAngle_41;
	// System.Single DigitalRubyShared.RotateGestureRecognizer::previousAngle
	float ___previousAngle_42;
	// System.Single DigitalRubyShared.RotateGestureRecognizer::previousAngleSign
	float ___previousAngleSign_43;
	// System.Single DigitalRubyShared.RotateGestureRecognizer::<AngleThreshold>k__BackingField
	float ___U3CAngleThresholdU3Ek__BackingField_44;
	// System.Single DigitalRubyShared.RotateGestureRecognizer::<ThresholdUnits>k__BackingField
	float ___U3CThresholdUnitsU3Ek__BackingField_45;
	// System.Single DigitalRubyShared.RotateGestureRecognizer::<RotationRadians>k__BackingField
	float ___U3CRotationRadiansU3Ek__BackingField_46;
	// System.Single DigitalRubyShared.RotateGestureRecognizer::<RotationRadiansDelta>k__BackingField
	float ___U3CRotationRadiansDeltaU3Ek__BackingField_47;
};

// DigitalRubyShared.ScaleGestureRecognizer
struct ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7  : public GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA
{
	// System.Single DigitalRubyShared.ScaleGestureRecognizer::previousDistanceDirection
	float ___previousDistanceDirection_47;
	// System.Single DigitalRubyShared.ScaleGestureRecognizer::previousDistance
	float ___previousDistance_48;
	// System.Single DigitalRubyShared.ScaleGestureRecognizer::previousDistanceX
	float ___previousDistanceX_49;
	// System.Single DigitalRubyShared.ScaleGestureRecognizer::previousDistanceY
	float ___previousDistanceY_50;
	// System.Diagnostics.Stopwatch DigitalRubyShared.ScaleGestureRecognizer::timer
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___timer_51;
	// System.Single DigitalRubyShared.ScaleGestureRecognizer::<ScaleMultiplier>k__BackingField
	float ___U3CScaleMultiplierU3Ek__BackingField_52;
	// System.Single DigitalRubyShared.ScaleGestureRecognizer::<ScaleMultiplierX>k__BackingField
	float ___U3CScaleMultiplierXU3Ek__BackingField_53;
	// System.Single DigitalRubyShared.ScaleGestureRecognizer::<ScaleMultiplierY>k__BackingField
	float ___U3CScaleMultiplierYU3Ek__BackingField_54;
	// System.Single DigitalRubyShared.ScaleGestureRecognizer::<ZoomSpeed>k__BackingField
	float ___U3CZoomSpeedU3Ek__BackingField_55;
	// System.Single DigitalRubyShared.ScaleGestureRecognizer::<ThresholdUnits>k__BackingField
	float ___U3CThresholdUnitsU3Ek__BackingField_56;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// DigitalRubyShared.SwipeGestureRecognizer
struct SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8  : public GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA
{
	// DigitalRubyShared.SwipeGestureRecognizerDirection DigitalRubyShared.SwipeGestureRecognizer::<Direction>k__BackingField
	int32_t ___U3CDirectionU3Ek__BackingField_40;
	// System.Single DigitalRubyShared.SwipeGestureRecognizer::<MinimumDistanceUnits>k__BackingField
	float ___U3CMinimumDistanceUnitsU3Ek__BackingField_41;
	// System.Single DigitalRubyShared.SwipeGestureRecognizer::<MinimumSpeedUnits>k__BackingField
	float ___U3CMinimumSpeedUnitsU3Ek__BackingField_42;
	// System.Single DigitalRubyShared.SwipeGestureRecognizer::<DirectionThreshold>k__BackingField
	float ___U3CDirectionThresholdU3Ek__BackingField_43;
	// DigitalRubyShared.SwipeGestureRecognizerEndMode DigitalRubyShared.SwipeGestureRecognizer::<EndMode>k__BackingField
	int32_t ___U3CEndModeU3Ek__BackingField_44;
	// System.Boolean DigitalRubyShared.SwipeGestureRecognizer::<FailOnDirectionChange>k__BackingField
	bool ___U3CFailOnDirectionChangeU3Ek__BackingField_45;
	// DigitalRubyShared.SwipeGestureRecognizerDirection DigitalRubyShared.SwipeGestureRecognizer::<EndDirection>k__BackingField
	int32_t ___U3CEndDirectionU3Ek__BackingField_46;
	// System.Boolean DigitalRubyShared.SwipeGestureRecognizer::<SendBeginExecutingStates>k__BackingField
	bool ___U3CSendBeginExecutingStatesU3Ek__BackingField_47;
};

// DigitalRubyShared.TapGestureRecognizer
struct TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007  : public GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA
{
	// System.Int32 DigitalRubyShared.TapGestureRecognizer::tapCount
	int32_t ___tapCount_40;
	// System.Diagnostics.Stopwatch DigitalRubyShared.TapGestureRecognizer::timer
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___timer_41;
	// System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch> DigitalRubyShared.TapGestureRecognizer::tapTouches
	List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* ___tapTouches_42;
	// System.Int32 DigitalRubyShared.TapGestureRecognizer::<NumberOfTapsRequired>k__BackingField
	int32_t ___U3CNumberOfTapsRequiredU3Ek__BackingField_43;
	// System.Single DigitalRubyShared.TapGestureRecognizer::<ThresholdSeconds>k__BackingField
	float ___U3CThresholdSecondsU3Ek__BackingField_44;
	// System.Single DigitalRubyShared.TapGestureRecognizer::<ThresholdUnits>k__BackingField
	float ___U3CThresholdUnitsU3Ek__BackingField_45;
	// System.Boolean DigitalRubyShared.TapGestureRecognizer::<SendBeginState>k__BackingField
	bool ___U3CSendBeginStateU3Ek__BackingField_46;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch> DigitalRubyShared.TapGestureRecognizer::<TapTouches>k__BackingField
	ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* ___U3CTapTouchesU3Ek__BackingField_47;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// DigitalRubyShared.OneTouchRotateGestureRecognizer
struct OneTouchRotateGestureRecognizer_t9AD3DE2243DF1DFAA0D39E171A8D634C24B6E66E  : public RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C
{
	// System.Single DigitalRubyShared.OneTouchRotateGestureRecognizer::AnglePointOverrideX
	float ___AnglePointOverrideX_48;
	// System.Single DigitalRubyShared.OneTouchRotateGestureRecognizer::AnglePointOverrideY
	float ___AnglePointOverrideY_49;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// DigitalRubyShared.GestureRecognizer/CallbackMainThreadDelegate
struct CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// DigitalRubyShared.GestureTouch[]
struct GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0  : public RuntimeArray
{
	ALIGN_FIELD (8) GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 m_Items[1];

	inline GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___platformSpecificTouch_6), (void*)NULL);
	}
	inline GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___platformSpecificTouch_6), (void*)NULL);
	}
};


// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC_gshared (ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* __this, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_gshared (ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mEA79C6994CE04616CCF357571B6F2D2B9E49C0E5_gshared_inline (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB2EC6F070958447A3539FD4B51C2C8E49D2FE1B0_gshared_inline (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7506B82AFE85D74C76361D4AC5F3924AA9D3F6E_gshared (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* List_1_AsReadOnly_mD87BDCD5E58F16EFA29D983BF5AFE610F68AD599_gshared (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, const RuntimeMethod* method) ;

// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch> DigitalRubyShared.GestureRecognizer::get_CurrentTrackedTouches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.GestureRecognizer::CalculateFocus(System.Collections.Generic.ICollection`1<DigitalRubyShared.GestureTouch>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, RuntimeObject* ___touches0, const RuntimeMethod* method) ;
// DigitalRubyShared.GestureRecognizerState DigitalRubyShared.GestureRecognizer::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.GestureRecognizer::SetState(DigitalRubyShared.GestureRecognizerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.GestureRecognizer::get_TrackedTouchCountIsWithinRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureRecognizer_get_TrackedTouchCountIsWithinRange_m6211A0006567032EE2E40E1D54AD991725C03405 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_DistanceX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_DistanceX_m832F5DF8A2D767C62D9A465A92B15A3E125428F6_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_DistanceY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_DistanceY_m5EC4F01DD3BAA8BE091C51FB4D818F36F607DB07_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::Distance(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureRecognizer_Distance_m0556657D4C2721B585CA5C0C09357C48F8D77858 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, float ___xVector0, float ___yVector1, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.LongPressGestureRecognizer::get_ThresholdUnits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LongPressGestureRecognizer_get_ThresholdUnits_mC8D0F40194CD948DE12605F11D2DEFEBE3375772_inline (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.LongPressGestureRecognizer::get_MinimumDurationSeconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LongPressGestureRecognizer_get_MinimumDurationSeconds_m171DB44C3862E41B1250612CE5E8865943856234_inline (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.GestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer__ctor_mEBACEE1EC3B2AF958D0A75F9A2E2AC3CD730CB5E (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.LongPressGestureRecognizer::set_MinimumDurationSeconds(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LongPressGestureRecognizer_set_MinimumDurationSeconds_m844E573DDE24181F056C96A5B7FBC6EF6FA7C240_inline (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.LongPressGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LongPressGestureRecognizer_set_ThresholdUnits_m1C05C1396EF1FC41811BF2B4B9E5F14DB2768D52_inline (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.GestureRecognizer::set_ClearTrackedTouchesOnEndOrFail(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureRecognizer_set_ClearTrackedTouchesOnEndOrFail_m72516ADEF9E70B0978D4451C5C288D55BA3EF3CE_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC (ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC_gshared)(__this, method);
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch>::get_Item(System.Int32)
inline GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB (ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 (*) (ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_gshared)(__this, ___index0, method);
}
// System.Single DigitalRubyShared.GestureTouch::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureTouch_get_Y_m4133F450D00B957F0CED01C7A247CF4C4655B10A (GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureTouch::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureTouch_get_X_mF48772CAAFDDB21A159497E0999AA6D97ADC8A6D (GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.RotateGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer__ctor_m5EAF25ABDF59D97A9A154A9226A5AD7CE446FDBC (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.GestureRecognizer::set_MaximumNumberOfTouchesToTrack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_set_MaximumNumberOfTouchesToTrack_mF8C2C6B7FBE332406FF1C9BC467785EDD4B947F6 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.RotateGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_ThresholdUnits_mE024B7E7C42AA3F00847145F3314795CBFC2EA08_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.RotateGestureRecognizer::set_AngleThreshold(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_AngleThreshold_mA3B6C9E68B2E40A2342CE00FF0EB200255DAF4C0_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ScaleMultiplierY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ScaleMultiplierY_m8528AC2141E5B5AB975EAF29FB04991052A42550_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ScaleMultiplierX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ScaleMultiplierX_m39E4F9BDB2E663560840EC16EBC9145547DC3DD8_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ScaleMultiplier(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ScaleMultiplier_m377C71DDFB24B4824D77E918ED3625B580EC4F98_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ThresholdUnits_mC55F67EC7191C802C0F4A2EB4EFB435D27E79E52_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ZoomSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ZoomSpeed_m50C3C7B0E398FC5533DA78757D20364CFD17919F_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::get_ThresholdUnits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OneTouchScaleGestureRecognizer_get_ThresholdUnits_mD40296854A8E432E6B0CADD5FE3E4E6B8976ECA7_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_DeltaX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_DeltaX_m70D6F475569F5549BF796C2EB4B6A7B2DB8184EB_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_DeltaY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_DeltaY_mE0C9E77267CD90251D953AFBF0B193BE8320A506_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Sign_mE85A053D9EFD3D62A630EB983D849F2FC331DE4A (float ___value0, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::get_ZoomSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OneTouchScaleGestureRecognizer_get_ZoomSpeed_m7E62700F7380134413B95A79E4715A971CFE69A4_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::Distance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureRecognizer_Distance_m3BBB947C922AFD97CD44E683C9722E393F9F0220 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, float ___length0, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.GestureRecognizer::CalculateFocus(System.Collections.Generic.ICollection`1<DigitalRubyShared.GestureTouch>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureRecognizer_CalculateFocus_mB8F719D9FFD0DDC995461D409B8F63D8D19AEEF2 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, RuntimeObject* ___touches0, bool ___resetFocus1, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.PanGestureRecognizer::get_ThresholdUnits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanGestureRecognizer_get_ThresholdUnits_m54A4A3F83B5549DB7A6E50A6D606E2DB07E9617A_inline (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.PanGestureRecognizer::ProcessTouches(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanGestureRecognizer_ProcessTouches_m48DC9EFD474B7397E0D30D5CBAF2E14F3845B70E (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, bool ___resetFocus0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.PanGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PanGestureRecognizer_set_ThresholdUnits_m36EA1D9F0B7330518B62986AAE476EC262325B29_inline (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.RotateGestureRecognizer::DifferenceBetweenAngles(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotateGestureRecognizer_DifferenceBetweenAngles_m2E04F5158D44FC105584B826203F2ECDC0FB2658 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___angle10, float ___angle21, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.RotateGestureRecognizer::set_RotationRadians(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_RotationRadians_m3A89384BCF97BDCE76B4DDF0E15BC5DD47ED674A_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.RotateGestureRecognizer::set_RotationRadiansDelta(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_RotationRadiansDelta_m36EFFFA28815AB7097DFEB9800DB04791DB52A46_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_ThresholdUnits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_ThresholdUnits_m67ED5ED420D83CAC8BE2CE0D559295B7B0294DF3_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_AngleThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_AngleThreshold_m37CDF69A7BBF0E5585E3D3AA1435250B40B7FB0E_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.GestureRecognizer::StateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_StateChanged_mE285E539EC26D862C3FABF6352B36781E3A37063 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Int32 DigitalRubyShared.GestureRecognizer::get_MaximumNumberOfTouchesToTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureRecognizer_get_MaximumNumberOfTouchesToTrack_mA56A864D513371B737DCD1E30B38BE4C3C9E33E8 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.RotateGestureRecognizer::CheckForStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_CheckForStart_m10F93F0A7493C019CB326C9D87513D9D9C5BBADF (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.RotateGestureRecognizer::UpdateAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_UpdateAngle_m99097D57C2F9F734A708E16797A24776A2D9A514 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_RotationRadians()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_RotationRadians_m086977451498A2B2CB3A56C9DAA0E5DE61D06A63_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_RotationRadiansDelta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_RotationRadiansDelta_mDE6215E78B3317A6F796ADC2E37AA1F87C736FDE_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ScaleMultiplierY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ScaleMultiplierY_m95F7894191EE16E2E18145BF9703994449150D30_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ScaleMultiplierX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ScaleMultiplierX_m0C406AF058358952FF022170B305E4597F39E4C2_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ScaleMultiplier(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ScaleMultiplier_m7AAC4140A6F24253403C5BBE5604120DB9CA46C3_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ZoomSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ZoomSpeed_m578209AD6DA4C73F63A4698136A28F258EB3E658_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ThresholdUnits_m72DDDE6F174AC1689A65F35F3524B0EE66359E63_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.GestureRecognizer::set_MinimumNumberOfTouchesToTrack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_set_MinimumNumberOfTouchesToTrack_m822946D0A6E99F4F0B94511A35BD4F4A6F9AF763 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.ScaleGestureRecognizer::ClampScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_ClampScale_m2F795215B9602B25B92D916290DEF548CB29C9B0 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___rawScale0, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.ScaleGestureRecognizer::get_ZoomSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_get_ZoomSpeed_mA1B1AC37F1563F18FB3F00D6AE3C96EFF4F04E6F_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::DistanceBetweenPoints(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureRecognizer_DistanceBetweenPoints_m7DDEF744BA1E6C694D09C24BDFC78CEA623583A6 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, float ___x10, float ___y11, float ___x22, float ___y23, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.ScaleGestureRecognizer::get_ThresholdUnits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_get_ThresholdUnits_m680F0AC86F8881D8E9F6CD38A51826E281453956_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.ScaleGestureRecognizer::GetScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_GetScale_m851D9286B959B8590B6E651F48AAA233648B2FBE (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___rawScale0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.ScaleGestureRecognizer::SetPreviousDistance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_SetPreviousDistance_mFDE216F40311BE6F1175286913493C4FAD1588A6 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___distance0, float ___distanceX1, float ___distanceY2, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.ScaleGestureRecognizer::ProcessTouches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_ProcessTouches_mAC93866DC38FC33B7E5E17A8B884788C19694812 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) ;
// DigitalRubyShared.SwipeGestureRecognizerDirection DigitalRubyShared.SwipeGestureRecognizer::get_EndDirection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SwipeGestureRecognizer_get_EndDirection_m1104E4EAC1EBE43CD1C19EE6F4CEFAA8D2B34B45_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_VelocityX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureRecognizer_get_VelocityX_mAA8BE4929B69E4919FC4382E15BD2E9BBA7A37C7 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_VelocityY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureRecognizer_get_VelocityY_m9BF625EEC1C5372FC91C28916C833ABF06A5B238 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.SwipeGestureRecognizer::get_DirectionThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SwipeGestureRecognizer_get_DirectionThreshold_mF071696E8429DFB2CF7A360E5C484830861120BA_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_EndDirection(DigitalRubyShared.SwipeGestureRecognizerDirection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_EndDirection_mA4457DBEDDBD5CE0FE9FD7B3C15D0E3A640FB565_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.SwipeGestureRecognizer::get_FailOnDirectionChange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SwipeGestureRecognizer_get_FailOnDirectionChange_mC1198C9627491836A1AEAB01E81833092B79E61A_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GestureRecognizer_get_Speed_m2251B7A5A45D3CE97A86017089EE43B804321A19 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.SwipeGestureRecognizer::get_MinimumSpeedUnits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SwipeGestureRecognizer_get_MinimumSpeedUnits_mE61D830405A1A4C68766C1F5F96D55E0392A34F8_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.DeviceInfo::UnitsToPixels(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DeviceInfo_UnitsToPixels_m6B791026FDCA7017692E054C318C2BFB5D96D37C (float ___units0, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_StartFocusX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_StartFocusX_m19E3A7698965AECF6A051C1616C94D63D5B307A5_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_StartFocusY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_StartFocusY_m58457DFD7A1D26DBF223D5DB7F159DE29FB8AACD_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_FocusX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_FocusX_m3F912DE62E39B70C8E65A0B3550643F72C91DE2E_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.GestureRecognizer::get_FocusY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_FocusY_m8C561F04D9CDA67B9341AF0F4DF2AEABC95641E1_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.SwipeGestureRecognizer::get_MinimumDistanceUnits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SwipeGestureRecognizer_get_MinimumDistanceUnits_mC62DC0A0BA2CFB526AF0DBCF2FC066343D78AEA8_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.SwipeGestureRecognizer::CalculateEndDirection(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SwipeGestureRecognizer_CalculateEndDirection_mFDA3BE698AFC5D220AB018B4C516C4751F8CF7FA (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// DigitalRubyShared.SwipeGestureRecognizerDirection DigitalRubyShared.SwipeGestureRecognizer::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SwipeGestureRecognizer_get_Direction_m1EAFA48B031E7EF61FE0A3B69A48B55BBA155068_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.GestureRecognizer::get_ClearTrackedTouchesOnEndOrFail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GestureRecognizer_get_ClearTrackedTouchesOnEndOrFail_mC36464B2FAB433BC34A2D5ED524FE56495469C45_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// DigitalRubyShared.SwipeGestureRecognizerEndMode DigitalRubyShared.SwipeGestureRecognizer::get_EndMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SwipeGestureRecognizer_get_EndMode_m31D5ECF1FE5A2B43A1ECAB19F09275008D821276_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.SwipeGestureRecognizer::get_SendBeginExecutingStates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SwipeGestureRecognizer_get_SendBeginExecutingStates_m42E10AED5340CA5CB1BCE1F1CBE63F61674BA1DE_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.SwipeGestureRecognizer::CheckForSwipeCompletion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_CheckForSwipeCompletion_m971182EBC008601B38287F3B2B74CB766D3C759A (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, bool ___end0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_Direction(DigitalRubyShared.SwipeGestureRecognizerDirection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_Direction_m7295FD2EC50071DA9A232D2455287E3A88DEF085_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_MinimumDistanceUnits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_MinimumDistanceUnits_mB14F1163880211ACEC425D96F556F3ADC37678A0_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_MinimumSpeedUnits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_MinimumSpeedUnits_m92DB973707A7561F2CCB5792A8E5BA0F6C595308_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_DirectionThreshold(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_DirectionThreshold_m9AEA9C4B56348BC557EE53B671331F8AADCE9D13_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_EndMode(DigitalRubyShared.SwipeGestureRecognizerEndMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_EndMode_mC56E00DF49F1BB5CE1314ACCD789A264BA7D5591_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_SendBeginExecutingStates(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_SendBeginExecutingStates_mAFC2A8B86F4367EB1C416D4BDDEEE0007137185D_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.GestureRecognizer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_Reset_m486079769F5D0ED3C5AA17A17126DA6150512FA2 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRubyShared.TapGestureRecognizer::get_ThresholdSeconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapGestureRecognizer_get_ThresholdSeconds_m35AF79935A9BDA92CD5AAC6D10BA4F693A77F3F4_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.GestureRecognizer::RunActionAfterDelay(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_RunActionAfterDelay_mBF5845212FFD8D86F89D2815F8BC7524B10D762C (float ___seconds0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>::Clear()
inline void List_1_Clear_mEA79C6994CE04616CCF357571B6F2D2B9E49C0E5_inline (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048*, const RuntimeMethod*))List_1_Clear_mEA79C6994CE04616CCF357571B6F2D2B9E49C0E5_gshared_inline)(__this, method);
}
// System.Int32 DigitalRubyShared.GestureTouch::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureTouch_get_Id_m46BF75C9F00E3753BA0829F13756D12D75336728 (GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1* __this, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.GestureRecognizer::IgnoreTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureRecognizer_IgnoreTouch_mE7E00FC8565FA2C8C8FAC72E1259B0736A8E2923 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.TapGestureRecognizer::get_SendBeginState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapGestureRecognizer_get_SendBeginState_m6CB54E9FAD0773BDC10750C001312EB054DF71AF_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.GestureRecognizer::TrackCurrentTrackedTouchesStartLocations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_TrackCurrentTrackedTouchesStartLocations_mB7F7AB5EC7FB56AD78861A90701E01D5A8F264DB (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>::Add(T)
inline void List_1_Add_mB2EC6F070958447A3539FD4B51C2C8E49D2FE1B0_inline (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048*, GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1, const RuntimeMethod*))List_1_Add_mB2EC6F070958447A3539FD4B51C2C8E49D2FE1B0_gshared_inline)(__this, ___item0, method);
}
// System.Single DigitalRubyShared.TapGestureRecognizer::get_ThresholdUnits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapGestureRecognizer_get_ThresholdUnits_m48B1F423D4112DD672618F48E559F83CCE698797_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) ;
// System.Boolean DigitalRubyShared.GestureRecognizer::AreTrackedTouchesWithinDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureRecognizer_AreTrackedTouchesWithinDistance_m58CA730CDA5799B0B993FB09AFB2456ED46E3472 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, float ___thresholdUnits0, const RuntimeMethod* method) ;
// System.Int32 DigitalRubyShared.TapGestureRecognizer::get_NumberOfTapsRequired()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TapGestureRecognizer_get_NumberOfTapsRequired_mEB73A3EE08C4273F35692F196BC446CC8DA86D95_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.TapGestureRecognizer::FailGestureAfterDelayIfNoTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_FailGestureAfterDelayIfNoTap_m941C8E498E0C3426BB9615A400D6AED4909CB0DF (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>::.ctor()
inline void List_1__ctor_mA7506B82AFE85D74C76361D4AC5F3924AA9D3F6E (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048*, const RuntimeMethod*))List_1__ctor_mA7506B82AFE85D74C76361D4AC5F3924AA9D3F6E_gshared)(__this, method);
}
// System.Void DigitalRubyShared.TapGestureRecognizer::set_NumberOfTapsRequired(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_NumberOfTapsRequired_m41FED628A08127457E118CE54EFE86F8BA76DFCB_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.TapGestureRecognizer::set_ThresholdSeconds(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_ThresholdSeconds_m232FD5EFF5C4415D858EE1CD7B01A21A34A258D9_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRubyShared.TapGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_ThresholdUnits_m0BEC313660F5D2F221878B98BB4342547638D4F4_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<DigitalRubyShared.GestureTouch>::AsReadOnly()
inline ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* List_1_AsReadOnly_mD87BDCD5E58F16EFA29D983BF5AFE610F68AD599 (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* (*) (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048*, const RuntimeMethod*))List_1_AsReadOnly_mD87BDCD5E58F16EFA29D983BF5AFE610F68AD599_gshared)(__this, method);
}
// System.Void DigitalRubyShared.TapGestureRecognizer::set_TapTouches(System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_TapTouches_m2EEFD6F35F4ADFA0AFCB90E087B176DC83C9B818_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* ___value0, const RuntimeMethod* method) ;
// System.String DigitalRubyShared.GestureRecognizer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GestureRecognizer_ToString_m4033B1B9330341075788A38ECBD029374A7C9FE2 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.Int32 DigitalRubyShared.GestureRecognizer::get_MinimumNumberOfTouchesToTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureRecognizer_get_MinimumNumberOfTouchesToTrack_mECF4C626E667CED7D0C11923EEAF36309D784E1F (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85_Multicast(CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, float ___delay0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* currentDelegate = reinterpret_cast<CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___delay0, ___callback1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85_OpenInst(CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, float ___delay0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___delay0, ___callback1, method);
}
void CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85_OpenStatic(CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, float ___delay0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___delay0, ___callback1, method);
}
void CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85_OpenStaticInvoker(CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, float ___delay0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(__this->___method_ptr_0, method, NULL, ___delay0, ___callback1);
}
void CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85_ClosedStaticInvoker(CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, float ___delay0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___delay0, ___callback1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE (CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, float ___delay0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float, Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	il2cppPInvokeFunc(___delay0, ____callback1_marshaled);

}
// System.Void DigitalRubyShared.GestureRecognizer/CallbackMainThreadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackMainThreadDelegate__ctor_m50AC6C6284F0188FF021CF213BD8D94CD87AE547 (CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85_Multicast;
}
// System.Void DigitalRubyShared.GestureRecognizer/CallbackMainThreadDelegate::Invoke(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackMainThreadDelegate_Invoke_m37140D634B19F0E7DA1201138D28AAE2CA5C6F85 (CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, float ___delay0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___delay0, ___callback1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DigitalRubyShared.GestureRecognizer/CallbackMainThreadDelegate::BeginInvoke(System.Single,System.Action,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackMainThreadDelegate_BeginInvoke_mED1FABA9B48D10E070EA69353175520AE331C5B2 (CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, float ___delay0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* _____callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___delay0);
	__d_args[1] = ___callback1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)_____callback2, (RuntimeObject*)___object3);
}
// System.Void DigitalRubyShared.GestureRecognizer/CallbackMainThreadDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackMainThreadDelegate_EndInvoke_mDBBE35A006C2EFBE185EDFFFE99C4A6DB7C800A7 (CallbackMainThreadDelegate_t04756383CB2E1826B656A58C036F939893A8DCDE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRubyShared.GestureLogger::Log(DigitalRubyShared.GestureRecognizer,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureLogger_Log_m3B661BB8F16685AF4E2112A8A590AD0D49CBE2A1 (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* ___gesture0, String_t* ___text1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UnityEngine.Debug.LogFormat(DateTime.UtcNow + " (" + gesture.ToString() + "): " + text, args);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&V_0), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* L_6 = ___gesture0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___text1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(L_11, L_12, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRubyShared.LongPressGestureRecognizer::TouchesBegan(System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongPressGestureRecognizer_TouchesBegan_m4DC58624891ED96D5664026D926560A68B929B29 (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, RuntimeObject* ___touches0, const RuntimeMethod* method) 
{
	{
		// stopWatch.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___stopWatch_40;
		NullCheck(L_0);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_0, NULL);
		// stopWatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = __this->___stopWatch_40;
		NullCheck(L_1);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_1, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.LongPressGestureRecognizer::TouchesMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongPressGestureRecognizer_TouchesMoved_mC327C124CF7B622E8BDC877D005C8B75F2F9CF7D (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// if (State == GestureRecognizerState.Began || State == GestureRecognizerState.Executing)
		int32_t L_2;
		L_2 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3;
		L_3 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)4))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// SetState(GestureRecognizerState.Executing);
		bool L_5;
		L_5 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 4, NULL);
		goto IL_00b9;
	}

IL_0036:
	{
		// else if (State == GestureRecognizerState.Possible && TrackedTouchCountIsWithinRange)
		int32_t L_6;
		L_6 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		bool L_7;
		L_7 = GestureRecognizer_get_TrackedTouchCountIsWithinRange_m6211A0006567032EE2E40E1D54AD991725C03405(__this, NULL);
		G_B8_0 = ((int32_t)(L_7));
		goto IL_0048;
	}

IL_0047:
	{
		G_B8_0 = 0;
	}

IL_0048:
	{
		V_1 = (bool)G_B8_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00b9;
		}
	}
	{
		// float distance = Distance(DistanceX, DistanceY);
		float L_9;
		L_9 = GestureRecognizer_get_DistanceX_m832F5DF8A2D767C62D9A465A92B15A3E125428F6_inline(__this, NULL);
		float L_10;
		L_10 = GestureRecognizer_get_DistanceY_m5EC4F01DD3BAA8BE091C51FB4D818F36F607DB07_inline(__this, NULL);
		float L_11;
		L_11 = GestureRecognizer_Distance_m0556657D4C2721B585CA5C0C09357C48F8D77858(__this, L_9, L_10, NULL);
		V_2 = L_11;
		// if (distance > ThresholdUnits)
		float L_12 = V_2;
		float L_13;
		L_13 = LongPressGestureRecognizer_get_ThresholdUnits_mC8D0F40194CD948DE12605F11D2DEFEBE3375772_inline(__this, NULL);
		V_3 = (bool)((((float)L_12) > ((float)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_15;
		L_15 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
		goto IL_00b8;
	}

IL_007a:
	{
		// if (stopWatch.Elapsed.TotalSeconds >= MinimumDurationSeconds)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_16 = __this->___stopWatch_40;
		NullCheck(L_16);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_17;
		L_17 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_16, NULL);
		V_5 = L_17;
		double L_18;
		L_18 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_5), NULL);
		float L_19;
		L_19 = LongPressGestureRecognizer_get_MinimumDurationSeconds_m171DB44C3862E41B1250612CE5E8865943856234_inline(__this, NULL);
		V_4 = (bool)((((int32_t)((!(((double)L_18) >= ((double)((double)L_19))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00ad;
		}
	}
	{
		// SetState(GestureRecognizerState.Began);
		bool L_21;
		L_21 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 2, NULL);
		goto IL_00b7;
	}

IL_00ad:
	{
		// SetState(GestureRecognizerState.Possible);
		bool L_22;
		L_22 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 1, NULL);
	}

IL_00b7:
	{
	}

IL_00b8:
	{
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.LongPressGestureRecognizer::TouchesEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongPressGestureRecognizer_TouchesEnded_m5A3445FF1E6EB4DA24A7B4650C6E11AA3FE694AA (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (State == GestureRecognizerState.Began || State == GestureRecognizerState.Executing)
		int32_t L_0;
		L_0 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1;
		L_1 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_3;
		L_3 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_4;
		L_4 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_3, NULL);
		// SetState(GestureRecognizerState.Ended);
		bool L_5;
		L_5 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 8, NULL);
		goto IL_003e;
	}

IL_0033:
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_6;
		L_6 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.LongPressGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongPressGestureRecognizer__ctor_m264400F1D03D782443585711105E1F02350EC308 (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly System.Diagnostics.Stopwatch stopWatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_0, NULL);
		__this->___stopWatch_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stopWatch_40), (void*)L_0);
		// public LongPressGestureRecognizer()
		il2cpp_codegen_runtime_class_init_inline(GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_mEBACEE1EC3B2AF958D0A75F9A2E2AC3CD730CB5E(__this, NULL);
		// MinimumDurationSeconds = 0.6f;
		LongPressGestureRecognizer_set_MinimumDurationSeconds_m844E573DDE24181F056C96A5B7FBC6EF6FA7C240_inline(__this, (0.600000024f), NULL);
		// ThresholdUnits = 0.35f;
		LongPressGestureRecognizer_set_ThresholdUnits_m1C05C1396EF1FC41811BF2B4B9E5F14DB2768D52_inline(__this, (0.349999994f), NULL);
		// ClearTrackedTouchesOnEndOrFail = true;
		GestureRecognizer_set_ClearTrackedTouchesOnEndOrFail_m72516ADEF9E70B0978D4451C5C288D55BA3EF3CE_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Single DigitalRubyShared.LongPressGestureRecognizer::get_MinimumDurationSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LongPressGestureRecognizer_get_MinimumDurationSeconds_m171DB44C3862E41B1250612CE5E8865943856234 (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, const RuntimeMethod* method) 
{
	{
		// public float MinimumDurationSeconds { get; set; }
		float L_0 = __this->___U3CMinimumDurationSecondsU3Ek__BackingField_41;
		return L_0;
	}
}
// System.Void DigitalRubyShared.LongPressGestureRecognizer::set_MinimumDurationSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongPressGestureRecognizer_set_MinimumDurationSeconds_m844E573DDE24181F056C96A5B7FBC6EF6FA7C240 (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinimumDurationSeconds { get; set; }
		float L_0 = ___value0;
		__this->___U3CMinimumDurationSecondsU3Ek__BackingField_41 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.LongPressGestureRecognizer::get_ThresholdUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LongPressGestureRecognizer_get_ThresholdUnits_mC8D0F40194CD948DE12605F11D2DEFEBE3375772 (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_42;
		return L_0;
	}
}
// System.Void DigitalRubyShared.LongPressGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongPressGestureRecognizer_set_ThresholdUnits_m1C05C1396EF1FC41811BF2B4B9E5F14DB2768D52 (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_42 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DigitalRubyShared.OneTouchRotateGestureRecognizer::CurrentAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OneTouchRotateGestureRecognizer_CurrentAngle_m60C4AFF1635A86C1E66AE414A0FB041E0C4BB858 (OneTouchRotateGestureRecognizer_t9AD3DE2243DF1DFAA0D39E171A8D634C24B6E66E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t G_B4_0 = 0;
	{
		// if (AnglePointOverrideX != float.MinValue && AnglePointOverrideY != float.MinValue && CurrentTrackedTouches.Count != 0)
		float L_0 = __this->___AnglePointOverrideX_48;
		if ((((float)L_0) == ((float)(-(std::numeric_limits<float>::max)()))))
		{
			goto IL_002b;
		}
	}
	{
		float L_1 = __this->___AnglePointOverrideY_49;
		if ((((float)L_1) == ((float)(-(std::numeric_limits<float>::max)()))))
		{
			goto IL_002b;
		}
	}
	{
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_2;
		L_2 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC(L_2, ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC_RuntimeMethod_var);
		G_B4_0 = ((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		// GestureTouch t = CurrentTrackedTouches[0];
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_5;
		L_5 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_5);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_6;
		L_6 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_5, 0, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_1 = L_6;
		// return (float)Math.Atan2(t.Y - AnglePointOverrideY, t.X - AnglePointOverrideX);
		float L_7;
		L_7 = GestureTouch_get_Y_m4133F450D00B957F0CED01C7A247CF4C4655B10A((&V_1), NULL);
		float L_8 = __this->___AnglePointOverrideY_49;
		float L_9;
		L_9 = GestureTouch_get_X_mF48772CAAFDDB21A159497E0999AA6D97ADC8A6D((&V_1), NULL);
		float L_10 = __this->___AnglePointOverrideX_48;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = atan2(((double)((float)il2cpp_codegen_subtract(L_7, L_8))), ((double)((float)il2cpp_codegen_subtract(L_9, L_10))));
		V_2 = ((float)L_11);
		goto IL_007c;
	}

IL_0065:
	{
		// return (float)Math.Atan2(DistanceY, DistanceX);
		float L_12;
		L_12 = GestureRecognizer_get_DistanceY_m5EC4F01DD3BAA8BE091C51FB4D818F36F607DB07_inline(__this, NULL);
		float L_13;
		L_13 = GestureRecognizer_get_DistanceX_m832F5DF8A2D767C62D9A465A92B15A3E125428F6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = atan2(((double)L_12), ((double)L_13));
		V_2 = ((float)L_14);
		goto IL_007c;
	}

IL_007c:
	{
		// }
		float L_15 = V_2;
		return L_15;
	}
}
// System.Void DigitalRubyShared.OneTouchRotateGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchRotateGestureRecognizer__ctor_mB19F59236E0CD318BEE1716CFFCC67CBAE85B0A9 (OneTouchRotateGestureRecognizer_t9AD3DE2243DF1DFAA0D39E171A8D634C24B6E66E* __this, const RuntimeMethod* method) 
{
	{
		// public float AnglePointOverrideX = float.MinValue;
		__this->___AnglePointOverrideX_48 = (-(std::numeric_limits<float>::max)());
		// public float AnglePointOverrideY = float.MinValue;
		__this->___AnglePointOverrideY_49 = (-(std::numeric_limits<float>::max)());
		// public OneTouchRotateGestureRecognizer()
		RotateGestureRecognizer__ctor_m5EAF25ABDF59D97A9A154A9226A5AD7CE446FDBC(__this, NULL);
		// MaximumNumberOfTouchesToTrack = 1;
		GestureRecognizer_set_MaximumNumberOfTouchesToTrack_mF8C2C6B7FBE332406FF1C9BC467785EDD4B947F6(__this, 1, NULL);
		// ThresholdUnits = 0.15f;
		RotateGestureRecognizer_set_ThresholdUnits_mE024B7E7C42AA3F00847145F3314795CBFC2EA08_inline(__this, (0.150000006f), NULL);
		// AngleThreshold = 0.0f;
		RotateGestureRecognizer_set_AngleThreshold_mA3B6C9E68B2E40A2342CE00FF0EB200255DAF4C0_inline(__this, (0.0f), NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer__ctor_mE6E89DC20F0CA04657AF419A8EBDD6F044B571C7 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// public OneTouchScaleGestureRecognizer()
		il2cpp_codegen_runtime_class_init_inline(GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_mEBACEE1EC3B2AF958D0A75F9A2E2AC3CD730CB5E(__this, NULL);
		// ScaleMultiplier = ScaleMultiplierX = ScaleMultiplierY = 1.0f;
		float L_0 = (1.0f);
		V_1 = L_0;
		OneTouchScaleGestureRecognizer_set_ScaleMultiplierY_m8528AC2141E5B5AB975EAF29FB04991052A42550_inline(__this, L_0, NULL);
		float L_1 = V_1;
		float L_2 = L_1;
		V_0 = L_2;
		OneTouchScaleGestureRecognizer_set_ScaleMultiplierX_m39E4F9BDB2E663560840EC16EBC9145547DC3DD8_inline(__this, L_2, NULL);
		float L_3 = V_0;
		OneTouchScaleGestureRecognizer_set_ScaleMultiplier_m377C71DDFB24B4824D77E918ED3625B580EC4F98_inline(__this, L_3, NULL);
		// ThresholdUnits = 0.15f;
		OneTouchScaleGestureRecognizer_set_ThresholdUnits_mC55F67EC7191C802C0F4A2EB4EFB435D27E79E52_inline(__this, (0.150000006f), NULL);
		// ZoomSpeed = -0.2f;
		OneTouchScaleGestureRecognizer_set_ZoomSpeed_m50C3C7B0E398FC5533DA78757D20364CFD17919F_inline(__this, (-0.200000003f), NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::TouchesBegan(System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_TouchesBegan_mC2D35D5B7F173DFF26A4B84D4AA128076FAC2509 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, RuntimeObject* ___touches0, const RuntimeMethod* method) 
{
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// SetState(GestureRecognizerState.Possible);
		bool L_2;
		L_2 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::TouchesMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_TouchesMoved_m3A8AB09D7BC392BC561EFA024744C4836EDD3BA0 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	int32_t G_B9_0 = 0;
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// if (!TrackedTouchCountIsWithinRange)
		bool L_2;
		L_2 = GestureRecognizer_get_TrackedTouchCountIsWithinRange_m6211A0006567032EE2E40E1D54AD991725C03405(__this, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		goto IL_0144;
	}

IL_0021:
	{
		// else if (State == GestureRecognizerState.Possible)
		int32_t L_4;
		L_4 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		// if (Distance(DistanceX, DistanceY) < ThresholdUnits)
		float L_6;
		L_6 = GestureRecognizer_get_DistanceX_m832F5DF8A2D767C62D9A465A92B15A3E125428F6_inline(__this, NULL);
		float L_7;
		L_7 = GestureRecognizer_get_DistanceY_m5EC4F01DD3BAA8BE091C51FB4D818F36F607DB07_inline(__this, NULL);
		float L_8;
		L_8 = GestureRecognizer_Distance_m0556657D4C2721B585CA5C0C09357C48F8D77858(__this, L_6, L_7, NULL);
		float L_9;
		L_9 = OneTouchScaleGestureRecognizer_get_ThresholdUnits_mD40296854A8E432E6B0CADD5FE3E4E6B8976ECA7_inline(__this, NULL);
		V_2 = (bool)((((float)L_8) < ((float)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// return;
		goto IL_0144;
	}

IL_0053:
	{
		// ScaleMultiplier = ScaleMultiplierX = ScaleMultiplierY = 1.0f;
		float L_11 = (1.0f);
		V_4 = L_11;
		OneTouchScaleGestureRecognizer_set_ScaleMultiplierY_m8528AC2141E5B5AB975EAF29FB04991052A42550_inline(__this, L_11, NULL);
		float L_12 = V_4;
		float L_13 = L_12;
		V_3 = L_13;
		OneTouchScaleGestureRecognizer_set_ScaleMultiplierX_m39E4F9BDB2E663560840EC16EBC9145547DC3DD8_inline(__this, L_13, NULL);
		float L_14 = V_3;
		OneTouchScaleGestureRecognizer_set_ScaleMultiplier_m377C71DDFB24B4824D77E918ED3625B580EC4F98_inline(__this, L_14, NULL);
		// SetState(GestureRecognizerState.Began);
		bool L_15;
		L_15 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 2, NULL);
		goto IL_0144;
	}

IL_0083:
	{
		// else if (DeltaX != 0.0f || DeltaY != 0.0f)
		float L_16;
		L_16 = GestureRecognizer_get_DeltaX_m70D6F475569F5549BF796C2EB4B6A7B2DB8184EB_inline(__this, NULL);
		if ((!(((float)L_16) == ((float)(0.0f)))))
		{
			goto IL_00a2;
		}
	}
	{
		float L_17;
		L_17 = GestureRecognizer_get_DeltaY_mE0C9E77267CD90251D953AFBF0B193BE8320A506_inline(__this, NULL);
		G_B9_0 = ((((int32_t)((((float)L_17) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00a3;
	}

IL_00a2:
	{
		G_B9_0 = 1;
	}

IL_00a3:
	{
		V_5 = (bool)G_B9_0;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0144;
		}
	}
	{
		// ScaleMultiplier = 1.0f + (Distance(DeltaX, DeltaY) * Math.Sign(DeltaY) * ZoomSpeed);
		float L_19;
		L_19 = GestureRecognizer_get_DeltaX_m70D6F475569F5549BF796C2EB4B6A7B2DB8184EB_inline(__this, NULL);
		float L_20;
		L_20 = GestureRecognizer_get_DeltaY_mE0C9E77267CD90251D953AFBF0B193BE8320A506_inline(__this, NULL);
		float L_21;
		L_21 = GestureRecognizer_Distance_m0556657D4C2721B585CA5C0C09357C48F8D77858(__this, L_19, L_20, NULL);
		float L_22;
		L_22 = GestureRecognizer_get_DeltaY_mE0C9E77267CD90251D953AFBF0B193BE8320A506_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = Math_Sign_mE85A053D9EFD3D62A630EB983D849F2FC331DE4A(L_22, NULL);
		float L_24;
		L_24 = OneTouchScaleGestureRecognizer_get_ZoomSpeed_m7E62700F7380134413B95A79E4715A971CFE69A4_inline(__this, NULL);
		OneTouchScaleGestureRecognizer_set_ScaleMultiplier_m377C71DDFB24B4824D77E918ED3625B580EC4F98_inline(__this, ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_21, ((float)L_23))), L_24)))), NULL);
		// ScaleMultiplierX = 1.0f + (Distance(DeltaX) * -Math.Sign(DeltaX) * ZoomSpeed);
		float L_25;
		L_25 = GestureRecognizer_get_DeltaX_m70D6F475569F5549BF796C2EB4B6A7B2DB8184EB_inline(__this, NULL);
		float L_26;
		L_26 = GestureRecognizer_Distance_m3BBB947C922AFD97CD44E683C9722E393F9F0220(__this, L_25, NULL);
		float L_27;
		L_27 = GestureRecognizer_get_DeltaX_m70D6F475569F5549BF796C2EB4B6A7B2DB8184EB_inline(__this, NULL);
		int32_t L_28;
		L_28 = Math_Sign_mE85A053D9EFD3D62A630EB983D849F2FC331DE4A(L_27, NULL);
		float L_29;
		L_29 = OneTouchScaleGestureRecognizer_get_ZoomSpeed_m7E62700F7380134413B95A79E4715A971CFE69A4_inline(__this, NULL);
		OneTouchScaleGestureRecognizer_set_ScaleMultiplierX_m39E4F9BDB2E663560840EC16EBC9145547DC3DD8_inline(__this, ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_26, ((float)((-L_28))))), L_29)))), NULL);
		// ScaleMultiplierY = 1.0f + (Distance(DeltaY) * Math.Sign(DeltaY) * ZoomSpeed);
		float L_30;
		L_30 = GestureRecognizer_get_DeltaY_mE0C9E77267CD90251D953AFBF0B193BE8320A506_inline(__this, NULL);
		float L_31;
		L_31 = GestureRecognizer_Distance_m3BBB947C922AFD97CD44E683C9722E393F9F0220(__this, L_30, NULL);
		float L_32;
		L_32 = GestureRecognizer_get_DeltaY_mE0C9E77267CD90251D953AFBF0B193BE8320A506_inline(__this, NULL);
		int32_t L_33;
		L_33 = Math_Sign_mE85A053D9EFD3D62A630EB983D849F2FC331DE4A(L_32, NULL);
		float L_34;
		L_34 = OneTouchScaleGestureRecognizer_get_ZoomSpeed_m7E62700F7380134413B95A79E4715A971CFE69A4_inline(__this, NULL);
		OneTouchScaleGestureRecognizer_set_ScaleMultiplierY_m8528AC2141E5B5AB975EAF29FB04991052A42550_inline(__this, ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_31, ((float)L_33))), L_34)))), NULL);
		// SetState(GestureRecognizerState.Executing);
		bool L_35;
		L_35 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 4, NULL);
	}

IL_0144:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::TouchesEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_TouchesEnded_m8A7D24CCA2BD6C372584B921709652376ABA9C3A (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (State == GestureRecognizerState.Possible)
		int32_t L_0;
		L_0 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_2;
		L_2 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
		goto IL_0032;
	}

IL_001b:
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_3;
		L_3 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_4;
		L_4 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_3, NULL);
		// SetState(GestureRecognizerState.Ended);
		bool L_5;
		L_5 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 8, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::get_ScaleMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OneTouchScaleGestureRecognizer_get_ScaleMultiplier_mD99B9B415CF2F601CE6498F81BF065F2B3301CA7 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplier { get; private set; }
		float L_0 = __this->___U3CScaleMultiplierU3Ek__BackingField_40;
		return L_0;
	}
}
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ScaleMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ScaleMultiplier_m377C71DDFB24B4824D77E918ED3625B580EC4F98 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplier { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierU3Ek__BackingField_40 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::get_ScaleMultiplierX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OneTouchScaleGestureRecognizer_get_ScaleMultiplierX_m2235D45376D2E7D954B6864A94E2A594ADD82E66 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierX { get; private set; }
		float L_0 = __this->___U3CScaleMultiplierXU3Ek__BackingField_41;
		return L_0;
	}
}
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ScaleMultiplierX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ScaleMultiplierX_m39E4F9BDB2E663560840EC16EBC9145547DC3DD8 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierX { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierXU3Ek__BackingField_41 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::get_ScaleMultiplierY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OneTouchScaleGestureRecognizer_get_ScaleMultiplierY_mD7890F6E5B3458FAE06C9C8258E2E05E1A6B2FF9 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierY { get; private set; }
		float L_0 = __this->___U3CScaleMultiplierYU3Ek__BackingField_42;
		return L_0;
	}
}
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ScaleMultiplierY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ScaleMultiplierY_m8528AC2141E5B5AB975EAF29FB04991052A42550 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierY { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierYU3Ek__BackingField_42 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::get_ZoomSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OneTouchScaleGestureRecognizer_get_ZoomSpeed_m7E62700F7380134413B95A79E4715A971CFE69A4 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	{
		// public float ZoomSpeed { get; set; }
		float L_0 = __this->___U3CZoomSpeedU3Ek__BackingField_43;
		return L_0;
	}
}
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ZoomSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ZoomSpeed_m50C3C7B0E398FC5533DA78757D20364CFD17919F (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ZoomSpeed { get; set; }
		float L_0 = ___value0;
		__this->___U3CZoomSpeedU3Ek__BackingField_43 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.OneTouchScaleGestureRecognizer::get_ThresholdUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OneTouchScaleGestureRecognizer_get_ThresholdUnits_mD40296854A8E432E6B0CADD5FE3E4E6B8976ECA7 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void DigitalRubyShared.OneTouchScaleGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ThresholdUnits_mC55F67EC7191C802C0F4A2EB4EFB435D27E79E52 (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_44 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRubyShared.PanGestureRecognizer::ProcessTouches(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanGestureRecognizer_ProcessTouches_m48DC9EFD474B7397E0D30D5CBAF2E14F3845B70E (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, bool ___resetFocus0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// bool firstFocus = CalculateFocus(CurrentTrackedTouches, resetFocus);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1 = ___resetFocus0;
		bool L_2;
		L_2 = GestureRecognizer_CalculateFocus_mB8F719D9FFD0DDC995461D409B8F63D8D19AEEF2(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// if (State == GestureRecognizerState.Began || State == GestureRecognizerState.Executing)
		int32_t L_3;
		L_3 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4;
		L_4 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)4))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// SetState(GestureRecognizerState.Executing);
		bool L_6;
		L_6 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 4, NULL);
		goto IL_009a;
	}

IL_0034:
	{
		// else if (firstFocus)
		bool L_7 = V_0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// SetState(GestureRecognizerState.Possible);
		bool L_9;
		L_9 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 1, NULL);
		goto IL_009a;
	}

IL_0045:
	{
		// else if (State == GestureRecognizerState.Possible && TrackedTouchCountIsWithinRange)
		int32_t L_10;
		L_10 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0056;
		}
	}
	{
		bool L_11;
		L_11 = GestureRecognizer_get_TrackedTouchCountIsWithinRange_m6211A0006567032EE2E40E1D54AD991725C03405(__this, NULL);
		G_B10_0 = ((int32_t)(L_11));
		goto IL_0057;
	}

IL_0056:
	{
		G_B10_0 = 0;
	}

IL_0057:
	{
		V_3 = (bool)G_B10_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_009a;
		}
	}
	{
		// float distance = Distance(DistanceX, DistanceY);
		float L_13;
		L_13 = GestureRecognizer_get_DistanceX_m832F5DF8A2D767C62D9A465A92B15A3E125428F6_inline(__this, NULL);
		float L_14;
		L_14 = GestureRecognizer_get_DistanceY_m5EC4F01DD3BAA8BE091C51FB4D818F36F607DB07_inline(__this, NULL);
		float L_15;
		L_15 = GestureRecognizer_Distance_m0556657D4C2721B585CA5C0C09357C48F8D77858(__this, L_13, L_14, NULL);
		V_4 = L_15;
		// if (distance >= ThresholdUnits)
		float L_16 = V_4;
		float L_17;
		L_17 = PanGestureRecognizer_get_ThresholdUnits_m54A4A3F83B5549DB7A6E50A6D606E2DB07E9617A_inline(__this, NULL);
		V_5 = (bool)((((int32_t)((!(((float)L_16) >= ((float)L_17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		// SetState(GestureRecognizerState.Began);
		bool L_19;
		L_19 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 2, NULL);
		goto IL_0099;
	}

IL_008f:
	{
		// SetState(GestureRecognizerState.Possible);
		bool L_20;
		L_20 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 1, NULL);
	}

IL_0099:
	{
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.PanGestureRecognizer::TouchesBegan(System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanGestureRecognizer_TouchesBegan_m00304D5A6BE2610EFBF95C2E94E0497A8F18E12C (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, RuntimeObject* ___touches0, const RuntimeMethod* method) 
{
	{
		// ProcessTouches(true);
		PanGestureRecognizer_ProcessTouches_m48DC9EFD474B7397E0D30D5CBAF2E14F3845B70E(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.PanGestureRecognizer::TouchesMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanGestureRecognizer_TouchesMoved_m761E788E176DD2810DD50055B3C13D8C95D00303 (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, const RuntimeMethod* method) 
{
	{
		// ProcessTouches(false);
		PanGestureRecognizer_ProcessTouches_m48DC9EFD474B7397E0D30D5CBAF2E14F3845B70E(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.PanGestureRecognizer::TouchesEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanGestureRecognizer_TouchesEnded_mA3D9DD7EA391726E18B87F6DF0020820BA5C82AD (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (State == GestureRecognizerState.Possible)
		int32_t L_0;
		L_0 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_2;
		L_2 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
		goto IL_002d;
	}

IL_001b:
	{
		// ProcessTouches(false);
		PanGestureRecognizer_ProcessTouches_m48DC9EFD474B7397E0D30D5CBAF2E14F3845B70E(__this, (bool)0, NULL);
		// SetState(GestureRecognizerState.Ended);
		bool L_3;
		L_3 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 8, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.PanGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanGestureRecognizer__ctor_m9063DC4743974AE0E6762B79DF27E888CB9E4F46 (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PanGestureRecognizer()
		il2cpp_codegen_runtime_class_init_inline(GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_mEBACEE1EC3B2AF958D0A75F9A2E2AC3CD730CB5E(__this, NULL);
		// ThresholdUnits = 0.2f;
		PanGestureRecognizer_set_ThresholdUnits_m36EA1D9F0B7330518B62986AAE476EC262325B29_inline(__this, (0.200000003f), NULL);
		// }
		return;
	}
}
// System.Single DigitalRubyShared.PanGestureRecognizer::get_ThresholdUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanGestureRecognizer_get_ThresholdUnits_m54A4A3F83B5549DB7A6E50A6D606E2DB07E9617A (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_40;
		return L_0;
	}
}
// System.Void DigitalRubyShared.PanGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanGestureRecognizer_set_ThresholdUnits_m36EA1D9F0B7330518B62986AAE476EC262325B29 (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_40 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DigitalRubyShared.RotateGestureRecognizer::DifferenceBetweenAngles(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotateGestureRecognizer_DifferenceBetweenAngles_m2E04F5158D44FC105584B826203F2ECDC0FB2658 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___angle10, float ___angle21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float angle = angle1 - angle2;
		float L_0 = ___angle10;
		float L_1 = ___angle21;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// return (float)Math.Atan2(Math.Sin(angle), Math.Cos(angle));
		float L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sin(((double)L_2));
		float L_4 = V_0;
		double L_5;
		L_5 = cos(((double)L_4));
		double L_6;
		L_6 = atan2(L_3, L_5);
		V_1 = ((float)L_6);
		goto IL_001c;
	}

IL_001c:
	{
		// }
		float L_7 = V_1;
		return L_7;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::UpdateAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_UpdateAngle_m99097D57C2F9F734A708E16797A24776A2D9A514 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float G_B4_0 = 0.0f;
	int32_t G_B8_0 = 0;
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// float currentAngle = CurrentAngle();
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(12 /* System.Single DigitalRubyShared.RotateGestureRecognizer::CurrentAngle() */, __this);
		V_0 = L_2;
		// float angleDifferenceFromPrevious = DifferenceBetweenAngles(currentAngle, previousAngle);
		float L_3 = V_0;
		float L_4 = __this->___previousAngle_42;
		float L_5;
		L_5 = RotateGestureRecognizer_DifferenceBetweenAngles_m2E04F5158D44FC105584B826203F2ECDC0FB2658(__this, L_3, L_4, NULL);
		V_1 = L_5;
		// if (angleDifferenceFromPrevious != 0.0f)
		float L_6 = V_1;
		V_2 = (bool)((((int32_t)((((float)L_6) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00dd;
		}
	}
	{
		// float currentAngleSign = (angleDifferenceFromPrevious >= 0.0f ? 1.0f : -1.0f);
		float L_8 = V_1;
		if ((((float)L_8) >= ((float)(0.0f))))
		{
			goto IL_0045;
		}
	}
	{
		G_B4_0 = (-1.0f);
		goto IL_004a;
	}

IL_0045:
	{
		G_B4_0 = (1.0f);
	}

IL_004a:
	{
		V_3 = G_B4_0;
		// if (previousAngleSign == 0.0f || currentAngleSign == previousAngleSign || Math.Abs(angleDifferenceFromPrevious) >= minAngleDifferenceToChangeDirection)
		float L_9 = __this->___previousAngleSign_43;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_0073;
		}
	}
	{
		float L_10 = V_3;
		float L_11 = __this->___previousAngleSign_43;
		if ((((float)L_10) == ((float)L_11)))
		{
			goto IL_0073;
		}
	}
	{
		float L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_13;
		L_13 = fabsf(L_12);
		G_B8_0 = ((((int32_t)((!(((float)L_13) >= ((float)(0.150000006f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B8_0 = 1;
	}

IL_0074:
	{
		V_4 = (bool)G_B8_0;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00dc;
		}
	}
	{
		// if (currentAngleSign != previousAngleSign)
		float L_15 = V_3;
		float L_16 = __this->___previousAngleSign_43;
		V_5 = (bool)((((int32_t)((((float)L_15) == ((float)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		// previousAngleSign = currentAngleSign;
		float L_18 = V_3;
		__this->___previousAngleSign_43 = L_18;
		// startAngle = previousAngle = currentAngle;
		float L_19 = V_0;
		float L_20 = L_19;
		V_6 = L_20;
		__this->___previousAngle_42 = L_20;
		float L_21 = V_6;
		__this->___startAngle_41 = L_21;
		goto IL_00db;
	}

IL_00aa:
	{
		// float angleDifferenceFromStart = DifferenceBetweenAngles(currentAngle, startAngle);
		float L_22 = V_0;
		float L_23 = __this->___startAngle_41;
		float L_24;
		L_24 = RotateGestureRecognizer_DifferenceBetweenAngles_m2E04F5158D44FC105584B826203F2ECDC0FB2658(__this, L_22, L_23, NULL);
		V_7 = L_24;
		// RotationRadians = angleDifferenceFromStart;
		float L_25 = V_7;
		RotateGestureRecognizer_set_RotationRadians_m3A89384BCF97BDCE76B4DDF0E15BC5DD47ED674A_inline(__this, L_25, NULL);
		// RotationRadiansDelta = angleDifferenceFromPrevious;
		float L_26 = V_1;
		RotateGestureRecognizer_set_RotationRadiansDelta_m36EFFFA28815AB7097DFEB9800DB04791DB52A46_inline(__this, L_26, NULL);
		// previousAngle = currentAngle;
		float L_27 = V_0;
		__this->___previousAngle_42 = L_27;
		// SetState(GestureRecognizerState.Executing);
		bool L_28;
		L_28 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 4, NULL);
	}

IL_00db:
	{
	}

IL_00dc:
	{
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::CheckForStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_CheckForStart_m10F93F0A7493C019CB326C9D87513D9D9C5BBADF (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// if (!TrackedTouchCountIsWithinRange || Distance(DistanceX, DistanceY) < ThresholdUnits)
		bool L_2;
		L_2 = GestureRecognizer_get_TrackedTouchCountIsWithinRange_m6211A0006567032EE2E40E1D54AD991725C03405(__this, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		float L_3;
		L_3 = GestureRecognizer_get_DistanceX_m832F5DF8A2D767C62D9A465A92B15A3E125428F6_inline(__this, NULL);
		float L_4;
		L_4 = GestureRecognizer_get_DistanceY_m5EC4F01DD3BAA8BE091C51FB4D818F36F607DB07_inline(__this, NULL);
		float L_5;
		L_5 = GestureRecognizer_Distance_m0556657D4C2721B585CA5C0C09357C48F8D77858(__this, L_3, L_4, NULL);
		float L_6;
		L_6 = RotateGestureRecognizer_get_ThresholdUnits_m67ED5ED420D83CAC8BE2CE0D559295B7B0294DF3_inline(__this, NULL);
		G_B3_0 = ((((float)L_5) < ((float)L_6))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B3_0 = 1;
	}

IL_0033:
	{
		V_1 = (bool)G_B3_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		goto IL_00a4;
	}

IL_003a:
	{
		// float angle = CurrentAngle();
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(12 /* System.Single DigitalRubyShared.RotateGestureRecognizer::CurrentAngle() */, __this);
		V_0 = L_8;
		// if (startAngle == float.MinValue)
		float L_9 = __this->___startAngle_41;
		V_2 = (bool)((((float)L_9) == ((float)(-(std::numeric_limits<float>::max)())))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// startAngle = previousAngle = angle;
		float L_11 = V_0;
		float L_12 = L_11;
		V_3 = L_12;
		__this->___previousAngle_42 = L_12;
		float L_13 = V_3;
		__this->___startAngle_41 = L_13;
		goto IL_00a4;
	}

IL_0066:
	{
		// float angleDiff = Math.Abs(DifferenceBetweenAngles(angle, startAngle));
		float L_14 = V_0;
		float L_15 = __this->___startAngle_41;
		float L_16;
		L_16 = RotateGestureRecognizer_DifferenceBetweenAngles_m2E04F5158D44FC105584B826203F2ECDC0FB2658(__this, L_14, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_17;
		L_17 = fabsf(L_16);
		V_4 = L_17;
		// if (angleDiff >= AngleThreshold)
		float L_18 = V_4;
		float L_19;
		L_19 = RotateGestureRecognizer_get_AngleThreshold_m37CDF69A7BBF0E5585E3D3AA1435250B40B7FB0E_inline(__this, NULL);
		V_5 = (bool)((((int32_t)((!(((float)L_18) >= ((float)L_19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00a3;
		}
	}
	{
		// previousAngleSign = 0.0f;
		__this->___previousAngleSign_43 = (0.0f);
		// SetState(GestureRecognizerState.Began);
		bool L_21;
		L_21 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 2, NULL);
	}

IL_00a3:
	{
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::StateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_StateChanged_m9261417276D0F76325C48D2655C6A2F06B003A28 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// base.StateChanged();
		GestureRecognizer_StateChanged_mE285E539EC26D862C3FABF6352B36781E3A37063(__this, NULL);
		// if (State == GestureRecognizerState.Ended || State == GestureRecognizerState.Failed)
		int32_t L_0;
		L_0 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1;
		L_1 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)32)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// startAngle = float.MinValue;
		__this->___startAngle_41 = (-(std::numeric_limits<float>::max)());
		// RotationRadians = 0.0f;
		RotateGestureRecognizer_set_RotationRadians_m3A89384BCF97BDCE76B4DDF0E15BC5DD47ED674A_inline(__this, (0.0f), NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::TouchesBegan(System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_TouchesBegan_m91F37F65B4DF8692C8786D4670617CF856B1A1B4 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, RuntimeObject* ___touches0, const RuntimeMethod* method) 
{
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::TouchesMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_TouchesMoved_mA45A2C84811AE2C237495467545D38521866710E (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		// if (CurrentTrackedTouches.Count == MaximumNumberOfTouchesToTrack)
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC(L_0, ReadOnlyCollection_1_get_Count_m3D7C06768D76986B629174D8368DB0798C9DF6FC_RuntimeMethod_var);
		int32_t L_2;
		L_2 = GestureRecognizer_get_MaximumNumberOfTouchesToTrack_mA56A864D513371B737DCD1E30B38BE4C3C9E33E8(__this, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// if (State == GestureRecognizerState.Possible)
		int32_t L_4;
		L_4 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// CheckForStart();
		RotateGestureRecognizer_CheckForStart_m10F93F0A7493C019CB326C9D87513D9D9C5BBADF(__this, NULL);
		goto IL_0053;
	}

IL_0031:
	{
		// else if (State == GestureRecognizerState.Began || State == GestureRecognizerState.Executing)
		int32_t L_6;
		L_6 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7;
		L_7 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)4))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B6_0 = 1;
	}

IL_0046:
	{
		V_2 = (bool)G_B6_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// UpdateAngle();
		RotateGestureRecognizer_UpdateAngle_m99097D57C2F9F734A708E16797A24776A2D9A514(__this, NULL);
	}

IL_0053:
	{
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::TouchesEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_TouchesEnded_m5FF0A511F99662357D161D87B05FFB94EFB34E49 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (State == GestureRecognizerState.Possible)
		int32_t L_0;
		L_0 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_2;
		L_2 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
		goto IL_004b;
	}

IL_001b:
	{
		// else if (State == GestureRecognizerState.Began || State == GestureRecognizerState.Executing)
		int32_t L_3;
		L_3 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4;
		L_4 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)4))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B5_0 = 1;
	}

IL_0030:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_6;
		L_6 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_7;
		L_7 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_6, NULL);
		// SetState(GestureRecognizerState.Ended);
		bool L_8;
		L_8 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 8, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Single DigitalRubyShared.RotateGestureRecognizer::CurrentAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotateGestureRecognizer_CurrentAngle_mE4033F4138DAE3E2EB8033CD590D220F756957EC (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// return (float)Math.Atan2(CurrentTrackedTouches[0].Y - CurrentTrackedTouches[1].Y, CurrentTrackedTouches[0].X - CurrentTrackedTouches[1].X);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_0);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_1;
		L_1 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_0, 0, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_0 = L_1;
		float L_2;
		L_2 = GestureTouch_get_Y_m4133F450D00B957F0CED01C7A247CF4C4655B10A((&V_0), NULL);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_3;
		L_3 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_3);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_4;
		L_4 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_3, 1, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_0 = L_4;
		float L_5;
		L_5 = GestureTouch_get_Y_m4133F450D00B957F0CED01C7A247CF4C4655B10A((&V_0), NULL);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_6;
		L_6 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_6);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_7;
		L_7 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_6, 0, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_0 = L_7;
		float L_8;
		L_8 = GestureTouch_get_X_mF48772CAAFDDB21A159497E0999AA6D97ADC8A6D((&V_0), NULL);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_9;
		L_9 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_9);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_10;
		L_10 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_9, 1, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_0 = L_10;
		float L_11;
		L_11 = GestureTouch_get_X_mF48772CAAFDDB21A159497E0999AA6D97ADC8A6D((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = atan2(((double)((float)il2cpp_codegen_subtract(L_2, L_5))), ((double)((float)il2cpp_codegen_subtract(L_8, L_11))));
		V_1 = ((float)L_12);
		goto IL_005e;
	}

IL_005e:
	{
		// }
		float L_13 = V_1;
		return L_13;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer__ctor_m5EAF25ABDF59D97A9A154A9226A5AD7CE446FDBC (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float startAngle = float.MinValue;
		__this->___startAngle_41 = (-(std::numeric_limits<float>::max)());
		// public RotateGestureRecognizer()
		il2cpp_codegen_runtime_class_init_inline(GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_mEBACEE1EC3B2AF958D0A75F9A2E2AC3CD730CB5E(__this, NULL);
		// MaximumNumberOfTouchesToTrack = 2;
		GestureRecognizer_set_MaximumNumberOfTouchesToTrack_mF8C2C6B7FBE332406FF1C9BC467785EDD4B947F6(__this, 2, NULL);
		// AngleThreshold = 0.05f;
		RotateGestureRecognizer_set_AngleThreshold_mA3B6C9E68B2E40A2342CE00FF0EB200255DAF4C0_inline(__this, (0.0500000007f), NULL);
		// }
		return;
	}
}
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_AngleThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_AngleThreshold_m37CDF69A7BBF0E5585E3D3AA1435250B40B7FB0E (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleThreshold { get; set; }
		float L_0 = __this->___U3CAngleThresholdU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::set_AngleThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_AngleThreshold_mA3B6C9E68B2E40A2342CE00FF0EB200255DAF4C0 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float AngleThreshold { get; set; }
		float L_0 = ___value0;
		__this->___U3CAngleThresholdU3Ek__BackingField_44 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_ThresholdUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_ThresholdUnits_m67ED5ED420D83CAC8BE2CE0D559295B7B0294DF3 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_45;
		return L_0;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_ThresholdUnits_mE024B7E7C42AA3F00847145F3314795CBFC2EA08 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_45 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_RotationRadians()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_RotationRadians_m086977451498A2B2CB3A56C9DAA0E5DE61D06A63 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	{
		// public float RotationRadians { get; private set; }
		float L_0 = __this->___U3CRotationRadiansU3Ek__BackingField_46;
		return L_0;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::set_RotationRadians(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_RotationRadians_m3A89384BCF97BDCE76B4DDF0E15BC5DD47ED674A (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RotationRadians { get; private set; }
		float L_0 = ___value0;
		__this->___U3CRotationRadiansU3Ek__BackingField_46 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_RotationRadiansDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_RotationRadiansDelta_mDE6215E78B3317A6F796ADC2E37AA1F87C736FDE (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	{
		// public float RotationRadiansDelta { get; private set; }
		float L_0 = __this->___U3CRotationRadiansDeltaU3Ek__BackingField_47;
		return L_0;
	}
}
// System.Void DigitalRubyShared.RotateGestureRecognizer::set_RotationRadiansDelta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_RotationRadiansDelta_m36EFFFA28815AB7097DFEB9800DB04791DB52A46 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RotationRadiansDelta { get; private set; }
		float L_0 = ___value0;
		__this->___U3CRotationRadiansDeltaU3Ek__BackingField_47 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_RotationDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_RotationDegrees_m6803A6D0567FAA218FA39DA198415313999C8625 (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float RotationDegrees { get { return RotationRadians * (180.0f / (float)Math.PI); } }
		float L_0;
		L_0 = RotateGestureRecognizer_get_RotationRadians_m086977451498A2B2CB3A56C9DAA0E5DE61D06A63_inline(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (57.2957764f)));
		goto IL_0010;
	}

IL_0010:
	{
		// public float RotationDegrees { get { return RotationRadians * (180.0f / (float)Math.PI); } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single DigitalRubyShared.RotateGestureRecognizer::get_RotationDegreesDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_RotationDegreesDelta_m732F7BDCC33AEB48FAACC840F0446015C4BB42BD (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float RotationDegreesDelta { get { return RotationRadiansDelta * (180.0f / (float)Math.PI); } }
		float L_0;
		L_0 = RotateGestureRecognizer_get_RotationRadiansDelta_mDE6215E78B3317A6F796ADC2E37AA1F87C736FDE_inline(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (57.2957764f)));
		goto IL_0010;
	}

IL_0010:
	{
		// public float RotationDegreesDelta { get { return RotationRadiansDelta * (180.0f / (float)Math.PI); } }
		float L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRubyShared.ScaleGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer__ctor_m02FA9B45E9A919F84D2667F618D65523282BE252 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// private readonly System.Diagnostics.Stopwatch timer = new System.Diagnostics.Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_0, NULL);
		__this->___timer_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timer_51), (void*)L_0);
		// public ScaleGestureRecognizer()
		il2cpp_codegen_runtime_class_init_inline(GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_mEBACEE1EC3B2AF958D0A75F9A2E2AC3CD730CB5E(__this, NULL);
		// ScaleMultiplier = ScaleMultiplierX = ScaleMultiplierY = 1.0f;
		float L_1 = (1.0f);
		V_1 = L_1;
		ScaleGestureRecognizer_set_ScaleMultiplierY_m95F7894191EE16E2E18145BF9703994449150D30_inline(__this, L_1, NULL);
		float L_2 = V_1;
		float L_3 = L_2;
		V_0 = L_3;
		ScaleGestureRecognizer_set_ScaleMultiplierX_m0C406AF058358952FF022170B305E4597F39E4C2_inline(__this, L_3, NULL);
		float L_4 = V_0;
		ScaleGestureRecognizer_set_ScaleMultiplier_m7AAC4140A6F24253403C5BBE5604120DB9CA46C3_inline(__this, L_4, NULL);
		// ZoomSpeed = 3.0f;
		ScaleGestureRecognizer_set_ZoomSpeed_m578209AD6DA4C73F63A4698136A28F258EB3E658_inline(__this, (3.0f), NULL);
		// ThresholdUnits = 0.15f;
		ScaleGestureRecognizer_set_ThresholdUnits_m72DDDE6F174AC1689A65F35F3524B0EE66359E63_inline(__this, (0.150000006f), NULL);
		// MinimumNumberOfTouchesToTrack = MaximumNumberOfTouchesToTrack = 2;
		int32_t L_5 = 2;
		V_2 = L_5;
		GestureRecognizer_set_MaximumNumberOfTouchesToTrack_mF8C2C6B7FBE332406FF1C9BC467785EDD4B947F6(__this, L_5, NULL);
		int32_t L_6 = V_2;
		GestureRecognizer_set_MinimumNumberOfTouchesToTrack_m822946D0A6E99F4F0B94511A35BD4F4A6F9AF763(__this, L_6, NULL);
		// timer.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_7 = __this->___timer_51;
		NullCheck(L_7);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_7, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::SetPreviousDistance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_SetPreviousDistance_mFDE216F40311BE6F1175286913493C4FAD1588A6 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___distance0, float ___distanceX1, float ___distanceY2, const RuntimeMethod* method) 
{
	{
		// previousDistance = distance;
		float L_0 = ___distance0;
		__this->___previousDistance_48 = L_0;
		// previousDistanceX = distanceX;
		float L_1 = ___distanceX1;
		__this->___previousDistanceX_49 = L_1;
		// previousDistanceY = distanceY;
		float L_2 = ___distanceY2;
		__this->___previousDistanceY_50 = L_2;
		// }
		return;
	}
}
// System.Single DigitalRubyShared.ScaleGestureRecognizer::ClampScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_ClampScale_m2F795215B9602B25B92D916290DEF548CB29C9B0 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___rawScale0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		// return (rawScale > maximumScaleUpPerUpdate ? maximumScaleUpPerUpdate : (rawScale < minimumScaleDownPerUpdate ? minimumScaleDownPerUpdate : rawScale));
		float L_0 = ___rawScale0;
		if ((((float)L_0) > ((float)(4.0f))))
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = ___rawScale0;
		if ((((float)L_1) < ((float)(0.25f))))
		{
			goto IL_0014;
		}
	}
	{
		float L_2 = ___rawScale0;
		G_B4_0 = L_2;
		goto IL_0019;
	}

IL_0014:
	{
		G_B4_0 = (0.25f);
	}

IL_0019:
	{
		G_B6_0 = G_B4_0;
		goto IL_0020;
	}

IL_001b:
	{
		G_B6_0 = (4.0f);
	}

IL_0020:
	{
		V_0 = G_B6_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Single DigitalRubyShared.ScaleGestureRecognizer::GetScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_GetScale_m851D9286B959B8590B6E651F48AAA233648B2FBE (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___rawScale0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B11_0 = 0.0f;
	{
		// rawScale = ClampScale(rawScale);
		float L_0 = ___rawScale0;
		float L_1;
		L_1 = ScaleGestureRecognizer_ClampScale_m2F795215B9602B25B92D916290DEF548CB29C9B0(__this, L_0, NULL);
		___rawScale0 = L_1;
		// if (ZoomSpeed != 1.0f)
		float L_2;
		L_2 = ScaleGestureRecognizer_get_ZoomSpeed_mA1B1AC37F1563F18FB3F00D6AE3C96EFF4F04E6F_inline(__this, NULL);
		V_0 = (bool)((((int32_t)((((float)L_2) == ((float)(1.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0083;
		}
	}
	{
		// if (rawScale < 1.0f)
		float L_4 = ___rawScale0;
		V_1 = (bool)((((float)L_4) < ((float)(1.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		// rawScale -= ((1.0f - rawScale) * ZoomSpeed);
		float L_6 = ___rawScale0;
		float L_7 = ___rawScale0;
		float L_8;
		L_8 = ScaleGestureRecognizer_get_ZoomSpeed_mA1B1AC37F1563F18FB3F00D6AE3C96EFF4F04E6F_inline(__this, NULL);
		___rawScale0 = ((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_7)), L_8))));
		goto IL_0061;
	}

IL_0041:
	{
		// else if (rawScale > 1.0f)
		float L_9 = ___rawScale0;
		V_2 = (bool)((((float)L_9) > ((float)(1.0f)))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		// rawScale += ((rawScale - 1.0f) * ZoomSpeed);
		float L_11 = ___rawScale0;
		float L_12 = ___rawScale0;
		float L_13;
		L_13 = ScaleGestureRecognizer_get_ZoomSpeed_mA1B1AC37F1563F18FB3F00D6AE3C96EFF4F04E6F_inline(__this, NULL);
		___rawScale0 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, (1.0f))), L_13))));
	}

IL_0061:
	{
		// rawScale = (rawScale > maximumScaleUpPerUpdate ? maximumScaleUpPerUpdate : (rawScale < minimumScaleDownPerUpdate ? minimumScaleDownPerUpdate : rawScale));
		float L_14 = ___rawScale0;
		if ((((float)L_14) > ((float)(4.0f))))
		{
			goto IL_007b;
		}
	}
	{
		float L_15 = ___rawScale0;
		if ((((float)L_15) < ((float)(0.25f))))
		{
			goto IL_0074;
		}
	}
	{
		float L_16 = ___rawScale0;
		G_B9_0 = L_16;
		goto IL_0079;
	}

IL_0074:
	{
		G_B9_0 = (0.25f);
	}

IL_0079:
	{
		G_B11_0 = G_B9_0;
		goto IL_0080;
	}

IL_007b:
	{
		G_B11_0 = (4.0f);
	}

IL_0080:
	{
		___rawScale0 = G_B11_0;
	}

IL_0083:
	{
		// return rawScale;
		float L_17 = ___rawScale0;
		V_3 = L_17;
		goto IL_0087;
	}

IL_0087:
	{
		// }
		float L_18 = V_3;
		return L_18;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::ProcessTouches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_ProcessTouches_mAC93866DC38FC33B7E5E17A8B884788C19694812 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	bool V_14 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	bool V_17 = false;
	float V_18 = 0.0f;
	bool V_19 = false;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	bool V_22 = false;
	bool V_23 = false;
	float G_B14_0 = 0.0f;
	int32_t G_B19_0 = 0;
	float G_B23_0 = 0.0f;
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// if (!TrackedTouchCountIsWithinRange)
		bool L_2;
		L_2 = GestureRecognizer_get_TrackedTouchCountIsWithinRange_m6211A0006567032EE2E40E1D54AD991725C03405(__this, NULL);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		goto IL_0353;
	}

IL_0021:
	{
		// float distance = DistanceBetweenPoints(CurrentTrackedTouches[0].X, CurrentTrackedTouches[0].Y, CurrentTrackedTouches[1].X, CurrentTrackedTouches[1].Y);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_4;
		L_4 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_4);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_5;
		L_5 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_4, 0, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_4 = L_5;
		float L_6;
		L_6 = GestureTouch_get_X_mF48772CAAFDDB21A159497E0999AA6D97ADC8A6D((&V_4), NULL);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_7;
		L_7 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_7);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_8;
		L_8 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_7, 0, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_4 = L_8;
		float L_9;
		L_9 = GestureTouch_get_Y_m4133F450D00B957F0CED01C7A247CF4C4655B10A((&V_4), NULL);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_10;
		L_10 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_10);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_11;
		L_11 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_10, 1, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_4 = L_11;
		float L_12;
		L_12 = GestureTouch_get_X_mF48772CAAFDDB21A159497E0999AA6D97ADC8A6D((&V_4), NULL);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_13;
		L_13 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_13);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_14;
		L_14 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_13, 1, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_4 = L_14;
		float L_15;
		L_15 = GestureTouch_get_Y_m4133F450D00B957F0CED01C7A247CF4C4655B10A((&V_4), NULL);
		float L_16;
		L_16 = GestureRecognizer_DistanceBetweenPoints_m7DDEF744BA1E6C694D09C24BDFC78CEA623583A6(__this, L_6, L_9, L_12, L_15, NULL);
		V_0 = L_16;
		// float distanceX = Distance(CurrentTrackedTouches[0].X - CurrentTrackedTouches[1].X);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_17;
		L_17 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_17);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_18;
		L_18 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_17, 0, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_4 = L_18;
		float L_19;
		L_19 = GestureTouch_get_X_mF48772CAAFDDB21A159497E0999AA6D97ADC8A6D((&V_4), NULL);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_20;
		L_20 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_20);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_21;
		L_21 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_20, 1, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_4 = L_21;
		float L_22;
		L_22 = GestureTouch_get_X_mF48772CAAFDDB21A159497E0999AA6D97ADC8A6D((&V_4), NULL);
		float L_23;
		L_23 = GestureRecognizer_Distance_m3BBB947C922AFD97CD44E683C9722E393F9F0220(__this, ((float)il2cpp_codegen_subtract(L_19, L_22)), NULL);
		V_1 = L_23;
		// float distanceY = Distance(CurrentTrackedTouches[0].Y - CurrentTrackedTouches[1].Y);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_24;
		L_24 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_24);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_25;
		L_25 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_24, 0, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_4 = L_25;
		float L_26;
		L_26 = GestureTouch_get_Y_m4133F450D00B957F0CED01C7A247CF4C4655B10A((&V_4), NULL);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_27;
		L_27 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		NullCheck(L_27);
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_28;
		L_28 = ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB(L_27, 1, ReadOnlyCollection_1_get_Item_m301EFD7DEDC9291F9BD3CA71DAF1277B38C6E3DB_RuntimeMethod_var);
		V_4 = L_28;
		float L_29;
		L_29 = GestureTouch_get_Y_m4133F450D00B957F0CED01C7A247CF4C4655B10A((&V_4), NULL);
		float L_30;
		L_30 = GestureRecognizer_Distance_m3BBB947C922AFD97CD44E683C9722E393F9F0220(__this, ((float)il2cpp_codegen_subtract(L_26, L_29)), NULL);
		V_2 = L_30;
		// if (State == GestureRecognizerState.Possible)
		int32_t L_31;
		L_31 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_5 = (bool)((((int32_t)L_31) == ((int32_t)1))? 1 : 0);
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_0150;
		}
	}
	{
		// if (previousDistance == 0.0f)
		float L_33 = __this->___previousDistance_48;
		V_6 = (bool)((((float)L_33) == ((float)(0.0f)))? 1 : 0);
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_011c;
		}
	}
	{
		// previousDistance = distance;
		float L_35 = V_0;
		__this->___previousDistance_48 = L_35;
		// previousDistanceX = distanceX;
		float L_36 = V_1;
		__this->___previousDistanceX_49 = L_36;
		// previousDistanceY = distanceY;
		float L_37 = V_2;
		__this->___previousDistanceY_50 = L_37;
		goto IL_014a;
	}

IL_011c:
	{
		// float diff = Math.Abs(previousDistance - distance);
		float L_38 = __this->___previousDistance_48;
		float L_39 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_40;
		L_40 = fabsf(((float)il2cpp_codegen_subtract(L_38, L_39)));
		V_7 = L_40;
		// if (diff >= ThresholdUnits)
		float L_41 = V_7;
		float L_42;
		L_42 = ScaleGestureRecognizer_get_ThresholdUnits_m680F0AC86F8881D8E9F6CD38A51826E281453956_inline(__this, NULL);
		V_8 = (bool)((((int32_t)((!(((float)L_41) >= ((float)L_42)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_8;
		if (!L_43)
		{
			goto IL_0149;
		}
	}
	{
		// SetState(GestureRecognizerState.Began);
		bool L_44;
		L_44 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 2, NULL);
	}

IL_0149:
	{
	}

IL_014a:
	{
		goto IL_0353;
	}

IL_0150:
	{
		// else if (State == GestureRecognizerState.Executing)
		int32_t L_45;
		L_45 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_9 = (bool)((((int32_t)L_45) == ((int32_t)4))? 1 : 0);
		bool L_46 = V_9;
		if (!L_46)
		{
			goto IL_02f5;
		}
	}
	{
		// if (distance != previousDistance)
		float L_47 = V_0;
		float L_48 = __this->___previousDistance_48;
		V_10 = (bool)((((int32_t)((((float)L_47) == ((float)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_02f2;
		}
	}
	{
		// float jitterThreshold = (float)timer.Elapsed.TotalSeconds <= stationaryTimeSeconds ? minimumScaleResolutionSquared : stationaryScaleResolutionSquared;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_50 = __this->___timer_51;
		NullCheck(L_50);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_51;
		L_51 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_50, NULL);
		V_15 = L_51;
		double L_52;
		L_52 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_15), NULL);
		if ((((float)((float)L_52)) <= ((float)(0.100000001f))))
		{
			goto IL_019c;
		}
	}
	{
		G_B14_0 = (1.04999995f);
		goto IL_01a1;
	}

IL_019c:
	{
		G_B14_0 = (1.005f);
	}

IL_01a1:
	{
		V_11 = G_B14_0;
		// float currentDistanceSquared = distance * distance;
		float L_53 = V_0;
		float L_54 = V_0;
		V_12 = ((float)il2cpp_codegen_multiply(L_53, L_54));
		// float previousDistanceSquared = previousDistance * previousDistance;
		float L_55 = __this->___previousDistance_48;
		float L_56 = __this->___previousDistance_48;
		V_13 = ((float)il2cpp_codegen_multiply(L_55, L_56));
		// if ((currentDistanceSquared - previousDistanceSquared) * previousDistanceDirection < 0.0f)
		float L_57 = V_12;
		float L_58 = V_13;
		float L_59 = __this->___previousDistanceDirection_47;
		V_16 = (bool)((((float)((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_57, L_58)), L_59))) < ((float)(0.0f)))? 1 : 0);
		bool L_60 = V_16;
		if (!L_60)
		{
			goto IL_01e0;
		}
	}
	{
		// jitterThreshold = Math.Max(jitterThreshold, hysteresisScaleResolutionSquared);
		float L_61 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_62;
		L_62 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_61, (1.14999998f), NULL);
		V_11 = L_62;
	}

IL_01e0:
	{
		// bool aboveJitterThreshold = ((previousDistanceSquared > jitterThreshold * currentDistanceSquared) ||
		//     (currentDistanceSquared > jitterThreshold * previousDistanceSquared));
		float L_63 = V_13;
		float L_64 = V_11;
		float L_65 = V_12;
		if ((((float)L_63) > ((float)((float)il2cpp_codegen_multiply(L_64, L_65)))))
		{
			goto IL_01f4;
		}
	}
	{
		float L_66 = V_12;
		float L_67 = V_11;
		float L_68 = V_13;
		G_B19_0 = ((((float)L_66) > ((float)((float)il2cpp_codegen_multiply(L_67, L_68))))? 1 : 0);
		goto IL_01f5;
	}

IL_01f4:
	{
		G_B19_0 = 1;
	}

IL_01f5:
	{
		V_14 = (bool)G_B19_0;
		// if (aboveJitterThreshold)
		bool L_69 = V_14;
		V_17 = L_69;
		bool L_70 = V_17;
		if (!L_70)
		{
			goto IL_02cb;
		}
	}
	{
		// timer.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_71 = __this->___timer_51;
		NullCheck(L_71);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_71, NULL);
		// timer.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_72 = __this->___timer_51;
		NullCheck(L_72);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_72, NULL);
		// float newDistanceDirection = (currentDistanceSquared - previousDistanceSquared >= 0.0f ? 1.0f : -1.0f);
		float L_73 = V_12;
		float L_74 = V_13;
		if ((((float)((float)il2cpp_codegen_subtract(L_73, L_74))) >= ((float)(0.0f))))
		{
			goto IL_022e;
		}
	}
	{
		G_B23_0 = (-1.0f);
		goto IL_0233;
	}

IL_022e:
	{
		G_B23_0 = (1.0f);
	}

IL_0233:
	{
		V_18 = G_B23_0;
		// if (newDistanceDirection == previousDistanceDirection)
		float L_75 = V_18;
		float L_76 = __this->___previousDistanceDirection_47;
		V_19 = (bool)((((float)L_75) == ((float)L_76))? 1 : 0);
		bool L_77 = V_19;
		if (!L_77)
		{
			goto IL_0290;
		}
	}
	{
		// ScaleMultiplier = GetScale(distance / previousDistance);
		float L_78 = V_0;
		float L_79 = __this->___previousDistance_48;
		float L_80;
		L_80 = ScaleGestureRecognizer_GetScale_m851D9286B959B8590B6E651F48AAA233648B2FBE(__this, ((float)(L_78/L_79)), NULL);
		ScaleGestureRecognizer_set_ScaleMultiplier_m7AAC4140A6F24253403C5BBE5604120DB9CA46C3_inline(__this, L_80, NULL);
		// ScaleMultiplierX = GetScale(distanceX / previousDistanceX);
		float L_81 = V_1;
		float L_82 = __this->___previousDistanceX_49;
		float L_83;
		L_83 = ScaleGestureRecognizer_GetScale_m851D9286B959B8590B6E651F48AAA233648B2FBE(__this, ((float)(L_81/L_82)), NULL);
		ScaleGestureRecognizer_set_ScaleMultiplierX_m0C406AF058358952FF022170B305E4597F39E4C2_inline(__this, L_83, NULL);
		// ScaleMultiplierY = GetScale(distanceY / previousDistanceY);
		float L_84 = V_2;
		float L_85 = __this->___previousDistanceY_50;
		float L_86;
		L_86 = ScaleGestureRecognizer_GetScale_m851D9286B959B8590B6E651F48AAA233648B2FBE(__this, ((float)(L_84/L_85)), NULL);
		ScaleGestureRecognizer_set_ScaleMultiplierY_m95F7894191EE16E2E18145BF9703994449150D30_inline(__this, L_86, NULL);
		// SetState(GestureRecognizerState.Executing);
		bool L_87;
		L_87 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 4, NULL);
		goto IL_02be;
	}

IL_0290:
	{
		// ScaleMultiplier = ScaleMultiplierX = ScaleMultiplierY = 1.0f;
		float L_88 = (1.0f);
		V_21 = L_88;
		ScaleGestureRecognizer_set_ScaleMultiplierY_m95F7894191EE16E2E18145BF9703994449150D30_inline(__this, L_88, NULL);
		float L_89 = V_21;
		float L_90 = L_89;
		V_20 = L_90;
		ScaleGestureRecognizer_set_ScaleMultiplierX_m0C406AF058358952FF022170B305E4597F39E4C2_inline(__this, L_90, NULL);
		float L_91 = V_20;
		ScaleGestureRecognizer_set_ScaleMultiplier_m7AAC4140A6F24253403C5BBE5604120DB9CA46C3_inline(__this, L_91, NULL);
		// previousDistanceDirection = newDistanceDirection;
		float L_92 = V_18;
		__this->___previousDistanceDirection_47 = L_92;
	}

IL_02be:
	{
		// SetPreviousDistance(distance, distanceX, distanceY);
		float L_93 = V_0;
		float L_94 = V_1;
		float L_95 = V_2;
		ScaleGestureRecognizer_SetPreviousDistance_mFDE216F40311BE6F1175286913493C4FAD1588A6(__this, L_93, L_94, L_95, NULL);
		goto IL_02f1;
	}

IL_02cb:
	{
		// else if (timer.ElapsedMilliseconds > resetDirectionMilliseconds)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_96 = __this->___timer_51;
		NullCheck(L_96);
		int64_t L_97;
		L_97 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_96, NULL);
		V_22 = (bool)((((int64_t)L_97) > ((int64_t)((int64_t)((int32_t)250))))? 1 : 0);
		bool L_98 = V_22;
		if (!L_98)
		{
			goto IL_02f1;
		}
	}
	{
		// previousDistanceDirection = 0.0f;
		__this->___previousDistanceDirection_47 = (0.0f);
	}

IL_02f1:
	{
	}

IL_02f2:
	{
		goto IL_0353;
	}

IL_02f5:
	{
		// else if (State == GestureRecognizerState.Began)
		int32_t L_99;
		L_99 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_23 = (bool)((((int32_t)L_99) == ((int32_t)2))? 1 : 0);
		bool L_100 = V_23;
		if (!L_100)
		{
			goto IL_0349;
		}
	}
	{
		// ScaleMultiplier = ScaleMultiplierX = ScaleMultiplierY = 1.0f;
		float L_101 = (1.0f);
		V_21 = L_101;
		ScaleGestureRecognizer_set_ScaleMultiplierY_m95F7894191EE16E2E18145BF9703994449150D30_inline(__this, L_101, NULL);
		float L_102 = V_21;
		float L_103 = L_102;
		V_20 = L_103;
		ScaleGestureRecognizer_set_ScaleMultiplierX_m0C406AF058358952FF022170B305E4597F39E4C2_inline(__this, L_103, NULL);
		float L_104 = V_20;
		ScaleGestureRecognizer_set_ScaleMultiplier_m7AAC4140A6F24253403C5BBE5604120DB9CA46C3_inline(__this, L_104, NULL);
		// previousDistanceDirection = 0.0f;
		__this->___previousDistanceDirection_47 = (0.0f);
		// SetPreviousDistance(distance, distanceX, distanceY);
		float L_105 = V_0;
		float L_106 = V_1;
		float L_107 = V_2;
		ScaleGestureRecognizer_SetPreviousDistance_mFDE216F40311BE6F1175286913493C4FAD1588A6(__this, L_105, L_106, L_107, NULL);
		// SetState(GestureRecognizerState.Executing);
		bool L_108;
		L_108 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 4, NULL);
		goto IL_0353;
	}

IL_0349:
	{
		// SetState(GestureRecognizerState.Possible);
		bool L_109;
		L_109 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 1, NULL);
	}

IL_0353:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::TouchesBegan(System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_TouchesBegan_m72AF50BC7B04195DB1BA2E63D44C1B8BAAB3B475 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, RuntimeObject* ___touches0, const RuntimeMethod* method) 
{
	{
		// previousDistance = 0.0f;
		__this->___previousDistance_48 = (0.0f);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::TouchesMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_TouchesMoved_mDC193E90178E9761D039C6B4D833166D5F23C3A4 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	{
		// ProcessTouches();
		ScaleGestureRecognizer_ProcessTouches_mAC93866DC38FC33B7E5E17A8B884788C19694812(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::TouchesEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_TouchesEnded_m96543AC0818CF25938636D30F6583FD330016DD7 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (State == GestureRecognizerState.Executing)
		int32_t L_0;
		L_0 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_2;
		L_2 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_3;
		L_3 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_2, NULL);
		// SetState(GestureRecognizerState.Ended);
		bool L_4;
		L_4 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 8, NULL);
		goto IL_0032;
	}

IL_0027:
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_5;
		L_5 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Single DigitalRubyShared.ScaleGestureRecognizer::get_ScaleMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_get_ScaleMultiplier_m2238C4D96BDA47EAE51B195E84B10D8F978634CD (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplier { get; private set; }
		float L_0 = __this->___U3CScaleMultiplierU3Ek__BackingField_52;
		return L_0;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ScaleMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ScaleMultiplier_m7AAC4140A6F24253403C5BBE5604120DB9CA46C3 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplier { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierU3Ek__BackingField_52 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.ScaleGestureRecognizer::get_ScaleMultiplierX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_get_ScaleMultiplierX_m0EF003DC351BB659A6EC4090E83ADAD1FDDAFA27 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierX { get; private set; }
		float L_0 = __this->___U3CScaleMultiplierXU3Ek__BackingField_53;
		return L_0;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ScaleMultiplierX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ScaleMultiplierX_m0C406AF058358952FF022170B305E4597F39E4C2 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierX { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierXU3Ek__BackingField_53 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.ScaleGestureRecognizer::get_ScaleMultiplierY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_get_ScaleMultiplierY_m506440433A308520D8DE383AAF8556EE9DCEEFB2 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierY { get; private set; }
		float L_0 = __this->___U3CScaleMultiplierYU3Ek__BackingField_54;
		return L_0;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ScaleMultiplierY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ScaleMultiplierY_m95F7894191EE16E2E18145BF9703994449150D30 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierY { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierYU3Ek__BackingField_54 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.ScaleGestureRecognizer::get_ZoomSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_get_ZoomSpeed_mA1B1AC37F1563F18FB3F00D6AE3C96EFF4F04E6F (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	{
		// public float ZoomSpeed { get; set; }
		float L_0 = __this->___U3CZoomSpeedU3Ek__BackingField_55;
		return L_0;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ZoomSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ZoomSpeed_m578209AD6DA4C73F63A4698136A28F258EB3E658 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ZoomSpeed { get; set; }
		float L_0 = ___value0;
		__this->___U3CZoomSpeedU3Ek__BackingField_55 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.ScaleGestureRecognizer::get_ThresholdUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_get_ThresholdUnits_m680F0AC86F8881D8E9F6CD38A51826E281453956 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_56;
		return L_0;
	}
}
// System.Void DigitalRubyShared.ScaleGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ThresholdUnits_m72DDDE6F174AC1689A65F35F3524B0EE66359E63 (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_56 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DigitalRubyShared.SwipeGestureRecognizer::CalculateEndDirection(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SwipeGestureRecognizer_CalculateEndDirection_mFDA3BE698AFC5D220AB018B4C516C4751F8CF7FA (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	{
		// SwipeGestureRecognizerDirection endDir = EndDirection;
		int32_t L_0;
		L_0 = SwipeGestureRecognizer_get_EndDirection_m1104E4EAC1EBE43CD1C19EE6F4CEFAA8D2B34B45_inline(__this, NULL);
		V_0 = L_0;
		// float xDiff = VelocityX;
		float L_1;
		L_1 = GestureRecognizer_get_VelocityX_mAA8BE4929B69E4919FC4382E15BD2E9BBA7A37C7(__this, NULL);
		V_1 = L_1;
		// float yDiff = VelocityY;
		float L_2;
		L_2 = GestureRecognizer_get_VelocityY_m9BF625EEC1C5372FC91C28916C833ABF06A5B238(__this, NULL);
		V_2 = L_2;
		// float absXDiff = Math.Abs(xDiff);
		float L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(L_3);
		V_3 = L_4;
		// float absYDiff = Math.Abs(yDiff);
		float L_5 = V_2;
		float L_6;
		L_6 = fabsf(L_5);
		V_4 = L_6;
		// if (absXDiff > absYDiff)
		float L_7 = V_3;
		float L_8 = V_4;
		V_5 = (bool)((((float)L_7) > ((float)L_8))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0083;
		}
	}
	{
		// if (DirectionThreshold > 1.0f && absXDiff / absYDiff < DirectionThreshold)
		float L_10;
		L_10 = SwipeGestureRecognizer_get_DirectionThreshold_mF071696E8429DFB2CF7A360E5C484830861120BA_inline(__this, NULL);
		if ((!(((float)L_10) > ((float)(1.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		float L_11 = V_3;
		float L_12 = V_4;
		float L_13;
		L_13 = SwipeGestureRecognizer_get_DirectionThreshold_mF071696E8429DFB2CF7A360E5C484830861120BA_inline(__this, NULL);
		G_B4_0 = ((((float)((float)(L_11/L_12))) < ((float)L_13))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B4_0 = 0;
	}

IL_004d:
	{
		V_6 = (bool)G_B4_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		// return false;
		V_7 = (bool)0;
		goto IL_010f;
	}

IL_005c:
	{
		// else if (xDiff > 0)
		float L_15 = V_1;
		V_8 = (bool)((((float)L_15) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		// EndDirection = SwipeGestureRecognizerDirection.Right;
		SwipeGestureRecognizer_set_EndDirection_mA4457DBEDDBD5CE0FE9FD7B3C15D0E3A640FB565_inline(__this, 1, NULL);
		goto IL_0080;
	}

IL_0076:
	{
		// EndDirection = SwipeGestureRecognizerDirection.Left;
		SwipeGestureRecognizer_set_EndDirection_mA4457DBEDDBD5CE0FE9FD7B3C15D0E3A640FB565_inline(__this, 0, NULL);
	}

IL_0080:
	{
		goto IL_00d1;
	}

IL_0083:
	{
		// if (DirectionThreshold > 1.0f && absYDiff / absXDiff < DirectionThreshold)
		float L_17;
		L_17 = SwipeGestureRecognizer_get_DirectionThreshold_mF071696E8429DFB2CF7A360E5C484830861120BA_inline(__this, NULL);
		if ((!(((float)L_17) > ((float)(1.0f)))))
		{
			goto IL_009f;
		}
	}
	{
		float L_18 = V_4;
		float L_19 = V_3;
		float L_20;
		L_20 = SwipeGestureRecognizer_get_DirectionThreshold_mF071696E8429DFB2CF7A360E5C484830861120BA_inline(__this, NULL);
		G_B13_0 = ((((float)((float)(L_18/L_19))) < ((float)L_20))? 1 : 0);
		goto IL_00a0;
	}

IL_009f:
	{
		G_B13_0 = 0;
	}

IL_00a0:
	{
		V_9 = (bool)G_B13_0;
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		// return false;
		V_7 = (bool)0;
		goto IL_010f;
	}

IL_00ac:
	{
		// else if (yDiff < 0)
		float L_22 = V_2;
		V_10 = (bool)((((float)L_22) < ((float)(0.0f)))? 1 : 0);
		bool L_23 = V_10;
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		// EndDirection = SwipeGestureRecognizerDirection.Down;
		SwipeGestureRecognizer_set_EndDirection_mA4457DBEDDBD5CE0FE9FD7B3C15D0E3A640FB565_inline(__this, 2, NULL);
		goto IL_00d0;
	}

IL_00c6:
	{
		// EndDirection = SwipeGestureRecognizerDirection.Up;
		SwipeGestureRecognizer_set_EndDirection_mA4457DBEDDBD5CE0FE9FD7B3C15D0E3A640FB565_inline(__this, 3, NULL);
	}

IL_00d0:
	{
	}

IL_00d1:
	{
		// if (FailOnDirectionChange && State != GestureRecognizerState.Possible && endDir != SwipeGestureRecognizerDirection.Any && endDir != EndDirection)
		bool L_24;
		L_24 = SwipeGestureRecognizer_get_FailOnDirectionChange_mC1198C9627491836A1AEAB01E81833092B79E61A_inline(__this, NULL);
		if (!L_24)
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_25;
		L_25 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)4)))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28;
		L_28 = SwipeGestureRecognizer_get_EndDirection_m1104E4EAC1EBE43CD1C19EE6F4CEFAA8D2B34B45_inline(__this, NULL);
		G_B24_0 = ((((int32_t)((((int32_t)L_27) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00f5;
	}

IL_00f4:
	{
		G_B24_0 = 0;
	}

IL_00f5:
	{
		V_11 = (bool)G_B24_0;
		bool L_29 = V_11;
		if (!L_29)
		{
			goto IL_010a;
		}
	}
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_30;
		L_30 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
		// return false;
		V_7 = (bool)0;
		goto IL_010f;
	}

IL_010a:
	{
		// return true;
		V_7 = (bool)1;
		goto IL_010f;
	}

IL_010f:
	{
		// }
		bool L_31 = V_7;
		return L_31;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::CheckForSwipeCompletion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_CheckForSwipeCompletion_m971182EBC008601B38287F3B2B74CB766D3C759A (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, bool ___end0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B25_0 = 0;
	{
		// if (Speed < DeviceInfo.UnitsToPixels(MinimumSpeedUnits) || !TrackedTouchCountIsWithinRange)
		float L_0;
		L_0 = GestureRecognizer_get_Speed_m2251B7A5A45D3CE97A86017089EE43B804321A19(__this, NULL);
		float L_1;
		L_1 = SwipeGestureRecognizer_get_MinimumSpeedUnits_mE61D830405A1A4C68766C1F5F96D55E0392A34F8_inline(__this, NULL);
		float L_2;
		L_2 = DeviceInfo_UnitsToPixels_m6B791026FDCA7017692E054C318C2BFB5D96D37C(L_1, NULL);
		if ((((float)L_0) < ((float)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		bool L_3;
		L_3 = GestureRecognizer_get_TrackedTouchCountIsWithinRange_m6211A0006567032EE2E40E1D54AD991725C03405(__this, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// CalculateFocus(CurrentTrackedTouches, true);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_5;
		L_5 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_6;
		L_6 = GestureRecognizer_CalculateFocus_mB8F719D9FFD0DDC995461D409B8F63D8D19AEEF2(__this, L_5, (bool)1, NULL);
		// return;
		goto IL_0140;
	}

IL_0038:
	{
		// float distance = DistanceBetweenPoints(StartFocusX, StartFocusY, FocusX, FocusY);
		float L_7;
		L_7 = GestureRecognizer_get_StartFocusX_m19E3A7698965AECF6A051C1616C94D63D5B307A5_inline(__this, NULL);
		float L_8;
		L_8 = GestureRecognizer_get_StartFocusY_m58457DFD7A1D26DBF223D5DB7F159DE29FB8AACD_inline(__this, NULL);
		float L_9;
		L_9 = GestureRecognizer_get_FocusX_m3F912DE62E39B70C8E65A0B3550643F72C91DE2E_inline(__this, NULL);
		float L_10;
		L_10 = GestureRecognizer_get_FocusY_m8C561F04D9CDA67B9341AF0F4DF2AEABC95641E1_inline(__this, NULL);
		float L_11;
		L_11 = GestureRecognizer_DistanceBetweenPoints_m7DDEF744BA1E6C694D09C24BDFC78CEA623583A6(__this, L_7, L_8, L_9, L_10, NULL);
		V_0 = L_11;
		// if (distance < MinimumDistanceUnits || !CalculateEndDirection(FocusX, FocusY))
		float L_12 = V_0;
		float L_13;
		L_13 = SwipeGestureRecognizer_get_MinimumDistanceUnits_mC62DC0A0BA2CFB526AF0DBCF2FC066343D78AEA8_inline(__this, NULL);
		if ((((float)L_12) < ((float)L_13)))
		{
			goto IL_0077;
		}
	}
	{
		float L_14;
		L_14 = GestureRecognizer_get_FocusX_m3F912DE62E39B70C8E65A0B3550643F72C91DE2E_inline(__this, NULL);
		float L_15;
		L_15 = GestureRecognizer_get_FocusY_m8C561F04D9CDA67B9341AF0F4DF2AEABC95641E1_inline(__this, NULL);
		bool L_16;
		L_16 = SwipeGestureRecognizer_CalculateEndDirection_mFDA3BE698AFC5D220AB018B4C516C4751F8CF7FA(__this, L_14, L_15, NULL);
		G_B8_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B8_0 = 1;
	}

IL_0078:
	{
		V_2 = (bool)G_B8_0;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		// return;
		goto IL_0140;
	}

IL_0082:
	{
		// else if (Direction == SwipeGestureRecognizerDirection.Any || Direction == EndDirection)
		int32_t L_18;
		L_18 = SwipeGestureRecognizer_get_Direction_m1EAFA48B031E7EF61FE0A3B69A48B55BBA155068_inline(__this, NULL);
		if ((((int32_t)L_18) == ((int32_t)4)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_19;
		L_19 = SwipeGestureRecognizer_get_Direction_m1EAFA48B031E7EF61FE0A3B69A48B55BBA155068_inline(__this, NULL);
		int32_t L_20;
		L_20 = SwipeGestureRecognizer_get_EndDirection_m1104E4EAC1EBE43CD1C19EE6F4CEFAA8D2B34B45_inline(__this, NULL);
		G_B13_0 = ((((int32_t)L_19) == ((int32_t)L_20))? 1 : 0);
		goto IL_009c;
	}

IL_009b:
	{
		G_B13_0 = 1;
	}

IL_009c:
	{
		V_3 = (bool)G_B13_0;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0140;
		}
	}
	{
		// if (end)
		bool L_22 = ___end0;
		V_4 = L_22;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00e4;
		}
	}
	{
		// bool temp = ClearTrackedTouchesOnEndOrFail;
		bool L_24;
		L_24 = GestureRecognizer_get_ClearTrackedTouchesOnEndOrFail_mC36464B2FAB433BC34A2D5ED524FE56495469C45_inline(__this, NULL);
		V_5 = L_24;
		// if (EndMode != SwipeGestureRecognizerEndMode.EndContinusously)
		int32_t L_25;
		L_25 = SwipeGestureRecognizer_get_EndMode_m31D5ECF1FE5A2B43A1ECAB19F09275008D821276_inline(__this, NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_25) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00d0;
		}
	}
	{
		// ClearTrackedTouchesOnEndOrFail = true;
		GestureRecognizer_set_ClearTrackedTouchesOnEndOrFail_m72516ADEF9E70B0978D4451C5C288D55BA3EF3CE_inline(__this, (bool)1, NULL);
	}

IL_00d0:
	{
		// SetState(GestureRecognizerState.Ended);
		bool L_27;
		L_27 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 8, NULL);
		// ClearTrackedTouchesOnEndOrFail = temp;
		bool L_28 = V_5;
		GestureRecognizer_set_ClearTrackedTouchesOnEndOrFail_m72516ADEF9E70B0978D4451C5C288D55BA3EF3CE_inline(__this, L_28, NULL);
		goto IL_013f;
	}

IL_00e4:
	{
		// else if (!SendBeginExecutingStates)
		bool L_29;
		L_29 = SwipeGestureRecognizer_get_SendBeginExecutingStates_m42E10AED5340CA5CB1BCE1F1CBE63F61674BA1DE_inline(__this, NULL);
		V_7 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_00ff;
		}
	}
	{
		// SetState(GestureRecognizerState.Possible);
		bool L_31;
		L_31 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 1, NULL);
		goto IL_013f;
	}

IL_00ff:
	{
		// else if (State == GestureRecognizerState.Possible)
		int32_t L_32;
		L_32 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_8 = (bool)((((int32_t)L_32) == ((int32_t)1))? 1 : 0);
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_011a;
		}
	}
	{
		// SetState(GestureRecognizerState.Began);
		bool L_34;
		L_34 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 2, NULL);
		goto IL_013f;
	}

IL_011a:
	{
		// else if (State == GestureRecognizerState.Began || State == GestureRecognizerState.Executing)
		int32_t L_35;
		L_35 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_35) == ((int32_t)2)))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_36;
		L_36 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		G_B25_0 = ((((int32_t)L_36) == ((int32_t)4))? 1 : 0);
		goto IL_012f;
	}

IL_012e:
	{
		G_B25_0 = 1;
	}

IL_012f:
	{
		V_9 = (bool)G_B25_0;
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_013f;
		}
	}
	{
		// SetState(GestureRecognizerState.Executing);
		bool L_38;
		L_38 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 4, NULL);
	}

IL_013f:
	{
	}

IL_0140:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::TouchesBegan(System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_TouchesBegan_mB37A503EEA24F36F034E83C03736896427F97E85 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, RuntimeObject* ___touches0, const RuntimeMethod* method) 
{
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// EndDirection = SwipeGestureRecognizerDirection.Any;
		SwipeGestureRecognizer_set_EndDirection_mA4457DBEDDBD5CE0FE9FD7B3C15D0E3A640FB565_inline(__this, 4, NULL);
		// SetState(GestureRecognizerState.Possible);
		bool L_2;
		L_2 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::TouchesMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_TouchesMoved_mA5852E7EA2403702A8C331351C060FD160EC6F37 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// CheckForSwipeCompletion(EndMode != SwipeGestureRecognizerEndMode.EndWhenTouchEnds);
		int32_t L_2;
		L_2 = SwipeGestureRecognizer_get_EndMode_m31D5ECF1FE5A2B43A1ECAB19F09275008D821276_inline(__this, NULL);
		SwipeGestureRecognizer_CheckForSwipeCompletion_m971182EBC008601B38287F3B2B74CB766D3C759A(__this, (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::TouchesEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_TouchesEnded_m34E2C495A6B3DE4247BBE036D26D838F9BC7B30B (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// if (State == GestureRecognizerState.Possible || State == GestureRecognizerState.Began || State == GestureRecognizerState.Executing)
		int32_t L_2;
		L_2 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4;
		L_4 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)4))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		V_0 = (bool)G_B4_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// CheckForSwipeCompletion(true);
		SwipeGestureRecognizer_CheckForSwipeCompletion_m971182EBC008601B38287F3B2B74CB766D3C759A(__this, (bool)1, NULL);
	}

IL_003a:
	{
		// if (State != GestureRecognizerState.Ended)
		int32_t L_6;
		L_6 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_8;
		L_8 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer__ctor_m7FDB66B602AFDFA4A94654082AA97908186AC392 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SwipeGestureRecognizer()
		il2cpp_codegen_runtime_class_init_inline(GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_mEBACEE1EC3B2AF958D0A75F9A2E2AC3CD730CB5E(__this, NULL);
		// Direction = SwipeGestureRecognizerDirection.Any;
		SwipeGestureRecognizer_set_Direction_m7295FD2EC50071DA9A232D2455287E3A88DEF085_inline(__this, 4, NULL);
		// MinimumDistanceUnits = 1.0f; // default to 1 inch minimum distance
		SwipeGestureRecognizer_set_MinimumDistanceUnits_mB14F1163880211ACEC425D96F556F3ADC37678A0_inline(__this, (1.0f), NULL);
		// MinimumSpeedUnits = 3.0f; // must move 3 inches / second speed to execute
		SwipeGestureRecognizer_set_MinimumSpeedUnits_m92DB973707A7561F2CCB5792A8E5BA0F6C595308_inline(__this, (3.0f), NULL);
		// DirectionThreshold = 1.5f;
		SwipeGestureRecognizer_set_DirectionThreshold_m9AEA9C4B56348BC557EE53B671331F8AADCE9D13_inline(__this, (1.5f), NULL);
		// EndMode = SwipeGestureRecognizerEndMode.EndImmediately;
		SwipeGestureRecognizer_set_EndMode_mC56E00DF49F1BB5CE1314ACCD789A264BA7D5591_inline(__this, 0, NULL);
		// SendBeginExecutingStates = true;
		SwipeGestureRecognizer_set_SendBeginExecutingStates_mAFC2A8B86F4367EB1C416D4BDDEEE0007137185D_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_Reset_mE3636BDCD137A70F40EE36B8B75B5CD11F3C3BDB (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		GestureRecognizer_Reset_m486079769F5D0ED3C5AA17A17126DA6150512FA2(__this, NULL);
		// EndDirection = SwipeGestureRecognizerDirection.Any;
		SwipeGestureRecognizer_set_EndDirection_mA4457DBEDDBD5CE0FE9FD7B3C15D0E3A640FB565_inline(__this, 4, NULL);
		// }
		return;
	}
}
// DigitalRubyShared.SwipeGestureRecognizerDirection DigitalRubyShared.SwipeGestureRecognizer::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SwipeGestureRecognizer_get_Direction_m1EAFA48B031E7EF61FE0A3B69A48B55BBA155068 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerDirection Direction { get; set; }
		int32_t L_0 = __this->___U3CDirectionU3Ek__BackingField_40;
		return L_0;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_Direction(DigitalRubyShared.SwipeGestureRecognizerDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_Direction_m7295FD2EC50071DA9A232D2455287E3A88DEF085 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerDirection Direction { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CDirectionU3Ek__BackingField_40 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.SwipeGestureRecognizer::get_MinimumDistanceUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwipeGestureRecognizer_get_MinimumDistanceUnits_mC62DC0A0BA2CFB526AF0DBCF2FC066343D78AEA8 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public float MinimumDistanceUnits { get; set; }
		float L_0 = __this->___U3CMinimumDistanceUnitsU3Ek__BackingField_41;
		return L_0;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_MinimumDistanceUnits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_MinimumDistanceUnits_mB14F1163880211ACEC425D96F556F3ADC37678A0 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinimumDistanceUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CMinimumDistanceUnitsU3Ek__BackingField_41 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.SwipeGestureRecognizer::get_MinimumSpeedUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwipeGestureRecognizer_get_MinimumSpeedUnits_mE61D830405A1A4C68766C1F5F96D55E0392A34F8 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public float MinimumSpeedUnits { get; set; }
		float L_0 = __this->___U3CMinimumSpeedUnitsU3Ek__BackingField_42;
		return L_0;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_MinimumSpeedUnits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_MinimumSpeedUnits_m92DB973707A7561F2CCB5792A8E5BA0F6C595308 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinimumSpeedUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CMinimumSpeedUnitsU3Ek__BackingField_42 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.SwipeGestureRecognizer::get_DirectionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwipeGestureRecognizer_get_DirectionThreshold_mF071696E8429DFB2CF7A360E5C484830861120BA (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public float DirectionThreshold { get; set; }
		float L_0 = __this->___U3CDirectionThresholdU3Ek__BackingField_43;
		return L_0;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_DirectionThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_DirectionThreshold_m9AEA9C4B56348BC557EE53B671331F8AADCE9D13 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float DirectionThreshold { get; set; }
		float L_0 = ___value0;
		__this->___U3CDirectionThresholdU3Ek__BackingField_43 = L_0;
		return;
	}
}
// DigitalRubyShared.SwipeGestureRecognizerEndMode DigitalRubyShared.SwipeGestureRecognizer::get_EndMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SwipeGestureRecognizer_get_EndMode_m31D5ECF1FE5A2B43A1ECAB19F09275008D821276 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerEndMode EndMode { get; set; }
		int32_t L_0 = __this->___U3CEndModeU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_EndMode(DigitalRubyShared.SwipeGestureRecognizerEndMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_EndMode_mC56E00DF49F1BB5CE1314ACCD789A264BA7D5591 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerEndMode EndMode { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CEndModeU3Ek__BackingField_44 = L_0;
		return;
	}
}
// System.Boolean DigitalRubyShared.SwipeGestureRecognizer::get_FailOnDirectionChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SwipeGestureRecognizer_get_FailOnDirectionChange_mC1198C9627491836A1AEAB01E81833092B79E61A (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public bool FailOnDirectionChange { get; set; }
		bool L_0 = __this->___U3CFailOnDirectionChangeU3Ek__BackingField_45;
		return L_0;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_FailOnDirectionChange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_FailOnDirectionChange_m85EDA4CD3C11894B3273A80DCDDA4062733CAC49 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool FailOnDirectionChange { get; set; }
		bool L_0 = ___value0;
		__this->___U3CFailOnDirectionChangeU3Ek__BackingField_45 = L_0;
		return;
	}
}
// DigitalRubyShared.SwipeGestureRecognizerDirection DigitalRubyShared.SwipeGestureRecognizer::get_EndDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SwipeGestureRecognizer_get_EndDirection_m1104E4EAC1EBE43CD1C19EE6F4CEFAA8D2B34B45 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerDirection EndDirection { get; private set; }
		int32_t L_0 = __this->___U3CEndDirectionU3Ek__BackingField_46;
		return L_0;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_EndDirection(DigitalRubyShared.SwipeGestureRecognizerDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_EndDirection_mA4457DBEDDBD5CE0FE9FD7B3C15D0E3A640FB565 (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerDirection EndDirection { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CEndDirectionU3Ek__BackingField_46 = L_0;
		return;
	}
}
// System.Boolean DigitalRubyShared.SwipeGestureRecognizer::get_SendBeginExecutingStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SwipeGestureRecognizer_get_SendBeginExecutingStates_m42E10AED5340CA5CB1BCE1F1CBE63F61674BA1DE (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SendBeginExecutingStates { get; set; }
		bool L_0 = __this->___U3CSendBeginExecutingStatesU3Ek__BackingField_47;
		return L_0;
	}
}
// System.Void DigitalRubyShared.SwipeGestureRecognizer::set_SendBeginExecutingStates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_SendBeginExecutingStates_mAFC2A8B86F4367EB1C416D4BDDEEE0007137185D (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SendBeginExecutingStates { get; set; }
		bool L_0 = ___value0;
		__this->___U3CSendBeginExecutingStatesU3Ek__BackingField_47 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRubyShared.TapGestureRecognizer::VerifyFailGestureAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_VerifyFailGestureAfterDelay_m37946D409BA9775C8D8B24DDF7CC9997D4396CFD (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// float elapsed = (float)timer.Elapsed.TotalSeconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___timer_41;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_0, NULL);
		V_1 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		V_0 = ((float)L_2);
		// if (State == GestureRecognizerState.Possible && elapsed >= ThresholdSeconds)
		int32_t L_3;
		L_3 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		float L_4 = V_0;
		float L_5;
		L_5 = TapGestureRecognizer_get_ThresholdSeconds_m35AF79935A9BDA92CD5AAC6D10BA4F693A77F3F4_inline(__this, NULL);
		G_B3_0 = ((((int32_t)((!(((float)L_4) >= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_7;
		L_7 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::FailGestureAfterDelayIfNoTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_FailGestureAfterDelayIfNoTap_m941C8E498E0C3426BB9615A400D6AED4909CB0DF (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapGestureRecognizer_VerifyFailGestureAfterDelay_m37946D409BA9775C8D8B24DDF7CC9997D4396CFD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunActionAfterDelay(ThresholdSeconds, VerifyFailGestureAfterDelay);
		float L_0;
		L_0 = TapGestureRecognizer_get_ThresholdSeconds_m35AF79935A9BDA92CD5AAC6D10BA4F693A77F3F4_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)TapGestureRecognizer_VerifyFailGestureAfterDelay_m37946D409BA9775C8D8B24DDF7CC9997D4396CFD_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		GestureRecognizer_RunActionAfterDelay_mBF5845212FFD8D86F89D2815F8BC7524B10D762C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::StateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_StateChanged_m9EE388F80FDD4F23D9CB9AF173E4126C69EEE989 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mEA79C6994CE04616CCF357571B6F2D2B9E49C0E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// base.StateChanged();
		GestureRecognizer_StateChanged_mE285E539EC26D862C3FABF6352B36781E3A37063(__this, NULL);
		// if (State == GestureRecognizerState.Failed || State == GestureRecognizerState.Ended)
		int32_t L_0;
		L_0 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1;
		L_1 = GestureRecognizer_get_State_mDA5889204CA1F7E709A16AA97E1C88F77D3D4829(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)8))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// tapCount = 0;
		__this->___tapCount_40 = 0;
		// timer.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = __this->___timer_41;
		NullCheck(L_3);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_3, NULL);
		// tapTouches.Clear();
		List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* L_4 = __this->___tapTouches_42;
		NullCheck(L_4);
		List_1_Clear_mEA79C6994CE04616CCF357571B6F2D2B9E49C0E5_inline(L_4, List_1_Clear_mEA79C6994CE04616CCF357571B6F2D2B9E49C0E5_RuntimeMethod_var);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::TouchesBegan(System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_TouchesBegan_m44F2432B259C9EE5547D329294BCF228E59EABF4 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, RuntimeObject* ___touches0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1845670C5ECB1046E2E5D7AF49DDCC382977261B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5E680DDB92B1E735BE19C238B7F931B7877C5CFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB2EC6F070958447A3539FD4B51C2C8E49D2FE1B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B13_0 = 0;
	{
		// foreach (GestureTouch touch in touches)
		RuntimeObject* L_0 = ___touches0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>::GetEnumerator() */, IEnumerable_1_t1845670C5ECB1046E2E5D7AF49DDCC382977261B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_004b;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_000b_1:
			{
				// foreach (GestureTouch touch in touches)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_5;
				L_5 = InterfaceFuncInvoker0< GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<DigitalRubyShared.GestureTouch>::get_Current() */, IEnumerator_1_t5E680DDB92B1E735BE19C238B7F931B7877C5CFC_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// if (!IgnoreTouch(touch.Id))
				int32_t L_6;
				L_6 = GestureTouch_get_Id_m46BF75C9F00E3753BA0829F13756D12D75336728((&V_1), NULL);
				bool L_7;
				L_7 = GestureRecognizer_IgnoreTouch_mE7E00FC8565FA2C8C8FAC72E1259B0736A8E2923(__this, L_6, NULL);
				V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0036_1;
				}
			}
			{
				// SetState(GestureRecognizerState.Failed);
				bool L_9;
				L_9 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
				// return;
				goto IL_00f0;
			}

IL_0036_1:
			{
			}

IL_0037_1:
			{
				// foreach (GestureTouch touch in touches)
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_12;
		L_12 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_13;
		L_13 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_12, NULL);
		// timer.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_14 = __this->___timer_41;
		NullCheck(L_14);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_14, NULL);
		// timer.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_15 = __this->___timer_41;
		NullCheck(L_15);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_15, NULL);
		// if (SendBeginState && TrackedTouchCountIsWithinRange)
		bool L_16;
		L_16 = TapGestureRecognizer_get_SendBeginState_m6CB54E9FAD0773BDC10750C001312EB054DF71AF_inline(__this, NULL);
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		bool L_17;
		L_17 = GestureRecognizer_get_TrackedTouchCountIsWithinRange_m6211A0006567032EE2E40E1D54AD991725C03405(__this, NULL);
		G_B13_0 = ((int32_t)(L_17));
		goto IL_0082;
	}

IL_0081:
	{
		G_B13_0 = 0;
	}

IL_0082:
	{
		V_3 = (bool)G_B13_0;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0092;
		}
	}
	{
		// SetState(GestureRecognizerState.Began);
		bool L_19;
		L_19 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 2, NULL);
		goto IL_009c;
	}

IL_0092:
	{
		// SetState(GestureRecognizerState.Possible);
		bool L_20;
		L_20 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 1, NULL);
	}

IL_009c:
	{
		// if (tapCount == 0)
		int32_t L_21 = __this->___tapCount_40;
		V_4 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		// TrackCurrentTrackedTouchesStartLocations();
		GestureRecognizer_TrackCurrentTrackedTouchesStartLocations_mB7F7AB5EC7FB56AD78861A90701E01D5A8F264DB(__this, NULL);
	}

IL_00b4:
	{
		// foreach (GestureTouch touch in touches)
		RuntimeObject* L_23 = ___touches0;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<DigitalRubyShared.GestureTouch>::GetEnumerator() */, IEnumerable_1_t1845670C5ECB1046E2E5D7AF49DDCC382977261B_il2cpp_TypeInfo_var, L_23);
		V_5 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e3:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_25 = V_5;
					if (!L_25)
					{
						goto IL_00ef;
					}
				}
				{
					RuntimeObject* L_26 = V_5;
					NullCheck(L_26);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
				}

IL_00ef:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d8_1;
			}

IL_00bf_1:
			{
				// foreach (GestureTouch touch in touches)
				RuntimeObject* L_27 = V_5;
				NullCheck(L_27);
				GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_28;
				L_28 = InterfaceFuncInvoker0< GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<DigitalRubyShared.GestureTouch>::get_Current() */, IEnumerator_1_t5E680DDB92B1E735BE19C238B7F931B7877C5CFC_il2cpp_TypeInfo_var, L_27);
				V_6 = L_28;
				// tapTouches.Add(touch);
				List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* L_29 = __this->___tapTouches_42;
				GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_30 = V_6;
				NullCheck(L_29);
				List_1_Add_mB2EC6F070958447A3539FD4B51C2C8E49D2FE1B0_inline(L_29, L_30, List_1_Add_mB2EC6F070958447A3539FD4B51C2C8E49D2FE1B0_RuntimeMethod_var);
			}

IL_00d8_1:
			{
				// foreach (GestureTouch touch in touches)
				RuntimeObject* L_31 = V_5;
				NullCheck(L_31);
				bool L_32;
				L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
				if (L_32)
				{
					goto IL_00bf_1;
				}
			}
			{
				goto IL_00f0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::TouchesMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_TouchesMoved_m0F88291472CC83E78BF05EA415196161BA026C07 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0;
		L_0 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_1;
		L_1 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_0, NULL);
		// if (timer.Elapsed.TotalSeconds >= ThresholdSeconds)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = __this->___timer_41;
		NullCheck(L_2);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_2, NULL);
		V_1 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		float L_5;
		L_5 = TapGestureRecognizer_get_ThresholdSeconds_m35AF79935A9BDA92CD5AAC6D10BA4F693A77F3F4_inline(__this, NULL);
		V_0 = (bool)((((int32_t)((!(((double)L_4) >= ((double)((double)L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_7;
		L_7 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::TouchesEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_TouchesEnded_mC0DF234C8E91AFAACF8C01E390366E66F7A88FDC (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// if ((float)timer.Elapsed.TotalSeconds <= ThresholdSeconds)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___timer_41;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_0, NULL);
		V_1 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		float L_3;
		L_3 = TapGestureRecognizer_get_ThresholdSeconds_m35AF79935A9BDA92CD5AAC6D10BA4F693A77F3F4_inline(__this, NULL);
		V_0 = (bool)((((int32_t)((!(((float)((float)L_2)) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00a8;
		}
	}
	{
		// CalculateFocus(CurrentTrackedTouches);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_5;
		L_5 = GestureRecognizer_get_CurrentTrackedTouches_mFA62247BBC6940F2EC65157512100885272A845A(__this, NULL);
		bool L_6;
		L_6 = GestureRecognizer_CalculateFocus_m42204254574A91C0CDF1182431107E0F5476F2D9(__this, L_5, NULL);
		// bool touchesAreWithinDistance = AreTrackedTouchesWithinDistance(ThresholdUnits);
		float L_7;
		L_7 = TapGestureRecognizer_get_ThresholdUnits_m48B1F423D4112DD672618F48E559F83CCE698797_inline(__this, NULL);
		bool L_8;
		L_8 = GestureRecognizer_AreTrackedTouchesWithinDistance_m58CA730CDA5799B0B993FB09AFB2456ED46E3472(__this, L_7, NULL);
		V_2 = L_8;
		// if (touchesAreWithinDistance)
		bool L_9 = V_2;
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_009a;
		}
	}
	{
		// if (++tapCount == NumberOfTapsRequired)
		int32_t L_11 = __this->___tapCount_40;
		V_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_5;
		__this->___tapCount_40 = L_12;
		int32_t L_13 = V_5;
		int32_t L_14;
		L_14 = TapGestureRecognizer_get_NumberOfTapsRequired_mEB73A3EE08C4273F35692F196BC446CC8DA86D95_inline(__this, NULL);
		V_4 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		// SetState(GestureRecognizerState.Ended);
		bool L_16;
		L_16 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, 8, NULL);
		goto IL_0097;
	}

IL_0076:
	{
		// timer.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_17 = __this->___timer_41;
		NullCheck(L_17);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_17, NULL);
		// timer.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_18 = __this->___timer_41;
		NullCheck(L_18);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_18, NULL);
		// FailGestureAfterDelayIfNoTap();
		TapGestureRecognizer_FailGestureAfterDelayIfNoTap_m941C8E498E0C3426BB9615A400D6AED4909CB0DF(__this, NULL);
	}

IL_0097:
	{
		goto IL_00a5;
	}

IL_009a:
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_19;
		L_19 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
	}

IL_00a5:
	{
		goto IL_00b3;
	}

IL_00a8:
	{
		// SetState(GestureRecognizerState.Failed);
		bool L_20;
		L_20 = GestureRecognizer_SetState_m50B3F60FD2454FE469D9E713CA388115EDEB3FCD(__this, ((int32_t)32), NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer__ctor_m24A756414BC4F9AF4AC1DB482A00155DB310D703 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AsReadOnly_mD87BDCD5E58F16EFA29D983BF5AFE610F68AD599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA7506B82AFE85D74C76361D4AC5F3924AA9D3F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Stopwatch timer = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_0, NULL);
		__this->___timer_41 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timer_41), (void*)L_0);
		// private readonly List<GestureTouch> tapTouches = new List<GestureTouch>();
		List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* L_1 = (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048*)il2cpp_codegen_object_new(List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA7506B82AFE85D74C76361D4AC5F3924AA9D3F6E(L_1, List_1__ctor_mA7506B82AFE85D74C76361D4AC5F3924AA9D3F6E_RuntimeMethod_var);
		__this->___tapTouches_42 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tapTouches_42), (void*)L_1);
		// public TapGestureRecognizer()
		il2cpp_codegen_runtime_class_init_inline(GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_mEBACEE1EC3B2AF958D0A75F9A2E2AC3CD730CB5E(__this, NULL);
		// NumberOfTapsRequired = 1;
		TapGestureRecognizer_set_NumberOfTapsRequired_m41FED628A08127457E118CE54EFE86F8BA76DFCB_inline(__this, 1, NULL);
		// ThresholdSeconds = 0.4f;
		TapGestureRecognizer_set_ThresholdSeconds_m232FD5EFF5C4415D858EE1CD7B01A21A34A258D9_inline(__this, (0.400000006f), NULL);
		// ThresholdUnits = 0.3f;
		TapGestureRecognizer_set_ThresholdUnits_m0BEC313660F5D2F221878B98BB4342547638D4F4_inline(__this, (0.300000012f), NULL);
		// TapTouches = tapTouches.AsReadOnly();
		List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* L_2 = __this->___tapTouches_42;
		NullCheck(L_2);
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_3;
		L_3 = List_1_AsReadOnly_mD87BDCD5E58F16EFA29D983BF5AFE610F68AD599(L_2, List_1_AsReadOnly_mD87BDCD5E58F16EFA29D983BF5AFE610F68AD599_RuntimeMethod_var);
		TapGestureRecognizer_set_TapTouches_m2EEFD6F35F4ADFA0AFCB90E087B176DC83C9B818_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.String DigitalRubyShared.TapGestureRecognizer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TapGestureRecognizer_ToString_m40A775E5873DE7E0EF5C10DC10C3BD7DF5D4ECC5 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// return base.ToString() + "; " + MinimumNumberOfTouchesToTrack + "," + MaximumNumberOfTouchesToTrack + "," + NumberOfTapsRequired + ",";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = GestureRecognizer_ToString_m4033B1B9330341075788A38ECBD029374A7C9FE2(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		int32_t L_5;
		L_5 = GestureRecognizer_get_MinimumNumberOfTouchesToTrack_mECF4C626E667CED7D0C11923EEAF36309D784E1F(__this, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		int32_t L_9;
		L_9 = GestureRecognizer_get_MaximumNumberOfTouchesToTrack_mA56A864D513371B737DCD1E30B38BE4C3C9E33E8(__this, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		int32_t L_13;
		L_13 = TapGestureRecognizer_get_NumberOfTapsRequired_mEB73A3EE08C4273F35692F196BC446CC8DA86D95_inline(__this, NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		V_1 = L_16;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.Int32 DigitalRubyShared.TapGestureRecognizer::get_NumberOfTapsRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TapGestureRecognizer_get_NumberOfTapsRequired_mEB73A3EE08C4273F35692F196BC446CC8DA86D95 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	{
		// public int NumberOfTapsRequired { get; set; }
		int32_t L_0 = __this->___U3CNumberOfTapsRequiredU3Ek__BackingField_43;
		return L_0;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::set_NumberOfTapsRequired(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_NumberOfTapsRequired_m41FED628A08127457E118CE54EFE86F8BA76DFCB (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int NumberOfTapsRequired { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CNumberOfTapsRequiredU3Ek__BackingField_43 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.TapGestureRecognizer::get_ThresholdSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapGestureRecognizer_get_ThresholdSeconds_m35AF79935A9BDA92CD5AAC6D10BA4F693A77F3F4 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdSeconds { get; set; }
		float L_0 = __this->___U3CThresholdSecondsU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::set_ThresholdSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_ThresholdSeconds_m232FD5EFF5C4415D858EE1CD7B01A21A34A258D9 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdSeconds { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdSecondsU3Ek__BackingField_44 = L_0;
		return;
	}
}
// System.Single DigitalRubyShared.TapGestureRecognizer::get_ThresholdUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapGestureRecognizer_get_ThresholdUnits_m48B1F423D4112DD672618F48E559F83CCE698797 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_45;
		return L_0;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::set_ThresholdUnits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_ThresholdUnits_m0BEC313660F5D2F221878B98BB4342547638D4F4 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_45 = L_0;
		return;
	}
}
// System.Boolean DigitalRubyShared.TapGestureRecognizer::get_SendBeginState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapGestureRecognizer_get_SendBeginState_m6CB54E9FAD0773BDC10750C001312EB054DF71AF (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	{
		// public bool SendBeginState { get; set; }
		bool L_0 = __this->___U3CSendBeginStateU3Ek__BackingField_46;
		return L_0;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::set_SendBeginState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_SendBeginState_m92A064F3742194583DE5204487472867B47E6A59 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SendBeginState { get; set; }
		bool L_0 = ___value0;
		__this->___U3CSendBeginStateU3Ek__BackingField_46 = L_0;
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch> DigitalRubyShared.TapGestureRecognizer::get_TapTouches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* TapGestureRecognizer_get_TapTouches_m144AE70A55AE44C84A5DE52BACE83B2F306D47DD (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	{
		// public System.Collections.ObjectModel.ReadOnlyCollection<GestureTouch> TapTouches { get; private set; }
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0 = __this->___U3CTapTouchesU3Ek__BackingField_47;
		return L_0;
	}
}
// System.Void DigitalRubyShared.TapGestureRecognizer::set_TapTouches(System.Collections.ObjectModel.ReadOnlyCollection`1<DigitalRubyShared.GestureTouch>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_TapTouches_m2EEFD6F35F4ADFA0AFCB90E087B176DC83C9B818 (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* ___value0, const RuntimeMethod* method) 
{
	{
		// public System.Collections.ObjectModel.ReadOnlyCollection<GestureTouch> TapTouches { get; private set; }
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0 = ___value0;
		__this->___U3CTapTouchesU3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTapTouchesU3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_DistanceX_m832F5DF8A2D767C62D9A465A92B15A3E125428F6_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) 
{
	{
		// public float DistanceX { get; private set; }
		float L_0 = __this->___U3CDistanceXU3Ek__BackingField_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_DistanceY_m5EC4F01DD3BAA8BE091C51FB4D818F36F607DB07_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) 
{
	{
		// public float DistanceY { get; private set; }
		float L_0 = __this->___U3CDistanceYU3Ek__BackingField_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LongPressGestureRecognizer_get_ThresholdUnits_mC8D0F40194CD948DE12605F11D2DEFEBE3375772_inline (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LongPressGestureRecognizer_get_MinimumDurationSeconds_m171DB44C3862E41B1250612CE5E8865943856234_inline (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, const RuntimeMethod* method) 
{
	{
		// public float MinimumDurationSeconds { get; set; }
		float L_0 = __this->___U3CMinimumDurationSecondsU3Ek__BackingField_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LongPressGestureRecognizer_set_MinimumDurationSeconds_m844E573DDE24181F056C96A5B7FBC6EF6FA7C240_inline (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinimumDurationSeconds { get; set; }
		float L_0 = ___value0;
		__this->___U3CMinimumDurationSecondsU3Ek__BackingField_41 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LongPressGestureRecognizer_set_ThresholdUnits_m1C05C1396EF1FC41811BF2B4B9E5F14DB2768D52_inline (LongPressGestureRecognizer_t107E53623C9DA5F0AEEBB19C8111CA7A75BD5A01* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_42 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureRecognizer_set_ClearTrackedTouchesOnEndOrFail_m72516ADEF9E70B0978D4451C5C288D55BA3EF3CE_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ClearTrackedTouchesOnEndOrFail { get; set; }
		bool L_0 = ___value0;
		__this->___U3CClearTrackedTouchesOnEndOrFailU3Ek__BackingField_36 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_ThresholdUnits_mE024B7E7C42AA3F00847145F3314795CBFC2EA08_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_45 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_AngleThreshold_mA3B6C9E68B2E40A2342CE00FF0EB200255DAF4C0_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float AngleThreshold { get; set; }
		float L_0 = ___value0;
		__this->___U3CAngleThresholdU3Ek__BackingField_44 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ScaleMultiplierY_m8528AC2141E5B5AB975EAF29FB04991052A42550_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierY { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierYU3Ek__BackingField_42 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ScaleMultiplierX_m39E4F9BDB2E663560840EC16EBC9145547DC3DD8_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierX { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierXU3Ek__BackingField_41 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ScaleMultiplier_m377C71DDFB24B4824D77E918ED3625B580EC4F98_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplier { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierU3Ek__BackingField_40 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ThresholdUnits_mC55F67EC7191C802C0F4A2EB4EFB435D27E79E52_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_44 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneTouchScaleGestureRecognizer_set_ZoomSpeed_m50C3C7B0E398FC5533DA78757D20364CFD17919F_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ZoomSpeed { get; set; }
		float L_0 = ___value0;
		__this->___U3CZoomSpeedU3Ek__BackingField_43 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OneTouchScaleGestureRecognizer_get_ThresholdUnits_mD40296854A8E432E6B0CADD5FE3E4E6B8976ECA7_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_DeltaX_m70D6F475569F5549BF796C2EB4B6A7B2DB8184EB_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) 
{
	{
		// public float DeltaX { get; private set; }
		float L_0 = __this->___U3CDeltaXU3Ek__BackingField_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_DeltaY_mE0C9E77267CD90251D953AFBF0B193BE8320A506_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) 
{
	{
		// public float DeltaY { get; private set; }
		float L_0 = __this->___U3CDeltaYU3Ek__BackingField_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OneTouchScaleGestureRecognizer_get_ZoomSpeed_m7E62700F7380134413B95A79E4715A971CFE69A4_inline (OneTouchScaleGestureRecognizer_t621E5C565382278354C8B91743B38348598100FD* __this, const RuntimeMethod* method) 
{
	{
		// public float ZoomSpeed { get; set; }
		float L_0 = __this->___U3CZoomSpeedU3Ek__BackingField_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanGestureRecognizer_get_ThresholdUnits_m54A4A3F83B5549DB7A6E50A6D606E2DB07E9617A_inline (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PanGestureRecognizer_set_ThresholdUnits_m36EA1D9F0B7330518B62986AAE476EC262325B29_inline (PanGestureRecognizer_t1284A0653E70EA079BF34FB8FE88D7672D0B0760* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_40 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_RotationRadians_m3A89384BCF97BDCE76B4DDF0E15BC5DD47ED674A_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RotationRadians { get; private set; }
		float L_0 = ___value0;
		__this->___U3CRotationRadiansU3Ek__BackingField_46 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotateGestureRecognizer_set_RotationRadiansDelta_m36EFFFA28815AB7097DFEB9800DB04791DB52A46_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RotationRadiansDelta { get; private set; }
		float L_0 = ___value0;
		__this->___U3CRotationRadiansDeltaU3Ek__BackingField_47 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_ThresholdUnits_m67ED5ED420D83CAC8BE2CE0D559295B7B0294DF3_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_AngleThreshold_m37CDF69A7BBF0E5585E3D3AA1435250B40B7FB0E_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleThreshold { get; set; }
		float L_0 = __this->___U3CAngleThresholdU3Ek__BackingField_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_RotationRadians_m086977451498A2B2CB3A56C9DAA0E5DE61D06A63_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	{
		// public float RotationRadians { get; private set; }
		float L_0 = __this->___U3CRotationRadiansU3Ek__BackingField_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RotateGestureRecognizer_get_RotationRadiansDelta_mDE6215E78B3317A6F796ADC2E37AA1F87C736FDE_inline (RotateGestureRecognizer_t652FAA7796697FF950FBDADEF2E08328F12EDB4C* __this, const RuntimeMethod* method) 
{
	{
		// public float RotationRadiansDelta { get; private set; }
		float L_0 = __this->___U3CRotationRadiansDeltaU3Ek__BackingField_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ScaleMultiplierY_m95F7894191EE16E2E18145BF9703994449150D30_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierY { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierYU3Ek__BackingField_54 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ScaleMultiplierX_m0C406AF058358952FF022170B305E4597F39E4C2_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplierX { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierXU3Ek__BackingField_53 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ScaleMultiplier_m7AAC4140A6F24253403C5BBE5604120DB9CA46C3_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ScaleMultiplier { get; private set; }
		float L_0 = ___value0;
		__this->___U3CScaleMultiplierU3Ek__BackingField_52 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ZoomSpeed_m578209AD6DA4C73F63A4698136A28F258EB3E658_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ZoomSpeed { get; set; }
		float L_0 = ___value0;
		__this->___U3CZoomSpeedU3Ek__BackingField_55 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleGestureRecognizer_set_ThresholdUnits_m72DDDE6F174AC1689A65F35F3524B0EE66359E63_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_56 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_get_ZoomSpeed_mA1B1AC37F1563F18FB3F00D6AE3C96EFF4F04E6F_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	{
		// public float ZoomSpeed { get; set; }
		float L_0 = __this->___U3CZoomSpeedU3Ek__BackingField_55;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScaleGestureRecognizer_get_ThresholdUnits_m680F0AC86F8881D8E9F6CD38A51826E281453956_inline (ScaleGestureRecognizer_t46F7DE90175A973DB480CC20B14DCF0DB10364B7* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_56;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SwipeGestureRecognizer_get_EndDirection_m1104E4EAC1EBE43CD1C19EE6F4CEFAA8D2B34B45_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerDirection EndDirection { get; private set; }
		int32_t L_0 = __this->___U3CEndDirectionU3Ek__BackingField_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SwipeGestureRecognizer_get_DirectionThreshold_mF071696E8429DFB2CF7A360E5C484830861120BA_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public float DirectionThreshold { get; set; }
		float L_0 = __this->___U3CDirectionThresholdU3Ek__BackingField_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_EndDirection_mA4457DBEDDBD5CE0FE9FD7B3C15D0E3A640FB565_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerDirection EndDirection { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CEndDirectionU3Ek__BackingField_46 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SwipeGestureRecognizer_get_FailOnDirectionChange_mC1198C9627491836A1AEAB01E81833092B79E61A_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public bool FailOnDirectionChange { get; set; }
		bool L_0 = __this->___U3CFailOnDirectionChangeU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SwipeGestureRecognizer_get_MinimumSpeedUnits_mE61D830405A1A4C68766C1F5F96D55E0392A34F8_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public float MinimumSpeedUnits { get; set; }
		float L_0 = __this->___U3CMinimumSpeedUnitsU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_StartFocusX_m19E3A7698965AECF6A051C1616C94D63D5B307A5_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) 
{
	{
		// public float StartFocusX { get; private set; }
		float L_0 = __this->___U3CStartFocusXU3Ek__BackingField_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_StartFocusY_m58457DFD7A1D26DBF223D5DB7F159DE29FB8AACD_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) 
{
	{
		// public float StartFocusY { get; private set; }
		float L_0 = __this->___U3CStartFocusYU3Ek__BackingField_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_FocusX_m3F912DE62E39B70C8E65A0B3550643F72C91DE2E_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) 
{
	{
		// public float FocusX { get; private set; }
		float L_0 = __this->___U3CFocusXU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GestureRecognizer_get_FocusY_m8C561F04D9CDA67B9341AF0F4DF2AEABC95641E1_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) 
{
	{
		// public float FocusY { get; private set; }
		float L_0 = __this->___U3CFocusYU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SwipeGestureRecognizer_get_MinimumDistanceUnits_mC62DC0A0BA2CFB526AF0DBCF2FC066343D78AEA8_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public float MinimumDistanceUnits { get; set; }
		float L_0 = __this->___U3CMinimumDistanceUnitsU3Ek__BackingField_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SwipeGestureRecognizer_get_Direction_m1EAFA48B031E7EF61FE0A3B69A48B55BBA155068_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerDirection Direction { get; set; }
		int32_t L_0 = __this->___U3CDirectionU3Ek__BackingField_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GestureRecognizer_get_ClearTrackedTouchesOnEndOrFail_mC36464B2FAB433BC34A2D5ED524FE56495469C45_inline (GestureRecognizer_tE235160D1C6868D7D1EE5BF2623FDEB0FEFEA5BA* __this, const RuntimeMethod* method) 
{
	{
		// public bool ClearTrackedTouchesOnEndOrFail { get; set; }
		bool L_0 = __this->___U3CClearTrackedTouchesOnEndOrFailU3Ek__BackingField_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SwipeGestureRecognizer_get_EndMode_m31D5ECF1FE5A2B43A1ECAB19F09275008D821276_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerEndMode EndMode { get; set; }
		int32_t L_0 = __this->___U3CEndModeU3Ek__BackingField_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SwipeGestureRecognizer_get_SendBeginExecutingStates_m42E10AED5340CA5CB1BCE1F1CBE63F61674BA1DE_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, const RuntimeMethod* method) 
{
	{
		// public bool SendBeginExecutingStates { get; set; }
		bool L_0 = __this->___U3CSendBeginExecutingStatesU3Ek__BackingField_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_Direction_m7295FD2EC50071DA9A232D2455287E3A88DEF085_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerDirection Direction { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CDirectionU3Ek__BackingField_40 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_MinimumDistanceUnits_mB14F1163880211ACEC425D96F556F3ADC37678A0_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinimumDistanceUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CMinimumDistanceUnitsU3Ek__BackingField_41 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_MinimumSpeedUnits_m92DB973707A7561F2CCB5792A8E5BA0F6C595308_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinimumSpeedUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CMinimumSpeedUnitsU3Ek__BackingField_42 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_DirectionThreshold_m9AEA9C4B56348BC557EE53B671331F8AADCE9D13_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float DirectionThreshold { get; set; }
		float L_0 = ___value0;
		__this->___U3CDirectionThresholdU3Ek__BackingField_43 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_EndMode_mC56E00DF49F1BB5CE1314ACCD789A264BA7D5591_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SwipeGestureRecognizerEndMode EndMode { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CEndModeU3Ek__BackingField_44 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SwipeGestureRecognizer_set_SendBeginExecutingStates_mAFC2A8B86F4367EB1C416D4BDDEEE0007137185D_inline (SwipeGestureRecognizer_t3D1D3F8F608CB66ACE7443EFEBD2D08FA041E0F8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SendBeginExecutingStates { get; set; }
		bool L_0 = ___value0;
		__this->___U3CSendBeginExecutingStatesU3Ek__BackingField_47 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapGestureRecognizer_get_ThresholdSeconds_m35AF79935A9BDA92CD5AAC6D10BA4F693A77F3F4_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdSeconds { get; set; }
		float L_0 = __this->___U3CThresholdSecondsU3Ek__BackingField_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapGestureRecognizer_get_SendBeginState_m6CB54E9FAD0773BDC10750C001312EB054DF71AF_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	{
		// public bool SendBeginState { get; set; }
		bool L_0 = __this->___U3CSendBeginStateU3Ek__BackingField_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapGestureRecognizer_get_ThresholdUnits_m48B1F423D4112DD672618F48E559F83CCE698797_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = __this->___U3CThresholdUnitsU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TapGestureRecognizer_get_NumberOfTapsRequired_mEB73A3EE08C4273F35692F196BC446CC8DA86D95_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, const RuntimeMethod* method) 
{
	{
		// public int NumberOfTapsRequired { get; set; }
		int32_t L_0 = __this->___U3CNumberOfTapsRequiredU3Ek__BackingField_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_NumberOfTapsRequired_m41FED628A08127457E118CE54EFE86F8BA76DFCB_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int NumberOfTapsRequired { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CNumberOfTapsRequiredU3Ek__BackingField_43 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_ThresholdSeconds_m232FD5EFF5C4415D858EE1CD7B01A21A34A258D9_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdSeconds { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdSecondsU3Ek__BackingField_44 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_ThresholdUnits_m0BEC313660F5D2F221878B98BB4342547638D4F4_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ThresholdUnits { get; set; }
		float L_0 = ___value0;
		__this->___U3CThresholdUnitsU3Ek__BackingField_45 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapGestureRecognizer_set_TapTouches_m2EEFD6F35F4ADFA0AFCB90E087B176DC83C9B818_inline (TapGestureRecognizer_t902A6385A8AA855CA351E59B3BDB7E65632A4007* __this, ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* ___value0, const RuntimeMethod* method) 
{
	{
		// public System.Collections.ObjectModel.ReadOnlyCollection<GestureTouch> TapTouches { get; private set; }
		ReadOnlyCollection_1_t6EB23A28EF64C4862B82D1C465991FADE7E0103E* L_0 = ___value0;
		__this->___U3CTapTouchesU3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTapTouchesU3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mEA79C6994CE04616CCF357571B6F2D2B9E49C0E5_gshared_inline (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0* L_3 = (GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB2EC6F070958447A3539FD4B51C2C8E49D2FE1B0_gshared_inline (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048* __this, GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 ___item0, const RuntimeMethod* method) 
{
	GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0* L_1 = (GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		GestureTouchU5BU5D_t5B956B760F83EA226A89E87DB71061393B4724D0* L_6 = V_0;
		int32_t L_7 = V_1;
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1)L_8);
		return;
	}

IL_0034:
	{
		GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1 L_9 = ___item0;
		((  void (*) (List_1_t738D9511C6BC533F5F73A61E809B7DFFBF164048*, GestureTouch_t0F539B9B3271CE13312F153C85D23F7D693FC2E1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
