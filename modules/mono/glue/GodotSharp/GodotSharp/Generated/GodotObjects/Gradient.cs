using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>Given a set of colors, this resource will interpolate them in order. This means that if you have color 1, color 2 and color 3, the ramp will interpolate from color 1 to color 2 and from color 2 to color 3. The ramp will initially have 2 colors (black and white), one (black) at ramp lower offset 0 and the other (white) at the ramp higher offset 1.</para>
    /// </summary>
    public partial class Gradient : Resource
    {
        /// <summary>
        /// <para>Gradient's offsets returned as a <see cref="float"/>.</para>
        /// </summary>
        public float[] Offsets
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetOffsets();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetOffsets(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>Gradient's colors returned as a <see cref="Godot.Color"/>.</para>
        /// </summary>
        public Color[] Colors
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetColors();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetColors(value);
            }
#pragma warning restore CS0618
        }

        private const string nativeName = "Gradient";

        public Gradient() : this(true)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_Gradient_Ctor(this);
        }

        internal Gradient(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "add_point");

        /// <summary>
        /// <para>Adds the specified color to the end of the ramp, with the specified offset.</para>
        /// </summary>
        [GodotMethod("add_point")]
        public void AddPoint(float offset, Color color)
        {
            NativeCalls.godot_icall_2_447(method_bind_0, Object.GetPtr(this), offset, ref color);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "remove_point");

        /// <summary>
        /// <para>Removes the color at the index <c>point</c>.</para>
        /// </summary>
        [GodotMethod("remove_point")]
        public void RemovePoint(int point)
        {
            NativeCalls.godot_icall_1_4(method_bind_1, Object.GetPtr(this), point);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_offset");

        /// <summary>
        /// <para>Sets the offset for the ramp color at index <c>point</c>.</para>
        /// </summary>
        [GodotMethod("set_offset")]
        public void SetOffset(int point, float offset)
        {
            NativeCalls.godot_icall_2_34(method_bind_2, Object.GetPtr(this), point, offset);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_offset");

        /// <summary>
        /// <para>Returns the offset of the ramp color at index <c>point</c>.</para>
        /// </summary>
        [GodotMethod("get_offset")]
        public float GetOffset(int point)
        {
            return NativeCalls.godot_icall_1_12(method_bind_3, Object.GetPtr(this), point);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_4 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_color");

        /// <summary>
        /// <para>Sets the color of the ramp color at index <c>point</c>.</para>
        /// </summary>
        [GodotMethod("set_color")]
        public void SetColor(int point, Color color)
        {
            NativeCalls.godot_icall_2_448(method_bind_4, Object.GetPtr(this), point, ref color);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_5 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_color");

        /// <summary>
        /// <para>Returns the color of the ramp color at index <c>point</c>.</para>
        /// </summary>
        [GodotMethod("get_color")]
        public Color GetColor(int point)
        {
            NativeCalls.godot_icall_1_449(method_bind_5, Object.GetPtr(this), point, out Color argRet); return (Color)argRet;
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_6 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "interpolate");

        /// <summary>
        /// <para>Returns the interpolated color specified by <c>offset</c>.</para>
        /// </summary>
        [GodotMethod("interpolate")]
        public Color Interpolate(float offset)
        {
            NativeCalls.godot_icall_1_450(method_bind_6, Object.GetPtr(this), offset, out Color argRet); return (Color)argRet;
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_7 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_point_count");

        /// <summary>
        /// <para>Returns the number of colors in the ramp.</para>
        /// </summary>
        [GodotMethod("get_point_count")]
        public int GetPointCount()
        {
            return NativeCalls.godot_icall_0_5(method_bind_7, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_8 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_offsets");

        [GodotMethod("set_offsets")]
        [Obsolete("SetOffsets is deprecated. Use the Offsets property instead.")]
        public void SetOffsets(float[] offsets)
        {
            NativeCalls.godot_icall_1_435(method_bind_8, Object.GetPtr(this), offsets);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_9 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_offsets");

        [GodotMethod("get_offsets")]
        [Obsolete("GetOffsets is deprecated. Use the Offsets property instead.")]
        public float[] GetOffsets()
        {
            return NativeCalls.godot_icall_0_350(method_bind_9, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_10 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_colors");

        [GodotMethod("set_colors")]
        [Obsolete("SetColors is deprecated. Use the Colors property instead.")]
        public void SetColors(Color[] colors)
        {
            NativeCalls.godot_icall_1_230(method_bind_10, Object.GetPtr(this), colors);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_11 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_colors");

        [GodotMethod("get_colors")]
        [Obsolete("GetColors is deprecated. Use the Colors property instead.")]
        public Color[] GetColors()
        {
            return NativeCalls.godot_icall_0_231(method_bind_11, Object.GetPtr(this));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
