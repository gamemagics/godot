using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>The editor inspector is by default located on the right-hand side of the editor. It's used to edit the properties of the selected node. For example, you can select a node such as <see cref="Godot.Sprite"/> then edit its transform through the inspector tool. The editor inspector is an essential tool in the game development workflow.</para>
    /// <para>Note: This class shouldn't be instantiated directly. Instead, access the singleton using <see cref="Godot.EditorInterface.GetInspector"/>.</para>
    /// </summary>
    public partial class EditorInspector : ScrollContainer
    {
        private const string nativeName = "EditorInspector";

        public EditorInspector() : this(false)
        {
            if (ptr == IntPtr.Zero)
                ptr = EditorNativeCalls.godot_icall_EditorInspector_Ctor(this);
        }

        internal EditorInspector(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "refresh");

        /// <summary>
        /// <para>Refreshes the inspector.</para>
        /// <para>Note: To save on CPU resources, calling this method will do nothing if the time specified in <c>docks/property_editor/auto_refresh_interval</c> editor setting hasn't passed yet since this method was last called. (By default, this interval is set to 0.3 seconds.)</para>
        /// </summary>
        [GodotMethod("refresh")]
        public void Refresh()
        {
            NativeCalls.godot_icall_0_3(method_bind_0, Object.GetPtr(this));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
