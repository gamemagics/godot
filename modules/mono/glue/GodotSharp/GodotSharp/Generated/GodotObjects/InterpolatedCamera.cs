using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>Deprecated (will be removed in Godot 4.0). InterpolatedCamera is a <see cref="Godot.Camera"/> which smoothly moves to match a target node's position and rotation.</para>
    /// <para>If it is not <see cref="Godot.InterpolatedCamera.Enabled"/> or does not have a valid target set, InterpolatedCamera acts like a normal Camera.</para>
    /// </summary>
    public partial class InterpolatedCamera : Camera
    {
        /// <summary>
        /// <para>The target's <see cref="Godot.NodePath"/>.</para>
        /// </summary>
        public NodePath Target
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetTargetPath();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetTargetPath(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>How quickly the camera moves toward its target. Higher values will result in tighter camera motion.</para>
        /// </summary>
        public float Speed
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetSpeed();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetSpeed(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>If <c>true</c>, and a target is set, the camera will move automatically.</para>
        /// </summary>
        public bool Enabled
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return IsInterpolationEnabled();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetInterpolationEnabled(value);
            }
#pragma warning restore CS0618
        }

        private const string nativeName = "InterpolatedCamera";

        public InterpolatedCamera() : this(false)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_InterpolatedCamera_Ctor(this);
        }

        internal InterpolatedCamera(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_target_path");

        [GodotMethod("set_target_path")]
        [Obsolete("SetTargetPath is deprecated. Use the Target property instead.")]
        public void SetTargetPath(NodePath targetPath)
        {
            NativeCalls.godot_icall_1_130(method_bind_0, Object.GetPtr(this), NodePath.GetPtr(targetPath));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_target_path");

        [GodotMethod("get_target_path")]
        [Obsolete("GetTargetPath is deprecated. Use the Target property instead.")]
        public NodePath GetTargetPath()
        {
            return new NodePath(NativeCalls.godot_icall_0_131(method_bind_1, Object.GetPtr(this)));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_target");

        /// <summary>
        /// <para>Sets the node to move toward and orient with.</para>
        /// </summary>
        [GodotMethod("set_target")]
        public void SetTarget(Object target)
        {
            NativeCalls.godot_icall_1_55(method_bind_2, Object.GetPtr(this), Object.GetPtr(target));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_speed");

        [GodotMethod("set_speed")]
        [Obsolete("SetSpeed is deprecated. Use the Speed property instead.")]
        public void SetSpeed(float speed)
        {
            NativeCalls.godot_icall_1_15(method_bind_3, Object.GetPtr(this), speed);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_4 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_speed");

        [GodotMethod("get_speed")]
        [Obsolete("GetSpeed is deprecated. Use the Speed property instead.")]
        public float GetSpeed()
        {
            return NativeCalls.godot_icall_0_14(method_bind_4, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_5 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_interpolation_enabled");

        [GodotMethod("set_interpolation_enabled")]
        [Obsolete("SetInterpolationEnabled is deprecated. Use the Enabled property instead.")]
        public void SetInterpolationEnabled(bool targetPath)
        {
            NativeCalls.godot_icall_1_16(method_bind_5, Object.GetPtr(this), targetPath);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_6 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "is_interpolation_enabled");

        [GodotMethod("is_interpolation_enabled")]
        [Obsolete("IsInterpolationEnabled is deprecated. Use the Enabled property instead.")]
        public bool IsInterpolationEnabled()
        {
            return NativeCalls.godot_icall_0_7(method_bind_6, Object.GetPtr(this));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
