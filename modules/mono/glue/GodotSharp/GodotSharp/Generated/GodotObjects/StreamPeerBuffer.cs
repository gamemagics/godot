using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    public partial class StreamPeerBuffer : StreamPeer
    {
        public byte[] DataArray
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetDataArray();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetDataArray(value);
            }
#pragma warning restore CS0618
        }

        private const string nativeName = "StreamPeerBuffer";

        public StreamPeerBuffer() : this(true)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_StreamPeerBuffer_Ctor(this);
        }

        internal StreamPeerBuffer(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "seek");

        [GodotMethod("seek")]
        public void Seek(int position)
        {
            NativeCalls.godot_icall_1_4(method_bind_0, Object.GetPtr(this), position);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_size");

        [GodotMethod("get_size")]
        public int GetSize()
        {
            return NativeCalls.godot_icall_0_5(method_bind_1, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_position");

        [GodotMethod("get_position")]
        public int GetPosition()
        {
            return NativeCalls.godot_icall_0_5(method_bind_2, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "resize");

        [GodotMethod("resize")]
        public void Resize(int size)
        {
            NativeCalls.godot_icall_1_4(method_bind_3, Object.GetPtr(this), size);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_4 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_data_array");

        [GodotMethod("set_data_array")]
        [Obsolete("SetDataArray is deprecated. Use the DataArray property instead.")]
        public void SetDataArray(byte[] data)
        {
            NativeCalls.godot_icall_1_183(method_bind_4, Object.GetPtr(this), data);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_5 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_data_array");

        [GodotMethod("get_data_array")]
        [Obsolete("GetDataArray is deprecated. Use the DataArray property instead.")]
        public byte[] GetDataArray()
        {
            return NativeCalls.godot_icall_0_2(method_bind_5, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_6 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "clear");

        [GodotMethod("clear")]
        public void Clear()
        {
            NativeCalls.godot_icall_0_3(method_bind_6, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_7 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "duplicate");

        [GodotMethod("duplicate")]
        public StreamPeerBuffer Duplicate()
        {
            return NativeCalls.godot_icall_0_822(method_bind_7, Object.GetPtr(this));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
