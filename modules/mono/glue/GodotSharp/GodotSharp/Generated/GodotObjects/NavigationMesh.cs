using System;
using System.Diagnostics;

#pragma warning disable CS1591 // Disable warning: 'Missing XML comment for publicly visible type or member'
#pragma warning disable CS1573 // Disable warning: 'Parameter has no matching param tag in the XML comment'

namespace Godot
{
    /// <summary>
    /// <para>A navigation mesh is a collection of polygons that define which areas of an environment are traversable to aid agents in pathfinding through complicated spaces.</para>
    /// </summary>
    public partial class NavigationMesh : Resource
    {
        public enum ParsedGeometryType
        {
            /// <summary>
            /// <para>Parses mesh instances as geometry. This includes <see cref="Godot.MeshInstance"/>, [CSGShape], and [GridMap] nodes.</para>
            /// </summary>
            MeshInstances = 0,
            /// <summary>
            /// <para>Parses <see cref="Godot.StaticBody"/> colliders as geometry. The collider should be in any of the layers specified by <see cref="Godot.NavigationMesh.Geometry__collisionMask"/>.</para>
            /// </summary>
            StaticColliders = 1,
            /// <summary>
            /// <para>Both <see cref="Godot.NavigationMesh.ParsedGeometryType.MeshInstances"/> and <see cref="Godot.NavigationMesh.ParsedGeometryType.StaticColliders"/>.</para>
            /// </summary>
            Both = 2,
            /// <summary>
            /// <para>Represents the size of the <see cref="Godot.NavigationMesh.ParsedGeometryType"/> enum.</para>
            /// </summary>
            Max = 3
        }

        public enum SamplePartitionType
        {
            /// <summary>
            /// <para>Watershed partitioning. Generally the best choice if you precompute the navigation mesh, use this if you have large open areas.</para>
            /// </summary>
            Watershed = 0,
            /// <summary>
            /// <para>Monotone partitioning. Use this if you want fast navigation mesh generation.</para>
            /// </summary>
            Monotone = 1,
            /// <summary>
            /// <para>Layer partitioning. Good choice to use for tiled navigation mesh with medium and small sized tiles.</para>
            /// </summary>
            Layers = 2,
            /// <summary>
            /// <para>Represents the size of the <see cref="Godot.NavigationMesh.SamplePartitionType"/> enum.</para>
            /// </summary>
            Max = 3
        }

        public enum SourceGeometryMode
        {
            /// <summary>
            /// <para>Scans the child nodes of <see cref="Godot.NavigationMeshInstance"/> recursively for geometry.</para>
            /// </summary>
            NavmeshChildren = 0,
            /// <summary>
            /// <para>Scans nodes in a group and their child nodes recursively for geometry. The group is specified by <see cref="Godot.NavigationMesh.Geometry__sourceGroupName"/>.</para>
            /// </summary>
            GroupsWithChildren = 1,
            /// <summary>
            /// <para>Uses nodes in a group for geometry. The group is specified by <see cref="Godot.NavigationMesh.Geometry__sourceGroupName"/>.</para>
            /// </summary>
            GroupsExplicit = 2,
            /// <summary>
            /// <para>Represents the size of the <see cref="Godot.NavigationMesh.SourceGeometryMode"/> enum.</para>
            /// </summary>
            Max = 3
        }

