using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>Navigation2D provides navigation and pathfinding within a 2D area, specified as a collection of <see cref="Godot.NavigationPolygon"/> resources. By default, these are automatically collected from child <see cref="Godot.NavigationPolygonInstance"/> nodes, but they can also be added on the fly with <see cref="Godot.Navigation2D.NavpolyAdd"/>.</para>
    /// <para>Note: The current navigation system has many known issues and will not always return optimal paths as expected. These issues will be fixed in Godot 4.0.</para>
    /// </summary>
    public partial class Navigation2D : Node2D
    {
        private const string nativeName = "Navigation2D";

        public Navigation2D() : this(false)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_Navigation2D_Ctor(this);
        }

        internal Navigation2D(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "navpoly_add");

        /// <summary>
        /// <para>Adds a <see cref="Godot.NavigationPolygon"/>. Returns an ID for use with <see cref="Godot.Navigation2D.NavpolyRemove"/> or <see cref="Godot.Navigation2D.NavpolySetTransform"/>. If given, a <see cref="Godot.Transform2D"/> is applied to the polygon. The optional <c>owner</c> is used as return value for <see cref="Godot.Navigation2D.GetClosestPointOwner"/>.</para>
        /// </summary>
        [GodotMethod("navpoly_add")]
        public int NavpolyAdd(NavigationPolygon mesh, Transform2D xform, Object owner = null)
        {
            return NativeCalls.godot_icall_3_585(method_bind_0, Object.GetPtr(this), Object.GetPtr(mesh), ref xform, Object.GetPtr(owner));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "navpoly_set_transform");

        /// <summary>
        /// <para>Sets the transform applied to the <see cref="Godot.NavigationPolygon"/> with the given ID.</para>
        /// </summary>
        [GodotMethod("navpoly_set_transform")]
        public void NavpolySetTransform(int id, Transform2D xform)
        {
            NativeCalls.godot_icall_2_576(method_bind_1, Object.GetPtr(this), id, ref xform);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "navpoly_remove");

        /// <summary>
        /// <para>Removes the <see cref="Godot.NavigationPolygon"/> with the given ID.</para>
        /// </summary>
        [GodotMethod("navpoly_remove")]
        public void NavpolyRemove(int id)
        {
            NativeCalls.godot_icall_1_4(method_bind_2, Object.GetPtr(this), id);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_simple_path");

        /// <summary>
        /// <para>Returns the path between two given points. Points are in local coordinate space. If <c>optimize</c> is <c>true</c> (the default), the path is smoothed by merging path segments where possible.</para>
        /// <para>Note: This method has known issues and will often return non-optimal paths. These issues will be fixed in Godot 4.0.</para>
        /// </summary>
        [GodotMethod("get_simple_path")]
        public Vector2[] GetSimplePath(Vector2 start, Vector2 end, bool optimize = true)
        {
            return NativeCalls.godot_icall_3_586(method_bind_3, Object.GetPtr(this), ref start, ref end, optimize);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_4 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_closest_point");

        /// <summary>
        /// <para>Returns the navigation point closest to the point given. Points are in local coordinate space.</para>
        /// </summary>
        [GodotMethod("get_closest_point")]
        public Vector2 GetClosestPoint(Vector2 toPoint)
        {
            NativeCalls.godot_icall_1_49(method_bind_4, Object.GetPtr(this), ref toPoint, out Vector2 argRet); return (Vector2)argRet;
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_5 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_closest_point_owner");

        /// <summary>
        /// <para>Returns the owner of the <see cref="Godot.NavigationPolygon"/> which contains the navigation point closest to the point given. This is usually a <see cref="Godot.NavigationPolygonInstance"/>. For polygons added via <see cref="Godot.Navigation2D.NavpolyAdd"/>, returns the owner that was given (or <c>null</c> if the <c>owner</c> parameter was omitted).</para>
        /// </summary>
        [GodotMethod("get_closest_point_owner")]
        public Object GetClosestPointOwner(Vector2 toPoint)
        {
            return NativeCalls.godot_icall_1_587(method_bind_5, Object.GetPtr(this), ref toPoint);
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
