using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>Translated to <c>uniform vec3</c> in the shader language.</para>
    /// </summary>
    public partial class VisualShaderNodeVec3Uniform : VisualShaderNodeUniform
    {
        private const string nativeName = "VisualShaderNodeVec3Uniform";

        public VisualShaderNodeVec3Uniform() : this(true)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_VisualShaderNodeVec3Uniform_Ctor(this);
        }

        internal VisualShaderNodeVec3Uniform(bool memoryOwn) : base(memoryOwn) {}
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