        public Vector3[] Vertices
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetVertices();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetVertices(value);
            }
#pragma warning restore CS0618
        }

        public Godot.Collections.Array Polygons
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return _GetPolygons();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                _SetPolygons(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>Partitioning algorithm for creating the navigation mesh polys. See <see cref="Godot.NavigationMesh.SamplePartitionType"/> for possible values.</para>
        /// </summary>
        public NavigationMesh.SamplePartitionType SamplePartitionType__samplePartitionType
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetSamplePartitionType();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetSamplePartitionType(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>Determines which type of nodes will be parsed as geometry. See <see cref="Godot.NavigationMesh.ParsedGeometryType"/> for possible values.</para>
        /// </summary>
        public NavigationMesh.ParsedGeometryType Geometry__parsedGeometryType
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetParsedGeometryType();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetParsedGeometryType(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The physics layers to scan for static colliders.</para>
        /// <para>Only used when <see cref="Godot.NavigationMesh.Geometry__parsedGeometryType"/> is <see cref="Godot.NavigationMesh.ParsedGeometryType.StaticColliders"/> or <see cref="Godot.NavigationMesh.ParsedGeometryType.Both"/>.</para>
        /// </summary>
        public uint Geometry__collisionMask
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetCollisionMask();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetCollisionMask(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The source of the geometry used when baking. See <see cref="Godot.NavigationMesh.SourceGeometryMode"/> for possible values.</para>
        /// </summary>
        public NavigationMesh.SourceGeometryMode Geometry__sourceGeometryMode
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetSourceGeometryMode();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetSourceGeometryMode(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The name of the group to scan for geometry.</para>
        /// <para>Only used when <see cref="Godot.NavigationMesh.Geometry__sourceGeometryMode"/> is <see cref="Godot.NavigationMesh.SourceGeometryMode.GroupsWithChildren"/> or <see cref="Godot.NavigationMesh.SourceGeometryMode.GroupsExplicit"/>.</para>
        /// </summary>
        public string Geometry__sourceGroupName
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetSourceGroupName();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetSourceGroupName(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The XZ plane cell size to use for fields.</para>
        /// </summary>
        public float Cell__size
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetCellSize();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetCellSize(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The Y axis cell size to use for fields.</para>
        /// </summary>
        public float Cell__height
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetCellHeight();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetCellHeight(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The minimum floor to ceiling height that will still allow the floor area to be considered walkable.</para>
        /// <para>Note: While baking, this value will be rounded up to the nearest multiple of <see cref="Godot.NavigationMesh.Cell__height"/>.</para>
        /// </summary>
        public float Agent__height
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetAgentHeight();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetAgentHeight(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The distance to erode/shrink the walkable area of the heightfield away from obstructions.</para>
        /// <para>Note: While baking, this value will be rounded up to the nearest multiple of <see cref="Godot.NavigationMesh.Cell__size"/>.</para>
        /// </summary>
        public float Agent__radius
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetAgentRadius();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetAgentRadius(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The minimum ledge height that is considered to still be traversable.</para>
        /// <para>Note: While baking, this value will be rounded down to the nearest multiple of <see cref="Godot.NavigationMesh.Cell__height"/>.</para>
        /// </summary>
        public float Agent__maxClimb
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetAgentMaxClimb();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetAgentMaxClimb(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The maximum slope that is considered walkable, in degrees.</para>
        /// </summary>
        public float Agent__maxSlope
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetAgentMaxSlope();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetAgentMaxSlope(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The minimum size of a region for it to be created.</para>
        /// <para>Note: This value will be squared to calculate the minimum number of cells allowed to form isolated island areas. For example, a value of 8 will set the number of cells to 64.</para>
        /// </summary>
        public float Region__minSize
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetRegionMinSize();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetRegionMinSize(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>Any regions with a size smaller than this will be merged with larger regions if possible.</para>
        /// <para>Note: This value will be squared to calculate the number of cells. For example, a value of 20 will set the number of cells to 400.</para>
        /// </summary>
        public float Region__mergeSize
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetRegionMergeSize();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetRegionMergeSize(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The maximum allowed length for contour edges along the border of the mesh.</para>
        /// <para>Note: While baking, this value will be rounded up to the nearest multiple of <see cref="Godot.NavigationMesh.Cell__size"/>.</para>
        /// </summary>
        public float Edge__maxLength
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetEdgeMaxLength();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetEdgeMaxLength(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The maximum distance a simplfied contour's border edges should deviate the original raw contour.</para>
        /// </summary>
        public float Edge__maxError
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetEdgeMaxError();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetEdgeMaxError(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The maximum number of vertices allowed for polygons generated during the contour to polygon conversion process.</para>
        /// </summary>
        public float Polygon__vertsPerPoly
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetVertsPerPoly();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetVertsPerPoly(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The sampling distance to use when generating the detail mesh, in cell unit.</para>
        /// </summary>
        public float Detail__sampleDistance
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetDetailSampleDistance();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetDetailSampleDistance(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>The maximum distance the detail mesh surface should deviate from heightfield, in cell unit.</para>
        /// </summary>
        public float Detail__sampleMaxError
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetDetailSampleMaxError();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetDetailSampleMaxError(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>If <c>true</c>, marks non-walkable spans as walkable if their maximum is within <see cref="Godot.NavigationMesh.Agent__maxClimb"/> of a walkable neighbor.</para>
        /// </summary>
        public bool Filter__lowHangingObstacles
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetFilterLowHangingObstacles();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetFilterLowHangingObstacles(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>If <c>true</c>, marks spans that are ledges as non-walkable.</para>
        /// </summary>
        public bool Filter__ledgeSpans
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetFilterLedgeSpans();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetFilterLedgeSpans(value);
            }
#pragma warning restore CS0618
        }

        /// <summary>
        /// <para>If <c>true</c>, marks walkable spans as not walkable if the clearance above the span is less than <see cref="Godot.NavigationMesh.Agent__height"/>.</para>
        /// </summary>
        public bool Filter__filterWalkableLowHeightSpans
        {
            get
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                return GetFilterWalkableLowHeightSpans();
            }
#pragma warning restore CS0618
            set
#pragma warning disable CS0618 // Disable warning about obsolete method
            {
                SetFilterWalkableLowHeightSpans(value);
            }
#pragma warning restore CS0618
        }

        private const string nativeName = "NavigationMesh";

        public NavigationMesh() : this(true)
        {
            if (ptr == IntPtr.Zero)
                ptr = NativeCalls.godot_icall_NavigationMesh_Ctor(this);
        }

        internal NavigationMesh(bool memoryOwn) : base(memoryOwn) {}

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_0 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_sample_partition_type");

        [GodotMethod("set_sample_partition_type")]
        [Obsolete("SetSamplePartitionType is deprecated. Use the SamplePartitionType__samplePartitionType property instead.")]
        public void SetSamplePartitionType(NavigationMesh.SamplePartitionType samplePartitionType)
        {
            NativeCalls.godot_icall_1_4(method_bind_0, Object.GetPtr(this), (int)samplePartitionType);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_1 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_sample_partition_type");

        [GodotMethod("get_sample_partition_type")]
        [Obsolete("GetSamplePartitionType is deprecated. Use the SamplePartitionType__samplePartitionType property instead.")]
        public NavigationMesh.SamplePartitionType GetSamplePartitionType()
        {
            return (NavigationMesh.SamplePartitionType)NativeCalls.godot_icall_0_585(method_bind_1, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_2 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_parsed_geometry_type");

        [GodotMethod("set_parsed_geometry_type")]
        [Obsolete("SetParsedGeometryType is deprecated. Use the Geometry__parsedGeometryType property instead.")]
        public void SetParsedGeometryType(NavigationMesh.ParsedGeometryType geometryType)
        {
            NativeCalls.godot_icall_1_4(method_bind_2, Object.GetPtr(this), (int)geometryType);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_3 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_parsed_geometry_type");

        [GodotMethod("get_parsed_geometry_type")]
        [Obsolete("GetParsedGeometryType is deprecated. Use the Geometry__parsedGeometryType property instead.")]
        public NavigationMesh.ParsedGeometryType GetParsedGeometryType()
        {
            return (NavigationMesh.ParsedGeometryType)NativeCalls.godot_icall_0_586(method_bind_3, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_4 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_collision_mask");

        [GodotMethod("set_collision_mask")]
        [Obsolete("SetCollisionMask is deprecated. Use the Geometry__collisionMask property instead.")]
        public void SetCollisionMask(uint mask)
        {
            NativeCalls.godot_icall_1_187(method_bind_4, Object.GetPtr(this), mask);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_5 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_collision_mask");

        [GodotMethod("get_collision_mask")]
        [Obsolete("GetCollisionMask is deprecated. Use the Geometry__collisionMask property instead.")]
        public uint GetCollisionMask()
        {
            return NativeCalls.godot_icall_0_188(method_bind_5, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_6 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_collision_mask_bit");

        /// <summary>
        /// <para>If <c>value</c> is <c>true</c>, sets the specified <c>bit</c> in the <see cref="Godot.NavigationMesh.Geometry__collisionMask"/>.</para>
        /// <para>If <c>value</c> is <c>false</c>, clears the specified <c>bit</c> in the <see cref="Godot.NavigationMesh.Geometry__collisionMask"/>.</para>
        /// </summary>
        [GodotMethod("set_collision_mask_bit")]
        public void SetCollisionMaskBit(int bit, bool value)
        {
            NativeCalls.godot_icall_2_23(method_bind_6, Object.GetPtr(this), bit, value);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_7 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_collision_mask_bit");

        /// <summary>
        /// <para>Returns whether the specified <c>bit</c> of the <see cref="Godot.NavigationMesh.Geometry__collisionMask"/> is set.</para>
        /// </summary>
        [GodotMethod("get_collision_mask_bit")]
        public bool GetCollisionMaskBit(int bit)
        {
            return NativeCalls.godot_icall_1_35(method_bind_7, Object.GetPtr(this), bit);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_8 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_source_geometry_mode");

        [GodotMethod("set_source_geometry_mode")]
        [Obsolete("SetSourceGeometryMode is deprecated. Use the Geometry__sourceGeometryMode property instead.")]
        public void SetSourceGeometryMode(NavigationMesh.SourceGeometryMode mask)
        {
            NativeCalls.godot_icall_1_4(method_bind_8, Object.GetPtr(this), (int)mask);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_9 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_source_geometry_mode");

        [GodotMethod("get_source_geometry_mode")]
        [Obsolete("GetSourceGeometryMode is deprecated. Use the Geometry__sourceGeometryMode property instead.")]
        public NavigationMesh.SourceGeometryMode GetSourceGeometryMode()
        {
            return (NavigationMesh.SourceGeometryMode)NativeCalls.godot_icall_0_587(method_bind_9, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_10 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_source_group_name");

        [GodotMethod("set_source_group_name")]
        [Obsolete("SetSourceGroupName is deprecated. Use the Geometry__sourceGroupName property instead.")]
        public void SetSourceGroupName(string mask)
        {
            NativeCalls.godot_icall_1_56(method_bind_10, Object.GetPtr(this), mask);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_11 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_source_group_name");

        [GodotMethod("get_source_group_name")]
        [Obsolete("GetSourceGroupName is deprecated. Use the Geometry__sourceGroupName property instead.")]
        public string GetSourceGroupName()
        {
            return NativeCalls.godot_icall_0_6(method_bind_11, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_12 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_cell_size");

        [GodotMethod("set_cell_size")]
        [Obsolete("SetCellSize is deprecated. Use the Cell__size property instead.")]
        public void SetCellSize(float cellSize)
        {
            NativeCalls.godot_icall_1_15(method_bind_12, Object.GetPtr(this), cellSize);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_13 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_cell_size");

        [GodotMethod("get_cell_size")]
        [Obsolete("GetCellSize is deprecated. Use the Cell__size property instead.")]
        public float GetCellSize()
        {
            return NativeCalls.godot_icall_0_14(method_bind_13, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_14 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_cell_height");

        [GodotMethod("set_cell_height")]
        [Obsolete("SetCellHeight is deprecated. Use the Cell__height property instead.")]
        public void SetCellHeight(float cellHeight)
        {
            NativeCalls.godot_icall_1_15(method_bind_14, Object.GetPtr(this), cellHeight);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_15 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_cell_height");

        [GodotMethod("get_cell_height")]
        [Obsolete("GetCellHeight is deprecated. Use the Cell__height property instead.")]
        public float GetCellHeight()
        {
            return NativeCalls.godot_icall_0_14(method_bind_15, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_16 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_agent_height");

        [GodotMethod("set_agent_height")]
        [Obsolete("SetAgentHeight is deprecated. Use the Agent__height property instead.")]
        public void SetAgentHeight(float agentHeight)
        {
            NativeCalls.godot_icall_1_15(method_bind_16, Object.GetPtr(this), agentHeight);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_17 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_agent_height");

        [GodotMethod("get_agent_height")]
        [Obsolete("GetAgentHeight is deprecated. Use the Agent__height property instead.")]
        public float GetAgentHeight()
        {
            return NativeCalls.godot_icall_0_14(method_bind_17, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_18 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_agent_radius");

        [GodotMethod("set_agent_radius")]
        [Obsolete("SetAgentRadius is deprecated. Use the Agent__radius property instead.")]
        public void SetAgentRadius(float agentRadius)
        {
            NativeCalls.godot_icall_1_15(method_bind_18, Object.GetPtr(this), agentRadius);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_19 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_agent_radius");

        [GodotMethod("get_agent_radius")]
        [Obsolete("GetAgentRadius is deprecated. Use the Agent__radius property instead.")]
        public float GetAgentRadius()
        {
            return NativeCalls.godot_icall_0_14(method_bind_19, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_20 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_agent_max_climb");

        [GodotMethod("set_agent_max_climb")]
        [Obsolete("SetAgentMaxClimb is deprecated. Use the Agent__maxClimb property instead.")]
        public void SetAgentMaxClimb(float agentMaxClimb)
        {
            NativeCalls.godot_icall_1_15(method_bind_20, Object.GetPtr(this), agentMaxClimb);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_21 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_agent_max_climb");

        [GodotMethod("get_agent_max_climb")]
        [Obsolete("GetAgentMaxClimb is deprecated. Use the Agent__maxClimb property instead.")]
        public float GetAgentMaxClimb()
        {
            return NativeCalls.godot_icall_0_14(method_bind_21, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_22 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_agent_max_slope");

        [GodotMethod("set_agent_max_slope")]
        [Obsolete("SetAgentMaxSlope is deprecated. Use the Agent__maxSlope property instead.")]
        public void SetAgentMaxSlope(float agentMaxSlope)
        {
            NativeCalls.godot_icall_1_15(method_bind_22, Object.GetPtr(this), agentMaxSlope);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_23 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_agent_max_slope");

        [GodotMethod("get_agent_max_slope")]
        [Obsolete("GetAgentMaxSlope is deprecated. Use the Agent__maxSlope property instead.")]
        public float GetAgentMaxSlope()
        {
            return NativeCalls.godot_icall_0_14(method_bind_23, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_24 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_region_min_size");

        [GodotMethod("set_region_min_size")]
        [Obsolete("SetRegionMinSize is deprecated. Use the Region__minSize property instead.")]
        public void SetRegionMinSize(float regionMinSize)
        {
            NativeCalls.godot_icall_1_15(method_bind_24, Object.GetPtr(this), regionMinSize);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_25 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_region_min_size");

        [GodotMethod("get_region_min_size")]
        [Obsolete("GetRegionMinSize is deprecated. Use the Region__minSize property instead.")]
        public float GetRegionMinSize()
        {
            return NativeCalls.godot_icall_0_14(method_bind_25, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_26 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_region_merge_size");

        [GodotMethod("set_region_merge_size")]
        [Obsolete("SetRegionMergeSize is deprecated. Use the Region__mergeSize property instead.")]
        public void SetRegionMergeSize(float regionMergeSize)
        {
            NativeCalls.godot_icall_1_15(method_bind_26, Object.GetPtr(this), regionMergeSize);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_27 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_region_merge_size");

        [GodotMethod("get_region_merge_size")]
        [Obsolete("GetRegionMergeSize is deprecated. Use the Region__mergeSize property instead.")]
        public float GetRegionMergeSize()
        {
            return NativeCalls.godot_icall_0_14(method_bind_27, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_28 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_edge_max_length");

        [GodotMethod("set_edge_max_length")]
        [Obsolete("SetEdgeMaxLength is deprecated. Use the Edge__maxLength property instead.")]
        public void SetEdgeMaxLength(float edgeMaxLength)
        {
            NativeCalls.godot_icall_1_15(method_bind_28, Object.GetPtr(this), edgeMaxLength);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_29 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_edge_max_length");

        [GodotMethod("get_edge_max_length")]
        [Obsolete("GetEdgeMaxLength is deprecated. Use the Edge__maxLength property instead.")]
        public float GetEdgeMaxLength()
        {
            return NativeCalls.godot_icall_0_14(method_bind_29, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_30 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_edge_max_error");

        [GodotMethod("set_edge_max_error")]
        [Obsolete("SetEdgeMaxError is deprecated. Use the Edge__maxError property instead.")]
        public void SetEdgeMaxError(float edgeMaxError)
        {
            NativeCalls.godot_icall_1_15(method_bind_30, Object.GetPtr(this), edgeMaxError);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_31 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_edge_max_error");

        [GodotMethod("get_edge_max_error")]
        [Obsolete("GetEdgeMaxError is deprecated. Use the Edge__maxError property instead.")]
        public float GetEdgeMaxError()
        {
            return NativeCalls.godot_icall_0_14(method_bind_31, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_32 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_verts_per_poly");

        [GodotMethod("set_verts_per_poly")]
        [Obsolete("SetVertsPerPoly is deprecated. Use the Polygon__vertsPerPoly property instead.")]
        public void SetVertsPerPoly(float vertsPerPoly)
        {
            NativeCalls.godot_icall_1_15(method_bind_32, Object.GetPtr(this), vertsPerPoly);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_33 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_verts_per_poly");

        [GodotMethod("get_verts_per_poly")]
        [Obsolete("GetVertsPerPoly is deprecated. Use the Polygon__vertsPerPoly property instead.")]
        public float GetVertsPerPoly()
        {
            return NativeCalls.godot_icall_0_14(method_bind_33, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_34 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_detail_sample_distance");

        [GodotMethod("set_detail_sample_distance")]
        [Obsolete("SetDetailSampleDistance is deprecated. Use the Detail__sampleDistance property instead.")]
        public void SetDetailSampleDistance(float detailSampleDist)
        {
            NativeCalls.godot_icall_1_15(method_bind_34, Object.GetPtr(this), detailSampleDist);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_35 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_detail_sample_distance");

        [GodotMethod("get_detail_sample_distance")]
        [Obsolete("GetDetailSampleDistance is deprecated. Use the Detail__sampleDistance property instead.")]
        public float GetDetailSampleDistance()
        {
            return NativeCalls.godot_icall_0_14(method_bind_35, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_36 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_detail_sample_max_error");

        [GodotMethod("set_detail_sample_max_error")]
        [Obsolete("SetDetailSampleMaxError is deprecated. Use the Detail__sampleMaxError property instead.")]
        public void SetDetailSampleMaxError(float detailSampleMaxError)
        {
            NativeCalls.godot_icall_1_15(method_bind_36, Object.GetPtr(this), detailSampleMaxError);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_37 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_detail_sample_max_error");

        [GodotMethod("get_detail_sample_max_error")]
        [Obsolete("GetDetailSampleMaxError is deprecated. Use the Detail__sampleMaxError property instead.")]
        public float GetDetailSampleMaxError()
        {
            return NativeCalls.godot_icall_0_14(method_bind_37, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_38 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_filter_low_hanging_obstacles");

        [GodotMethod("set_filter_low_hanging_obstacles")]
        [Obsolete("SetFilterLowHangingObstacles is deprecated. Use the Filter__lowHangingObstacles property instead.")]
        public void SetFilterLowHangingObstacles(bool filterLowHangingObstacles)
        {
            NativeCalls.godot_icall_1_16(method_bind_38, Object.GetPtr(this), filterLowHangingObstacles);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_39 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_filter_low_hanging_obstacles");

        [GodotMethod("get_filter_low_hanging_obstacles")]
        [Obsolete("GetFilterLowHangingObstacles is deprecated. Use the Filter__lowHangingObstacles property instead.")]
        public bool GetFilterLowHangingObstacles()
        {
            return NativeCalls.godot_icall_0_7(method_bind_39, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_40 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_filter_ledge_spans");

        [GodotMethod("set_filter_ledge_spans")]
        [Obsolete("SetFilterLedgeSpans is deprecated. Use the Filter__ledgeSpans property instead.")]
        public void SetFilterLedgeSpans(bool filterLedgeSpans)
        {
            NativeCalls.godot_icall_1_16(method_bind_40, Object.GetPtr(this), filterLedgeSpans);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_41 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_filter_ledge_spans");

        [GodotMethod("get_filter_ledge_spans")]
        [Obsolete("GetFilterLedgeSpans is deprecated. Use the Filter__ledgeSpans property instead.")]
        public bool GetFilterLedgeSpans()
        {
            return NativeCalls.godot_icall_0_7(method_bind_41, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_42 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_filter_walkable_low_height_spans");

        [GodotMethod("set_filter_walkable_low_height_spans")]
        [Obsolete("SetFilterWalkableLowHeightSpans is deprecated. Use the Filter__filterWalkableLowHeightSpans property instead.")]
        public void SetFilterWalkableLowHeightSpans(bool filterWalkableLowHeightSpans)
        {
            NativeCalls.godot_icall_1_16(method_bind_42, Object.GetPtr(this), filterWalkableLowHeightSpans);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_43 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_filter_walkable_low_height_spans");

        [GodotMethod("get_filter_walkable_low_height_spans")]
        [Obsolete("GetFilterWalkableLowHeightSpans is deprecated. Use the Filter__filterWalkableLowHeightSpans property instead.")]
        public bool GetFilterWalkableLowHeightSpans()
        {
            return NativeCalls.godot_icall_0_7(method_bind_43, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_44 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "set_vertices");

        /// <summary>
        /// <para>Sets the vertices that can be then indexed to create polygons with the <see cref="Godot.NavigationMesh.AddPolygon"/> method.</para>
        /// </summary>
        [GodotMethod("set_vertices")]
        [Obsolete("SetVertices is deprecated. Use the Vertices property instead.")]
        public void SetVertices(Vector3[] vertices)
        {
            NativeCalls.godot_icall_1_228(method_bind_44, Object.GetPtr(this), vertices);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_45 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_vertices");

        /// <summary>
        /// <para>Returns a <see cref="Godot.Vector3"/> containing all the vertices being used to create the polygons.</para>
        /// </summary>
        [GodotMethod("get_vertices")]
        [Obsolete("GetVertices is deprecated. Use the Vertices property instead.")]
        public Vector3[] GetVertices()
        {
            return NativeCalls.godot_icall_0_229(method_bind_45, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_46 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "add_polygon");

        /// <summary>
        /// <para>Adds a polygon using the indices of the vertices you get when calling <see cref="Godot.NavigationMesh.GetVertices"/>.</para>
        /// </summary>
        [GodotMethod("add_polygon")]
        public void AddPolygon(int[] polygon)
        {
            NativeCalls.godot_icall_1_103(method_bind_46, Object.GetPtr(this), polygon);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_47 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_polygon_count");

        /// <summary>
        /// <para>Returns the number of polygons in the navigation mesh.</para>
        /// </summary>
        [GodotMethod("get_polygon_count")]
        public int GetPolygonCount()
        {
            return NativeCalls.godot_icall_0_5(method_bind_47, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_48 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "get_polygon");

        /// <summary>
        /// <para>Returns a <see cref="int"/> containing the indices of the vertices of a created polygon.</para>
        /// </summary>
        [GodotMethod("get_polygon")]
        public int[] GetPolygon(int idx)
        {
            return NativeCalls.godot_icall_1_36(method_bind_48, Object.GetPtr(this), idx);
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_49 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "clear_polygons");

        /// <summary>
        /// <para>Clears the array of polygons, but it doesn't clear the array of vertices.</para>
        /// </summary>
        [GodotMethod("clear_polygons")]
        public void ClearPolygons()
        {
            NativeCalls.godot_icall_0_3(method_bind_49, Object.GetPtr(this));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_50 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "create_from_mesh");

        /// <summary>
        /// <para>Initializes the navigation mesh by setting the vertices and indices according to a <see cref="Godot.Mesh"/>.</para>
        /// </summary>
        [GodotMethod("create_from_mesh")]
        public void CreateFromMesh(Mesh mesh)
        {
            NativeCalls.godot_icall_1_24(method_bind_50, Object.GetPtr(this), Object.GetPtr(mesh));
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_51 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "_set_polygons");

        [Obsolete("_SetPolygons is deprecated. Use the Polygons property instead.")]
        internal void _SetPolygons(Godot.Collections.Array polygons)
        {
            NativeCalls.godot_icall_1_93(method_bind_51, Object.GetPtr(this), polygons.GetPtr());
        }

        [DebuggerBrowsable(DebuggerBrowsableState.Never)]
        private static IntPtr method_bind_52 = Object.godot_icall_Object_ClassDB_get_method(nativeName, "_get_polygons");

        [Obsolete("_GetPolygons is deprecated. Use the Polygons property instead.")]
        internal Godot.Collections.Array _GetPolygons()
        {
            return new Godot.Collections.Array(NativeCalls.godot_icall_0_26(method_bind_52, Object.GetPtr(this)));
        }
    }
}

#pragma warning restore CS1591
#pragma warning restore CS1573
