using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>NavigationMeshInstance is a node that takes a <see cref="Godot.NavigationMesh"/> resource and adds it to the current scenario by creating an instance of it.</para>
    /// </summary>
    public partial class NavigationMeshInstance : Spatial
    {
        /// <summary>
        /// <para>The <see cref="Godot.NavigationMesh"/> resource for the instance.</para>
        /// </summary>
        public NavigationMesh Navmesh
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetNavigationMesh();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetNavigationMesh(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>If <c>true</c>, the navigation mesh will be used by <see cref="Godot.Navigation"/>.</para>
        /// </summary>
        public bool Enabled
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return IsEnabled();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetEnabled(value);
            }
#pragma warning restore CS0618
        }

        private const string nativeName = "NavigationMeshInstance";

        public NavigationMeshInstance() : this(false)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_NavigationMeshInstance_Ctor(this);
        }

        internal NavigationMeshInstance(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_navigation_mesh");

        [GodotMethod("set_navigation_mesh")]
        [Obsolete("SetNavigationMesh is deprecated. Use the Navmesh property instead.")]
        public void SetNavigationMesh(NavigationMesh navmesh)
        {
            NativeCalls.godot_icall_1_24(method_bind_0, Object.GetPtr(this), Object.GetPtr(navmesh));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_navigation_mesh");

        [GodotMethod("get_navigation_mesh")]
        [Obsolete("GetNavigationMesh is deprecated. Use the Navmesh property instead.")]
        public NavigationMesh GetNavigationMesh()
        {
            return NativeCalls.godot_icall_0_591(method_bind_1, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_enabled");

        [GodotMethod("set_enabled")]
        [Obsolete("SetEnabled is deprecated. Use the Enabled property instead.")]
        public void SetEnabled(bool enabled)
        {
            NativeCalls.godot_icall_1_16(method_bind_2, Object.GetPtr(this), enabled);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "is_enabled");

        [GodotMethod("is_enabled")]
        [Obsolete("IsEnabled is deprecated. Use the Enabled property instead.")]
        public bool IsEnabled()
        {
            return NativeCalls.godot_icall_0_7(method_bind_3, Object.GetPtr(this));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
