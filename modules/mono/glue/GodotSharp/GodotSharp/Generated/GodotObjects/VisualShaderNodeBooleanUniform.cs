using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>Translated to <c>uniform bool</c> in the shader language.</para>
    /// </summary>
    public partial class VisualShaderNodeBooleanUniform : VisualShaderNodeUniform
    {
        private const string nativeName = "VisualShaderNodeBooleanUniform";

        public VisualShaderNodeBooleanUniform() : this(true)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_VisualShaderNodeBooleanUniform_Ctor(this);
        }

        internal VisualShaderNodeBooleanUniform(bool memoryOwn) : base(memoryOwn) {}
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
