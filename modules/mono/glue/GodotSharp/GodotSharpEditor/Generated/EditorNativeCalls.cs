using System;
using System.Runtime.CompilerServices;

namespace Godot
{
    internal static class EditorNativeCalls
    {
        internal static ulong godot_api_hash = 6556070434402148854;
        internal static uint bindings_version = 13;
        internal static uint cs_glue_version = 1642044651;

        static EditorNativeCalls()
        {
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_AnimationTrackEditPlugin_Ctor(AnimationTrackEditPlugin obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorExportPlugin_Ctor(EditorExportPlugin obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorFeatureProfile_Ctor(EditorFeatureProfile obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorFileDialog_Ctor(EditorFileDialog obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorFileSystemDirectory_Ctor(EditorFileSystemDirectory obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorImportPlugin_Ctor(EditorImportPlugin obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorInspector_Ctor(EditorInspector obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorInspectorPlugin_Ctor(EditorInspectorPlugin obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorPlugin_Ctor(EditorPlugin obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorProperty_Ctor(EditorProperty obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorResourceConversionPlugin_Ctor(EditorResourceConversionPlugin obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorResourcePicker_Ctor(EditorResourcePicker obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorResourcePreviewGenerator_Ctor(EditorResourcePreviewGenerator obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorSceneImporter_Ctor(EditorSceneImporter obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorSceneImporterGLTF_Ctor(EditorSceneImporterGLTF obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorScenePostImport_Ctor(EditorScenePostImport obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorScript_Ctor(EditorScript obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorScriptPicker_Ctor(EditorScriptPicker obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorSelection_Ctor(EditorSelection obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorSpatialGizmo_Ctor(EditorSpatialGizmo obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorSpatialGizmoPlugin_Ctor(EditorSpatialGizmoPlugin obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorSpinSlider_Ctor(EditorSpinSlider obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_EditorVCSInterface_Ctor(EditorVCSInterface obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_GLTFMesh_Ctor(GLTFMesh obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_ScriptCreateDialog_Ctor(ScriptCreateDialog obj);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_2_361(IntPtr method, IntPtr ptr, string arg1, string[] arg2);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_3_362(IntPtr method, IntPtr ptr, string arg1, byte[] arg2, bool arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_3_363(IntPtr method, IntPtr ptr, string arg1, string arg2, bool arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern int godot_icall_0_364(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern int godot_icall_0_366(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern int godot_icall_0_367(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorFileSystemDirectory godot_icall_0_368(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorFileSystemDirectory godot_icall_1_369(IntPtr method, IntPtr ptr, string arg1);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorFileSystemDirectory godot_icall_1_370(IntPtr method, IntPtr ptr, int arg1);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_3_372(IntPtr method, IntPtr ptr, string arg1, string[] arg2, IntPtr arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_3_373(IntPtr method, IntPtr ptr, IntPtr arg1, string arg2, bool arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorSelection godot_icall_0_374(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorSettings godot_icall_0_375(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern ScriptEditor godot_icall_0_376(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_377(IntPtr method, IntPtr ptr, IntPtr arg1, int arg2, int arg3, bool arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorResourcePreview godot_icall_0_378(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorFileSystem godot_icall_0_379(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern IntPtr godot_icall_2_380(IntPtr method, IntPtr ptr, IntPtr arg1, int arg2);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern FileSystemDock godot_icall_0_381(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorInspector godot_icall_0_382(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern ToolButton godot_icall_2_385(IntPtr method, IntPtr ptr, IntPtr arg1, string arg2);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_386(IntPtr method, IntPtr ptr, string arg1, IntPtr arg2, string arg3, object arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_387(IntPtr method, IntPtr ptr, string arg1, string arg2, IntPtr arg3, IntPtr arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern UndoRedo godot_icall_0_388(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorInterface godot_icall_0_389(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern ScriptCreateDialog godot_icall_0_390(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_392(IntPtr method, IntPtr ptr, string arg1, object arg2, string arg3, bool arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern object godot_icall_2_393(IntPtr method, IntPtr ptr, ref Vector2 arg1, IntPtr arg2);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern bool godot_icall_3_394(IntPtr method, IntPtr ptr, ref Vector2 arg1, object arg2, IntPtr arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_3_395(IntPtr method, IntPtr ptr, ref Vector2 arg1, object arg2, IntPtr arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_397(IntPtr method, IntPtr ptr, IntPtr arg1, IntPtr arg2, string arg3, object arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern Node godot_icall_4_398(IntPtr method, IntPtr ptr, string arg1, uint arg2, int arg3, uint arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern Animation godot_icall_3_399(IntPtr method, IntPtr ptr, string arg1, uint arg2, int arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_3_400(IntPtr method, IntPtr ptr, string arg1, object arg2, bool arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_402(IntPtr method, IntPtr ptr, Vector3[] arg1, IntPtr arg2, bool arg3, ref Color arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_403(IntPtr method, IntPtr ptr, IntPtr arg1, bool arg2, IntPtr arg3, IntPtr arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_3_404(IntPtr method, IntPtr ptr, IntPtr arg1, float arg2, ref Color arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_405(IntPtr method, IntPtr ptr, Vector3[] arg1, IntPtr arg2, bool arg3, bool arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern EditorSpatialGizmoPlugin godot_icall_0_407(IntPtr method, IntPtr ptr);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_5_408(IntPtr method, IntPtr ptr, string arg1, ref Color arg2, bool arg3, bool arg4, bool arg5);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_409(IntPtr method, IntPtr ptr, string arg1, IntPtr arg2, bool arg3, ref Color arg4);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_3_410(IntPtr method, IntPtr ptr, string arg1, bool arg2, IntPtr arg3);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern SpatialMaterial godot_icall_2_411(IntPtr method, IntPtr ptr, string arg1, IntPtr arg2);

        [MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern void godot_icall_4_778(IntPtr method, IntPtr ptr, string arg1, string arg2, bool arg3, bool arg4);
    }
}
