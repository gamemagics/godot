using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>General-purpose proximity detection node.</para>
    /// </summary>
    public partial class ProximityGroup : Spatial
    {
        public enum DispatchModeEnum
        {
            Proxy = 0,
            Signal = 1
        }

        public string GroupName
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetGroupName();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetGroupName(value);
            }
#pragma warning restore CS0618
        }

        public ProximityGroup.DispatchModeEnum DispatchMode
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetDispatchMode();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetDispatchMode(value);
            }
#pragma warning restore CS0618
        }

        public Vector3 GridRadius
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetGridRadius();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetGridRadius(value);
            }
#pragma warning restore CS0618
        }

        private const string nativeName = "ProximityGroup";

        public ProximityGroup() : this(false)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_ProximityGroup_Ctor(this);
        }

        internal ProximityGroup(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_group_name");

        [GodotMethod("set_group_name")]
        [Obsolete("SetGroupName is deprecated. Use the GroupName property instead.")]
        public void SetGroupName(string name)
        {
            NativeCalls.godot_icall_1_56(method_bind_0, Object.GetPtr(this), name);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_group_name");

        [GodotMethod("get_group_name")]
        [Obsolete("GetGroupName is deprecated. Use the GroupName property instead.")]
        public string GetGroupName()
        {
            return NativeCalls.godot_icall_0_6(method_bind_1, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_dispatch_mode");

        [GodotMethod("set_dispatch_mode")]
        [Obsolete("SetDispatchMode is deprecated. Use the DispatchMode property instead.")]
        public void SetDispatchMode(ProximityGroup.DispatchModeEnum mode)
        {
            NativeCalls.godot_icall_1_4(method_bind_2, Object.GetPtr(this), (int)mode);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_dispatch_mode");

        [GodotMethod("get_dispatch_mode")]
        [Obsolete("GetDispatchMode is deprecated. Use the DispatchMode property instead.")]
        public ProximityGroup.DispatchModeEnum GetDispatchMode()
        {
            return (ProximityGroup.DispatchModeEnum)NativeCalls.godot_icall_0_749(method_bind_3, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_4 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_grid_radius");

        [GodotMethod("set_grid_radius")]
        [Obsolete("SetGridRadius is deprecated. Use the GridRadius property instead.")]
        public void SetGridRadius(Vector3 radius)
        {
            NativeCalls.godot_icall_1_149(method_bind_4, Object.GetPtr(this), ref radius);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_5 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_grid_radius");

        [GodotMethod("get_grid_radius")]
        [Obsolete("GetGridRadius is deprecated. Use the GridRadius property instead.")]
        public Vector3 GetGridRadius()
        {
            NativeCalls.godot_icall_0_8(method_bind_5, Object.GetPtr(this), out Vector3 argRet); return (Vector3)argRet;
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_6 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "broadcast");

        [GodotMethod("broadcast")]
        public void Broadcast(string method, object parameters)
        {
            NativeCalls.godot_icall_2_97(method_bind_6, Object.GetPtr(this), method, parameters);
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
