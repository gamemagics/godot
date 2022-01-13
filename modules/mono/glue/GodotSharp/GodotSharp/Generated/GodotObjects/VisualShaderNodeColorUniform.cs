using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>Translated to <c>uniform vec4</c> in the shader language.</para>
    /// </summary>
    public partial class VisualShaderNodeColorUniform : VisualShaderNodeUniform
    {
        private const string nativeName = "VisualShaderNodeColorUniform";

        public VisualShaderNodeColorUniform() : this(true)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_VisualShaderNodeColorUniform_Ctor(this);
        }

        internal VisualShaderNodeColorUniform(bool memoryOwn) : base(memoryOwn) {}
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
