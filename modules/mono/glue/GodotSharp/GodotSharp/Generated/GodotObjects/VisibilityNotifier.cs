using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>The VisibilityNotifier detects when it is visible on the screen. It also notifies when its bounding rectangle enters or exits the screen or a <see cref="Godot.Camera"/>'s view.</para>
    /// <para>If you want nodes to be disabled automatically when they exit the screen, use <see cref="Godot.VisibilityEnabler"/> instead.</para>
    /// <para>Note: VisibilityNotifier uses an approximate heuristic for performance reasons. It doesn't take walls and other occlusion into account (unless you are using <see cref="Godot.Portal"/>s). The heuristic is an implementation detail and may change in future versions. If you need precise visibility checking, use another method such as adding an <see cref="Godot.Area"/> node as a child of a <see cref="Godot.Camera"/> node and/or <c>Vector3.dot</c>.</para>
    /// </summary>
    public partial class VisibilityNotifier : CullInstance
    {
        /// <summary>
        /// <para>The VisibilityNotifier's bounding box.</para>
        /// </summary>
        public AABB Aabb
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetAabb();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetAabb(value);
            }
#pragma warning restore CS0618
        }

        private const string nativeName = "VisibilityNotifier";

        public VisibilityNotifier() : this(false)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_VisibilityNotifier_Ctor(this);
        }

        internal VisibilityNotifier(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_aabb");

        [GodotMethod("set_aabb")]
        [Obsolete("SetAabb is deprecated. Use the Aabb property instead.")]
        public void SetAabb(AABB rect)
        {
            NativeCalls.godot_icall_1_158(method_bind_0, Object.GetPtr(this), ref rect);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_aabb");

        [GodotMethod("get_aabb")]
        [Obsolete("GetAabb is deprecated. Use the Aabb property instead.")]
        public AABB GetAabb()
        {
            NativeCalls.godot_icall_0_159(method_bind_1, Object.GetPtr(this), out AABB argRet); return (AABB)argRet;
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "is_on_screen");

        /// <summary>
        /// <para>If <c>true</c>, the bounding box is on the screen.</para>
        /// <para>Note: It takes one frame for the node's visibility to be assessed once added to the scene tree, so this method will return <c>false</c> right after it is instantiated, even if it will be on screen in the draw pass.</para>
        /// </summary>
        [GodotMethod("is_on_screen")]
        public bool IsOnScreen()
        {
            return NativeCalls.godot_icall_0_7(method_bind_2, Object.GetPtr(this));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
