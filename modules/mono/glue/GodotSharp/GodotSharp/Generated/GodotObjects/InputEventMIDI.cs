using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    public partial class InputEventMIDI : InputEvent
    {
        public int Channel
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetChannel();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetChannel(value);
            }
#pragma warning restore CS0618
        }

        public int Message
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetMessage();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetMessage(value);
            }
#pragma warning restore CS0618
        }

        public int Pitch
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetPitch();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetPitch(value);
            }
#pragma warning restore CS0618
        }

        public int Velocity
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetVelocity();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetVelocity(value);
            }
#pragma warning restore CS0618
        }

        public int Instrument
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetInstrument();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetInstrument(value);
            }
#pragma warning restore CS0618
        }

        public int Pressure
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetPressure();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetPressure(value);
            }
#pragma warning restore CS0618
        }

        public int ControllerNumber
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetControllerNumber();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetControllerNumber(value);
            }
#pragma warning restore CS0618
        }

        public int ControllerValue
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetControllerValue();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetControllerValue(value);
            }
#pragma warning restore CS0618
        }

        private const string nativeName = "InputEventMIDI";

        public InputEventMIDI() : this(true)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_InputEventMIDI_Ctor(this);
        }

        internal InputEventMIDI(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_channel");

        [GodotMethod("set_channel")]
        [Obsolete("SetChannel is deprecated. Use the Channel property instead.")]
        public void SetChannel(int channel)
        {
            NativeCalls.godot_icall_1_4(method_bind_0, Object.GetPtr(this), channel);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_channel");

        [GodotMethod("get_channel")]
        [Obsolete("GetChannel is deprecated. Use the Channel property instead.")]
        public int GetChannel()
        {
            return NativeCalls.godot_icall_0_5(method_bind_1, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_message");

        [GodotMethod("set_message")]
        [Obsolete("SetMessage is deprecated. Use the Message property instead.")]
        public void SetMessage(int message)
        {
            NativeCalls.godot_icall_1_4(method_bind_2, Object.GetPtr(this), message);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_message");

        [GodotMethod("get_message")]
        [Obsolete("GetMessage is deprecated. Use the Message property instead.")]
        public int GetMessage()
        {
            return NativeCalls.godot_icall_0_5(method_bind_3, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_4 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_pitch");

        [GodotMethod("set_pitch")]
        [Obsolete("SetPitch is deprecated. Use the Pitch property instead.")]
        public void SetPitch(int pitch)
        {
            NativeCalls.godot_icall_1_4(method_bind_4, Object.GetPtr(this), pitch);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_5 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_pitch");

        [GodotMethod("get_pitch")]
        [Obsolete("GetPitch is deprecated. Use the Pitch property instead.")]
        public int GetPitch()
        {
            return NativeCalls.godot_icall_0_5(method_bind_5, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_6 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_velocity");

        [GodotMethod("set_velocity")]
        [Obsolete("SetVelocity is deprecated. Use the Velocity property instead.")]
        public void SetVelocity(int velocity)
        {
            NativeCalls.godot_icall_1_4(method_bind_6, Object.GetPtr(this), velocity);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_7 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_velocity");

        [GodotMethod("get_velocity")]
        [Obsolete("GetVelocity is deprecated. Use the Velocity property instead.")]
        public int GetVelocity()
        {
            return NativeCalls.godot_icall_0_5(method_bind_7, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_8 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_instrument");

        [GodotMethod("set_instrument")]
        [Obsolete("SetInstrument is deprecated. Use the Instrument property instead.")]
        public void SetInstrument(int instrument)
        {
            NativeCalls.godot_icall_1_4(method_bind_8, Object.GetPtr(this), instrument);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_9 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_instrument");

        [GodotMethod("get_instrument")]
        [Obsolete("GetInstrument is deprecated. Use the Instrument property instead.")]
        public int GetInstrument()
        {
            return NativeCalls.godot_icall_0_5(method_bind_9, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_10 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_pressure");

        [GodotMethod("set_pressure")]
        [Obsolete("SetPressure is deprecated. Use the Pressure property instead.")]
        public void SetPressure(int pressure)
        {
            NativeCalls.godot_icall_1_4(method_bind_10, Object.GetPtr(this), pressure);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_11 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_pressure");

        [GodotMethod("get_pressure")]
        [Obsolete("GetPressure is deprecated. Use the Pressure property instead.")]
        public int GetPressure()
        {
            return NativeCalls.godot_icall_0_5(method_bind_11, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_12 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_controller_number");

        [GodotMethod("set_controller_number")]
        [Obsolete("SetControllerNumber is deprecated. Use the ControllerNumber property instead.")]
        public void SetControllerNumber(int controllerNumber)
        {
            NativeCalls.godot_icall_1_4(method_bind_12, Object.GetPtr(this), controllerNumber);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_13 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_controller_number");

        [GodotMethod("get_controller_number")]
        [Obsolete("GetControllerNumber is deprecated. Use the ControllerNumber property instead.")]
        public int GetControllerNumber()
        {
            return NativeCalls.godot_icall_0_5(method_bind_13, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_14 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_controller_value");

        [GodotMethod("set_controller_value")]
        [Obsolete("SetControllerValue is deprecated. Use the ControllerValue property instead.")]
        public void SetControllerValue(int controllerValue)
        {
            NativeCalls.godot_icall_1_4(method_bind_14, Object.GetPtr(this), controllerValue);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_15 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_controller_value");

        [GodotMethod("get_controller_value")]
        [Obsolete("GetControllerValue is deprecated. Use the ControllerValue property instead.")]
        public int GetControllerValue()
        {
            return NativeCalls.godot_icall_0_5(method_bind_15, Object.GetPtr(this));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
