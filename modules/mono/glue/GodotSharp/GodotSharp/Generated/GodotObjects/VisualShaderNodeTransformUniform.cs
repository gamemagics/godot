using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>Translated to <c>uniform mat4</c> in the shader language.</para>
    /// </summary>
    public partial class VisualShaderNodeTransformUniform : VisualShaderNodeUniform
    {
        private const string nativeName = "VisualShaderNodeTransformUniform";

        public VisualShaderNodeTransformUniform() : this(true)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_VisualShaderNodeTransformUniform_Ctor(this);
        }

        internal VisualShaderNodeTransformUniform(bool memoryOwn) : base(memoryOwn) {}
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
