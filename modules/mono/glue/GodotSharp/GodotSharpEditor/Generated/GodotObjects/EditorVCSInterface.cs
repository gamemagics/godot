using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>Used by the editor to display VCS extracted information in the editor. The implementation of this API is included in VCS addons, which are essentially GDNative plugins that need to be put into the project folder. These VCS addons are scripts which are attached (on demand) to the object instance of <c>EditorVCSInterface</c>. All the functions listed below, instead of performing the task themselves, they call the internally defined functions in the VCS addons to provide a plug-n-play experience.</para>
    /// </summary>
    public partial class EditorVCSInterface : Object
    {
        private const string nativeName = "EditorVCSInterface";

        public EditorVCSInterface() : this(false)
        {
            if (ptr == IntPtr.Zero)
                ptr = EditorNativeCalls.godot_icall_EditorVCSInterface_Ctor(this);
        }

        internal EditorVCSInterface(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "is_addon_ready");

        /// <summary>
        /// <para>Returns <c>true</c> if the addon is ready to respond to function calls, else returns <c>false</c>.</para>
        /// </summary>
        [GodotMethod("is_addon_ready")]
        public bool IsAddonReady()
        {
            return NativeCalls.godot_icall_0_7(method_bind_0, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "initialize");

        /// <summary>
        /// <para>Initializes the VCS addon if not already. Uses the argument value as the path to the working directory of the project. Creates the initial commit if required. Returns <c>true</c> if no failure occurs, else returns <c>false</c>.</para>
        /// </summary>
        [GodotMethod("initialize")]
        public bool Initialize(string projectRootPath)
        {
            return NativeCalls.godot_icall_1_109(method_bind_1, Object.GetPtr(this), projectRootPath);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "is_vcs_initialized");

        /// <summary>
        /// <para>Returns <c>true</c> if the VCS addon has been initialized, else returns <c>false</c>.</para>
        /// </summary>
        [GodotMethod("is_vcs_initialized")]
        public bool IsVcsInitialized()
        {
            return NativeCalls.godot_icall_0_7(method_bind_2, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_modified_files_data");

        /// <summary>
        /// <para>Returns a <see cref="Godot.Collections.Dictionary"/> containing the path of the detected file change mapped to an integer signifying what kind of change the corresponding file has experienced.</para>
        /// <para>The following integer values are being used to signify that the detected file is:</para>
        /// <para>- <c>0</c>: New to the VCS working directory</para>
        /// <para>- <c>1</c>: Modified</para>
        /// <para>- <c>2</c>: Renamed</para>
        /// <para>- <c>3</c>: Deleted</para>
        /// <para>- <c>4</c>: Typechanged</para>
        /// </summary>
        [GodotMethod("get_modified_files_data")]
        public Godot.Collections.Dictionary GetModifiedFilesData()
        {
            return new Godot.Collections.Dictionary(NativeCalls.godot_icall_0_214(method_bind_3, Object.GetPtr(this)));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_4 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "stage_file");

        /// <summary>
        /// <para>Stages the file which should be committed when <see cref="Godot.EditorVCSInterface.Commit"/> is called. Argument should contain the absolute path.</para>
        /// </summary>
        [GodotMethod("stage_file")]
        public void StageFile(string filePath)
        {
            NativeCalls.godot_icall_1_56(method_bind_4, Object.GetPtr(this), filePath);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_5 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "unstage_file");

        /// <summary>
        /// <para>Unstages the file which was staged previously to be committed, so that it is no longer committed when <see cref="Godot.EditorVCSInterface.Commit"/> is called. Argument should contain the absolute path.</para>
        /// </summary>
        [GodotMethod("unstage_file")]
        public void UnstageFile(string filePath)
        {
            NativeCalls.godot_icall_1_56(method_bind_5, Object.GetPtr(this), filePath);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_6 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "commit");

        /// <summary>
        /// <para>Creates a version commit if the addon is initialized, else returns without doing anything. Uses the files which have been staged previously, with the commit message set to a value as provided as in the argument.</para>
        /// </summary>
        [GodotMethod("commit")]
        public void Commit(string msg)
        {
            NativeCalls.godot_icall_1_56(method_bind_6, Object.GetPtr(this), msg);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_7 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_file_diff");

        /// <summary>
        /// <para>Returns an <see cref="Godot.Collections.Array"/> of <see cref="Godot.Collections.Dictionary"/> objects containing the diff output from the VCS in use, if a VCS addon is initialized, else returns an empty <see cref="Godot.Collections.Array"/> object. The diff contents also consist of some contextual lines which provide context to the observed line change in the file.</para>
        /// <para>Each <see cref="Godot.Collections.Dictionary"/> object has the line diff contents under the keys:</para>
        /// <para>- <c>"content"</c> to store a <see cref="string"/> containing the line contents</para>
        /// <para>- <c>"status"</c> to store a <see cref="string"/> which contains <c>"+"</c> in case the content is a line addition but it stores a <c>"-"</c> in case of deletion and an empty string in the case the line content is neither an addition nor a deletion.</para>
        /// <para>- <c>"new_line_number"</c> to store an integer containing the new line number of the line content.</para>
        /// <para>- <c>"line_count"</c> to store an integer containing the number of lines in the line content.</para>
        /// <para>- <c>"old_line_number"</c> to store an integer containing the old line number of the line content.</para>
        /// <para>- <c>"offset"</c> to store the offset of the line change since the first contextual line content.</para>
        /// </summary>
        [GodotMethod("get_file_diff")]
        public Godot.Collections.Array GetFileDiff(string filePath)
        {
            return new Godot.Collections.Array(NativeCalls.godot_icall_1_412(method_bind_7, Object.GetPtr(this), filePath));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_8 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "shut_down");

        /// <summary>
        /// <para>Shuts down the VCS addon to allow cleanup code to run on call. Returns <c>true</c> is no failure occurs, else returns <c>false</c>.</para>
        /// </summary>
        [GodotMethod("shut_down")]
        public bool ShutDown()
        {
            return NativeCalls.godot_icall_0_7(method_bind_8, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_9 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_project_name");

        /// <summary>
        /// <para>Returns the project name of the VCS working directory.</para>
        /// </summary>
        [GodotMethod("get_project_name")]
        public string GetProjectName()
        {
            return NativeCalls.godot_icall_0_6(method_bind_9, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_10 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_vcs_name");

        /// <summary>
        /// <para>Returns the name of the VCS if the VCS has been initialized, else return an empty string.</para>
        /// </summary>
        [GodotMethod("get_vcs_name")]
        public string GetVcsName()
        {
            return NativeCalls.godot_icall_0_6(method_bind_10, Object.GetPtr(this));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
