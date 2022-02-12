using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>Provides navigation and pathfinding within a collection of <see cref="Godot.NavigationMesh"/>es. By default, these will be automatically collected from child <see cref="Godot.NavigationMeshInstance"/> nodes, but they can also be added on the fly with <see cref="Godot.Navigation.NavmeshAdd"/>. In addition to basic pathfinding, this class also assists with aligning navigation agents with the meshes they are navigating on.</para>
    /// <para>Note: The current navigation system has many known issues and will not always return optimal paths as expected. These issues will be fixed in Godot 4.0.</para>
    /// </summary>
    public partial class Navigation : Spatial
    {
        /// <summary>
        /// <para>Defines which direction is up. By default, this is <c>(0, 1, 0)</c>, which is the world's "up" direction.</para>
        /// </summary>
        public Vector3 UpVector
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetUpVector();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetUpVector(value);
            }
#pragma warning restore CS0618
        }

        private const string nativeName = "Navigation";

        public Navigation() : this(false)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_Navigation_Ctor(this);
        }

        internal Navigation(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "navmesh_add");

        /// <summary>
        /// <para>Adds a <see cref="Godot.NavigationMesh"/>. Returns an ID for use with <see cref="Godot.Navigation.NavmeshRemove"/> or <see cref="Godot.Navigation.NavmeshSetTransform"/>. If given, a <see cref="Godot.Transform2D"/> is applied to the polygon. The optional <c>owner</c> is used as return value for <see cref="Godot.Navigation.GetClosestPointOwner"/>.</para>
        /// </summary>
        [GodotMethod("navmesh_add")]
        public int NavmeshAdd(NavigationMesh mesh, Transform xform, Object owner = null)
        {
            return NativeCalls.godot_icall_3_581(method_bind_0, Object.GetPtr(this), Object.GetPtr(mesh), ref xform, Object.GetPtr(owner));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "navmesh_set_transform");

        /// <summary>
        /// <para>Sets the transform applied to the <see cref="Godot.NavigationMesh"/> with the given ID.</para>
        /// </summary>
        [GodotMethod("navmesh_set_transform")]
        public void NavmeshSetTransform(int id, Transform xform)
        {
            NativeCalls.godot_icall_2_568(method_bind_1, Object.GetPtr(this), id, ref xform);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "navmesh_remove");

        /// <summary>
        /// <para>Removes the <see cref="Godot.NavigationMesh"/> with the given ID.</para>
        /// </summary>
        [GodotMethod("navmesh_remove")]
        public void NavmeshRemove(int id)
        {
            NativeCalls.godot_icall_1_4(method_bind_2, Object.GetPtr(this), id);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_simple_path");

        /// <summary>
        /// <para>Returns the path between two given points. Points are in local coordinate space. If <c>optimize</c> is <c>true</c> (the default), the agent properties associated with each <see cref="Godot.NavigationMesh"/> (radius, height, etc.) are considered in the path calculation, otherwise they are ignored.</para>
        /// <para>Note: This method has known issues and will often return non-optimal paths. These issues will be fixed in Godot 4.0.</para>
        /// </summary>
        [GodotMethod("get_simple_path")]
        public Vector3[] GetSimplePath(Vector3 start, Vector3 end, bool optimize = true)
        {
            return NativeCalls.godot_icall_3_582(method_bind_3, Object.GetPtr(this), ref start, ref end, optimize);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_4 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_closest_point_to_segment");

        /// <summary>
        /// <para>Returns the navigation point closest to the given line segment. When enabling <c>use_collision</c>, only considers intersection points between segment and navigation meshes. If multiple intersection points are found, the one closest to the segment start point is returned.</para>
        /// </summary>
        [GodotMethod("get_closest_point_to_segment")]
        public Vector3 GetClosestPointToSegment(Vector3 start, Vector3 end, bool useCollision = false)
        {
            NativeCalls.godot_icall_3_583(method_bind_4, Object.GetPtr(this), ref start, ref end, useCollision, out Vector3 argRet); return (Vector3)argRet;
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_5 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_closest_point");

        /// <summary>
        /// <para>Returns the navigation point closest to the point given. Points are in local coordinate space.</para>
        /// </summary>
        [GodotMethod("get_closest_point")]
        public Vector3 GetClosestPoint(Vector3 toPoint)
        {
            NativeCalls.godot_icall_1_40(method_bind_5, Object.GetPtr(this), ref toPoint, out Vector3 argRet); return (Vector3)argRet;
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_6 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_closest_point_normal");

        /// <summary>
        /// <para>Returns the surface normal at the navigation point closest to the point given. Useful for rotating a navigation agent according to the navigation mesh it moves on.</para>
        /// </summary>
        [GodotMethod("get_closest_point_normal")]
        public Vector3 GetClosestPointNormal(Vector3 toPoint)
        {
            NativeCalls.godot_icall_1_40(method_bind_6, Object.GetPtr(this), ref toPoint, out Vector3 argRet); return (Vector3)argRet;
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_7 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_closest_point_owner");

        /// <summary>
        /// <para>Returns the owner of the <see cref="Godot.NavigationMesh"/> which contains the navigation point closest to the point given. This is usually a <see cref="Godot.NavigationMeshInstance"/>. For meshes added via <see cref="Godot.Navigation.NavmeshAdd"/>, returns the owner that was given (or <c>null</c> if the <c>owner</c> parameter was omitted).</para>
        /// </summary>
        [GodotMethod("get_closest_point_owner")]
        public Object GetClosestPointOwner(Vector3 toPoint)
        {
            return NativeCalls.godot_icall_1_584(method_bind_7, Object.GetPtr(this), ref toPoint);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_8 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_up_vector");

        [GodotMethod("set_up_vector")]
        [Obsolete("SetUpVector is deprecated. Use the UpVector property instead.")]
        public void SetUpVector(Vector3 up)
        {
            NativeCalls.godot_icall_1_149(method_bind_8, Object.GetPtr(this), ref up);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_9 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_up_vector");

        [GodotMethod("get_up_vector")]
        [Obsolete("GetUpVector is deprecated. Use the UpVector property instead.")]
        public Vector3 GetUpVector()
        {
            NativeCalls.godot_icall_0_8(method_bind_9, Object.GetPtr(this), out Vector3 argRet); return (Vector3)argRet;
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
