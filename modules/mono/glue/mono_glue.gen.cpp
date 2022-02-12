/* THIS FILE IS GENERATED DO NOT EDIT */
#include "glue_header.h"

#ifdef MONO_GLUE_ENABLED
int32_t godot_icall_3_0(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, MonoArray* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	PoolByteArray arg3_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_1_1(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

MonoArray* godot_icall_0_2(MethodBind* method, Object* ptr) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

void godot_icall_0_3(MethodBind* method, Object* ptr) {
	ERR_FAIL_NULL(ptr);
	method->ptrcall(ptr, NULL, NULL);
}

Object* godot_icall_AESContext_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AESContext");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_4(MethodBind* method, Object* ptr, int32_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_5(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_0_6(MethodBind* method, Object* ptr) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoBoolean godot_icall_0_7(MethodBind* method, Object* ptr) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	method->ptrcall(ptr, NULL, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_0_8(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_0_9(MethodBind* method, Object* ptr, GDMonoMarshal::M_Plane* arg_ret) {
	Plane ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Plane(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(Plane, ret);
}

MonoObject* godot_icall_0_10(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ARVRAnchor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRAnchor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ARVRCamera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRCamera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_11(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

float godot_icall_1_12(MethodBind* method, Object* ptr, int32_t arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

int32_t godot_icall_0_13(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

float godot_icall_0_14(MethodBind* method, Object* ptr) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	method->ptrcall(ptr, NULL, &ret);
	return (float)ret;
}

void godot_icall_1_15(MethodBind* method, Object* ptr, float arg1) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_ARVRController_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRController");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_16(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_17(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_0_18(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

Object* godot_icall_ARVRInterfaceGDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRInterfaceGDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ARVROrigin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVROrigin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_19(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_0_20(MethodBind* method, Object* ptr, GDMonoMarshal::M_Basis* arg_ret) {
	Basis ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Basis(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(Basis, ret);
}

void godot_icall_1_21(MethodBind* method, Object* ptr, MonoBoolean arg1, GDMonoMarshal::M_Transform* arg_ret) {
	Transform ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform, ret);
}

Object* godot_icall_ARVRPositionalTracker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ARVRPositionalTracker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_0_22(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform* arg_ret) {
	Transform ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(Transform, ret);
}

void godot_icall_2_23(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_24(MethodBind* method, Object* ptr, Object* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_25(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Array* godot_icall_0_26(MethodBind* method, Object* ptr) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return memnew(Array(ret));
}

MonoObject* godot_icall_1_27(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_28(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_29(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

uint64_t godot_icall_0_30(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	method->ptrcall(ptr, NULL, &ret);
	return (uint64_t)ret;
}

Object* godot_icall_ARVRServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ARVRServer");
}

void godot_icall_3_31(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector3* arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_32(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_2_33(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector3* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_34(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_1_35(MethodBind* method, Object* ptr, int32_t arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_1_36(MethodBind* method, Object* ptr, int32_t arg1) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

void godot_icall_3_37(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_3_38(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int32_t godot_icall_2_39(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_1_40(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

MonoArray* godot_icall_2_41(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_42(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

Object* godot_icall_AStar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AStar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_43(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_44(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_2_45(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_46(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_2_47(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int32_t godot_icall_2_48(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_1_49(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

MonoArray* godot_icall_2_50(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

Object* godot_icall_AStar2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AStar2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_51(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_52(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_3_53(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, MonoString* arg3) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_54(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_55(MethodBind* method, Object* ptr, Object* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_56(MethodBind* method, Object* ptr, MonoString* arg1) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_AcceptDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AcceptDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_57(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_58(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_59(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_AnimatedSprite_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedSprite");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimatedSprite3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedSprite3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_60(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_61(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AnimatedTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_62(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_63(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

NodePath* godot_icall_1_64(MethodBind* method, Object* ptr, int32_t arg1) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

void godot_icall_2_65(MethodBind* method, Object* ptr, int32_t arg1, NodePath* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_1_66(MethodBind* method, Object* ptr, NodePath* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_5_67(MethodBind* method, Object* ptr, int32_t arg1, float arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Quat* arg4, GDMonoMarshal::M_Vector3* arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	Quat arg4_in = MARSHALLED_IN(Quat, arg4);
	Vector3 arg5_in = MARSHALLED_IN(Vector3, arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_68(MethodBind* method, Object* ptr, int32_t arg1, float arg2, MonoObject* arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_69(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_70(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

float godot_icall_2_71(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_2_72(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int32_t godot_icall_3_73(MethodBind* method, Object* ptr, int32_t arg1, float arg2, MonoBoolean arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_74(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Array* godot_icall_2_75(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

int32_t godot_icall_1_76(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_3_77(MethodBind* method, Object* ptr, int32_t arg1, float arg2, float arg3) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

MonoObject* godot_icall_2_78(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoString* godot_icall_2_79(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Array* godot_icall_2_80(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

int32_t godot_icall_5_81(MethodBind* method, Object* ptr, int32_t arg1, float arg2, float arg3, GDMonoMarshal::M_Vector2* arg4, GDMonoMarshal::M_Vector2* arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_82(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_83(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

float godot_icall_2_84(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

int32_t godot_icall_5_85(MethodBind* method, Object* ptr, int32_t arg1, float arg2, Object* arg3, float arg4, float arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_86(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_87(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_3_88(MethodBind* method, Object* ptr, int32_t arg1, float arg2, MonoString* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_89(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Animation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Animation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoString* godot_icall_1_90(MethodBind* method, Object* ptr, int32_t arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_2_91(MethodBind* method, Object* ptr, NodePath* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_1_92(MethodBind* method, Object* ptr, NodePath* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_1_93(MethodBind* method, Object* ptr, Array* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_94(MethodBind* method, Object* ptr, MonoString* arg1, float arg2, float arg3, MonoBoolean arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

float godot_icall_7_95(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, float arg3, MonoBoolean arg4, float arg5, int32_t arg6, MonoBoolean arg7) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

float godot_icall_6_96(MethodBind* method, Object* ptr, int32_t arg1, float arg2, MonoBoolean arg3, float arg4, int32_t arg5, MonoBoolean arg6) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	bool arg3_in = (bool)arg3;
	double arg4_in = (double)arg4;
	int64_t arg5_in = (int64_t)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_2_97(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_98(MethodBind* method, Object* ptr, MonoString* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_AnimationNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeAdd2_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeAdd2");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeAdd3_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeAdd3");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeAnimation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeAnimation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeBlend2_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlend2");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeBlend3_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlend3");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_99(MethodBind* method, Object* ptr, Object* arg1, float arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_100(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AnimationNodeBlendSpace1D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlendSpace1D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_101(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_102(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_103(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolIntArray arg1_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_104(MethodBind* method, Object* ptr) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

int32_t godot_icall_0_105(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AnimationNodeBlendSpace2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlendSpace2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_106(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_107(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_108(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_1_109(MethodBind* method, Object* ptr, MonoString* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_3_110(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_111(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_112(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Vector2* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_113(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

Object* godot_icall_AnimationNodeBlendTree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlendTree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_114(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AnimationNodeOneShot_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeOneShot");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeOutput_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeOutput");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_115(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoString* godot_icall_1_116(MethodBind* method, Object* ptr, Object* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoBoolean godot_icall_2_117(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_3_118(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_119(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AnimationNodeStateMachine_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeStateMachine");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_0_120(MethodBind* method, Object* ptr) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

Object* godot_icall_AnimationNodeStateMachinePlayback_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeStateMachinePlayback");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_121(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AnimationNodeStateMachineTransition_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeStateMachineTransition");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeTimeScale_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeTimeScale");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeTimeSeek_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeTimeSeek");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_122(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_AnimationNodeTransition_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeTransition");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_123(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_124(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoString* godot_icall_1_125(MethodBind* method, Object* ptr, MonoString* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_3_126(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

float godot_icall_2_127(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_4_128(MethodBind* method, Object* ptr, MonoString* arg1, float arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_129(MethodBind* method, Object* ptr, MonoString* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_130(MethodBind* method, Object* ptr, NodePath* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

NodePath* godot_icall_0_131(MethodBind* method, Object* ptr) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return memnew(NodePath(ret));
}

int32_t godot_icall_0_132(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_133(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_2_134(MethodBind* method, Object* ptr, float arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_AnimationPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationRootNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationRootNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationTrackEditPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationTrackEditPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_135(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_136(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AnimationTree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationTree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_137(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_138(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_139(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_2_140(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

float godot_icall_1_141(MethodBind* method, Object* ptr, MonoString* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_3_142(MethodBind* method, Object* ptr, MonoString* arg1, NodePath* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_143(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_2_144(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int32_t godot_icall_3_145(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_3_146(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int32_t arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int32_t godot_icall_0_147(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AnimationTreePlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationTreePlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_148(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_1_149(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_1_150(MethodBind* method, Object* ptr, Object* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_Area_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Area");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_151(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Area2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Area2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_152(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_4_153(MethodBind* method, Object* ptr, int32_t arg1, Array* arg2, Array* arg3, uint32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, arg2, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_154(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	PoolByteArray arg3_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

uint32_t godot_icall_1_155(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

int32_t godot_icall_1_156(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_157(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform* arg1, float arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Transform arg1_in = MARSHALLED_IN(Transform, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_1_158(MethodBind* method, Object* ptr, GDMonoMarshal::M_AABB* arg1) {
	ERR_FAIL_NULL(ptr);
	AABB arg1_in = MARSHALLED_IN(AABB, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_0_159(MethodBind* method, Object* ptr, GDMonoMarshal::M_AABB* arg_ret) {
	AABB ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_AABB(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(AABB, ret);
}

Object* godot_icall_ArrayMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ArrayMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_160(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_161(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AspectRatioContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AspectRatioContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_162(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_163(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_0_164(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

Object* godot_icall_AtlasTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AtlasTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioBusLayout_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioBusLayout");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectAmplify_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectAmplify");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectBandLimitFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectBandLimitFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectBandPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectBandPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_1_165(MethodBind* method, Object* ptr, int32_t arg1) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

int64_t godot_icall_0_166(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int64_t)ret;
}

Object* godot_icall_AudioEffectCapture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectCapture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectChorus_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectChorus");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectCompressor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectCompressor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectDelay_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectDelay");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_167(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioEffectDistortion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectDistortion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ10_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ10");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ21_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ21");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ6_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ6");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_168(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioEffectFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectHighPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectHighPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectHighShelfFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectHighShelfFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLimiter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLimiter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLowPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLowPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLowShelfFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLowShelfFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectNotchFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectNotchFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPanner_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPanner");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPhaser_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPhaser");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_169(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioEffectPitchShift_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPitchShift");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_170(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_171(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioEffectRecord_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectRecord");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectReverb_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectReverb");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_172(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioEffectSpectrumAnalyzer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectSpectrumAnalyzer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_173(MethodBind* method, Object* ptr, float arg1, float arg2, int32_t arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

Object* godot_icall_AudioEffectStereoEnhance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectStereoEnhance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_174(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_175(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_176(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_177(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_178(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

double godot_icall_0_179(MethodBind* method, Object* ptr) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	method->ptrcall(ptr, NULL, &ret);
	return ret;
}

MonoObject* godot_icall_0_180(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("AudioServer");
}

Object* godot_icall_AudioStreamGenerator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamGenerator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_1_181(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_1_182(MethodBind* method, Object* ptr, MonoArray* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_1_183(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_AudioStreamMP3_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamMP3");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamMicrophone_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamMicrophone");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamOGGVorbis_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamOGGVorbis");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_184(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_185(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_186(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioStreamPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_187(MethodBind* method, Object* ptr, uint32_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

uint32_t godot_icall_0_188(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (uint32_t)ret;
}

Object* godot_icall_AudioStreamPlayer2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_189(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_190(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_191(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioStreamPlayer3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamRandomPitch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamRandomPitch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_192(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_193(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioStreamSample_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamSample");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_194(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_BackBufferCopy_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BackBufferCopy");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_195(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_196(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_197(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_198(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_199(MethodBind* method, Object* ptr, GDMonoMarshal::M_Color* arg1) {
	ERR_FAIL_NULL(ptr);
	Color arg1_in = MARSHALLED_IN(Color, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_0_200(MethodBind* method, Object* ptr, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

int32_t godot_icall_2_201(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_BakedLightmap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BakedLightmap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_202(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform* arg1) {
	ERR_FAIL_NULL(ptr);
	Transform arg1_in = MARSHALLED_IN(Transform, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_203(MethodBind* method, Object* ptr, NodePath* arg1, Object* arg2, int32_t arg3, GDMonoMarshal::M_Rect2* arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	Rect2 arg4_in = MARSHALLED_IN(Rect2, arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_204(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_BakedLightmapData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BakedLightmapData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_205(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_206(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_207(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_208(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_209(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_210(MethodBind* method, Object* ptr, Object* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_211(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_212(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_213(MethodBind* method, Object* ptr, Dictionary* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

Dictionary* godot_icall_0_214(MethodBind* method, Object* ptr) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return memnew(Dictionary(ret));
}

void godot_icall_2_215(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Rect2* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Array* godot_icall_2_216(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1, float arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Object* godot_icall_BitMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BitMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_217(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Rect2* arg3, GDMonoMarshal::M_Vector2* arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_218(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_BitmapFont_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BitmapFont");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_219(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_0_220(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

Object* godot_icall_Bone2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Bone2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_BoneAttachment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoneAttachment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_221(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_BoxShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoxShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_222(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Button_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Button");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_223(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ButtonGroup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ButtonGroup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_224(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_225(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_226(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_227(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_1_228(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_229(MethodBind* method, Object* ptr) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

void godot_icall_1_230(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolColorArray arg1_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_231(MethodBind* method, Object* ptr) {
	PoolColorArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolColorArray_to_mono_array(ret);
}

Object* godot_icall_CPUParticles_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CPUParticles");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_232(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_233(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_1_234(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_0_235(MethodBind* method, Object* ptr) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

Object* godot_icall_CPUParticles2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CPUParticles2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_236(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int vararg_length = mono_array_length(arg1);
	int total_length = 0 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg1, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(0 + i, &varargs.get(i));
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_CSharpScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSharpScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_237(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_1_238(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

MonoBoolean godot_icall_1_239(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_240(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_3_241(MethodBind* method, Object* ptr, float arg1, float arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_242(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Vector2* arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_243(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_244(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_245(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_246(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

RID* godot_icall_0_247(MethodBind* method, Object* ptr) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return memnew(RID(ret));
}

Object* godot_icall_Camera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Camera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_248(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_249(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_250(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Camera2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Camera2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_251(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CameraFeed_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CameraFeed");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_252(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CameraServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("CameraServer");
}

int32_t godot_icall_0_253(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CameraTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CameraTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_254(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3, float arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	double arg4_in = (double)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_255(MethodBind* method, Object* ptr, MonoArray* arg1, GDMonoMarshal::M_Color* arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_256(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolColorArray arg2_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg2);
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_8_257(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, float arg3, float arg4, int32_t arg5, GDMonoMarshal::M_Color* arg6, float arg7, MonoBoolean arg8) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	int64_t arg5_in = (int64_t)arg5;
	Color arg6_in = MARSHALLED_IN(Color, arg6);
	double arg7_in = (double)arg7;
	bool arg8_in = (bool)arg8;
	const void* call_args[8] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_258(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1, GDMonoMarshal::M_Color* arg2, MonoBoolean arg3, float arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	bool arg3_in = (bool)arg3;
	double arg4_in = (double)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_259(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_260(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_261(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2, MonoBoolean arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5, Object* arg6) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	bool arg3_in = (bool)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_262(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Rect2* arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5, Object* arg6, MonoBoolean arg7) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6, &arg7_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_263(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_264(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4, float arg5, Object* arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolColorArray arg2_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	double arg5_in = (double)arg5;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, arg4, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_265(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4, Object* arg5, MonoBoolean arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolColorArray arg2_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, arg4, arg5, &arg6_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_266(MethodBind* method, Object* ptr, MonoArray* arg1, GDMonoMarshal::M_Color* arg2, MonoArray* arg3, Object* arg4, Object* arg5, MonoBoolean arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, arg4, arg5, &arg6_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_267(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2* arg2, MonoString* arg3, GDMonoMarshal::M_Color* arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

float godot_icall_5_268(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2* arg2, MonoString* arg3, MonoString* arg4, GDMonoMarshal::M_Color* arg5) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_5_269(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, Object* arg3, GDMonoMarshal::M_Transform2D* arg4, GDMonoMarshal::M_Color* arg5) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg4_in = MARSHALLED_IN(Transform2D, arg4);
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	const void* call_args[5] = { arg1, arg2, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_270(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, arg2, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_271(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_272(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_273(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_274(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_275(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_276(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CanvasItemMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasItemMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CanvasLayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasLayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CanvasModulate_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasModulate");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CenterContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CenterContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_277(MethodBind* method, Object* ptr, uint64_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_CharFXTransform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CharFXTransform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CheckBox_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CheckBox");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CheckButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CheckButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CircleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CircleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_278(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_1_279(MethodBind* method, Object* ptr, RID* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_ClippedCamera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ClippedCamera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

uint32_t godot_icall_1_280(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

void godot_icall_2_281(MethodBind* method, Object* ptr, uint32_t arg1, GDMonoMarshal::M_Transform* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform arg2_in = MARSHALLED_IN(Transform, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_282(MethodBind* method, Object* ptr, uint32_t arg1, GDMonoMarshal::M_Transform* arg_ret) {
	Transform ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform, ret);
}

MonoObject* godot_icall_1_283(MethodBind* method, Object* ptr, uint32_t arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_284(MethodBind* method, Object* ptr, uint32_t arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_1_285(MethodBind* method, Object* ptr, uint32_t arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_286(MethodBind* method, Object* ptr, uint32_t arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_1_287(MethodBind* method, Object* ptr, uint32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_2_288(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_2_289(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_290(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_291(MethodBind* method, Object* ptr, uint32_t arg1, GDMonoMarshal::M_Transform2D* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform2D arg2_in = MARSHALLED_IN(Transform2D, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_292(MethodBind* method, Object* ptr, uint32_t arg1, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

void godot_icall_2_293(MethodBind* method, Object* ptr, uint32_t arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

float godot_icall_1_294(MethodBind* method, Object* ptr, uint32_t arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_2_295(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CollisionPolygon_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionPolygon");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_296(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CollisionPolygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionPolygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_297(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CollisionShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_298(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CollisionShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ColorPicker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorPicker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_299(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_300(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ColorPickerButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorPickerButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ColorRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConcavePolygonShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConcavePolygonShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConcavePolygonShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConcavePolygonShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConeTwistJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConeTwistJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_301(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_3_302(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoObject* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoArray* godot_icall_1_303(MethodBind* method, Object* ptr, MonoString* arg1) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

int32_t godot_icall_2_304(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ConfigFile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConfigFile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConfirmationDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConfirmationDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_305(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Container_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Container");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_306(MethodBind* method, Object* ptr, int32_t arg1, float arg2, MonoBoolean arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_307(MethodBind* method, Object* ptr, int32_t arg1, float arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_308(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_309(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_310(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_311(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_312(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_313(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_314(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

int32_t godot_icall_2_315(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_316(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_317(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_1_318(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int32_t godot_icall_0_319(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_320(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_321(MethodBind* method, Object* ptr, MonoObject* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_322(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Control_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Control");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConvexPolygonShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConvexPolygonShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConvexPolygonShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConvexPolygonShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_1_323(MethodBind* method, Object* ptr, int32_t arg1) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

MonoObject* godot_icall_1_324(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_4_325(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoString* arg3, MonoString* arg4) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_3_326(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, Object* arg3) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

MonoBoolean godot_icall_4_327(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	PoolByteArray arg3_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg3);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_2_328(MethodBind* method, Object* ptr, Object* arg1, MonoArray* arg2) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

MonoArray* godot_icall_3_329(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, MonoArray* arg3) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	PoolByteArray arg3_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

MonoBoolean godot_icall_2_330(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_Crypto_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Crypto");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_331(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_1_332(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_CryptoKey_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CryptoKey");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_333(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_334(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CubeMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CubeMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CubeMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CubeMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_335(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_5_336(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, float arg3, int32_t arg4, int32_t arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_337(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

float godot_icall_1_338(MethodBind* method, Object* ptr, float arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

int32_t godot_icall_1_339(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Curve_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_340(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_341(MethodBind* method, Object* ptr, int32_t arg1, float arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_1_342(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_2_343(MethodBind* method, Object* ptr, float arg1, MonoBoolean arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	double arg1_in = (double)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

float godot_icall_1_344(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoArray* godot_icall_2_345(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

Object* godot_icall_Curve2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_346(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_347(MethodBind* method, Object* ptr, int32_t arg1, float arg2, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_1_348(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_2_349(MethodBind* method, Object* ptr, float arg1, MonoBoolean arg2, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	double arg1_in = (double)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

MonoArray* godot_icall_0_350(MethodBind* method, Object* ptr) {
	PoolRealArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::PoolRealArray_to_mono_array(ret);
}

float godot_icall_1_351(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoArray* godot_icall_2_352(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

Object* godot_icall_Curve3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_353(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CurveTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CurveTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CylinderMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CylinderMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CylinderShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CylinderShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_354(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, Object* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[3] = { arg1, arg2, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_355(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_DTLSServer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DTLSServer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_DampedSpringJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DampedSpringJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_356(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_357(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_DirectionalLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DirectionalLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_358(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_359(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_DynamicFont_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DynamicFont");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_360(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_DynamicFontData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DynamicFontData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_2_361(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_362(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorExportPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorExportPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_3_363(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorFeatureProfile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFeatureProfile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
int32_t godot_icall_0_364(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

#endif // TOOLS_ENABLED
MonoObject* godot_icall_0_365(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#ifdef TOOLS_ENABLED
int32_t godot_icall_0_366(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
int32_t godot_icall_0_367(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorFileDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFileDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_368(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_1_369(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_1_370(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorFileSystemDirectory_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFileSystemDirectory");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorImportPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorImportPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorInspector_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorInspector");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_371(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

#ifdef TOOLS_ENABLED
void godot_icall_3_372(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorInspectorPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorInspectorPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_3_373(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_374(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_375(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_376(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_377(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, int32_t arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_378(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_379(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
Array* godot_icall_2_380(MethodBind* method, Object* ptr, Array* arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_381(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_382(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
int32_t godot_icall_0_383(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_2_384(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_2_385(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_386(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_387(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, Object* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_388(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_389(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_390(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_391(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#ifdef TOOLS_ENABLED
void godot_icall_4_392(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2, MonoString* arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorProperty_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorProperty");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorResourceConversionPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorResourceConversionPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_2_393(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, Object* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoBoolean godot_icall_3_394(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoObject* arg2, Object* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_395(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoObject* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
MonoObject* godot_icall_0_396(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_EditorResourcePicker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorResourcePicker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_4_397(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorResourcePreviewGenerator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorResourcePreviewGenerator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_4_398(MethodBind* method, Object* ptr, MonoString* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_3_399(MethodBind* method, Object* ptr, MonoString* arg1, uint32_t arg2, int32_t arg3) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorSceneImporter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSceneImporter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSceneImporterGLTF_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSceneImporterGLTF");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorScenePostImport_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScenePostImport");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorScriptPicker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScriptPicker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSelection_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSelection");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_3_400(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
void godot_icall_1_401(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolStringArray arg1_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

#ifdef TOOLS_ENABLED
void godot_icall_4_402(MethodBind* method, Object* ptr, MonoArray* arg1, Object* arg2, MonoBoolean arg3, GDMonoMarshal::M_Color* arg4) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	bool arg3_in = (bool)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_403(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2, Object* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[4] = { arg1, &arg2_in, arg3, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_404(MethodBind* method, Object* ptr, Object* arg1, float arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_405(MethodBind* method, Object* ptr, MonoArray* arg1, Object* arg2, MonoBoolean arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
MonoObject* godot_icall_0_406(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_407(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorSpatialGizmo_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSpatialGizmo");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_5_408(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Color* arg2, MonoBoolean arg3, MonoBoolean arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_409(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoBoolean arg3, GDMonoMarshal::M_Color* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg3_in = (bool)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_410(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_2_411(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorSpatialGizmoPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSpatialGizmoPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSpinSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSpinSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Array* godot_icall_1_412(MethodBind* method, Object* ptr, MonoString* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Object* godot_icall_EditorVCSInterface_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorVCSInterface");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EncodedObjectAsID_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EncodedObjectAsID");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_413(MethodBind* method, Object* ptr, GDMonoMarshal::M_Basis* arg1) {
	ERR_FAIL_NULL(ptr);
	Basis arg1_in = MARSHALLED_IN(Basis, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_414(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_415(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_416(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_417(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_418(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_419(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Environment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Environment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_420(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_3_421(MethodBind* method, Object* ptr, Array* arg1, Object* arg2, MonoBoolean arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_Expression_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Expression");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ExternalTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ExternalTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_422(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_423(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_0_424(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_FileDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FileDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_6_425(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, MonoString* arg3, GDMonoMarshal::M_Color* arg4, int32_t arg5, GDMonoMarshal::M_Color* arg6) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	int64_t arg5_in = (int64_t)arg5;
	Color arg6_in = MARSHALLED_IN(Color, arg6);
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_426(MethodBind* method, Object* ptr, MonoString* arg1, float arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

float godot_icall_6_427(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3, int32_t arg4, GDMonoMarshal::M_Color* arg5, MonoBoolean arg6) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_1_428(MethodBind* method, Object* ptr, Array* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_FuncRef_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FuncRef");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_429(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_430(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, Array* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_GDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_431(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_GDNativeLibrary_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GDNativeLibrary");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_432(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_433(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_2_434(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GIProbe_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GIProbe");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GIProbeData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GIProbeData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_435(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PoolRealArray arg1_in = GDMonoMarshal::mono_array_to_PoolRealArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GLTFAccessor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFAccessor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFAnimation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFAnimation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFBufferView_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFBufferView");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFCamera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFCamera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFDocument_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFDocument");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_436(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_GLTFMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_0_437(MethodBind* method, Object* ptr, GDMonoMarshal::M_Quat* arg_ret) {
	Quat ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Quat(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	method->ptrcall(ptr, NULL, &ret);
	*arg_ret = MARSHALLED_OUT(Quat, ret);
}

void godot_icall_1_438(MethodBind* method, Object* ptr, GDMonoMarshal::M_Quat* arg1) {
	ERR_FAIL_NULL(ptr);
	Quat arg1_in = MARSHALLED_IN(Quat, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_GLTFNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_439(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_440(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_GLTFSkeleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFSkeleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_441(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_GLTFSkin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFSkin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_442(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_GLTFSpecGloss_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFSpecGloss");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_443(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_444(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_GLTFState_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFState");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Generic6DOFJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Generic6DOFJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_445(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_446(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_2_447(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_448(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_449(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_1_450(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

Object* godot_icall_Gradient_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Gradient");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GradientTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GradientTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_451(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoString* arg3, int32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_4_452(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoString* arg3, int32_t arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_4_453(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoString* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_454(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoString* arg3, int32_t arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_455(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_GraphEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GraphEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_9_456(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, int32_t arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5, int32_t arg6, GDMonoMarshal::M_Color* arg7, Object* arg8, Object* arg9) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	int64_t arg6_in = (int64_t)arg6;
	Color arg7_in = MARSHALLED_IN(Color, arg7);
	const void* call_args[9] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, arg8, arg9 };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_457(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_GraphNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GraphNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GridContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GridContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GrooveJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GrooveJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HBoxContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HBoxContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_458(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_459(MethodBind* method, Object* ptr, MonoArray* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_HMACContext_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HMACContext");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HScrollBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HScrollBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSeparator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSeparator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSplitContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSplitContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_460(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoBoolean arg3, MonoBoolean arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_461(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_4_462(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoArray* arg3, MonoArray* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	PoolStringArray arg3_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg3);
	PoolByteArray arg4_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_4_463(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoArray* arg3, MonoString* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	PoolStringArray arg3_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_464(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_1_465(MethodBind* method, Object* ptr, Dictionary* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_HTTPClient_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HTTPClient");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_5_466(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3, int32_t arg4, MonoArray* arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	PoolByteArray arg5_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_5_467(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3, int32_t arg4, MonoString* arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_HTTPRequest_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HTTPRequest");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_468(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_HashingContext_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HashingContext");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HeightMapShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HeightMapShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HingeJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HingeJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Array* godot_icall_2_469(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

int32_t godot_icall_2_470(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_471(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Array* godot_icall_1_472(MethodBind* method, Object* ptr, int32_t arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Object* godot_icall_IP_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("IP");
}

int32_t godot_icall_0_473(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_2_474(MethodBind* method, Object* ptr, MonoBoolean arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_1_475(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_476(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoBoolean arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_477(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoBoolean arg3, int32_t arg4, MonoArray* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	PoolByteArray arg5_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_478(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_479(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, float arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_480(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_481(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, GDMonoMarshal::M_Rect2* arg3, GDMonoMarshal::M_Vector2* arg4) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_482(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_483(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_2_484(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_2_485(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_486(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Image_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Image");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_487(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_488(MethodBind* method, Object* ptr, Object* arg1, uint32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_489(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ImageTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImageTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_490(MethodBind* method, Object* ptr, GDMonoMarshal::M_Plane* arg1) {
	ERR_FAIL_NULL(ptr);
	Plane arg1_in = MARSHALLED_IN(Plane, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_491(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_ImmediateGeometry_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImmediateGeometry");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_2_492(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

float godot_icall_2_493(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_5_494(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoString* arg3, MonoString* arg4, float arg5, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_4_495(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, MonoString* arg3, MonoString* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_496(MethodBind* method, Object* ptr, int32_t arg1, float arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_497(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_498(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_3_499(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Input_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Input");
}

MonoBoolean godot_icall_3_500(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_2_501(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_1_502(MethodBind* method, Object* ptr, Object* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_2_503(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, GDMonoMarshal::M_Vector2* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_InputEventAction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventAction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventJoypadButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventJoypadButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventJoypadMotion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventJoypadMotion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventKey_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventKey");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMIDI_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMIDI");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMagnifyGesture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMagnifyGesture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMouseButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMouseButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMouseMotion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMouseMotion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventPanGesture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventPanGesture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventScreenDrag_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventScreenDrag");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventScreenTouch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventScreenTouch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_2_504(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_3_505(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_InputMap_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("InputMap");
}

Dictionary* godot_icall_1_506(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

MonoObject* godot_icall_2_507(MethodBind* method, Object* ptr, MonoBoolean arg1, Object* arg2) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	bool arg1_in = (bool)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_InterpolatedCamera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InterpolatedCamera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_508(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_509(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_510(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

void godot_icall_2_511(MethodBind* method, Object* ptr, int32_t arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_512(MethodBind* method, Object* ptr, int32_t arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int32_t godot_icall_0_513(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_514(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_515(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ItemList_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ItemList");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_JNISingleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JNISingleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_516(MethodBind* method, Object* ptr) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_1_517(MethodBind* method, Object* ptr, MonoObject* arg1) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_JSONParseResult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JSONParseResult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_2_518(MethodBind* method, Object* ptr, MonoObject* arg1, MonoBoolean arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Dictionary* godot_icall_3_519(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2, MonoObject* arg3) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Dictionary* godot_icall_2_520(MethodBind* method, Object* ptr, MonoObject* arg1, MonoObject* arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Dictionary* godot_icall_2_521(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Dictionary* godot_icall_3_522(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoObject* arg3) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Object* godot_icall_JSONRPC_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JSONRPC");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_JavaClass_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JavaClass");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_523(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_JavaClassWrapper_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("JavaClassWrapper");
}

MonoObject* godot_icall_2_524(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_1_525(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_526(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_527(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int vararg_length = mono_array_length(arg2);
	int total_length = 1 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	call_args.set(0, &arg1_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg2, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(1 + i, &varargs.get(i));
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_528(MethodBind* method, Object* ptr, MonoArray* arg1, MonoString* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_JavaScript_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("JavaScript");
}

MonoObject* godot_icall_4_529(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, MonoBoolean arg2, MonoBoolean arg3, MonoBoolean arg4) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	bool arg2_in = (bool)arg2;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_6_530(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, MonoBoolean arg3, int32_t arg4, float arg5, MonoBoolean arg6, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_7_531(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, MonoBoolean arg4, int32_t arg5, float arg6, MonoBoolean arg7, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	bool arg4_in = (bool)arg4;
	int64_t arg5_in = (int64_t)arg5;
	double arg6_in = (double)arg6;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

MonoBoolean godot_icall_3_532(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform* arg1, GDMonoMarshal::M_Vector3* arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform arg1_in = MARSHALLED_IN(Transform, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_1_533(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_534(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_KinematicBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_4_535(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoBoolean arg2, MonoBoolean arg3, MonoBoolean arg4) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	bool arg2_in = (bool)arg2;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_6_536(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, MonoBoolean arg3, int32_t arg4, float arg5, MonoBoolean arg6, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_7_537(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, MonoBoolean arg4, int32_t arg5, float arg6, MonoBoolean arg7, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	bool arg4_in = (bool)arg4;
	int64_t arg5_in = (int64_t)arg5;
	double arg6_in = (double)arg6;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

MonoBoolean godot_icall_3_538(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, GDMonoMarshal::M_Vector2* arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_1_539(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_540(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_KinematicBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_KinematicCollision_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicCollision");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_KinematicCollision2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicCollision2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_541(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_542(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Label_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Label");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_543(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, Object* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_LargeTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LargeTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_544(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_545(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_546(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Light2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Light2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_547(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_LightOccluder2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LightOccluder2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_548(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_549(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_550(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_551(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Line2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Line2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_552(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_553(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_LineEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LineEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_LineShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LineShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_554(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_LinkButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LinkButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Listener_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Listener");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Listener2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Listener2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_1_555(MethodBind* method, Object* ptr, float arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_MainLoop_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MainLoop");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MarginContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MarginContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MenuButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MenuButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_556(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_557(MethodBind* method, Object* ptr, MonoBoolean arg1, MonoBoolean arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	bool arg1_in = (bool)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_558(MethodBind* method, Object* ptr, float arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_559(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_2_560(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_561(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_562(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Plane* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Plane arg2_in = MARSHALLED_IN(Plane, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_563(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Plane* arg_ret) {
	Plane ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Plane(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Plane, ret);
}

void godot_icall_2_564(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_565(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PoolRealArray arg2_in = GDMonoMarshal::mono_array_to_PoolRealArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_1_566(MethodBind* method, Object* ptr, int32_t arg1) {
	PoolRealArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolRealArray_to_mono_array(ret);
}

Object* godot_icall_MeshDataTool_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshDataTool");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_567(MethodBind* method, Object* ptr, MonoBoolean arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_MeshInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MeshInstance2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshInstance2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_568(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform arg2_in = MARSHALLED_IN(Transform, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_569(MethodBind* method, Object* ptr, int32_t arg1, Array* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_570(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_571(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform* arg_ret) {
	Transform ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform, ret);
}

MonoObject* godot_icall_1_572(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MeshLibrary_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshLibrary");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MeshTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_573(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_574(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_575(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_2_576(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform2D* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform2D arg2_in = MARSHALLED_IN(Transform2D, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_577(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

Object* godot_icall_MultiMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_578(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MultiMeshInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiMeshInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MultiMeshInstance2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiMeshInstance2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_579(MethodBind* method, Object* ptr, MonoArray* arg1, int32_t arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_580(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MultiplayerAPI_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiplayerAPI");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MultiplayerPeerGDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiplayerPeerGDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_NativeScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NativeScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_581(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Transform* arg2, Object* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Transform arg2_in = MARSHALLED_IN(Transform, arg2);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_3_582(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, MonoBoolean arg3) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

void godot_icall_3_583(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, MonoBoolean arg3, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

MonoObject* godot_icall_1_584(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Navigation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Navigation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_585(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Transform2D* arg2, Object* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Transform2D arg2_in = MARSHALLED_IN(Transform2D, arg2);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_3_586(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, MonoBoolean arg3) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_587(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Navigation2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Navigation2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_588(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_589(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_590(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_NavigationMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_591(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_NavigationMeshInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationMeshInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_592(MethodBind* method, Object* ptr, MonoArray* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_593(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_NavigationPolygon_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationPolygon");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_594(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_NavigationPolygonInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationPolygonInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_595(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_596(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_597(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_NinePatchRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NinePatchRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_598(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_599(MethodBind* method, Object* ptr, NodePath* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_3_600(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, MonoBoolean arg3) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_601(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Array* godot_icall_1_602(MethodBind* method, Object* ptr, NodePath* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

NodePath* godot_icall_1_603(MethodBind* method, Object* ptr, Object* arg1) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

void godot_icall_2_604(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_605(MethodBind* method, Object* ptr, MonoString* arg1, Array* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_606(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_607(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_608(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_609(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_610(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoArray* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int vararg_length = mono_array_length(arg3);
	int total_length = 2 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = (Variant)arg1;
	call_args.set(0, &arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	call_args.set(1, &arg2_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg3, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(2 + i, &varargs.get(i));
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_611(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Node_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Node");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_612(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

Object* godot_icall_Node2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Node2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_613(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_NoiseTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NoiseTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_614(MethodBind* method, Object* ptr, NodePath* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_615(MethodBind* method, Object* ptr, NodePath* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_0_616(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_617(MethodBind* method, Object* ptr, MonoString* arg1, Array* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_618(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int vararg_length = mono_array_length(arg2);
	int total_length = 1 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	call_args.set(0, &arg1_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg2, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(1 + i, &varargs.get(i));
	}
	Variant::CallError vcall_error;
	method->call(ptr, call_args.ptr(), total_length, vcall_error);
}

MonoObject* godot_icall_2_619(MethodBind* method, Object* ptr, MonoString* arg1, Array* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int32_t godot_icall_5_620(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3, Array* arg4, uint32_t arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, arg4, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_621(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_3_622(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_0_623(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Occluder_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Occluder");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_624(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_OccluderPolygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OccluderPolygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_OccluderShapeSphere_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OccluderShapeSphere");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_625(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_626(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_OmniLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OmniLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_3_627(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg3) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

float godot_icall_2_628(MethodBind* method, Object* ptr, float arg1, float arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

float godot_icall_3_629(MethodBind* method, Object* ptr, float arg1, float arg2, float arg3) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

float godot_icall_4_630(MethodBind* method, Object* ptr, float arg1, float arg2, float arg3, float arg4) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

Object* godot_icall_OpenSimplexNoise_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OpenSimplexNoise");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_631(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_OptionButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OptionButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_632(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PCKPacker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PCKPacker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PHashTranslation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PHashTranslation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_633(MethodBind* method, Object* ptr, MonoObject* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PackedDataContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PackedDataContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_634(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_635(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_PackedScene_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PackedScene");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_636(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, int32_t arg3, float arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_5_637(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, float arg3, uint32_t arg4, Object* arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_5_638(MethodBind* method, Object* ptr, MonoString* arg1, uint32_t arg2, float arg3, uint32_t arg4, Object* arg5) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, arg5 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_PackedSceneGLTF_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PackedSceneGLTF");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_639(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int32_t godot_icall_2_640(MethodBind* method, Object* ptr, MonoObject* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_4_641(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2, MonoString* arg3, Object* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	bool arg2_in = (bool)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_642(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PacketPeerDTLS_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerDTLS");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PacketPeerGDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerGDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PacketPeerStream_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerStream");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_643(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PacketPeerUDP_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerUDP");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Panel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Panel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PanelContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PanelContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PanoramaSky_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PanoramaSky");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ParallaxBackground_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ParallaxBackground");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ParallaxLayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ParallaxLayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_644(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Particles_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Particles");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_645(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Particles2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Particles2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_646(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_647(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_648(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ParticlesMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ParticlesMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_649(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Path_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Path");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_650(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Path2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Path2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_651(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PathFollow_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PathFollow");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PathFollow2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PathFollow2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Performance_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Performance");
}

void godot_icall_2_652(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_653(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PhysicalBone_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicalBone");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_654(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_1_655(MethodBind* method, Object* ptr, int32_t arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

uint64_t godot_icall_1_656(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint64_t)ret;
}

MonoObject* godot_icall_1_657(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_658(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Array* godot_icall_6_659(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, int32_t arg2, Array* arg3, uint32_t arg4, MonoBoolean arg5, MonoBoolean arg6) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg4_in = (int64_t)arg4;
	bool arg5_in = (bool)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_7_660(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, uint64_t arg2, int32_t arg3, Array* arg4, uint32_t arg5, MonoBoolean arg6, MonoBoolean arg7) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg5_in = (int64_t)arg5;
	bool arg6_in = (bool)arg6;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { &arg1_in, &arg2_in, &arg3_in, arg4, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Dictionary* godot_icall_6_661(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, Array* arg3, uint32_t arg4, MonoBoolean arg5, MonoBoolean arg6) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg4_in = (int64_t)arg4;
	bool arg5_in = (bool)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Array* godot_icall_2_662(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_1_663(MethodBind* method, Object* ptr, Object* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Dictionary* godot_icall_1_664(MethodBind* method, Object* ptr, Object* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

void godot_icall_2_665(MethodBind* method, Object* ptr, RID* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_1_666(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_667(MethodBind* method, Object* ptr, RID* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_2_668(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_1_669(MethodBind* method, Object* ptr, RID* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_3_670(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

float godot_icall_2_671(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_1_672(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_673(MethodBind* method, Object* ptr, RID* arg1, RID* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_1_674(MethodBind* method, Object* ptr, RID* arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_675(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_1_676(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_677(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Transform2D* arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_678(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_679(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Transform2D* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_680(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_1_681(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

RID* godot_icall_2_682(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_683(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

void godot_icall_2_684(MethodBind* method, Object* ptr, RID* arg1, uint32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_685(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_686(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform2D* arg2) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg2_in = MARSHALLED_IN(Transform2D, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_687(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_1_688(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

void godot_icall_2_689(MethodBind* method, Object* ptr, RID* arg1, uint64_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

uint64_t godot_icall_1_690(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (uint64_t)ret;
}

void godot_icall_3_691(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_1_692(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_693(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, MonoBoolean arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

uint32_t godot_icall_1_694(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

int32_t godot_icall_1_695(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_696(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_697(MethodBind* method, Object* ptr, RID* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_698(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_699(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_8_700(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform2D* arg2, GDMonoMarshal::M_Vector2* arg3, MonoBoolean arg4, float arg5, Object* arg6, MonoBoolean arg7, Array* arg8) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform2D arg2_in = MARSHALLED_IN(Transform2D, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	bool arg4_in = (bool)arg4;
	double arg5_in = (double)arg5;
	bool arg7_in = (bool)arg7;
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6, &arg7_in, arg8 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_1_701(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

RID* godot_icall_3_702(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, RID* arg2, RID* arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[3] = { &arg1_in, arg2, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_5_703(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, RID* arg4, RID* arg5) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, arg4, arg5 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_4_704(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, RID* arg3, RID* arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int32_t godot_icall_1_705(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Physics2DServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Physics2DServer");
}

Object* godot_icall_Physics2DShapeQueryParameters_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Physics2DShapeQueryParameters");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Physics2DTestMotionResult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Physics2DTestMotionResult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_706(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Array* godot_icall_6_707(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, int32_t arg2, Array* arg3, uint32_t arg4, MonoBoolean arg5, MonoBoolean arg6) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg4_in = (int64_t)arg4;
	bool arg5_in = (bool)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Dictionary* godot_icall_6_708(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, Array* arg3, uint32_t arg4, MonoBoolean arg5, MonoBoolean arg6) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	int64_t arg4_in = (int64_t)arg4;
	bool arg5_in = (bool)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Array* godot_icall_2_709(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector3* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Object* godot_icall_PhysicsMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_710(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_711(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_1_712(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_713(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Transform* arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	Transform arg3_in = MARSHALLED_IN(Transform, arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_714(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Transform* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Transform arg3_in = MARSHALLED_IN(Transform, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_715(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Transform* arg_ret) {
	Transform ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform, ret);
}

void godot_icall_2_716(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform* arg2) {
	ERR_FAIL_NULL(ptr);
	Transform arg2_in = MARSHALLED_IN(Transform, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_717(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform* arg_ret) {
	Transform ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform, ret);
}

RID* godot_icall_2_718(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int32_t godot_icall_1_719(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

float godot_icall_1_720(MethodBind* method, Object* ptr, RID* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_2_721(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_722(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_2_723(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_7_724(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform* arg2, GDMonoMarshal::M_Vector3* arg3, MonoBoolean arg4, Object* arg5, MonoBoolean arg6, Array* arg7) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform arg2_in = MARSHALLED_IN(Transform, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	bool arg4_in = (bool)arg4;
	bool arg6_in = (bool)arg6;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, &arg6_in, arg7 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_1_725(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

RID* godot_icall_4_726(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2, RID* arg3, GDMonoMarshal::M_Vector3* arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg4_in = MARSHALLED_IN(Vector3, arg4);
	const void* call_args[4] = { arg1, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_1_727(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

RID* godot_icall_4_728(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform* arg2, RID* arg3, GDMonoMarshal::M_Transform* arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Transform arg2_in = MARSHALLED_IN(Transform, arg2);
	Transform arg4_in = MARSHALLED_IN(Transform, arg4);
	const void* call_args[4] = { arg1, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int32_t godot_icall_1_729(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_730(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

float godot_icall_3_731(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_4_732(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoBoolean godot_icall_3_733(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_PhysicsServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("PhysicsServer");
}

Object* godot_icall_PhysicsShapeQueryParameters_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsShapeQueryParameters");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsTestMotionResult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsTestMotionResult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PinJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PinJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PinJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PinJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaneMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaneMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaneShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaneShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PluginScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PluginScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PointMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PointMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_734(MethodBind* method, Object* ptr, NodePath* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolRealArray arg2_in = GDMonoMarshal::mono_array_to_PoolRealArray(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Polygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Polygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_735(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_2_736(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

Object* godot_icall_PolygonPathFinder_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PolygonPathFinder");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_737(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Popup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Popup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PopupDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_738(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, uint32_t arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_739(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, int32_t arg3, uint32_t arg4) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_740(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_741(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_742(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, int32_t arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_743(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_744(MethodBind* method, Object* ptr, int32_t arg1, uint32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_745(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_746(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_PopupMenu_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupMenu");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PopupPanel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupPanel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Portal_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Portal");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Position2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Position2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Position3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Position3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PrismMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PrismMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_747(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ProceduralSky_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProceduralSky");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProgressBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProgressBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_3_748(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, int32_t arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_ProjectSettings_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ProjectSettings");
}

int32_t godot_icall_0_749(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ProximityGroup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProximityGroup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProxyTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProxyTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_QuadMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "QuadMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RandomNumberGenerator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RandomNumberGenerator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_750(MethodBind* method, Object* ptr, double arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_RayCast_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayCast");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayCast2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayCast2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RectangleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RectangleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Reference_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Reference");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ReferenceRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ReferenceRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_751(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ReflectionProbe_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ReflectionProbe");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_3_752(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Array* godot_icall_3_753(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoString* godot_icall_5_754(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3, int32_t arg4, int32_t arg5) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_RegEx_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RegEx");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoString* godot_icall_1_755(MethodBind* method, Object* ptr, MonoObject* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int32_t godot_icall_1_756(MethodBind* method, Object* ptr, MonoObject* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RegExMatch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RegExMatch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RemoteTransform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RemoteTransform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RemoteTransform2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RemoteTransform2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_757(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Resource_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Resource");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ResourceFormatLoader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ResourceFormatLoader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ResourceFormatSaver_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ResourceFormatSaver");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_758(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ResourcePreloader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ResourcePreloader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RichTextEffect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RichTextEffect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_759(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_760(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Dictionary* godot_icall_1_761(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolStringArray arg1_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Object* godot_icall_RichTextLabel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RichTextLabel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_762(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_763(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_RigidBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RigidBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_764(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_765(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_4_766(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoBoolean arg2, float arg3, Object* arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_RigidBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RigidBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Room_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Room");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RoomGroup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RoomGroup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_767(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RoomManager_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RoomManager");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

NodePath* godot_icall_2_768(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

MonoObject* godot_icall_1_769(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_1_770(MethodBind* method, Object* ptr, int32_t arg1) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

MonoObject* godot_icall_2_771(MethodBind* method, Object* ptr, float arg1, MonoBoolean arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_4_772(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_4_773(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoString* arg3, MonoArray* arg4) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int vararg_length = mono_array_length(arg4);
	int total_length = 3 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = (Variant)arg1;
	call_args.set(0, &arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	call_args.set(1, &arg2_in);
	Variant arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	call_args.set(2, &arg3_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg4, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(3 + i, &varargs.get(i));
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_774(MethodBind* method, Object* ptr, uint32_t arg1, MonoString* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_775(MethodBind* method, Object* ptr, uint32_t arg1, MonoString* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_3_776(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoArray* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int vararg_length = mono_array_length(arg3);
	int total_length = 2 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	call_args.set(0, &arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	call_args.set(1, &arg2_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg3, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(2 + i, &varargs.get(i));
	}
	Variant::CallError vcall_error;
	ret = method->call(ptr, call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_SceneTree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SceneTree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_777(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#ifdef TOOLS_ENABLED
void godot_icall_4_778(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

#endif // TOOLS_ENABLED
Object* godot_icall_ScriptCreateDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ScriptCreateDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_779(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ScrollContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ScrollContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SegmentShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SegmentShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_780(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_781(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Shader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Shader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_782(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ShaderMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ShaderMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_3_783(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, Object* arg2, GDMonoMarshal::M_Transform2D* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_5_784(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, GDMonoMarshal::M_Vector2* arg2, Object* arg3, GDMonoMarshal::M_Transform2D* arg4, GDMonoMarshal::M_Vector2* arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Transform2D arg4_in = MARSHALLED_IN(Transform2D, arg4);
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Array* godot_icall_3_785(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, Object* arg2, GDMonoMarshal::M_Transform2D* arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_5_786(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, GDMonoMarshal::M_Vector2* arg2, Object* arg3, GDMonoMarshal::M_Transform2D* arg4, GDMonoMarshal::M_Vector2* arg5) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Transform2D arg4_in = MARSHALLED_IN(Transform2D, arg4);
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_2_787(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_0_788(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ShortCut_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ShortCut");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_789(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_4_790(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform* arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform arg2_in = MARSHALLED_IN(Transform, arg2);
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Skeleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Skeleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_791(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Skeleton2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Skeleton2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonIK_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonIK");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Skin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Skin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_792(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_SliderJoint_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SliderJoint");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_793(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, NodePath* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_SoftBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SoftBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_794(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_795(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_796(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_797(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Spatial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Spatial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_798(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_799(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_800(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_801(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_802(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_803(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_804(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_805(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_806(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_807(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_SpatialMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpatialMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SpatialVelocityTracker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpatialVelocityTracker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SphereMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SphereMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SphereShape_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SphereShape");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SpinBox_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpinBox");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_808(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_SpotLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpotLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SpringArm_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpringArm");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Sprite_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Sprite");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Sprite3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Sprite3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_809(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_810(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_3_811(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_812(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_813(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_SpriteFrames_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpriteFrames");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StaticBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StaticBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StaticBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StaticBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Array* godot_icall_1_814(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_1_815(MethodBind* method, Object* ptr, int8_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_816(MethodBind* method, Object* ptr, uint8_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_817(MethodBind* method, Object* ptr, int16_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_818(MethodBind* method, Object* ptr, uint16_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_819(MethodBind* method, Object* ptr, int64_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_820(MethodBind* method, Object* ptr, MonoObject* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

int8_t godot_icall_0_821(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int8_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int8_t)ret;
}

uint8_t godot_icall_0_822(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint8_t());
	method->ptrcall(ptr, NULL, &ret);
	return (uint8_t)ret;
}

int16_t godot_icall_0_823(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int16_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int16_t)ret;
}

uint16_t godot_icall_0_824(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint16_t());
	method->ptrcall(ptr, NULL, &ret);
	return (uint16_t)ret;
}

MonoObject* godot_icall_0_825(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_StreamPeerBuffer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerBuffer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StreamPeerGDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerGDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_826(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, Object* arg3, Object* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[4] = { arg1, arg2, arg3, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_827(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_StreamPeerSSL_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerSSL");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_828(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_StreamPeerTCP_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerTCP");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StreamTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_2_829(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Rect2* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_0_830(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_831(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_StyleBoxEmpty_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxEmpty");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_832(MethodBind* method, Object* ptr, float arg1, float arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_StyleBoxFlat_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxFlat");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StyleBoxLine_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxLine");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_833(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_StyleBoxTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_6_834(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, MonoArray* arg5, Array* arg6) {
	ERR_FAIL_NULL(ptr);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	PoolVector2Array arg4_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg4);
	PoolVector3Array arg5_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg5);
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_835(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_836(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_837(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, GDMonoMarshal::M_Transform* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Transform arg3_in = MARSHALLED_IN(Transform, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_838(MethodBind* method, Object* ptr, Object* arg1, uint32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_SurfaceTool_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SurfaceTool");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_839(MethodBind* method, Object* ptr, uint16_t arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_840(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TCP_Server_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TCP_Server");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_841(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_0_842(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_843(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_844(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_TabContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TabContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_845(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_846(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Tabs_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tabs");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_847(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, MonoBoolean arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_848(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

MonoArray* godot_icall_4_849(MethodBind* method, Object* ptr, MonoString* arg1, uint32_t arg2, int32_t arg3, int32_t arg4) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

void godot_icall_1_850(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_4_851(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, GDMonoMarshal::M_Color* arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_TextEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TextFile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextFile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_852(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3, MonoBoolean arg4, Object* arg5) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_853(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, MonoBoolean arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5, Object* arg6) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	bool arg3_in = (bool)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_854(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Rect2* arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5, Object* arg6, MonoBoolean arg7) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6, &arg7_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_855(MethodBind* method, Object* ptr, uint32_t arg1, uint32_t arg2, uint32_t arg3, int32_t arg4, uint32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_Texture3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Texture3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TextureArray_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureArray");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_856(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_857(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_TextureButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_858(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_TextureProgress_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureProgress");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_859(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_TextureRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_860(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_861(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_862(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_3_863(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoString* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoBoolean godot_icall_3_864(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoString* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_4_865(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoString* arg3, MonoString* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_866(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_2_867(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

Object* godot_icall_Theme_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Theme");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_868(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_869(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_870(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_871(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_7_872(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, MonoBoolean arg4, MonoBoolean arg5, MonoBoolean arg6, GDMonoMarshal::M_Vector2* arg7) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	bool arg5_in = (bool)arg5;
	bool arg6_in = (bool)arg6;
	Vector2 arg7_in = MARSHALLED_IN(Vector2, arg7);
	const void* call_args[7] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_873(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, int32_t arg2, MonoBoolean arg3, MonoBoolean arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_874(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoBoolean arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

Object* godot_icall_TileMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_875(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_2_876(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_877(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_878(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_879(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_880(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg2, uint32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

uint32_t godot_icall_2_881(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

int32_t godot_icall_1_882(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_883(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_884(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_885(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Transform2D* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_886(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

void godot_icall_5_887(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, GDMonoMarshal::M_Transform2D* arg3, MonoBoolean arg4, GDMonoMarshal::M_Vector2* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	bool arg4_in = (bool)arg4;
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_1_888(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_889(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_890(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TileSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_891(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Timer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Timer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ToolButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ToolButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_892(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_TouchScreenButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TouchScreenButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Translation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Translation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TranslationServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("TranslationServer");
}

MonoObject* godot_icall_2_893(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_894(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_895(MethodBind* method, Object* ptr, Object* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_0_896(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

void godot_icall_2_897(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

MonoObject* godot_icall_1_898(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Tree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_899(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_900(MethodBind* method, Object* ptr, int32_t arg1, double arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

double godot_icall_1_901(MethodBind* method, Object* ptr, int32_t arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_5_902(MethodBind* method, Object* ptr, int32_t arg1, double arg2, double arg3, double arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2, &arg3, &arg4, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

Dictionary* godot_icall_1_903(MethodBind* method, Object* ptr, int32_t arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

void godot_icall_3_904(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_1_905(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_3_906(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Color* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_907(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, int32_t arg3, MonoBoolean arg4, MonoString* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_908(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_1_909(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_TriangleMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TriangleMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_910(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_2_911(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_8_912(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, MonoObject* arg3, MonoObject* arg4, float arg5, int32_t arg6, int32_t arg7, float arg8) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	double arg8_in = (double)arg8;
	const void* call_args[8] = { arg1, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_8_913(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3, MonoObject* arg4, float arg5, int32_t arg6, int32_t arg7, float arg8) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	double arg8_in = (double)arg8;
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_8_914(MethodBind* method, Object* ptr, Object* arg1, float arg2, MonoString* arg3, MonoObject* arg4, MonoObject* arg5, MonoObject* arg6, MonoObject* arg7, MonoObject* arg8) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	double arg2_in = (double)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	Variant arg5_in = GDMonoMarshal::mono_object_to_variant(arg5);
	Variant arg6_in = GDMonoMarshal::mono_object_to_variant(arg6);
	Variant arg7_in = GDMonoMarshal::mono_object_to_variant(arg7);
	Variant arg8_in = GDMonoMarshal::mono_object_to_variant(arg8);
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_9_915(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, MonoObject* arg3, Object* arg4, NodePath* arg5, float arg6, int32_t arg7, int32_t arg8, float arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, arg2, &arg3_in, arg4, arg5, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_9_916(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3, Object* arg4, MonoString* arg5, float arg6, int32_t arg7, int32_t arg8, float arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, &arg2_in, &arg3_in, arg4, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_9_917(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, Object* arg3, NodePath* arg4, MonoObject* arg5, float arg6, int32_t arg7, int32_t arg8, float arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Variant arg5_in = GDMonoMarshal::mono_object_to_variant(arg5);
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, arg2, arg3, arg4, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_9_918(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, Object* arg3, MonoString* arg4, MonoObject* arg5, float arg6, int32_t arg7, int32_t arg8, float arg9) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	Variant arg5_in = GDMonoMarshal::mono_object_to_variant(arg5);
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_Tween_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tween");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_919(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_UDPServer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "UDPServer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_920(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	int vararg_length = mono_array_length(arg3);
	int total_length = 2 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = arg1;
	call_args.set(0, &arg1_in);
	Variant arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	call_args.set(1, &arg2_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg3, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(2 + i, &varargs.get(i));
	}
	Variant::CallError vcall_error;
	method->call(ptr, call_args.ptr(), total_length, vcall_error);
}

void godot_icall_3_921(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_UndoRedo_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "UndoRedo");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VBoxContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VBoxContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VScrollBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VScrollBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSeparator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSeparator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSplitContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSplitContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VehicleBody_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VehicleBody");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VehicleWheel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VehicleWheel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_922(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_VideoPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VideoStreamGDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoStreamGDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VideoStreamTheora_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoStreamTheora");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VideoStreamWebm_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoStreamWebm");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_923(MethodBind* method, Object* ptr, MonoBoolean arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_924(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_925(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_926(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_927(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_928(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_929(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_930(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_1_931(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Viewport_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Viewport");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ViewportContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ViewportContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ViewportTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ViewportTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityEnabler_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityEnabler");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityEnabler2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityEnabler2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityNotifier_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityNotifier");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibilityNotifier2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibilityNotifier2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_932(MethodBind* method, Object* ptr, MonoBoolean arg1, double arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_2_933(MethodBind* method, Object* ptr, Object* arg1, uint32_t arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_7_934(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, uint32_t arg7) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_935(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_10_936(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	int64_t arg9_in = (int64_t)arg9;
	int64_t arg10_in = (int64_t)arg10;
	const void* call_args[10] = { arg1, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_937(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_1_938(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_939(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_940(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_941(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoString* godot_icall_1_942(MethodBind* method, Object* ptr, RID* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_3_943(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

Array* godot_icall_1_944(MethodBind* method, Object* ptr, RID* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_3_945(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_2_946(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_947(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_948(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

uint32_t godot_icall_4_949(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

void godot_icall_5_950(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, Array* arg3, Array* arg4, uint32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, arg3, arg4, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_1_951(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_952(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, MonoArray* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	PoolByteArray arg4_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_2_953(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_2_954(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

Array* godot_icall_2_955(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

uint32_t godot_icall_2_956(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

int32_t godot_icall_2_957(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_958(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_AABB* arg_ret) {
	AABB ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_AABB(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(AABB, ret);
}

void godot_icall_2_959(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_AABB* arg2) {
	ERR_FAIL_NULL(ptr);
	AABB arg2_in = MARSHALLED_IN(AABB, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_1_960(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_AABB* arg_ret) {
	AABB ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_AABB(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(AABB, ret);
}

void godot_icall_5_961(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_962(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_963(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_2_964(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolRealArray arg2_in = GDMonoMarshal::mono_array_to_PoolRealArray(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_965(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Plane* arg2) {
	ERR_FAIL_NULL(ptr);
	Plane arg2_in = MARSHALLED_IN(Plane, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_966(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_1_967(MethodBind* method, Object* ptr, RID* arg1) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

void godot_icall_2_968(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolByteArray arg2_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoArray* godot_icall_1_969(MethodBind* method, Object* ptr, RID* arg1) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

void godot_icall_4_970(MethodBind* method, Object* ptr, RID* arg1, float arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_971(MethodBind* method, Object* ptr, RID* arg1, float arg2, GDMonoMarshal::M_Vector2* arg3, float arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_972(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_973(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_974(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Transform2D* arg3) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_975(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, int32_t arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_976(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Basis* arg2) {
	ERR_FAIL_NULL(ptr);
	Basis arg2_in = MARSHALLED_IN(Basis, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_977(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Color* arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_978(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4, float arg5, int32_t arg6) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_12_979(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, int32_t arg3, float arg4, float arg5, float arg6, int32_t arg7, float arg8, float arg9, float arg10, MonoBoolean arg11, MonoBoolean arg12) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	double arg8_in = (double)arg8;
	double arg9_in = (double)arg9;
	double arg10_in = (double)arg10;
	bool arg11_in = (bool)arg11;
	bool arg12_in = (bool)arg12;
	const void* call_args[12] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in, &arg11_in, &arg12_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_9_980(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, float arg3, float arg4, MonoBoolean arg5, float arg6, float arg7, float arg8, float arg9) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	bool arg5_in = (bool)arg5;
	double arg6_in = (double)arg6;
	double arg7_in = (double)arg7;
	double arg8_in = (double)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_981(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4, float arg5, RID* arg6) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_982(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, int32_t arg3, float arg4, float arg5, float arg6, MonoBoolean arg7) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	double arg6_in = (double)arg6;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_13_983(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, GDMonoMarshal::M_Color* arg10, int32_t arg11, int32_t arg12, float arg13) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	double arg6_in = (double)arg6;
	double arg7_in = (double)arg7;
	double arg8_in = (double)arg8;
	double arg9_in = (double)arg9;
	Color arg10_in = MARSHALLED_IN(Color, arg10);
	int64_t arg11_in = (int64_t)arg11;
	int64_t arg12_in = (int64_t)arg12;
	double arg13_in = (double)arg13;
	const void* call_args[13] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in, &arg11_in, &arg12_in, &arg13_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_984(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, GDMonoMarshal::M_Color* arg3, GDMonoMarshal::M_Color* arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	double arg5_in = (double)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_985(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4, float arg5, MonoBoolean arg6, float arg7) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	bool arg6_in = (bool)arg6;
	double arg7_in = (double)arg7;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_986(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_2_987(MethodBind* method, Object* ptr, RID* arg1, RID* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_5_988(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, RID* arg3, int32_t arg4, GDMonoMarshal::M_Rect2* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg4_in = (int64_t)arg4;
	Rect2 arg5_in = MARSHALLED_IN(Rect2, arg5);
	const void* call_args[5] = { arg1, arg2, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_989(MethodBind* method, Object* ptr, RID* arg1, float arg2, float arg3, float arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

Array* godot_icall_2_990(MethodBind* method, Object* ptr, GDMonoMarshal::M_AABB* arg1, RID* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	AABB arg1_in = MARSHALLED_IN(AABB, arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_3_991(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, RID* arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_2_992(MethodBind* method, Object* ptr, Array* arg1, RID* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_3_993(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_994(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, GDMonoMarshal::M_Rect2* arg3) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_995(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Color* arg4, float arg5, MonoBoolean arg6) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	double arg5_in = (double)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_5_996(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, float arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	double arg4_in = (double)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_997(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_998(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, float arg3, GDMonoMarshal::M_Color* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	double arg3_in = (double)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_999(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, RID* arg3, MonoBoolean arg4, GDMonoMarshal::M_Color* arg5, MonoBoolean arg6, RID* arg7) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	bool arg4_in = (bool)arg4;
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	bool arg6_in = (bool)arg6;
	const void* call_args[7] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in, arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_8_1000(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, RID* arg3, GDMonoMarshal::M_Rect2* arg4, GDMonoMarshal::M_Color* arg5, MonoBoolean arg6, RID* arg7, MonoBoolean arg8) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg4_in = MARSHALLED_IN(Rect2, arg4);
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	bool arg6_in = (bool)arg6;
	bool arg8_in = (bool)arg8;
	const void* call_args[8] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in, arg7, &arg8_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_11_1001(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Rect2* arg3, RID* arg4, GDMonoMarshal::M_Vector2* arg5, GDMonoMarshal::M_Vector2* arg6, int32_t arg7, int32_t arg8, MonoBoolean arg9, GDMonoMarshal::M_Color* arg10, RID* arg11) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	Vector2 arg6_in = MARSHALLED_IN(Vector2, arg6);
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	bool arg9_in = (bool)arg9;
	Color arg10_in = MARSHALLED_IN(Color, arg10);
	const void* call_args[11] = { arg1, &arg2_in, &arg3_in, arg4, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in, arg11 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_1002(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, RID* arg5, float arg6, RID* arg7) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	PoolVector2Array arg4_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg4);
	double arg6_in = (double)arg6;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, &arg6_in, arg7 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_7_1003(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, RID* arg5, RID* arg6, MonoBoolean arg7) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	PoolColorArray arg3_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg3);
	PoolVector2Array arg4_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg4);
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, arg6, &arg7_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_12_1004(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, MonoArray* arg5, MonoArray* arg6, MonoArray* arg7, RID* arg8, int32_t arg9, RID* arg10, MonoBoolean arg11, MonoBoolean arg12) {
	ERR_FAIL_NULL(ptr);
	PoolIntArray arg2_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg2);
	PoolVector2Array arg3_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg3);
	PoolColorArray arg4_in = GDMonoMarshal::mono_array_to_PoolColorArray(arg4);
	PoolVector2Array arg5_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg5);
	PoolIntArray arg6_in = GDMonoMarshal::mono_array_to_PoolIntArray(arg6);
	PoolRealArray arg7_in = GDMonoMarshal::mono_array_to_PoolRealArray(arg7);
	int64_t arg9_in = (int64_t)arg9;
	bool arg11_in = (bool)arg11;
	bool arg12_in = (bool)arg12;
	const void* call_args[12] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, arg8, &arg9_in, arg10, &arg11_in, &arg12_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_6_1005(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Transform2D* arg3, GDMonoMarshal::M_Color* arg4, RID* arg5, RID* arg6) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[6] = { arg1, arg2, &arg3_in, &arg4_in, arg5, arg6 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_4_1006(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, RID* arg3, RID* arg4) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[4] = { arg1, arg2, arg3, arg4 };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_3_1007(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, NULL);
}

void godot_icall_2_1008(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

RID* godot_icall_3_1009(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, float arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_4_1010(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Color* arg2, MonoBoolean arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_VisualServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("VisualServer");
}

void godot_icall_4_1011(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, GDMonoMarshal::M_Vector2* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

MonoObject* godot_icall_2_1012(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoBoolean godot_icall_5_1013(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int32_t godot_icall_5_1014(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_5_1015(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, NULL);
}

Object* godot_icall_VisualShader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeBooleanConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeBooleanConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeBooleanUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeBooleanUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeColorConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeColorConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1016(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeColorFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeColorFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1017(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeColorOp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeColorOp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeColorUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeColorUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1018(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1019(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1020(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeCompare_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCompare");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1021(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1022(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1023(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeCubeMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCubeMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeCubeMapUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCubeMapUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeCustom_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCustom");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeDeterminant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeDeterminant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeDotProduct_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeDotProduct");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeExpression_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeExpression");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeFaceForward_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeFaceForward");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeFresnel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeFresnel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeGlobalExpression_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeGlobalExpression");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeGroupBase_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeGroupBase");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeIf_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeIf");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeInput_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeInput");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1024(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeIs_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeIs");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeOuterProduct_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeOuterProduct");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeScalarClamp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScalarClamp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeScalarConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScalarConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1025(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeScalarDerivativeFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScalarDerivativeFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1026(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeScalarFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScalarFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeScalarInterp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScalarInterp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1027(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeScalarOp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScalarOp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeScalarSmoothStep_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScalarSmoothStep");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeScalarSwitch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScalarSwitch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeScalarUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScalarUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeSwitch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeSwitch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1028(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1029(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1030(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1031(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTextureUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTextureUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTextureUniformTriplanar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTextureUniformTriplanar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTransformCompose_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformCompose");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTransformConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTransformDecompose_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformDecompose");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1032(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTransformFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1033(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTransformMult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformMult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTransformUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1034(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTransformVecMult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformVecMult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeUniformRef_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeUniformRef");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVec3Constant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVec3Constant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVec3Uniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVec3Uniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorClamp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorClamp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorCompose_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorCompose");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorDecompose_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorDecompose");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1035(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeVectorDerivativeFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorDerivativeFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorDistance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorDistance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1036(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeVectorFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorInterp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorInterp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorLen_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorLen");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1037(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeVectorOp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorOp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorRefract_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorRefract");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorScalarMix_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorScalarMix");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorScalarSmoothStep_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorScalarSmoothStep");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorScalarStep_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorScalarStep");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorSmoothStep_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorSmoothStep");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_WeakRef_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WeakRef");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1038(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1039(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_WebRTCDataChannelGDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebRTCDataChannelGDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_1040(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_1041(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_WebRTCMultiplayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebRTCMultiplayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_1042(MethodBind* method, Object* ptr, Dictionary* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_2_1043(MethodBind* method, Object* ptr, MonoString* arg1, Dictionary* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_3_1044(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoString* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1045(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_WebRTCPeerConnection_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebRTCPeerConnection");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_WebRTCPeerConnectionGDNative_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebRTCPeerConnectionGDNative");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_1046(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3, MonoArray* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	bool arg3_in = (bool)arg3;
	PoolStringArray arg4_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1047(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_WebSocketClient_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebSocketClient");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_1048(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_1049(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1050(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall_WebSocketPeer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebSocketPeer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_1051(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, MonoBoolean arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1052(MethodBind* method, Object* ptr) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_WebSocketServer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebSocketServer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1053(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_WindowDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WindowDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_World_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "World");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_World2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "World2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_WorldEnvironment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WorldEnvironment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_X509Certificate_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "X509Certificate");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1054(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_1055(MethodBind* method, Object* ptr, uint64_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_XMLParser_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XMLParser");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_YSort_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "YSort");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Dictionary* godot_icall_2_1056(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Array* godot_icall_2_1057(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoObject* godot_icall_2_1058(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int32_t godot_icall_3_1059(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_3_1060(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_2_1061(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

MonoArray* godot_icall_3_1062(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

MonoString* godot_icall_3_1063(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall__ClassDB_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ClassDB");
}

int32_t godot_icall_2_1064(MethodBind* method, Object* ptr, MonoBoolean arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	bool arg1_in = (bool)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Directory_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Directory");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1065(MethodBind* method, Object* ptr) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	method->ptrcall(ptr, NULL, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_1066(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = NULL;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall__Engine_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Engine");
}

int32_t godot_icall_3_1067(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoArray* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	PoolByteArray arg3_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_1068(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_1_1069(MethodBind* method, Object* ptr, int64_t arg1) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

void godot_icall_2_1070(MethodBind* method, Object* ptr, MonoArray* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	PoolStringArray arg1_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, NULL);
}

uint64_t godot_icall_1_1071(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint64_t)ret;
}

Object* godot_icall_File_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_File");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Array* godot_icall_1_1072(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_4_1073(MethodBind* method, Object* ptr, float arg1, float arg2, int32_t arg3, int32_t arg4) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_5_1074(MethodBind* method, Object* ptr, float arg1, float arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoBoolean godot_icall_3_1075(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, float arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

float godot_icall_4_1076(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, float arg4) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_4_1077(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Vector2* arg4) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoArray* godot_icall_4_1078(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Vector2* arg4) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

MonoArray* godot_icall_4_1079(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Vector3* arg4) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	Vector3 arg4_in = MARSHALLED_IN(Vector3, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

void godot_icall_3_1080(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_3_1081(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == NULL) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' arg_ret ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

int32_t godot_icall_1_1082(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_5_1083(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Vector3* arg4, GDMonoMarshal::M_Vector3* arg5) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	Vector3 arg4_in = MARSHALLED_IN(Vector3, arg4);
	Vector3 arg5_in = MARSHALLED_IN(Vector3, arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoArray* godot_icall_4_1084(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, float arg4) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_4_1085(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, float arg3, float arg4) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_3_1086(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, Array* arg3) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

MonoBoolean godot_icall_4_1087(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Vector2* arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_2_1088(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoArray* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_1_1089(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PoolIntArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolIntArray_to_mono_array(ret);
}

MonoArray* godot_icall_1_1090(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PoolVector2Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector2Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_1091(MethodBind* method, Object* ptr, MonoArray* arg1, GDMonoMarshal::M_Plane* arg2) {
	PoolVector3Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector3Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector3Array(arg1);
	Plane arg2_in = MARSHALLED_IN(Plane, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolVector3Array_to_mono_array(ret);
}

Array* godot_icall_2_1092(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	PoolVector2Array arg2_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_3_1093(MethodBind* method, Object* ptr, MonoArray* arg1, float arg2, int32_t arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_4_1094(MethodBind* method, Object* ptr, MonoArray* arg1, float arg2, int32_t arg3, int32_t arg4) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Dictionary* godot_icall_1_1095(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolVector2Array arg1_in = GDMonoMarshal::mono_array_to_PoolVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Object* godot_icall__Geometry_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Geometry");
}

Object* godot_icall__GodotSharp_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("GodotSharp");
}

MonoString* godot_icall_3_1096(MethodBind* method, Object* ptr, MonoObject* arg1, MonoString* arg2, MonoBoolean arg3) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoObject* godot_icall_1_1097(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall__JSON_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("JSON");
}

MonoString* godot_icall_2_1098(MethodBind* method, Object* ptr, MonoObject* arg1, MonoBoolean arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoString* godot_icall_1_1099(MethodBind* method, Object* ptr, MonoArray* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	PoolByteArray arg1_in = GDMonoMarshal::mono_array_to_PoolByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoArray* godot_icall_1_1100(MethodBind* method, Object* ptr, MonoString* arg1) {
	PoolByteArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolByteArray_to_mono_array(ret);
}

Object* godot_icall__Marshalls_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Marshalls");
}

Object* godot_icall_Mutex_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Mutex");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_1101(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoObject* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, NULL);
}

int32_t godot_icall_0_1102(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int64_t godot_icall_1_1103(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

int32_t godot_icall_0_1104(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_5_1105(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3, Array* arg4, MonoBoolean arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PoolStringArray arg2_in = GDMonoMarshal::mono_array_to_PoolStringArray(arg2);
	bool arg3_in = (bool)arg3;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, arg4, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Dictionary* godot_icall_1_1106(MethodBind* method, Object* ptr, int64_t arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

int64_t godot_icall_1_1107(MethodBind* method, Object* ptr, Dictionary* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

MonoString* godot_icall_2_1108(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int32_t godot_icall_4_1109(MethodBind* method, Object* ptr, MonoString* arg1, float arg2, MonoString* arg3, MonoString* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_1_1110(MethodBind* method, Object* ptr, uint32_t arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int32_t godot_icall_0_1111(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, NULL, &ret);
	return (int32_t)ret;
}

Object* godot_icall__OS_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("OS");
}

MonoObject* godot_icall_2_1112(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_1113(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3) {
	Ref<Reference> ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall__ResourceLoader_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ResourceLoader");
}

int32_t godot_icall_3_1114(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_1_1115(MethodBind* method, Object* ptr, Object* arg1) {
	PoolStringArray ret;
	ERR_FAIL_NULL_V(ptr, NULL);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PoolStringArray_to_mono_array(ret);
}

Object* godot_icall__ResourceSaver_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ResourceSaver");
}

Object* godot_icall_Semaphore_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Semaphore");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_1116(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoObject* arg3, int32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Thread_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "_Thread");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

namespace GodotSharpBindings
{

uint64_t get_core_api_hash() { return 6475156838848453041U; }
#ifdef TOOLS_ENABLED
uint64_t get_editor_api_hash() { return 6556070434402148854U; }
#endif // TOOLS_ENABLED
uint32_t get_bindings_version() { return 13; }
uint32_t get_cs_glue_version() { return 1642044651; }

void register_generated_icalls() {
	godot_register_glue_header_icalls();
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AESContext_Ctor", godot_icall_AESContext_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ARVRAnchor_Ctor", godot_icall_ARVRAnchor_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ARVRCamera_Ctor", godot_icall_ARVRCamera_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ARVRController_Ctor", godot_icall_ARVRController_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ARVRInterfaceGDNative_Ctor", godot_icall_ARVRInterfaceGDNative_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ARVROrigin_Ctor", godot_icall_ARVROrigin_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ARVRPositionalTracker_Ctor", godot_icall_ARVRPositionalTracker_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ARVRServer_get_singleton", godot_icall_ARVRServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AStar_Ctor", godot_icall_AStar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AStar2D_Ctor", godot_icall_AStar2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AcceptDialog_Ctor", godot_icall_AcceptDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimatedSprite_Ctor", godot_icall_AnimatedSprite_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimatedSprite3D_Ctor", godot_icall_AnimatedSprite3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimatedTexture_Ctor", godot_icall_AnimatedTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Animation_Ctor", godot_icall_Animation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNode_Ctor", godot_icall_AnimationNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeAdd2_Ctor", godot_icall_AnimationNodeAdd2_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeAdd3_Ctor", godot_icall_AnimationNodeAdd3_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeAnimation_Ctor", godot_icall_AnimationNodeAnimation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlend2_Ctor", godot_icall_AnimationNodeBlend2_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlend3_Ctor", godot_icall_AnimationNodeBlend3_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlendSpace1D_Ctor", godot_icall_AnimationNodeBlendSpace1D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlendSpace2D_Ctor", godot_icall_AnimationNodeBlendSpace2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlendTree_Ctor", godot_icall_AnimationNodeBlendTree_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeOneShot_Ctor", godot_icall_AnimationNodeOneShot_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeOutput_Ctor", godot_icall_AnimationNodeOutput_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeStateMachine_Ctor", godot_icall_AnimationNodeStateMachine_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeStateMachinePlayback_Ctor", godot_icall_AnimationNodeStateMachinePlayback_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeStateMachineTransition_Ctor", godot_icall_AnimationNodeStateMachineTransition_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeTimeScale_Ctor", godot_icall_AnimationNodeTimeScale_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeTimeSeek_Ctor", godot_icall_AnimationNodeTimeSeek_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeTransition_Ctor", godot_icall_AnimationNodeTransition_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationPlayer_Ctor", godot_icall_AnimationPlayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationRootNode_Ctor", godot_icall_AnimationRootNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationTree_Ctor", godot_icall_AnimationTree_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationTreePlayer_Ctor", godot_icall_AnimationTreePlayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Area_Ctor", godot_icall_Area_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Area2D_Ctor", godot_icall_Area2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ArrayMesh_Ctor", godot_icall_ArrayMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AspectRatioContainer_Ctor", godot_icall_AspectRatioContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AtlasTexture_Ctor", godot_icall_AtlasTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioBusLayout_Ctor", godot_icall_AudioBusLayout_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectAmplify_Ctor", godot_icall_AudioEffectAmplify_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectBandLimitFilter_Ctor", godot_icall_AudioEffectBandLimitFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectBandPassFilter_Ctor", godot_icall_AudioEffectBandPassFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectCapture_Ctor", godot_icall_AudioEffectCapture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectChorus_Ctor", godot_icall_AudioEffectChorus_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectCompressor_Ctor", godot_icall_AudioEffectCompressor_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectDelay_Ctor", godot_icall_AudioEffectDelay_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectDistortion_Ctor", godot_icall_AudioEffectDistortion_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ_Ctor", godot_icall_AudioEffectEQ_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ10_Ctor", godot_icall_AudioEffectEQ10_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ21_Ctor", godot_icall_AudioEffectEQ21_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ6_Ctor", godot_icall_AudioEffectEQ6_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectFilter_Ctor", godot_icall_AudioEffectFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectHighPassFilter_Ctor", godot_icall_AudioEffectHighPassFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectHighShelfFilter_Ctor", godot_icall_AudioEffectHighShelfFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLimiter_Ctor", godot_icall_AudioEffectLimiter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLowPassFilter_Ctor", godot_icall_AudioEffectLowPassFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLowShelfFilter_Ctor", godot_icall_AudioEffectLowShelfFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectNotchFilter_Ctor", godot_icall_AudioEffectNotchFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPanner_Ctor", godot_icall_AudioEffectPanner_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPhaser_Ctor", godot_icall_AudioEffectPhaser_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPitchShift_Ctor", godot_icall_AudioEffectPitchShift_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectRecord_Ctor", godot_icall_AudioEffectRecord_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectReverb_Ctor", godot_icall_AudioEffectReverb_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectSpectrumAnalyzer_Ctor", godot_icall_AudioEffectSpectrumAnalyzer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectStereoEnhance_Ctor", godot_icall_AudioEffectStereoEnhance_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioServer_get_singleton", godot_icall_AudioServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamGenerator_Ctor", godot_icall_AudioStreamGenerator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamMP3_Ctor", godot_icall_AudioStreamMP3_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamMicrophone_Ctor", godot_icall_AudioStreamMicrophone_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamOGGVorbis_Ctor", godot_icall_AudioStreamOGGVorbis_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer_Ctor", godot_icall_AudioStreamPlayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer2D_Ctor", godot_icall_AudioStreamPlayer2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer3D_Ctor", godot_icall_AudioStreamPlayer3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamRandomPitch_Ctor", godot_icall_AudioStreamRandomPitch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamSample_Ctor", godot_icall_AudioStreamSample_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BackBufferCopy_Ctor", godot_icall_BackBufferCopy_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BakedLightmap_Ctor", godot_icall_BakedLightmap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BakedLightmapData_Ctor", godot_icall_BakedLightmapData_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BitMap_Ctor", godot_icall_BitMap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BitmapFont_Ctor", godot_icall_BitmapFont_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Bone2D_Ctor", godot_icall_Bone2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BoneAttachment_Ctor", godot_icall_BoneAttachment_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BoxShape_Ctor", godot_icall_BoxShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Button_Ctor", godot_icall_Button_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ButtonGroup_Ctor", godot_icall_ButtonGroup_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CPUParticles_Ctor", godot_icall_CPUParticles_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CPUParticles2D_Ctor", godot_icall_CPUParticles2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CSharpScript_Ctor", godot_icall_CSharpScript_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Camera_Ctor", godot_icall_Camera_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Camera2D_Ctor", godot_icall_Camera2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CameraFeed_Ctor", godot_icall_CameraFeed_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CameraServer_get_singleton", godot_icall_CameraServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CameraTexture_Ctor", godot_icall_CameraTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CanvasItemMaterial_Ctor", godot_icall_CanvasItemMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CanvasLayer_Ctor", godot_icall_CanvasLayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CanvasModulate_Ctor", godot_icall_CanvasModulate_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CapsuleMesh_Ctor", godot_icall_CapsuleMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CapsuleShape_Ctor", godot_icall_CapsuleShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CapsuleShape2D_Ctor", godot_icall_CapsuleShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CenterContainer_Ctor", godot_icall_CenterContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CharFXTransform_Ctor", godot_icall_CharFXTransform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CheckBox_Ctor", godot_icall_CheckBox_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CheckButton_Ctor", godot_icall_CheckButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CircleShape2D_Ctor", godot_icall_CircleShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ClippedCamera_Ctor", godot_icall_ClippedCamera_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CollisionPolygon_Ctor", godot_icall_CollisionPolygon_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CollisionPolygon2D_Ctor", godot_icall_CollisionPolygon2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CollisionShape_Ctor", godot_icall_CollisionShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CollisionShape2D_Ctor", godot_icall_CollisionShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ColorPicker_Ctor", godot_icall_ColorPicker_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ColorPickerButton_Ctor", godot_icall_ColorPickerButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ColorRect_Ctor", godot_icall_ColorRect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConcavePolygonShape_Ctor", godot_icall_ConcavePolygonShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConcavePolygonShape2D_Ctor", godot_icall_ConcavePolygonShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConeTwistJoint_Ctor", godot_icall_ConeTwistJoint_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConfigFile_Ctor", godot_icall_ConfigFile_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConfirmationDialog_Ctor", godot_icall_ConfirmationDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Container_Ctor", godot_icall_Container_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Control_Ctor", godot_icall_Control_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConvexPolygonShape_Ctor", godot_icall_ConvexPolygonShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConvexPolygonShape2D_Ctor", godot_icall_ConvexPolygonShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Crypto_Ctor", godot_icall_Crypto_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CryptoKey_Ctor", godot_icall_CryptoKey_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CubeMap_Ctor", godot_icall_CubeMap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CubeMesh_Ctor", godot_icall_CubeMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Curve_Ctor", godot_icall_Curve_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Curve2D_Ctor", godot_icall_Curve2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Curve3D_Ctor", godot_icall_Curve3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CurveTexture_Ctor", godot_icall_CurveTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CylinderMesh_Ctor", godot_icall_CylinderMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CylinderShape_Ctor", godot_icall_CylinderShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DTLSServer_Ctor", godot_icall_DTLSServer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DampedSpringJoint2D_Ctor", godot_icall_DampedSpringJoint2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DirectionalLight_Ctor", godot_icall_DirectionalLight_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DynamicFont_Ctor", godot_icall_DynamicFont_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DynamicFontData_Ctor", godot_icall_DynamicFontData_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_EncodedObjectAsID_Ctor", godot_icall_EncodedObjectAsID_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Environment_Ctor", godot_icall_Environment_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Expression_Ctor", godot_icall_Expression_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ExternalTexture_Ctor", godot_icall_ExternalTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_FileDialog_Ctor", godot_icall_FileDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_FuncRef_Ctor", godot_icall_FuncRef_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GDNative_Ctor", godot_icall_GDNative_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GDNativeLibrary_Ctor", godot_icall_GDNativeLibrary_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GIProbe_Ctor", godot_icall_GIProbe_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GIProbeData_Ctor", godot_icall_GIProbeData_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFAccessor_Ctor", godot_icall_GLTFAccessor_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFAnimation_Ctor", godot_icall_GLTFAnimation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFBufferView_Ctor", godot_icall_GLTFBufferView_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFCamera_Ctor", godot_icall_GLTFCamera_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFDocument_Ctor", godot_icall_GLTFDocument_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFLight_Ctor", godot_icall_GLTFLight_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFNode_Ctor", godot_icall_GLTFNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFSkeleton_Ctor", godot_icall_GLTFSkeleton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFSkin_Ctor", godot_icall_GLTFSkin_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFSpecGloss_Ctor", godot_icall_GLTFSpecGloss_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFState_Ctor", godot_icall_GLTFState_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFTexture_Ctor", godot_icall_GLTFTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Generic6DOFJoint_Ctor", godot_icall_Generic6DOFJoint_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Gradient_Ctor", godot_icall_Gradient_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GradientTexture_Ctor", godot_icall_GradientTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GraphEdit_Ctor", godot_icall_GraphEdit_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GraphNode_Ctor", godot_icall_GraphNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GridContainer_Ctor", godot_icall_GridContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GrooveJoint2D_Ctor", godot_icall_GrooveJoint2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HBoxContainer_Ctor", godot_icall_HBoxContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HMACContext_Ctor", godot_icall_HMACContext_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HScrollBar_Ctor", godot_icall_HScrollBar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HSeparator_Ctor", godot_icall_HSeparator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HSlider_Ctor", godot_icall_HSlider_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HSplitContainer_Ctor", godot_icall_HSplitContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HTTPClient_Ctor", godot_icall_HTTPClient_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HTTPRequest_Ctor", godot_icall_HTTPRequest_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HashingContext_Ctor", godot_icall_HashingContext_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HeightMapShape_Ctor", godot_icall_HeightMapShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HingeJoint_Ctor", godot_icall_HingeJoint_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_IP_get_singleton", godot_icall_IP_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Image_Ctor", godot_icall_Image_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ImageTexture_Ctor", godot_icall_ImageTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ImmediateGeometry_Ctor", godot_icall_ImmediateGeometry_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Input_get_singleton", godot_icall_Input_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventAction_Ctor", godot_icall_InputEventAction_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventJoypadButton_Ctor", godot_icall_InputEventJoypadButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventJoypadMotion_Ctor", godot_icall_InputEventJoypadMotion_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventKey_Ctor", godot_icall_InputEventKey_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventMIDI_Ctor", godot_icall_InputEventMIDI_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventMagnifyGesture_Ctor", godot_icall_InputEventMagnifyGesture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventMouseButton_Ctor", godot_icall_InputEventMouseButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventMouseMotion_Ctor", godot_icall_InputEventMouseMotion_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventPanGesture_Ctor", godot_icall_InputEventPanGesture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventScreenDrag_Ctor", godot_icall_InputEventScreenDrag_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventScreenTouch_Ctor", godot_icall_InputEventScreenTouch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputMap_get_singleton", godot_icall_InputMap_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InterpolatedCamera_Ctor", godot_icall_InterpolatedCamera_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ItemList_Ctor", godot_icall_ItemList_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JNISingleton_Ctor", godot_icall_JNISingleton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JSONParseResult_Ctor", godot_icall_JSONParseResult_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JSONRPC_Ctor", godot_icall_JSONRPC_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JavaClass_Ctor", godot_icall_JavaClass_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JavaClassWrapper_get_singleton", godot_icall_JavaClassWrapper_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JavaScript_get_singleton", godot_icall_JavaScript_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_KinematicBody_Ctor", godot_icall_KinematicBody_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_KinematicBody2D_Ctor", godot_icall_KinematicBody2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_KinematicCollision_Ctor", godot_icall_KinematicCollision_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_KinematicCollision2D_Ctor", godot_icall_KinematicCollision2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Label_Ctor", godot_icall_Label_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LargeTexture_Ctor", godot_icall_LargeTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Light2D_Ctor", godot_icall_Light2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LightOccluder2D_Ctor", godot_icall_LightOccluder2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Line2D_Ctor", godot_icall_Line2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LineEdit_Ctor", godot_icall_LineEdit_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LineShape2D_Ctor", godot_icall_LineShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LinkButton_Ctor", godot_icall_LinkButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Listener_Ctor", godot_icall_Listener_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Listener2D_Ctor", godot_icall_Listener2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MainLoop_Ctor", godot_icall_MainLoop_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MarginContainer_Ctor", godot_icall_MarginContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MenuButton_Ctor", godot_icall_MenuButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshDataTool_Ctor", godot_icall_MeshDataTool_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshInstance_Ctor", godot_icall_MeshInstance_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshInstance2D_Ctor", godot_icall_MeshInstance2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshLibrary_Ctor", godot_icall_MeshLibrary_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshTexture_Ctor", godot_icall_MeshTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiMesh_Ctor", godot_icall_MultiMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiMeshInstance_Ctor", godot_icall_MultiMeshInstance_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiMeshInstance2D_Ctor", godot_icall_MultiMeshInstance2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiplayerAPI_Ctor", godot_icall_MultiplayerAPI_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiplayerPeerGDNative_Ctor", godot_icall_MultiplayerPeerGDNative_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NativeScript_Ctor", godot_icall_NativeScript_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Navigation_Ctor", godot_icall_Navigation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Navigation2D_Ctor", godot_icall_Navigation2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationMesh_Ctor", godot_icall_NavigationMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationMeshInstance_Ctor", godot_icall_NavigationMeshInstance_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationPolygon_Ctor", godot_icall_NavigationPolygon_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationPolygonInstance_Ctor", godot_icall_NavigationPolygonInstance_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NinePatchRect_Ctor", godot_icall_NinePatchRect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Node_Ctor", godot_icall_Node_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Node2D_Ctor", godot_icall_Node2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NoiseTexture_Ctor", godot_icall_NoiseTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Occluder_Ctor", godot_icall_Occluder_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OccluderPolygon2D_Ctor", godot_icall_OccluderPolygon2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OccluderShapeSphere_Ctor", godot_icall_OccluderShapeSphere_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OmniLight_Ctor", godot_icall_OmniLight_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OpenSimplexNoise_Ctor", godot_icall_OpenSimplexNoise_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OptionButton_Ctor", godot_icall_OptionButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PCKPacker_Ctor", godot_icall_PCKPacker_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PHashTranslation_Ctor", godot_icall_PHashTranslation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PackedDataContainer_Ctor", godot_icall_PackedDataContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PackedScene_Ctor", godot_icall_PackedScene_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PackedSceneGLTF_Ctor", godot_icall_PackedSceneGLTF_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerDTLS_Ctor", godot_icall_PacketPeerDTLS_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerGDNative_Ctor", godot_icall_PacketPeerGDNative_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerStream_Ctor", godot_icall_PacketPeerStream_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerUDP_Ctor", godot_icall_PacketPeerUDP_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Panel_Ctor", godot_icall_Panel_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PanelContainer_Ctor", godot_icall_PanelContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PanoramaSky_Ctor", godot_icall_PanoramaSky_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ParallaxBackground_Ctor", godot_icall_ParallaxBackground_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ParallaxLayer_Ctor", godot_icall_ParallaxLayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Particles_Ctor", godot_icall_Particles_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Particles2D_Ctor", godot_icall_Particles2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ParticlesMaterial_Ctor", godot_icall_ParticlesMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Path_Ctor", godot_icall_Path_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Path2D_Ctor", godot_icall_Path2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PathFollow_Ctor", godot_icall_PathFollow_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PathFollow2D_Ctor", godot_icall_PathFollow2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Performance_get_singleton", godot_icall_Performance_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicalBone_Ctor", godot_icall_PhysicalBone_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Physics2DServer_get_singleton", godot_icall_Physics2DServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Physics2DShapeQueryParameters_Ctor", godot_icall_Physics2DShapeQueryParameters_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Physics2DTestMotionResult_Ctor", godot_icall_Physics2DTestMotionResult_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsMaterial_Ctor", godot_icall_PhysicsMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsServer_get_singleton", godot_icall_PhysicsServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsShapeQueryParameters_Ctor", godot_icall_PhysicsShapeQueryParameters_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsTestMotionResult_Ctor", godot_icall_PhysicsTestMotionResult_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PinJoint_Ctor", godot_icall_PinJoint_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PinJoint2D_Ctor", godot_icall_PinJoint2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaneMesh_Ctor", godot_icall_PlaneMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaneShape_Ctor", godot_icall_PlaneShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PluginScript_Ctor", godot_icall_PluginScript_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PointMesh_Ctor", godot_icall_PointMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Polygon2D_Ctor", godot_icall_Polygon2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PolygonPathFinder_Ctor", godot_icall_PolygonPathFinder_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Popup_Ctor", godot_icall_Popup_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PopupDialog_Ctor", godot_icall_PopupDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PopupMenu_Ctor", godot_icall_PopupMenu_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PopupPanel_Ctor", godot_icall_PopupPanel_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Portal_Ctor", godot_icall_Portal_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Position2D_Ctor", godot_icall_Position2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Position3D_Ctor", godot_icall_Position3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PrismMesh_Ctor", godot_icall_PrismMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ProceduralSky_Ctor", godot_icall_ProceduralSky_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ProgressBar_Ctor", godot_icall_ProgressBar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ProjectSettings_get_singleton", godot_icall_ProjectSettings_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ProximityGroup_Ctor", godot_icall_ProximityGroup_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ProxyTexture_Ctor", godot_icall_ProxyTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_QuadMesh_Ctor", godot_icall_QuadMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RandomNumberGenerator_Ctor", godot_icall_RandomNumberGenerator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RayCast_Ctor", godot_icall_RayCast_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RayCast2D_Ctor", godot_icall_RayCast2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RayShape_Ctor", godot_icall_RayShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RayShape2D_Ctor", godot_icall_RayShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RectangleShape2D_Ctor", godot_icall_RectangleShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Reference_Ctor", godot_icall_Reference_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ReferenceRect_Ctor", godot_icall_ReferenceRect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ReflectionProbe_Ctor", godot_icall_ReflectionProbe_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RegEx_Ctor", godot_icall_RegEx_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RegExMatch_Ctor", godot_icall_RegExMatch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RemoteTransform_Ctor", godot_icall_RemoteTransform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RemoteTransform2D_Ctor", godot_icall_RemoteTransform2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Resource_Ctor", godot_icall_Resource_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ResourceFormatLoader_Ctor", godot_icall_ResourceFormatLoader_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ResourceFormatSaver_Ctor", godot_icall_ResourceFormatSaver_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ResourcePreloader_Ctor", godot_icall_ResourcePreloader_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RichTextEffect_Ctor", godot_icall_RichTextEffect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RichTextLabel_Ctor", godot_icall_RichTextLabel_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RigidBody_Ctor", godot_icall_RigidBody_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RigidBody2D_Ctor", godot_icall_RigidBody2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Room_Ctor", godot_icall_Room_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RoomGroup_Ctor", godot_icall_RoomGroup_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RoomManager_Ctor", godot_icall_RoomManager_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SceneTree_Ctor", godot_icall_SceneTree_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ScrollContainer_Ctor", godot_icall_ScrollContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SegmentShape2D_Ctor", godot_icall_SegmentShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Shader_Ctor", godot_icall_Shader_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ShaderMaterial_Ctor", godot_icall_ShaderMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ShortCut_Ctor", godot_icall_ShortCut_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Skeleton_Ctor", godot_icall_Skeleton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Skeleton2D_Ctor", godot_icall_Skeleton2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonIK_Ctor", godot_icall_SkeletonIK_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Skin_Ctor", godot_icall_Skin_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SliderJoint_Ctor", godot_icall_SliderJoint_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SoftBody_Ctor", godot_icall_SoftBody_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Spatial_Ctor", godot_icall_Spatial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpatialMaterial_Ctor", godot_icall_SpatialMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpatialVelocityTracker_Ctor", godot_icall_SpatialVelocityTracker_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SphereMesh_Ctor", godot_icall_SphereMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SphereShape_Ctor", godot_icall_SphereShape_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpinBox_Ctor", godot_icall_SpinBox_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpotLight_Ctor", godot_icall_SpotLight_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpringArm_Ctor", godot_icall_SpringArm_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Sprite_Ctor", godot_icall_Sprite_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Sprite3D_Ctor", godot_icall_Sprite3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpriteFrames_Ctor", godot_icall_SpriteFrames_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StaticBody_Ctor", godot_icall_StaticBody_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StaticBody2D_Ctor", godot_icall_StaticBody2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerBuffer_Ctor", godot_icall_StreamPeerBuffer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerGDNative_Ctor", godot_icall_StreamPeerGDNative_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerSSL_Ctor", godot_icall_StreamPeerSSL_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerTCP_Ctor", godot_icall_StreamPeerTCP_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StreamTexture_Ctor", godot_icall_StreamTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxEmpty_Ctor", godot_icall_StyleBoxEmpty_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxFlat_Ctor", godot_icall_StyleBoxFlat_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxLine_Ctor", godot_icall_StyleBoxLine_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxTexture_Ctor", godot_icall_StyleBoxTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SurfaceTool_Ctor", godot_icall_SurfaceTool_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TCP_Server_Ctor", godot_icall_TCP_Server_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TabContainer_Ctor", godot_icall_TabContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Tabs_Ctor", godot_icall_Tabs_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextEdit_Ctor", godot_icall_TextEdit_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextFile_Ctor", godot_icall_TextFile_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Texture3D_Ctor", godot_icall_Texture3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextureArray_Ctor", godot_icall_TextureArray_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextureButton_Ctor", godot_icall_TextureButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextureProgress_Ctor", godot_icall_TextureProgress_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextureRect_Ctor", godot_icall_TextureRect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Theme_Ctor", godot_icall_Theme_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TileMap_Ctor", godot_icall_TileMap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TileSet_Ctor", godot_icall_TileSet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Timer_Ctor", godot_icall_Timer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ToolButton_Ctor", godot_icall_ToolButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TouchScreenButton_Ctor", godot_icall_TouchScreenButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Translation_Ctor", godot_icall_Translation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TranslationServer_get_singleton", godot_icall_TranslationServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Tree_Ctor", godot_icall_Tree_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TriangleMesh_Ctor", godot_icall_TriangleMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Tween_Ctor", godot_icall_Tween_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_UDPServer_Ctor", godot_icall_UDPServer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_UndoRedo_Ctor", godot_icall_UndoRedo_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VBoxContainer_Ctor", godot_icall_VBoxContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VScrollBar_Ctor", godot_icall_VScrollBar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VSeparator_Ctor", godot_icall_VSeparator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VSlider_Ctor", godot_icall_VSlider_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VSplitContainer_Ctor", godot_icall_VSplitContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VehicleBody_Ctor", godot_icall_VehicleBody_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VehicleWheel_Ctor", godot_icall_VehicleWheel_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VideoPlayer_Ctor", godot_icall_VideoPlayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VideoStreamGDNative_Ctor", godot_icall_VideoStreamGDNative_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VideoStreamTheora_Ctor", godot_icall_VideoStreamTheora_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VideoStreamWebm_Ctor", godot_icall_VideoStreamWebm_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Viewport_Ctor", godot_icall_Viewport_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ViewportContainer_Ctor", godot_icall_ViewportContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ViewportTexture_Ctor", godot_icall_ViewportTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisibilityEnabler_Ctor", godot_icall_VisibilityEnabler_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisibilityEnabler2D_Ctor", godot_icall_VisibilityEnabler2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisibilityNotifier_Ctor", godot_icall_VisibilityNotifier_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisibilityNotifier2D_Ctor", godot_icall_VisibilityNotifier2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualServer_get_singleton", godot_icall_VisualServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShader_Ctor", godot_icall_VisualShader_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeBooleanConstant_Ctor", godot_icall_VisualShaderNodeBooleanConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeBooleanUniform_Ctor", godot_icall_VisualShaderNodeBooleanUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeColorConstant_Ctor", godot_icall_VisualShaderNodeColorConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeColorFunc_Ctor", godot_icall_VisualShaderNodeColorFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeColorOp_Ctor", godot_icall_VisualShaderNodeColorOp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeColorUniform_Ctor", godot_icall_VisualShaderNodeColorUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCompare_Ctor", godot_icall_VisualShaderNodeCompare_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCubeMap_Ctor", godot_icall_VisualShaderNodeCubeMap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCubeMapUniform_Ctor", godot_icall_VisualShaderNodeCubeMapUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCustom_Ctor", godot_icall_VisualShaderNodeCustom_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeDeterminant_Ctor", godot_icall_VisualShaderNodeDeterminant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeDotProduct_Ctor", godot_icall_VisualShaderNodeDotProduct_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeExpression_Ctor", godot_icall_VisualShaderNodeExpression_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeFaceForward_Ctor", godot_icall_VisualShaderNodeFaceForward_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeFresnel_Ctor", godot_icall_VisualShaderNodeFresnel_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeGlobalExpression_Ctor", godot_icall_VisualShaderNodeGlobalExpression_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeGroupBase_Ctor", godot_icall_VisualShaderNodeGroupBase_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeIf_Ctor", godot_icall_VisualShaderNodeIf_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeInput_Ctor", godot_icall_VisualShaderNodeInput_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeIs_Ctor", godot_icall_VisualShaderNodeIs_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeOuterProduct_Ctor", godot_icall_VisualShaderNodeOuterProduct_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScalarClamp_Ctor", godot_icall_VisualShaderNodeScalarClamp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScalarConstant_Ctor", godot_icall_VisualShaderNodeScalarConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScalarDerivativeFunc_Ctor", godot_icall_VisualShaderNodeScalarDerivativeFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScalarFunc_Ctor", godot_icall_VisualShaderNodeScalarFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScalarInterp_Ctor", godot_icall_VisualShaderNodeScalarInterp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScalarOp_Ctor", godot_icall_VisualShaderNodeScalarOp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScalarSmoothStep_Ctor", godot_icall_VisualShaderNodeScalarSmoothStep_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScalarSwitch_Ctor", godot_icall_VisualShaderNodeScalarSwitch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScalarUniform_Ctor", godot_icall_VisualShaderNodeScalarUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeSwitch_Ctor", godot_icall_VisualShaderNodeSwitch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTexture_Ctor", godot_icall_VisualShaderNodeTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTextureUniform_Ctor", godot_icall_VisualShaderNodeTextureUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTextureUniformTriplanar_Ctor", godot_icall_VisualShaderNodeTextureUniformTriplanar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformCompose_Ctor", godot_icall_VisualShaderNodeTransformCompose_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformConstant_Ctor", godot_icall_VisualShaderNodeTransformConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformDecompose_Ctor", godot_icall_VisualShaderNodeTransformDecompose_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformFunc_Ctor", godot_icall_VisualShaderNodeTransformFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformMult_Ctor", godot_icall_VisualShaderNodeTransformMult_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformUniform_Ctor", godot_icall_VisualShaderNodeTransformUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformVecMult_Ctor", godot_icall_VisualShaderNodeTransformVecMult_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeUniformRef_Ctor", godot_icall_VisualShaderNodeUniformRef_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVec3Constant_Ctor", godot_icall_VisualShaderNodeVec3Constant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVec3Uniform_Ctor", godot_icall_VisualShaderNodeVec3Uniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorClamp_Ctor", godot_icall_VisualShaderNodeVectorClamp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorCompose_Ctor", godot_icall_VisualShaderNodeVectorCompose_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorDecompose_Ctor", godot_icall_VisualShaderNodeVectorDecompose_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorDerivativeFunc_Ctor", godot_icall_VisualShaderNodeVectorDerivativeFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorDistance_Ctor", godot_icall_VisualShaderNodeVectorDistance_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorFunc_Ctor", godot_icall_VisualShaderNodeVectorFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorInterp_Ctor", godot_icall_VisualShaderNodeVectorInterp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorLen_Ctor", godot_icall_VisualShaderNodeVectorLen_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorOp_Ctor", godot_icall_VisualShaderNodeVectorOp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorRefract_Ctor", godot_icall_VisualShaderNodeVectorRefract_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorScalarMix_Ctor", godot_icall_VisualShaderNodeVectorScalarMix_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorScalarSmoothStep_Ctor", godot_icall_VisualShaderNodeVectorScalarSmoothStep_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorScalarStep_Ctor", godot_icall_VisualShaderNodeVectorScalarStep_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorSmoothStep_Ctor", godot_icall_VisualShaderNodeVectorSmoothStep_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WeakRef_Ctor", godot_icall_WeakRef_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebRTCDataChannelGDNative_Ctor", godot_icall_WebRTCDataChannelGDNative_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebRTCMultiplayer_Ctor", godot_icall_WebRTCMultiplayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebRTCPeerConnection_Ctor", godot_icall_WebRTCPeerConnection_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebRTCPeerConnectionGDNative_Ctor", godot_icall_WebRTCPeerConnectionGDNative_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebSocketClient_Ctor", godot_icall_WebSocketClient_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebSocketPeer_Ctor", godot_icall_WebSocketPeer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebSocketServer_Ctor", godot_icall_WebSocketServer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WindowDialog_Ctor", godot_icall_WindowDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_World_Ctor", godot_icall_World_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_World2D_Ctor", godot_icall_World2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WorldEnvironment_Ctor", godot_icall_WorldEnvironment_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_X509Certificate_Ctor", godot_icall_X509Certificate_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XMLParser_Ctor", godot_icall_XMLParser_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_YSort_Ctor", godot_icall_YSort_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall__ClassDB_get_singleton", godot_icall__ClassDB_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Directory_Ctor", godot_icall_Directory_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall__Engine_get_singleton", godot_icall__Engine_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_File_Ctor", godot_icall_File_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall__Geometry_get_singleton", godot_icall__Geometry_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall__GodotSharp_get_singleton", godot_icall__GodotSharp_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall__JSON_get_singleton", godot_icall__JSON_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall__Marshalls_get_singleton", godot_icall__Marshalls_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Mutex_Ctor", godot_icall_Mutex_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall__OS_get_singleton", godot_icall__OS_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall__ResourceLoader_get_singleton", godot_icall__ResourceLoader_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall__ResourceSaver_get_singleton", godot_icall__ResourceSaver_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Semaphore_Ctor", godot_icall_Semaphore_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Thread_Ctor", godot_icall_Thread_Ctor);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_AnimationTrackEditPlugin_Ctor", godot_icall_AnimationTrackEditPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorExportPlugin_Ctor", godot_icall_EditorExportPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFeatureProfile_Ctor", godot_icall_EditorFeatureProfile_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFileDialog_Ctor", godot_icall_EditorFileDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFileSystemDirectory_Ctor", godot_icall_EditorFileSystemDirectory_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorImportPlugin_Ctor", godot_icall_EditorImportPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorInspector_Ctor", godot_icall_EditorInspector_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorInspectorPlugin_Ctor", godot_icall_EditorInspectorPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorPlugin_Ctor", godot_icall_EditorPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorProperty_Ctor", godot_icall_EditorProperty_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourceConversionPlugin_Ctor", godot_icall_EditorResourceConversionPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourcePicker_Ctor", godot_icall_EditorResourcePicker_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourcePreviewGenerator_Ctor", godot_icall_EditorResourcePreviewGenerator_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSceneImporter_Ctor", godot_icall_EditorSceneImporter_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSceneImporterGLTF_Ctor", godot_icall_EditorSceneImporterGLTF_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScenePostImport_Ctor", godot_icall_EditorScenePostImport_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScript_Ctor", godot_icall_EditorScript_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScriptPicker_Ctor", godot_icall_EditorScriptPicker_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSelection_Ctor", godot_icall_EditorSelection_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSpatialGizmo_Ctor", godot_icall_EditorSpatialGizmo_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSpatialGizmoPlugin_Ctor", godot_icall_EditorSpatialGizmoPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSpinSlider_Ctor", godot_icall_EditorSpinSlider_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorVCSInterface_Ctor", godot_icall_EditorVCSInterface_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_GLTFMesh_Ctor", godot_icall_GLTFMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_ScriptCreateDialog_Ctor", godot_icall_ScriptCreateDialog_Ctor);
#endif // TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_0", godot_icall_3_0);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1", godot_icall_1_1);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_2", godot_icall_0_2);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_3", godot_icall_0_3);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_4", godot_icall_1_4);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_5", godot_icall_0_5);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_6", godot_icall_0_6);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_7", godot_icall_0_7);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_8", godot_icall_0_8);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_9", godot_icall_0_9);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_10", godot_icall_0_10);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_11", godot_icall_1_11);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_12", godot_icall_1_12);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_13", godot_icall_0_13);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_14", godot_icall_0_14);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_15", godot_icall_1_15);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_16", godot_icall_1_16);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_17", godot_icall_0_17);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_18", godot_icall_0_18);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_19", godot_icall_0_19);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_20", godot_icall_0_20);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_21", godot_icall_1_21);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_22", godot_icall_0_22);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_23", godot_icall_2_23);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_24", godot_icall_1_24);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_25", godot_icall_1_25);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_26", godot_icall_0_26);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_27", godot_icall_1_27);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_28", godot_icall_1_28);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_29", godot_icall_0_29);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_30", godot_icall_0_30);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_31", godot_icall_3_31);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_32", godot_icall_1_32);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_33", godot_icall_2_33);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_34", godot_icall_2_34);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_35", godot_icall_1_35);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_36", godot_icall_1_36);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_37", godot_icall_3_37);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_38", godot_icall_3_38);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_39", godot_icall_2_39);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_40", godot_icall_1_40);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_41", godot_icall_2_41);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_42", godot_icall_2_42);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_43", godot_icall_3_43);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_44", godot_icall_1_44);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_45", godot_icall_2_45);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_46", godot_icall_2_46);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_47", godot_icall_2_47);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_48", godot_icall_2_48);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_49", godot_icall_1_49);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_50", godot_icall_2_50);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_51", godot_icall_0_51);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_52", godot_icall_0_52);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_53", godot_icall_3_53);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_54", godot_icall_1_54);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_55", godot_icall_1_55);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_56", godot_icall_1_56);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_57", godot_icall_0_57);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_58", godot_icall_2_58);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_59", godot_icall_1_59);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_60", godot_icall_2_60);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_61", godot_icall_1_61);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_62", godot_icall_2_62);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_63", godot_icall_1_63);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_64", godot_icall_1_64);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_65", godot_icall_2_65);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_66", godot_icall_1_66);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_67", godot_icall_5_67);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_68", godot_icall_4_68);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_69", godot_icall_3_69);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_70", godot_icall_3_70);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_71", godot_icall_2_71);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_72", godot_icall_2_72);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_73", godot_icall_3_73);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_74", godot_icall_1_74);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_75", godot_icall_2_75);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_76", godot_icall_1_76);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_77", godot_icall_3_77);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_78", godot_icall_2_78);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_79", godot_icall_2_79);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_80", godot_icall_2_80);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_81", godot_icall_5_81);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_82", godot_icall_3_82);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_83", godot_icall_2_83);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_84", godot_icall_2_84);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_85", godot_icall_5_85);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_86", godot_icall_3_86);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_87", godot_icall_2_87);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_88", godot_icall_3_88);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_89", godot_icall_3_89);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_90", godot_icall_1_90);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_91", godot_icall_2_91);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_92", godot_icall_1_92);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_93", godot_icall_1_93);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_94", godot_icall_5_94);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_95", godot_icall_7_95);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_96", godot_icall_6_96);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_97", godot_icall_2_97);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_98", godot_icall_1_98);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_99", godot_icall_3_99);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_100", godot_icall_1_100);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_101", godot_icall_3_101);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_102", godot_icall_4_102);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_103", godot_icall_1_103);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_104", godot_icall_0_104);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_105", godot_icall_0_105);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_106", godot_icall_3_106);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_107", godot_icall_1_107);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_108", godot_icall_2_108);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_109", godot_icall_1_109);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_110", godot_icall_3_110);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_111", godot_icall_2_111);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_112", godot_icall_2_112);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_113", godot_icall_1_113);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_114", godot_icall_0_114);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_115", godot_icall_2_115);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_116", godot_icall_1_116);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_117", godot_icall_2_117);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_118", godot_icall_3_118);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_119", godot_icall_1_119);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_120", godot_icall_0_120);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_121", godot_icall_0_121);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_122", godot_icall_2_122);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_123", godot_icall_2_123);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_124", godot_icall_1_124);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_125", godot_icall_1_125);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_126", godot_icall_3_126);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_127", godot_icall_2_127);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_128", godot_icall_4_128);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_129", godot_icall_2_129);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_130", godot_icall_1_130);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_131", godot_icall_0_131);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_132", godot_icall_0_132);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_133", godot_icall_0_133);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_134", godot_icall_2_134);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_135", godot_icall_0_135);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_136", godot_icall_0_136);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_137", godot_icall_2_137);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_138", godot_icall_1_138);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_139", godot_icall_1_139);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_140", godot_icall_2_140);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_141", godot_icall_1_141);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_142", godot_icall_3_142);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_143", godot_icall_3_143);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_144", godot_icall_2_144);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_145", godot_icall_3_145);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_146", godot_icall_3_146);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_147", godot_icall_0_147);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_148", godot_icall_0_148);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_149", godot_icall_1_149);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_150", godot_icall_1_150);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_151", godot_icall_0_151);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_152", godot_icall_0_152);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_153", godot_icall_4_153);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_154", godot_icall_3_154);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_155", godot_icall_1_155);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_156", godot_icall_1_156);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_157", godot_icall_2_157);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_158", godot_icall_1_158);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_159", godot_icall_0_159);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_160", godot_icall_0_160);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_161", godot_icall_0_161);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_162", godot_icall_0_162);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_163", godot_icall_1_163);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_164", godot_icall_0_164);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_165", godot_icall_1_165);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_166", godot_icall_0_166);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_167", godot_icall_0_167);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_168", godot_icall_0_168);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_169", godot_icall_0_169);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_170", godot_icall_0_170);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_171", godot_icall_0_171);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_172", godot_icall_0_172);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_173", godot_icall_3_173);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_174", godot_icall_3_174);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_175", godot_icall_2_175);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_176", godot_icall_3_176);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_177", godot_icall_3_177);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_178", godot_icall_0_178);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_179", godot_icall_0_179);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_180", godot_icall_0_180);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_181", godot_icall_1_181);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_182", godot_icall_1_182);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_183", godot_icall_1_183);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_184", godot_icall_0_184);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_185", godot_icall_0_185);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_186", godot_icall_0_186);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_187", godot_icall_1_187);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_188", godot_icall_0_188);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_189", godot_icall_0_189);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_190", godot_icall_0_190);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_191", godot_icall_0_191);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_192", godot_icall_0_192);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_193", godot_icall_1_193);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_194", godot_icall_0_194);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_195", godot_icall_0_195);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_196", godot_icall_0_196);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_197", godot_icall_0_197);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_198", godot_icall_0_198);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_199", godot_icall_1_199);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_200", godot_icall_0_200);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_201", godot_icall_2_201);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_202", godot_icall_1_202);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_203", godot_icall_5_203);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_204", godot_icall_1_204);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_205", godot_icall_0_205);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_206", godot_icall_0_206);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_207", godot_icall_0_207);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_208", godot_icall_0_208);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_209", godot_icall_0_209);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_210", godot_icall_2_210);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_211", godot_icall_2_211);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_212", godot_icall_2_212);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_213", godot_icall_1_213);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_214", godot_icall_0_214);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_215", godot_icall_2_215);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_216", godot_icall_2_216);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_217", godot_icall_5_217);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_218", godot_icall_0_218);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_219", godot_icall_1_219);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_220", godot_icall_0_220);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_221", godot_icall_0_221);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_222", godot_icall_0_222);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_223", godot_icall_0_223);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_224", godot_icall_0_224);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_225", godot_icall_1_225);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_226", godot_icall_0_226);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_227", godot_icall_0_227);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_228", godot_icall_1_228);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_229", godot_icall_0_229);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_230", godot_icall_1_230);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_231", godot_icall_0_231);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_232", godot_icall_0_232);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_233", godot_icall_0_233);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_234", godot_icall_1_234);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_235", godot_icall_0_235);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_236", godot_icall_1_236);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_237", godot_icall_1_237);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_238", godot_icall_1_238);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_239", godot_icall_1_239);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_240", godot_icall_2_240);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_241", godot_icall_3_241);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_242", godot_icall_4_242);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_243", godot_icall_0_243);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_244", godot_icall_0_244);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_245", godot_icall_0_245);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_246", godot_icall_0_246);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_247", godot_icall_0_247);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_248", godot_icall_0_248);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_249", godot_icall_0_249);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_250", godot_icall_0_250);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_251", godot_icall_0_251);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_252", godot_icall_1_252);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_253", godot_icall_0_253);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_254", godot_icall_5_254);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_255", godot_icall_4_255);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_256", godot_icall_4_256);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_257", godot_icall_8_257);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_258", godot_icall_5_258);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_259", godot_icall_3_259);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_260", godot_icall_4_260);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_261", godot_icall_6_261);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_262", godot_icall_7_262);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_263", godot_icall_2_263);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_264", godot_icall_6_264);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_265", godot_icall_6_265);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_266", godot_icall_6_266);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_267", godot_icall_5_267);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_268", godot_icall_5_268);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_269", godot_icall_5_269);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_270", godot_icall_3_270);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_271", godot_icall_3_271);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_272", godot_icall_0_272);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_273", godot_icall_0_273);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_274", godot_icall_1_274);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_275", godot_icall_0_275);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_276", godot_icall_0_276);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_277", godot_icall_1_277);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_278", godot_icall_0_278);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_279", godot_icall_1_279);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_280", godot_icall_1_280);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_281", godot_icall_2_281);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_282", godot_icall_1_282);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_283", godot_icall_1_283);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_284", godot_icall_2_284);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_285", godot_icall_1_285);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_286", godot_icall_2_286);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_287", godot_icall_1_287);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_288", godot_icall_2_288);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_289", godot_icall_2_289);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_290", godot_icall_2_290);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_291", godot_icall_2_291);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_292", godot_icall_1_292);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_293", godot_icall_2_293);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_294", godot_icall_1_294);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_295", godot_icall_2_295);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_296", godot_icall_0_296);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_297", godot_icall_0_297);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_298", godot_icall_0_298);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_299", godot_icall_0_299);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_300", godot_icall_0_300);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_301", godot_icall_3_301);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_302", godot_icall_3_302);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_303", godot_icall_1_303);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_304", godot_icall_2_304);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_305", godot_icall_2_305);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_306", godot_icall_4_306);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_307", godot_icall_4_307);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_308", godot_icall_0_308);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_309", godot_icall_0_309);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_310", godot_icall_2_310);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_311", godot_icall_2_311);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_312", godot_icall_2_312);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_313", godot_icall_2_313);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_314", godot_icall_2_314);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_315", godot_icall_2_315);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_316", godot_icall_0_316);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_317", godot_icall_0_317);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_318", godot_icall_1_318);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_319", godot_icall_0_319);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_320", godot_icall_1_320);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_321", godot_icall_2_321);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_322", godot_icall_0_322);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_323", godot_icall_1_323);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_324", godot_icall_1_324);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_325", godot_icall_4_325);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_326", godot_icall_3_326);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_327", godot_icall_4_327);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_328", godot_icall_2_328);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_329", godot_icall_3_329);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_330", godot_icall_2_330);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_331", godot_icall_2_331);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_332", godot_icall_1_332);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_333", godot_icall_1_333);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_334", godot_icall_0_334);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_335", godot_icall_0_335);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_336", godot_icall_5_336);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_337", godot_icall_2_337);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_338", godot_icall_1_338);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_339", godot_icall_1_339);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_340", godot_icall_4_340);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_341", godot_icall_2_341);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_342", godot_icall_1_342);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_343", godot_icall_2_343);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_344", godot_icall_1_344);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_345", godot_icall_2_345);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_346", godot_icall_4_346);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_347", godot_icall_2_347);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_348", godot_icall_1_348);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_349", godot_icall_2_349);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_350", godot_icall_0_350);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_351", godot_icall_1_351);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_352", godot_icall_2_352);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_353", godot_icall_0_353);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_354", godot_icall_3_354);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_355", godot_icall_1_355);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_356", godot_icall_0_356);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_357", godot_icall_0_357);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_358", godot_icall_0_358);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_359", godot_icall_1_359);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_360", godot_icall_0_360);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_361", godot_icall_2_361);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_362", godot_icall_3_362);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_363", godot_icall_3_363);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_364", godot_icall_0_364);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_365", godot_icall_0_365);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_366", godot_icall_0_366);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_367", godot_icall_0_367);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_368", godot_icall_0_368);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_1_369", godot_icall_1_369);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_1_370", godot_icall_1_370);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_371", godot_icall_2_371);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_372", godot_icall_3_372);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_373", godot_icall_3_373);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_374", godot_icall_0_374);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_375", godot_icall_0_375);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_376", godot_icall_0_376);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_377", godot_icall_4_377);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_378", godot_icall_0_378);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_379", godot_icall_0_379);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_380", godot_icall_2_380);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_381", godot_icall_0_381);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_382", godot_icall_0_382);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_383", godot_icall_0_383);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_384", godot_icall_2_384);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_385", godot_icall_2_385);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_386", godot_icall_4_386);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_387", godot_icall_4_387);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_388", godot_icall_0_388);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_389", godot_icall_0_389);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_390", godot_icall_0_390);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_391", godot_icall_0_391);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_392", godot_icall_4_392);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_393", godot_icall_2_393);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_394", godot_icall_3_394);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_395", godot_icall_3_395);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_396", godot_icall_0_396);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_397", godot_icall_4_397);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_398", godot_icall_4_398);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_399", godot_icall_3_399);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_400", godot_icall_3_400);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_401", godot_icall_1_401);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_402", godot_icall_4_402);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_403", godot_icall_4_403);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_404", godot_icall_3_404);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_405", godot_icall_4_405);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_406", godot_icall_0_406);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_407", godot_icall_0_407);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_5_408", godot_icall_5_408);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_409", godot_icall_4_409);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_410", godot_icall_3_410);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_411", godot_icall_2_411);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_412", godot_icall_1_412);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_413", godot_icall_1_413);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_414", godot_icall_0_414);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_415", godot_icall_0_415);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_416", godot_icall_0_416);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_417", godot_icall_0_417);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_418", godot_icall_0_418);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_419", godot_icall_0_419);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_420", godot_icall_2_420);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_421", godot_icall_3_421);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_422", godot_icall_0_422);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_423", godot_icall_0_423);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_424", godot_icall_0_424);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_425", godot_icall_6_425);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_426", godot_icall_2_426);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_427", godot_icall_6_427);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_428", godot_icall_1_428);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_429", godot_icall_0_429);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_430", godot_icall_3_430);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_431", godot_icall_0_431);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_432", godot_icall_0_432);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_433", godot_icall_0_433);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_434", godot_icall_2_434);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_435", godot_icall_1_435);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_436", godot_icall_0_436);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_437", godot_icall_0_437);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_438", godot_icall_1_438);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_439", godot_icall_0_439);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_440", godot_icall_1_440);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_441", godot_icall_0_441);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_442", godot_icall_0_442);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_443", godot_icall_1_443);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_444", godot_icall_1_444);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_445", godot_icall_0_445);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_446", godot_icall_0_446);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_447", godot_icall_2_447);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_448", godot_icall_2_448);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_449", godot_icall_1_449);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_450", godot_icall_1_450);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_451", godot_icall_4_451);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_452", godot_icall_4_452);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_453", godot_icall_4_453);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_454", godot_icall_5_454);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_455", godot_icall_0_455);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_9_456", godot_icall_9_456);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_457", godot_icall_0_457);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_458", godot_icall_2_458);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_459", godot_icall_1_459);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_460", godot_icall_4_460);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_461", godot_icall_0_461);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_462", godot_icall_4_462);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_463", godot_icall_4_463);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_464", godot_icall_0_464);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_465", godot_icall_1_465);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_466", godot_icall_5_466);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_467", godot_icall_5_467);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_468", godot_icall_1_468);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_469", godot_icall_2_469);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_470", godot_icall_2_470);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_471", godot_icall_1_471);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_472", godot_icall_1_472);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_473", godot_icall_0_473);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_474", godot_icall_2_474);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_475", godot_icall_1_475);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_476", godot_icall_4_476);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_477", godot_icall_5_477);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_478", godot_icall_0_478);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_479", godot_icall_3_479);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_480", godot_icall_3_480);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_481", godot_icall_4_481);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_482", godot_icall_1_482);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_483", godot_icall_1_483);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_484", godot_icall_2_484);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_485", godot_icall_2_485);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_486", godot_icall_3_486);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_487", godot_icall_4_487);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_488", godot_icall_2_488);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_489", godot_icall_0_489);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_490", godot_icall_1_490);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_491", godot_icall_4_491);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_492", godot_icall_2_492);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_493", godot_icall_2_493);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_494", godot_icall_5_494);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_495", godot_icall_4_495);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_496", godot_icall_4_496);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_497", godot_icall_0_497);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_498", godot_icall_0_498);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_499", godot_icall_3_499);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_500", godot_icall_3_500);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_501", godot_icall_2_501);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_502", godot_icall_1_502);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_503", godot_icall_2_503);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_504", godot_icall_2_504);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_505", godot_icall_3_505);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_506", godot_icall_1_506);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_507", godot_icall_2_507);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_508", godot_icall_3_508);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_509", godot_icall_2_509);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_510", godot_icall_1_510);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_511", godot_icall_2_511);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_512", godot_icall_1_512);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_513", godot_icall_0_513);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_514", godot_icall_0_514);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_515", godot_icall_0_515);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_516", godot_icall_0_516);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_517", godot_icall_1_517);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_518", godot_icall_2_518);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_519", godot_icall_3_519);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_520", godot_icall_2_520);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_521", godot_icall_2_521);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_522", godot_icall_3_522);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_523", godot_icall_1_523);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_524", godot_icall_2_524);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_525", godot_icall_1_525);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_526", godot_icall_2_526);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_527", godot_icall_2_527);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_528", godot_icall_3_528);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_529", godot_icall_4_529);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_530", godot_icall_6_530);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_531", godot_icall_7_531);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_532", godot_icall_3_532);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_533", godot_icall_1_533);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_534", godot_icall_0_534);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_535", godot_icall_4_535);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_536", godot_icall_6_536);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_537", godot_icall_7_537);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_538", godot_icall_3_538);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_539", godot_icall_1_539);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_540", godot_icall_0_540);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_541", godot_icall_0_541);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_542", godot_icall_0_542);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_543", godot_icall_2_543);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_544", godot_icall_0_544);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_545", godot_icall_0_545);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_546", godot_icall_0_546);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_547", godot_icall_0_547);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_548", godot_icall_2_548);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_549", godot_icall_0_549);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_550", godot_icall_0_550);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_551", godot_icall_0_551);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_552", godot_icall_0_552);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_553", godot_icall_0_553);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_554", godot_icall_0_554);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_555", godot_icall_1_555);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_556", godot_icall_1_556);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_557", godot_icall_2_557);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_558", godot_icall_1_558);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_559", godot_icall_0_559);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_560", godot_icall_2_560);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_561", godot_icall_1_561);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_562", godot_icall_2_562);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_563", godot_icall_1_563);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_564", godot_icall_2_564);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_565", godot_icall_2_565);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_566", godot_icall_1_566);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_567", godot_icall_2_567);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_568", godot_icall_2_568);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_569", godot_icall_2_569);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_570", godot_icall_1_570);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_571", godot_icall_1_571);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_572", godot_icall_1_572);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_573", godot_icall_0_573);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_574", godot_icall_0_574);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_575", godot_icall_0_575);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_576", godot_icall_2_576);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_577", godot_icall_1_577);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_578", godot_icall_0_578);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_579", godot_icall_3_579);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_580", godot_icall_0_580);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_581", godot_icall_3_581);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_582", godot_icall_3_582);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_583", godot_icall_3_583);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_584", godot_icall_1_584);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_585", godot_icall_3_585);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_586", godot_icall_3_586);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_587", godot_icall_1_587);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_588", godot_icall_0_588);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_589", godot_icall_0_589);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_590", godot_icall_0_590);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_591", godot_icall_0_591);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_592", godot_icall_2_592);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_593", godot_icall_2_593);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_594", godot_icall_0_594);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_595", godot_icall_0_595);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_596", godot_icall_0_596);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_597", godot_icall_0_597);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_598", godot_icall_3_598);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_599", godot_icall_1_599);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_600", godot_icall_3_600);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_601", godot_icall_1_601);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_602", godot_icall_1_602);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_603", godot_icall_1_603);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_604", godot_icall_2_604);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_605", godot_icall_3_605);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_606", godot_icall_0_606);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_607", godot_icall_0_607);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_608", godot_icall_0_608);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_609", godot_icall_0_609);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_610", godot_icall_3_610);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_611", godot_icall_3_611);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_612", godot_icall_1_612);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_613", godot_icall_0_613);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_614", godot_icall_2_614);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_615", godot_icall_1_615);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_616", godot_icall_0_616);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_617", godot_icall_2_617);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_618", godot_icall_2_618);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_619", godot_icall_2_619);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_620", godot_icall_5_620);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_621", godot_icall_3_621);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_622", godot_icall_3_622);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_623", godot_icall_0_623);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_624", godot_icall_0_624);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_625", godot_icall_0_625);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_626", godot_icall_0_626);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_627", godot_icall_3_627);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_628", godot_icall_2_628);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_629", godot_icall_3_629);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_630", godot_icall_4_630);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_631", godot_icall_3_631);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_632", godot_icall_2_632);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_633", godot_icall_1_633);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_634", godot_icall_1_634);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_635", godot_icall_0_635);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_636", godot_icall_4_636);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_637", godot_icall_5_637);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_638", godot_icall_5_638);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_639", godot_icall_1_639);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_640", godot_icall_2_640);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_641", godot_icall_4_641);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_642", godot_icall_0_642);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_643", godot_icall_3_643);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_644", godot_icall_0_644);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_645", godot_icall_0_645);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_646", godot_icall_0_646);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_647", godot_icall_0_647);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_648", godot_icall_0_648);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_649", godot_icall_0_649);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_650", godot_icall_0_650);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_651", godot_icall_0_651);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_652", godot_icall_2_652);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_653", godot_icall_0_653);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_654", godot_icall_2_654);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_655", godot_icall_1_655);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_656", godot_icall_1_656);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_657", godot_icall_1_657);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_658", godot_icall_0_658);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_659", godot_icall_6_659);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_660", godot_icall_7_660);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_661", godot_icall_6_661);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_662", godot_icall_2_662);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_663", godot_icall_1_663);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_664", godot_icall_1_664);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_665", godot_icall_2_665);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_666", godot_icall_1_666);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_667", godot_icall_1_667);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_668", godot_icall_2_668);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_669", godot_icall_1_669);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_670", godot_icall_3_670);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_671", godot_icall_2_671);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_672", godot_icall_1_672);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_673", godot_icall_2_673);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_674", godot_icall_1_674);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_675", godot_icall_2_675);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_676", godot_icall_1_676);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_677", godot_icall_4_677);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_678", godot_icall_3_678);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_679", godot_icall_3_679);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_680", godot_icall_3_680);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_681", godot_icall_1_681);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_682", godot_icall_2_682);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_683", godot_icall_2_683);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_684", godot_icall_2_684);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_685", godot_icall_3_685);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_686", godot_icall_2_686);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_687", godot_icall_2_687);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_688", godot_icall_1_688);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_689", godot_icall_2_689);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_690", godot_icall_1_690);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_691", godot_icall_3_691);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_692", godot_icall_1_692);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_693", godot_icall_4_693);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_694", godot_icall_1_694);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_695", godot_icall_1_695);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_696", godot_icall_2_696);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_697", godot_icall_2_697);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_698", godot_icall_3_698);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_699", godot_icall_4_699);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_700", godot_icall_8_700);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_701", godot_icall_1_701);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_702", godot_icall_3_702);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_703", godot_icall_5_703);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_704", godot_icall_4_704);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_705", godot_icall_1_705);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_706", godot_icall_0_706);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_707", godot_icall_6_707);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_708", godot_icall_6_708);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_709", godot_icall_2_709);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_710", godot_icall_1_710);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_711", godot_icall_1_711);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_712", godot_icall_1_712);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_713", godot_icall_4_713);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_714", godot_icall_3_714);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_715", godot_icall_2_715);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_716", godot_icall_2_716);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_717", godot_icall_1_717);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_718", godot_icall_2_718);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_719", godot_icall_1_719);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_720", godot_icall_1_720);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_721", godot_icall_2_721);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_722", godot_icall_3_722);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_723", godot_icall_2_723);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_724", godot_icall_7_724);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_725", godot_icall_1_725);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_726", godot_icall_4_726);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_727", godot_icall_1_727);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_728", godot_icall_4_728);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_729", godot_icall_1_729);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_730", godot_icall_4_730);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_731", godot_icall_3_731);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_732", godot_icall_4_732);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_733", godot_icall_3_733);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_734", godot_icall_2_734);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_735", godot_icall_2_735);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_736", godot_icall_2_736);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_737", godot_icall_2_737);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_738", godot_icall_3_738);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_739", godot_icall_4_739);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_740", godot_icall_5_740);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_741", godot_icall_3_741);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_742", godot_icall_4_742);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_743", godot_icall_3_743);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_744", godot_icall_2_744);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_745", godot_icall_3_745);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_746", godot_icall_1_746);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_747", godot_icall_0_747);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_748", godot_icall_3_748);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_749", godot_icall_0_749);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_750", godot_icall_1_750);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_751", godot_icall_0_751);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_752", godot_icall_3_752);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_753", godot_icall_3_753);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_754", godot_icall_5_754);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_755", godot_icall_1_755);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_756", godot_icall_1_756);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_757", godot_icall_1_757);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_758", godot_icall_1_758);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_759", godot_icall_3_759);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_760", godot_icall_3_760);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_761", godot_icall_1_761);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_762", godot_icall_0_762);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_763", godot_icall_0_763);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_764", godot_icall_0_764);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_765", godot_icall_0_765);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_766", godot_icall_4_766);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_767", godot_icall_0_767);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_768", godot_icall_2_768);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_769", godot_icall_1_769);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_770", godot_icall_1_770);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_771", godot_icall_2_771);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_772", godot_icall_4_772);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_773", godot_icall_4_773);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_774", godot_icall_3_774);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_775", godot_icall_4_775);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_776", godot_icall_3_776);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_777", godot_icall_0_777);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_778", godot_icall_4_778);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_779", godot_icall_0_779);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_780", godot_icall_0_780);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_781", godot_icall_1_781);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_782", godot_icall_0_782);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_783", godot_icall_3_783);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_784", godot_icall_5_784);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_785", godot_icall_3_785);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_786", godot_icall_5_786);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_787", godot_icall_2_787);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_788", godot_icall_0_788);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_789", godot_icall_1_789);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_790", godot_icall_4_790);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_791", godot_icall_1_791);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_792", godot_icall_0_792);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_793", godot_icall_3_793);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_794", godot_icall_0_794);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_795", godot_icall_0_795);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_796", godot_icall_2_796);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_797", godot_icall_3_797);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_798", godot_icall_0_798);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_799", godot_icall_0_799);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_800", godot_icall_0_800);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_801", godot_icall_0_801);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_802", godot_icall_0_802);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_803", godot_icall_0_803);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_804", godot_icall_0_804);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_805", godot_icall_0_805);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_806", godot_icall_0_806);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_807", godot_icall_0_807);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_808", godot_icall_0_808);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_809", godot_icall_0_809);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_810", godot_icall_0_810);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_811", godot_icall_3_811);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_812", godot_icall_2_812);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_813", godot_icall_3_813);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_814", godot_icall_1_814);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_815", godot_icall_1_815);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_816", godot_icall_1_816);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_817", godot_icall_1_817);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_818", godot_icall_1_818);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_819", godot_icall_1_819);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_820", godot_icall_2_820);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_821", godot_icall_0_821);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_822", godot_icall_0_822);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_823", godot_icall_0_823);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_824", godot_icall_0_824);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_825", godot_icall_0_825);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_826", godot_icall_4_826);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_827", godot_icall_0_827);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_828", godot_icall_0_828);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_829", godot_icall_2_829);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_830", godot_icall_0_830);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_831", godot_icall_2_831);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_832", godot_icall_4_832);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_833", godot_icall_0_833);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_834", godot_icall_6_834);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_835", godot_icall_2_835);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_836", godot_icall_3_836);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_837", godot_icall_3_837);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_838", godot_icall_2_838);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_839", godot_icall_2_839);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_840", godot_icall_0_840);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_841", godot_icall_1_841);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_842", godot_icall_0_842);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_843", godot_icall_1_843);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_844", godot_icall_0_844);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_845", godot_icall_0_845);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_846", godot_icall_0_846);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_847", godot_icall_4_847);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_848", godot_icall_2_848);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_849", godot_icall_4_849);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_850", godot_icall_1_850);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_851", godot_icall_4_851);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_852", godot_icall_5_852);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_853", godot_icall_6_853);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_854", godot_icall_7_854);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_855", godot_icall_5_855);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_856", godot_icall_0_856);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_857", godot_icall_0_857);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_858", godot_icall_5_858);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_859", godot_icall_0_859);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_860", godot_icall_3_860);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_861", godot_icall_3_861);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_862", godot_icall_4_862);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_863", godot_icall_3_863);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_864", godot_icall_3_864);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_865", godot_icall_4_865);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_866", godot_icall_3_866);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_867", godot_icall_2_867);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_868", godot_icall_0_868);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_869", godot_icall_0_869);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_870", godot_icall_0_870);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_871", godot_icall_0_871);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_872", godot_icall_7_872);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_873", godot_icall_5_873);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_874", godot_icall_2_874);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_875", godot_icall_3_875);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_876", godot_icall_2_876);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_877", godot_icall_3_877);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_878", godot_icall_2_878);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_879", godot_icall_2_879);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_880", godot_icall_3_880);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_881", godot_icall_2_881);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_882", godot_icall_1_882);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_883", godot_icall_1_883);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_884", godot_icall_2_884);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_885", godot_icall_3_885);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_886", godot_icall_2_886);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_887", godot_icall_5_887);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_888", godot_icall_1_888);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_889", godot_icall_1_889);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_890", godot_icall_1_890);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_891", godot_icall_0_891);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_892", godot_icall_0_892);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_893", godot_icall_2_893);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_894", godot_icall_0_894);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_895", godot_icall_1_895);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_896", godot_icall_0_896);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_897", godot_icall_2_897);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_898", godot_icall_1_898);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_899", godot_icall_1_899);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_900", godot_icall_2_900);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_901", godot_icall_1_901);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_902", godot_icall_5_902);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_903", godot_icall_1_903);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_904", godot_icall_3_904);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_905", godot_icall_1_905);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_906", godot_icall_3_906);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_907", godot_icall_5_907);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_908", godot_icall_2_908);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_909", godot_icall_1_909);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_910", godot_icall_0_910);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_911", godot_icall_2_911);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_912", godot_icall_8_912);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_913", godot_icall_8_913);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_914", godot_icall_8_914);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_9_915", godot_icall_9_915);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_9_916", godot_icall_9_916);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_9_917", godot_icall_9_917);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_9_918", godot_icall_9_918);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_919", godot_icall_0_919);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_920", godot_icall_3_920);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_921", godot_icall_3_921);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_922", godot_icall_0_922);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_923", godot_icall_3_923);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_924", godot_icall_0_924);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_925", godot_icall_0_925);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_926", godot_icall_0_926);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_927", godot_icall_0_927);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_928", godot_icall_0_928);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_929", godot_icall_0_929);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_930", godot_icall_0_930);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_931", godot_icall_1_931);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_932", godot_icall_2_932);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_933", godot_icall_2_933);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_934", godot_icall_7_934);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_935", godot_icall_3_935);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_10_936", godot_icall_10_936);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_937", godot_icall_2_937);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_938", godot_icall_1_938);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_939", godot_icall_1_939);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_940", godot_icall_4_940);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_941", godot_icall_2_941);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_942", godot_icall_1_942);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_943", godot_icall_3_943);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_944", godot_icall_1_944);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_945", godot_icall_3_945);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_946", godot_icall_2_946);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_947", godot_icall_3_947);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_948", godot_icall_2_948);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_949", godot_icall_4_949);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_950", godot_icall_5_950);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_951", godot_icall_1_951);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_952", godot_icall_4_952);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_953", godot_icall_2_953);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_954", godot_icall_2_954);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_955", godot_icall_2_955);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_956", godot_icall_2_956);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_957", godot_icall_2_957);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_958", godot_icall_2_958);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_959", godot_icall_2_959);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_960", godot_icall_1_960);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_961", godot_icall_5_961);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_962", godot_icall_3_962);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_963", godot_icall_2_963);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_964", godot_icall_2_964);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_965", godot_icall_2_965);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_966", godot_icall_2_966);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_967", godot_icall_1_967);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_968", godot_icall_2_968);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_969", godot_icall_1_969);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_970", godot_icall_4_970);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_971", godot_icall_5_971);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_972", godot_icall_3_972);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_973", godot_icall_3_973);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_974", godot_icall_3_974);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_975", godot_icall_4_975);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_976", godot_icall_2_976);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_977", godot_icall_4_977);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_978", godot_icall_6_978);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_12_979", godot_icall_12_979);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_9_980", godot_icall_9_980);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_981", godot_icall_6_981);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_982", godot_icall_7_982);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_13_983", godot_icall_13_983);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_984", godot_icall_5_984);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_985", godot_icall_7_985);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_986", godot_icall_5_986);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_987", godot_icall_2_987);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_988", godot_icall_5_988);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_989", godot_icall_5_989);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_990", godot_icall_2_990);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_991", godot_icall_3_991);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_992", godot_icall_2_992);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_993", godot_icall_3_993);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_994", godot_icall_3_994);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_995", godot_icall_6_995);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_996", godot_icall_5_996);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_997", godot_icall_3_997);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_998", godot_icall_4_998);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_999", godot_icall_7_999);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_1000", godot_icall_8_1000);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_11_1001", godot_icall_11_1001);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1002", godot_icall_7_1002);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1003", godot_icall_7_1003);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_12_1004", godot_icall_12_1004);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1005", godot_icall_6_1005);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1006", godot_icall_4_1006);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1007", godot_icall_3_1007);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1008", godot_icall_2_1008);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1009", godot_icall_3_1009);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1010", godot_icall_4_1010);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1011", godot_icall_4_1011);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1012", godot_icall_2_1012);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1013", godot_icall_5_1013);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1014", godot_icall_5_1014);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1015", godot_icall_5_1015);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1016", godot_icall_0_1016);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1017", godot_icall_0_1017);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1018", godot_icall_0_1018);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1019", godot_icall_0_1019);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1020", godot_icall_0_1020);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1021", godot_icall_0_1021);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1022", godot_icall_0_1022);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1023", godot_icall_0_1023);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1024", godot_icall_0_1024);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1025", godot_icall_0_1025);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1026", godot_icall_0_1026);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1027", godot_icall_0_1027);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1028", godot_icall_0_1028);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1029", godot_icall_0_1029);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1030", godot_icall_0_1030);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1031", godot_icall_0_1031);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1032", godot_icall_0_1032);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1033", godot_icall_0_1033);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1034", godot_icall_0_1034);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1035", godot_icall_0_1035);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1036", godot_icall_0_1036);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1037", godot_icall_0_1037);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1038", godot_icall_0_1038);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1039", godot_icall_0_1039);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1040", godot_icall_2_1040);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1041", godot_icall_3_1041);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1042", godot_icall_1_1042);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1043", godot_icall_2_1043);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1044", godot_icall_3_1044);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1045", godot_icall_0_1045);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1046", godot_icall_4_1046);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1047", godot_icall_0_1047);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1048", godot_icall_4_1048);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1049", godot_icall_1_1049);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1050", godot_icall_0_1050);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1051", godot_icall_3_1051);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1052", godot_icall_0_1052);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1053", godot_icall_0_1053);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1054", godot_icall_0_1054);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1055", godot_icall_1_1055);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1056", godot_icall_2_1056);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1057", godot_icall_2_1057);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1058", godot_icall_2_1058);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1059", godot_icall_3_1059);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1060", godot_icall_3_1060);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1061", godot_icall_2_1061);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1062", godot_icall_3_1062);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1063", godot_icall_3_1063);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1064", godot_icall_2_1064);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1065", godot_icall_0_1065);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1066", godot_icall_1_1066);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1067", godot_icall_3_1067);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1068", godot_icall_3_1068);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1069", godot_icall_1_1069);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1070", godot_icall_2_1070);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1071", godot_icall_1_1071);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1072", godot_icall_1_1072);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1073", godot_icall_4_1073);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1074", godot_icall_5_1074);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1075", godot_icall_3_1075);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1076", godot_icall_4_1076);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1077", godot_icall_4_1077);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1078", godot_icall_4_1078);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1079", godot_icall_4_1079);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1080", godot_icall_3_1080);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1081", godot_icall_3_1081);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1082", godot_icall_1_1082);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1083", godot_icall_5_1083);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1084", godot_icall_4_1084);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1085", godot_icall_4_1085);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1086", godot_icall_3_1086);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1087", godot_icall_4_1087);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1088", godot_icall_2_1088);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1089", godot_icall_1_1089);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1090", godot_icall_1_1090);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1091", godot_icall_2_1091);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1092", godot_icall_2_1092);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1093", godot_icall_3_1093);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1094", godot_icall_4_1094);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1095", godot_icall_1_1095);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1096", godot_icall_3_1096);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1097", godot_icall_1_1097);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1098", godot_icall_2_1098);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1099", godot_icall_1_1099);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1100", godot_icall_1_1100);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1101", godot_icall_4_1101);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1102", godot_icall_0_1102);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1103", godot_icall_1_1103);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1104", godot_icall_0_1104);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1105", godot_icall_5_1105);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1106", godot_icall_1_1106);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1107", godot_icall_1_1107);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1108", godot_icall_2_1108);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1109", godot_icall_4_1109);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1110", godot_icall_1_1110);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1111", godot_icall_0_1111);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1112", godot_icall_2_1112);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1113", godot_icall_3_1113);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1114", godot_icall_3_1114);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1115", godot_icall_1_1115);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1116", godot_icall_4_1116);
}

} // namespace GodotSharpBindings

#endif // MONO_GLUE_ENABLED
