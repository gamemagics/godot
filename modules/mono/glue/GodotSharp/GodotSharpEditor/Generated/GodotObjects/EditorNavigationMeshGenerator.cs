using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    public partial class EditorNavigationMeshGenerator : Object
    {
        private const string nativeName = "EditorNavigationMeshGenerator";

        public EditorNavigationMeshGenerator() : this(false)
        {
            if (ptr == IntPtr.Zero)
                ptr = EditorNativeCalls.godot_icall_EditorNavigationMeshGenerator_Ctor(this);
        }

        internal EditorNavigationMeshGenerator(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "bake");

        [GodotMethod("bake")]
        public void Bake(NavigationMesh navMesh, Node rootNode)
        {
            EditorNativeCalls.godot_icall_2_388(method_bind_0, Object.GetPtr(this), Object.GetPtr(navMesh), Object.GetPtr(rootNode));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "clear");

        [GodotMethod("clear")]
        public void Clear(NavigationMesh navMesh)
        {
            NativeCalls.godot_icall_1_24(method_bind_1, Object.GetPtr(this), Object.GetPtr(navMesh));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
