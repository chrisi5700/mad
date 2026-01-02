// Auto-generated typed OpenGL module - do not edit
// OpenGL 4.6 Core Profile

export module gm;

import gl;


// ============ Re-exported Types ============
export namespace gm {

using Bitfield = gl::Bitfield;
using Boolean = gl::Boolean;
using Byte = gl::Byte;
using Char = gl::Char;
using Clampd = gl::Clampd;
using Clampf = gl::Clampf;
using Double = gl::Double;
using Fixed = gl::Fixed;
using Float = gl::Float;
using Half = gl::Half;
using Int = gl::Int;
using Int64 = gl::Int64;
using Intptr = gl::Intptr;
using Short = gl::Short;
using Sizei = gl::Sizei;
using Sizeiptr = gl::Sizeiptr;
using Ubyte = gl::Ubyte;
using Uint = gl::Uint;
using Uint64 = gl::Uint64;
using Ushort = gl::Ushort;

} // namespace gm


// ============ Special Wrapper Types ============
export namespace gm {

struct ProgramBinaryFormat {
    gl::Enum value{};
};

} // namespace gm


// ============ Handle Types ============
export namespace gm {

struct Buffer {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const Buffer&) const = default;
};

struct Framebuffer {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const Framebuffer&) const = default;
};

struct Program {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const Program&) const = default;
};

struct ProgramPipeline {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const ProgramPipeline&) const = default;
};

struct Query {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const Query&) const = default;
};

struct Renderbuffer {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const Renderbuffer&) const = default;
};

struct Sampler {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const Sampler&) const = default;
};

struct Shader {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const Shader&) const = default;
};

struct Sync {
    gl::Sync handle{};
    
    explicit operator gl::Sync() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const Sync&) const = default;
};

struct Texture {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const Texture&) const = default;
};

struct TransformFeedback {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const TransformFeedback&) const = default;
};

struct VertexArray {
    gl::Uint handle{};
    
    explicit operator gl::Uint() const { return handle; }
    explicit operator bool() const { return handle != 0; }
    bool operator==(const VertexArray&) const = default;
};

} // namespace gm


// ============ Enum Classes ============
export namespace gm {

enum class AtomicCounterBufferPName : gl::Enum {
    AtomicCounterBufferActiveAtomicCounters = gl::ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS,
    AtomicCounterBufferActiveAtomicCounterIndices = gl::ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES,
    AtomicCounterBufferBinding = gl::ATOMIC_COUNTER_BUFFER_BINDING,
    AtomicCounterBufferDataSize = gl::ATOMIC_COUNTER_BUFFER_DATA_SIZE,
    AtomicCounterBufferReferencedByComputeShader = gl::ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER,
    AtomicCounterBufferReferencedByFragmentShader = gl::ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER,
    AtomicCounterBufferReferencedByGeometryShader = gl::ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER,
    AtomicCounterBufferReferencedByTessControlShader = gl::ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER,
    AtomicCounterBufferReferencedByTessEvaluationShader = gl::ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER,
    AtomicCounterBufferReferencedByVertexShader = gl::ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER,
};

enum class AttributeType : gl::Enum {
    Bool = gl::BOOL,
    BoolVec2 = gl::BOOL_VEC2,
    BoolVec3 = gl::BOOL_VEC3,
    BoolVec4 = gl::BOOL_VEC4,
    Double = gl::DOUBLE,
    DoubleMat2 = gl::DOUBLE_MAT2,
    DoubleMat2x3 = gl::DOUBLE_MAT2x3,
    DoubleMat2x4 = gl::DOUBLE_MAT2x4,
    DoubleMat3 = gl::DOUBLE_MAT3,
    DoubleMat3x2 = gl::DOUBLE_MAT3x2,
    DoubleMat3x4 = gl::DOUBLE_MAT3x4,
    DoubleMat4 = gl::DOUBLE_MAT4,
    DoubleMat4x2 = gl::DOUBLE_MAT4x2,
    DoubleMat4x3 = gl::DOUBLE_MAT4x3,
    DoubleVec2 = gl::DOUBLE_VEC2,
    DoubleVec3 = gl::DOUBLE_VEC3,
    DoubleVec4 = gl::DOUBLE_VEC4,
    Float = gl::FLOAT,
    FloatMat2 = gl::FLOAT_MAT2,
    FloatMat2x3 = gl::FLOAT_MAT2x3,
    FloatMat2x4 = gl::FLOAT_MAT2x4,
    FloatMat3 = gl::FLOAT_MAT3,
    FloatMat3x2 = gl::FLOAT_MAT3x2,
    FloatMat3x4 = gl::FLOAT_MAT3x4,
    FloatMat4 = gl::FLOAT_MAT4,
    FloatMat4x2 = gl::FLOAT_MAT4x2,
    FloatMat4x3 = gl::FLOAT_MAT4x3,
    FloatVec2 = gl::FLOAT_VEC2,
    FloatVec3 = gl::FLOAT_VEC3,
    FloatVec4 = gl::FLOAT_VEC4,
    Image1d = gl::IMAGE_1D,
    Image1dArray = gl::IMAGE_1D_ARRAY,
    Image2d = gl::IMAGE_2D,
    Image2dArray = gl::IMAGE_2D_ARRAY,
    Image2dMultisample = gl::IMAGE_2D_MULTISAMPLE,
    Image2dMultisampleArray = gl::IMAGE_2D_MULTISAMPLE_ARRAY,
    Image2dRect = gl::IMAGE_2D_RECT,
    Image3d = gl::IMAGE_3D,
    ImageBuffer = gl::IMAGE_BUFFER,
    ImageCube = gl::IMAGE_CUBE,
    ImageCubeMapArray = gl::IMAGE_CUBE_MAP_ARRAY,
    Int = gl::INT,
    IntImage1d = gl::INT_IMAGE_1D,
    IntImage1dArray = gl::INT_IMAGE_1D_ARRAY,
    IntImage2d = gl::INT_IMAGE_2D,
    IntImage2dArray = gl::INT_IMAGE_2D_ARRAY,
    IntImage2dMultisample = gl::INT_IMAGE_2D_MULTISAMPLE,
    IntImage2dMultisampleArray = gl::INT_IMAGE_2D_MULTISAMPLE_ARRAY,
    IntImage2dRect = gl::INT_IMAGE_2D_RECT,
    IntImage3d = gl::INT_IMAGE_3D,
    IntImageBuffer = gl::INT_IMAGE_BUFFER,
    IntImageCube = gl::INT_IMAGE_CUBE,
    IntImageCubeMapArray = gl::INT_IMAGE_CUBE_MAP_ARRAY,
    IntSampler1d = gl::INT_SAMPLER_1D,
    IntSampler1dArray = gl::INT_SAMPLER_1D_ARRAY,
    IntSampler2d = gl::INT_SAMPLER_2D,
    IntSampler2dArray = gl::INT_SAMPLER_2D_ARRAY,
    IntSampler2dMultisample = gl::INT_SAMPLER_2D_MULTISAMPLE,
    IntSampler2dMultisampleArray = gl::INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
    IntSampler2dRect = gl::INT_SAMPLER_2D_RECT,
    IntSampler3d = gl::INT_SAMPLER_3D,
    IntSamplerBuffer = gl::INT_SAMPLER_BUFFER,
    IntSamplerCube = gl::INT_SAMPLER_CUBE,
    IntSamplerCubeMapArray = gl::INT_SAMPLER_CUBE_MAP_ARRAY,
    IntVec2 = gl::INT_VEC2,
    IntVec3 = gl::INT_VEC3,
    IntVec4 = gl::INT_VEC4,
    Sampler1d = gl::SAMPLER_1D,
    Sampler1dArrayShadow = gl::SAMPLER_1D_ARRAY_SHADOW,
    Sampler1dShadow = gl::SAMPLER_1D_SHADOW,
    Sampler2d = gl::SAMPLER_2D,
    Sampler2dArrayShadow = gl::SAMPLER_2D_ARRAY_SHADOW,
    Sampler2dMultisample = gl::SAMPLER_2D_MULTISAMPLE,
    Sampler2dMultisampleArray = gl::SAMPLER_2D_MULTISAMPLE_ARRAY,
    Sampler2dRect = gl::SAMPLER_2D_RECT,
    Sampler2dRectShadow = gl::SAMPLER_2D_RECT_SHADOW,
    Sampler2dShadow = gl::SAMPLER_2D_SHADOW,
    Sampler3d = gl::SAMPLER_3D,
    SamplerBuffer = gl::SAMPLER_BUFFER,
    SamplerCube = gl::SAMPLER_CUBE,
    SamplerCubeMapArray = gl::SAMPLER_CUBE_MAP_ARRAY,
    SamplerCubeMapArrayShadow = gl::SAMPLER_CUBE_MAP_ARRAY_SHADOW,
    SamplerCubeShadow = gl::SAMPLER_CUBE_SHADOW,
    UnsignedInt = gl::UNSIGNED_INT,
    UnsignedIntImage1d = gl::UNSIGNED_INT_IMAGE_1D,
    UnsignedIntImage1dArray = gl::UNSIGNED_INT_IMAGE_1D_ARRAY,
    UnsignedIntImage2d = gl::UNSIGNED_INT_IMAGE_2D,
    UnsignedIntImage2dArray = gl::UNSIGNED_INT_IMAGE_2D_ARRAY,
    UnsignedIntImage2dMultisample = gl::UNSIGNED_INT_IMAGE_2D_MULTISAMPLE,
    UnsignedIntImage2dMultisampleArray = gl::UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY,
    UnsignedIntImage2dRect = gl::UNSIGNED_INT_IMAGE_2D_RECT,
    UnsignedIntImage3d = gl::UNSIGNED_INT_IMAGE_3D,
    UnsignedIntImageBuffer = gl::UNSIGNED_INT_IMAGE_BUFFER,
    UnsignedIntImageCube = gl::UNSIGNED_INT_IMAGE_CUBE,
    UnsignedIntImageCubeMapArray = gl::UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY,
    UnsignedIntSampler1d = gl::UNSIGNED_INT_SAMPLER_1D,
    UnsignedIntSampler1dArray = gl::UNSIGNED_INT_SAMPLER_1D_ARRAY,
    UnsignedIntSampler2d = gl::UNSIGNED_INT_SAMPLER_2D,
    UnsignedIntSampler2dArray = gl::UNSIGNED_INT_SAMPLER_2D_ARRAY,
    UnsignedIntSampler2dMultisample = gl::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE,
    UnsignedIntSampler2dMultisampleArray = gl::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
    UnsignedIntSampler2dRect = gl::UNSIGNED_INT_SAMPLER_2D_RECT,
    UnsignedIntSampler3d = gl::UNSIGNED_INT_SAMPLER_3D,
    UnsignedIntSamplerBuffer = gl::UNSIGNED_INT_SAMPLER_BUFFER,
    UnsignedIntSamplerCube = gl::UNSIGNED_INT_SAMPLER_CUBE,
    UnsignedIntSamplerCubeMapArray = gl::UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY,
    UnsignedIntVec2 = gl::UNSIGNED_INT_VEC2,
    UnsignedIntVec3 = gl::UNSIGNED_INT_VEC3,
    UnsignedIntVec4 = gl::UNSIGNED_INT_VEC4,
};

enum class BindTransformFeedbackTarget : gl::Enum {
    TransformFeedback = gl::TRANSFORM_FEEDBACK,
};

enum class BlendEquationModeEXT : gl::Enum {
    FuncAdd = gl::FUNC_ADD,
    FuncReverseSubtract = gl::FUNC_REVERSE_SUBTRACT,
    FuncSubtract = gl::FUNC_SUBTRACT,
    Max = gl::MAX,
    Min = gl::MIN,
};

enum class BlendingFactor : gl::Enum {
    ConstantAlpha = gl::CONSTANT_ALPHA,
    ConstantColor = gl::CONSTANT_COLOR,
    DstAlpha = gl::DST_ALPHA,
    DstColor = gl::DST_COLOR,
    One = gl::ONE,
    OneMinusConstantAlpha = gl::ONE_MINUS_CONSTANT_ALPHA,
    OneMinusConstantColor = gl::ONE_MINUS_CONSTANT_COLOR,
    OneMinusDstAlpha = gl::ONE_MINUS_DST_ALPHA,
    OneMinusDstColor = gl::ONE_MINUS_DST_COLOR,
    OneMinusSrc1Alpha = gl::ONE_MINUS_SRC1_ALPHA,
    OneMinusSrc1Color = gl::ONE_MINUS_SRC1_COLOR,
    OneMinusSrcAlpha = gl::ONE_MINUS_SRC_ALPHA,
    OneMinusSrcColor = gl::ONE_MINUS_SRC_COLOR,
    Src1Alpha = gl::SRC1_ALPHA,
    Src1Color = gl::SRC1_COLOR,
    SrcAlpha = gl::SRC_ALPHA,
    SrcAlphaSaturate = gl::SRC_ALPHA_SATURATE,
    SrcColor = gl::SRC_COLOR,
    Zero = gl::ZERO,
};

enum class BlitFramebufferFilter : gl::Enum {
    Linear = gl::LINEAR,
    Nearest = gl::NEAREST,
};

enum class BufferAccessARB : gl::Enum {
    ReadOnly = gl::READ_ONLY,
    ReadWrite = gl::READ_WRITE,
    WriteOnly = gl::WRITE_ONLY,
};

enum class BufferPNameARB : gl::Enum {
    BufferAccess = gl::BUFFER_ACCESS,
    BufferAccessFlags = gl::BUFFER_ACCESS_FLAGS,
    BufferImmutableStorage = gl::BUFFER_IMMUTABLE_STORAGE,
    BufferMapped = gl::BUFFER_MAPPED,
    BufferMapLength = gl::BUFFER_MAP_LENGTH,
    BufferMapOffset = gl::BUFFER_MAP_OFFSET,
    BufferSize = gl::BUFFER_SIZE,
    BufferStorageFlags = gl::BUFFER_STORAGE_FLAGS,
    BufferUsage = gl::BUFFER_USAGE,
};

enum class BufferPointerNameARB : gl::Enum {
    BufferMapPointer = gl::BUFFER_MAP_POINTER,
};

enum class BufferStorageMask : gl::Enum {
    ClientStorageBit = gl::CLIENT_STORAGE_BIT,
    DynamicStorageBit = gl::DYNAMIC_STORAGE_BIT,
    MapCoherentBit = gl::MAP_COHERENT_BIT,
    MapPersistentBit = gl::MAP_PERSISTENT_BIT,
    MapReadBit = gl::MAP_READ_BIT,
    MapWriteBit = gl::MAP_WRITE_BIT,
};

enum class BufferStorageTarget : gl::Enum {
    ArrayBuffer = gl::ARRAY_BUFFER,
    AtomicCounterBuffer = gl::ATOMIC_COUNTER_BUFFER,
    CopyReadBuffer = gl::COPY_READ_BUFFER,
    CopyWriteBuffer = gl::COPY_WRITE_BUFFER,
    DispatchIndirectBuffer = gl::DISPATCH_INDIRECT_BUFFER,
    DrawIndirectBuffer = gl::DRAW_INDIRECT_BUFFER,
    ElementArrayBuffer = gl::ELEMENT_ARRAY_BUFFER,
    PixelPackBuffer = gl::PIXEL_PACK_BUFFER,
    PixelUnpackBuffer = gl::PIXEL_UNPACK_BUFFER,
    QueryBuffer = gl::QUERY_BUFFER,
    ShaderStorageBuffer = gl::SHADER_STORAGE_BUFFER,
    TextureBuffer = gl::TEXTURE_BUFFER,
    TransformFeedbackBuffer = gl::TRANSFORM_FEEDBACK_BUFFER,
    UniformBuffer = gl::UNIFORM_BUFFER,
};

enum class BufferTargetARB : gl::Enum {
    ArrayBuffer = gl::ARRAY_BUFFER,
    AtomicCounterBuffer = gl::ATOMIC_COUNTER_BUFFER,
    CopyReadBuffer = gl::COPY_READ_BUFFER,
    CopyWriteBuffer = gl::COPY_WRITE_BUFFER,
    DispatchIndirectBuffer = gl::DISPATCH_INDIRECT_BUFFER,
    DrawIndirectBuffer = gl::DRAW_INDIRECT_BUFFER,
    ElementArrayBuffer = gl::ELEMENT_ARRAY_BUFFER,
    ParameterBuffer = gl::PARAMETER_BUFFER,
    PixelPackBuffer = gl::PIXEL_PACK_BUFFER,
    PixelUnpackBuffer = gl::PIXEL_UNPACK_BUFFER,
    QueryBuffer = gl::QUERY_BUFFER,
    ShaderStorageBuffer = gl::SHADER_STORAGE_BUFFER,
    TextureBuffer = gl::TEXTURE_BUFFER,
    TransformFeedbackBuffer = gl::TRANSFORM_FEEDBACK_BUFFER,
    UniformBuffer = gl::UNIFORM_BUFFER,
};

enum class BufferType : gl::Enum {
    Color = gl::COLOR,
    Depth = gl::DEPTH,
    Stencil = gl::STENCIL,
};

enum class BufferUsageARB : gl::Enum {
    DynamicCopy = gl::DYNAMIC_COPY,
    DynamicDraw = gl::DYNAMIC_DRAW,
    DynamicRead = gl::DYNAMIC_READ,
    StaticCopy = gl::STATIC_COPY,
    StaticDraw = gl::STATIC_DRAW,
    StaticRead = gl::STATIC_READ,
    StreamCopy = gl::STREAM_COPY,
    StreamDraw = gl::STREAM_DRAW,
    StreamRead = gl::STREAM_READ,
};

enum class ClampColorModeARB : gl::Enum {
    False = gl::FALSE,
    FixedOnly = gl::FIXED_ONLY,
    True = gl::TRUE,
};

enum class ClampColorTargetARB : gl::Enum {
    ClampReadColor = gl::CLAMP_READ_COLOR,
};

enum class ClearBufferMask : gl::Enum {
    ColorBufferBit = gl::COLOR_BUFFER_BIT,
    DepthBufferBit = gl::DEPTH_BUFFER_BIT,
    StencilBufferBit = gl::STENCIL_BUFFER_BIT,
};

enum class ClipControlDepth : gl::Enum {
    NegativeOneToOne = gl::NEGATIVE_ONE_TO_ONE,
    ZeroToOne = gl::ZERO_TO_ONE,
};

enum class ClipControlOrigin : gl::Enum {
    LowerLeft = gl::LOWER_LEFT,
    UpperLeft = gl::UPPER_LEFT,
};

enum class ColorBuffer : gl::Enum {
    Back = gl::BACK,
    BackLeft = gl::BACK_LEFT,
    BackRight = gl::BACK_RIGHT,
    ColorAttachment0 = gl::COLOR_ATTACHMENT0,
    ColorAttachment1 = gl::COLOR_ATTACHMENT1,
    ColorAttachment10 = gl::COLOR_ATTACHMENT10,
    ColorAttachment11 = gl::COLOR_ATTACHMENT11,
    ColorAttachment12 = gl::COLOR_ATTACHMENT12,
    ColorAttachment13 = gl::COLOR_ATTACHMENT13,
    ColorAttachment14 = gl::COLOR_ATTACHMENT14,
    ColorAttachment15 = gl::COLOR_ATTACHMENT15,
    ColorAttachment16 = gl::COLOR_ATTACHMENT16,
    ColorAttachment17 = gl::COLOR_ATTACHMENT17,
    ColorAttachment18 = gl::COLOR_ATTACHMENT18,
    ColorAttachment19 = gl::COLOR_ATTACHMENT19,
    ColorAttachment2 = gl::COLOR_ATTACHMENT2,
    ColorAttachment20 = gl::COLOR_ATTACHMENT20,
    ColorAttachment21 = gl::COLOR_ATTACHMENT21,
    ColorAttachment22 = gl::COLOR_ATTACHMENT22,
    ColorAttachment23 = gl::COLOR_ATTACHMENT23,
    ColorAttachment24 = gl::COLOR_ATTACHMENT24,
    ColorAttachment25 = gl::COLOR_ATTACHMENT25,
    ColorAttachment26 = gl::COLOR_ATTACHMENT26,
    ColorAttachment27 = gl::COLOR_ATTACHMENT27,
    ColorAttachment28 = gl::COLOR_ATTACHMENT28,
    ColorAttachment29 = gl::COLOR_ATTACHMENT29,
    ColorAttachment3 = gl::COLOR_ATTACHMENT3,
    ColorAttachment30 = gl::COLOR_ATTACHMENT30,
    ColorAttachment31 = gl::COLOR_ATTACHMENT31,
    ColorAttachment4 = gl::COLOR_ATTACHMENT4,
    ColorAttachment5 = gl::COLOR_ATTACHMENT5,
    ColorAttachment6 = gl::COLOR_ATTACHMENT6,
    ColorAttachment7 = gl::COLOR_ATTACHMENT7,
    ColorAttachment8 = gl::COLOR_ATTACHMENT8,
    ColorAttachment9 = gl::COLOR_ATTACHMENT9,
    Front = gl::FRONT,
    FrontAndBack = gl::FRONT_AND_BACK,
    FrontLeft = gl::FRONT_LEFT,
    FrontRight = gl::FRONT_RIGHT,
    Left = gl::LEFT,
    None = gl::NONE,
    Right = gl::RIGHT,
};

enum class ConditionalRenderMode : gl::Enum {
    QueryByRegionNoWait = gl::QUERY_BY_REGION_NO_WAIT,
    QueryByRegionNoWaitInverted = gl::QUERY_BY_REGION_NO_WAIT_INVERTED,
    QueryByRegionWait = gl::QUERY_BY_REGION_WAIT,
    QueryByRegionWaitInverted = gl::QUERY_BY_REGION_WAIT_INVERTED,
    QueryNoWait = gl::QUERY_NO_WAIT,
    QueryNoWaitInverted = gl::QUERY_NO_WAIT_INVERTED,
    QueryWait = gl::QUERY_WAIT,
    QueryWaitInverted = gl::QUERY_WAIT_INVERTED,
};

enum class CopyBufferSubDataTarget : gl::Enum {
    ArrayBuffer = gl::ARRAY_BUFFER,
    AtomicCounterBuffer = gl::ATOMIC_COUNTER_BUFFER,
    CopyReadBuffer = gl::COPY_READ_BUFFER,
    CopyWriteBuffer = gl::COPY_WRITE_BUFFER,
    DispatchIndirectBuffer = gl::DISPATCH_INDIRECT_BUFFER,
    DrawIndirectBuffer = gl::DRAW_INDIRECT_BUFFER,
    ElementArrayBuffer = gl::ELEMENT_ARRAY_BUFFER,
    PixelPackBuffer = gl::PIXEL_PACK_BUFFER,
    PixelUnpackBuffer = gl::PIXEL_UNPACK_BUFFER,
    QueryBuffer = gl::QUERY_BUFFER,
    ShaderStorageBuffer = gl::SHADER_STORAGE_BUFFER,
    TextureBuffer = gl::TEXTURE_BUFFER,
    TransformFeedbackBuffer = gl::TRANSFORM_FEEDBACK_BUFFER,
    UniformBuffer = gl::UNIFORM_BUFFER,
};

enum class CopyImageSubDataTarget : gl::Enum {
    Renderbuffer = gl::RENDERBUFFER,
    Texture1d = gl::TEXTURE_1D,
    Texture1dArray = gl::TEXTURE_1D_ARRAY,
    Texture2d = gl::TEXTURE_2D,
    Texture2dArray = gl::TEXTURE_2D_ARRAY,
    Texture2dMultisample = gl::TEXTURE_2D_MULTISAMPLE,
    Texture2dMultisampleArray = gl::TEXTURE_2D_MULTISAMPLE_ARRAY,
    Texture3d = gl::TEXTURE_3D,
    TextureCubeMap = gl::TEXTURE_CUBE_MAP,
    TextureCubeMapArray = gl::TEXTURE_CUBE_MAP_ARRAY,
    TextureRectangle = gl::TEXTURE_RECTANGLE,
};

enum class DebugSeverity : gl::Enum {
    DebugSeverityHigh = gl::DEBUG_SEVERITY_HIGH,
    DebugSeverityLow = gl::DEBUG_SEVERITY_LOW,
    DebugSeverityMedium = gl::DEBUG_SEVERITY_MEDIUM,
    DebugSeverityNotification = gl::DEBUG_SEVERITY_NOTIFICATION,
    DontCare = gl::DONT_CARE,
};

enum class DebugSource : gl::Enum {
    DebugSourceApi = gl::DEBUG_SOURCE_API,
    DebugSourceApplication = gl::DEBUG_SOURCE_APPLICATION,
    DebugSourceOther = gl::DEBUG_SOURCE_OTHER,
    DebugSourceShaderCompiler = gl::DEBUG_SOURCE_SHADER_COMPILER,
    DebugSourceThirdParty = gl::DEBUG_SOURCE_THIRD_PARTY,
    DebugSourceWindowSystem = gl::DEBUG_SOURCE_WINDOW_SYSTEM,
    DontCare = gl::DONT_CARE,
};

enum class DebugType : gl::Enum {
    DebugTypeDeprecatedBehavior = gl::DEBUG_TYPE_DEPRECATED_BEHAVIOR,
    DebugTypeError = gl::DEBUG_TYPE_ERROR,
    DebugTypeMarker = gl::DEBUG_TYPE_MARKER,
    DebugTypeOther = gl::DEBUG_TYPE_OTHER,
    DebugTypePerformance = gl::DEBUG_TYPE_PERFORMANCE,
    DebugTypePopGroup = gl::DEBUG_TYPE_POP_GROUP,
    DebugTypePortability = gl::DEBUG_TYPE_PORTABILITY,
    DebugTypePushGroup = gl::DEBUG_TYPE_PUSH_GROUP,
    DebugTypeUndefinedBehavior = gl::DEBUG_TYPE_UNDEFINED_BEHAVIOR,
    DontCare = gl::DONT_CARE,
};

enum class DepthFunction : gl::Enum {
    Always = gl::ALWAYS,
    Equal = gl::EQUAL,
    Gequal = gl::GEQUAL,
    Greater = gl::GREATER,
    Lequal = gl::LEQUAL,
    Less = gl::LESS,
    Never = gl::NEVER,
    Notequal = gl::NOTEQUAL,
};

enum class DrawBufferMode : gl::Enum {
    Back = gl::BACK,
    BackLeft = gl::BACK_LEFT,
    BackRight = gl::BACK_RIGHT,
    ColorAttachment0 = gl::COLOR_ATTACHMENT0,
    ColorAttachment1 = gl::COLOR_ATTACHMENT1,
    ColorAttachment10 = gl::COLOR_ATTACHMENT10,
    ColorAttachment11 = gl::COLOR_ATTACHMENT11,
    ColorAttachment12 = gl::COLOR_ATTACHMENT12,
    ColorAttachment13 = gl::COLOR_ATTACHMENT13,
    ColorAttachment14 = gl::COLOR_ATTACHMENT14,
    ColorAttachment15 = gl::COLOR_ATTACHMENT15,
    ColorAttachment16 = gl::COLOR_ATTACHMENT16,
    ColorAttachment17 = gl::COLOR_ATTACHMENT17,
    ColorAttachment18 = gl::COLOR_ATTACHMENT18,
    ColorAttachment19 = gl::COLOR_ATTACHMENT19,
    ColorAttachment2 = gl::COLOR_ATTACHMENT2,
    ColorAttachment20 = gl::COLOR_ATTACHMENT20,
    ColorAttachment21 = gl::COLOR_ATTACHMENT21,
    ColorAttachment22 = gl::COLOR_ATTACHMENT22,
    ColorAttachment23 = gl::COLOR_ATTACHMENT23,
    ColorAttachment24 = gl::COLOR_ATTACHMENT24,
    ColorAttachment25 = gl::COLOR_ATTACHMENT25,
    ColorAttachment26 = gl::COLOR_ATTACHMENT26,
    ColorAttachment27 = gl::COLOR_ATTACHMENT27,
    ColorAttachment28 = gl::COLOR_ATTACHMENT28,
    ColorAttachment29 = gl::COLOR_ATTACHMENT29,
    ColorAttachment3 = gl::COLOR_ATTACHMENT3,
    ColorAttachment30 = gl::COLOR_ATTACHMENT30,
    ColorAttachment31 = gl::COLOR_ATTACHMENT31,
    ColorAttachment4 = gl::COLOR_ATTACHMENT4,
    ColorAttachment5 = gl::COLOR_ATTACHMENT5,
    ColorAttachment6 = gl::COLOR_ATTACHMENT6,
    ColorAttachment7 = gl::COLOR_ATTACHMENT7,
    ColorAttachment8 = gl::COLOR_ATTACHMENT8,
    ColorAttachment9 = gl::COLOR_ATTACHMENT9,
    Front = gl::FRONT,
    FrontAndBack = gl::FRONT_AND_BACK,
    FrontLeft = gl::FRONT_LEFT,
    FrontRight = gl::FRONT_RIGHT,
    Left = gl::LEFT,
    None = gl::NONE,
    Right = gl::RIGHT,
};

enum class DrawElementsType : gl::Enum {
    UnsignedByte = gl::UNSIGNED_BYTE,
    UnsignedInt = gl::UNSIGNED_INT,
    UnsignedShort = gl::UNSIGNED_SHORT,
};

enum class EnableCap : gl::Enum {
    Blend = gl::BLEND,
    ClipDistance0 = gl::CLIP_DISTANCE0,
    ClipDistance1 = gl::CLIP_DISTANCE1,
    ClipDistance2 = gl::CLIP_DISTANCE2,
    ClipDistance3 = gl::CLIP_DISTANCE3,
    ClipDistance4 = gl::CLIP_DISTANCE4,
    ClipDistance5 = gl::CLIP_DISTANCE5,
    ClipDistance6 = gl::CLIP_DISTANCE6,
    ClipDistance7 = gl::CLIP_DISTANCE7,
    ColorLogicOp = gl::COLOR_LOGIC_OP,
    CullFace = gl::CULL_FACE,
    DebugOutput = gl::DEBUG_OUTPUT,
    DebugOutputSynchronous = gl::DEBUG_OUTPUT_SYNCHRONOUS,
    DepthClamp = gl::DEPTH_CLAMP,
    DepthTest = gl::DEPTH_TEST,
    Dither = gl::DITHER,
    FramebufferSrgb = gl::FRAMEBUFFER_SRGB,
    LineSmooth = gl::LINE_SMOOTH,
    Multisample = gl::MULTISAMPLE,
    PolygonOffsetFill = gl::POLYGON_OFFSET_FILL,
    PolygonOffsetLine = gl::POLYGON_OFFSET_LINE,
    PolygonOffsetPoint = gl::POLYGON_OFFSET_POINT,
    PolygonSmooth = gl::POLYGON_SMOOTH,
    PrimitiveRestart = gl::PRIMITIVE_RESTART,
    PrimitiveRestartFixedIndex = gl::PRIMITIVE_RESTART_FIXED_INDEX,
    ProgramPointSize = gl::PROGRAM_POINT_SIZE,
    RasterizerDiscard = gl::RASTERIZER_DISCARD,
    SampleAlphaToCoverage = gl::SAMPLE_ALPHA_TO_COVERAGE,
    SampleAlphaToOne = gl::SAMPLE_ALPHA_TO_ONE,
    SampleCoverage = gl::SAMPLE_COVERAGE,
    SampleMask = gl::SAMPLE_MASK,
    SampleShading = gl::SAMPLE_SHADING,
    ScissorTest = gl::SCISSOR_TEST,
    StencilTest = gl::STENCIL_TEST,
    Texture1d = gl::TEXTURE_1D,
    Texture2d = gl::TEXTURE_2D,
    TextureCubeMap = gl::TEXTURE_CUBE_MAP,
    TextureCubeMapSeamless = gl::TEXTURE_CUBE_MAP_SEAMLESS,
    TextureRectangle = gl::TEXTURE_RECTANGLE,
};

enum class ErrorCode : gl::Enum {
    InvalidEnum = gl::INVALID_ENUM,
    InvalidFramebufferOperation = gl::INVALID_FRAMEBUFFER_OPERATION,
    InvalidOperation = gl::INVALID_OPERATION,
    InvalidValue = gl::INVALID_VALUE,
    NoError = gl::NO_ERROR,
    OutOfMemory = gl::OUT_OF_MEMORY,
};

enum class FramebufferAttachment : gl::Enum {
    ColorAttachment0 = gl::COLOR_ATTACHMENT0,
    ColorAttachment1 = gl::COLOR_ATTACHMENT1,
    ColorAttachment10 = gl::COLOR_ATTACHMENT10,
    ColorAttachment11 = gl::COLOR_ATTACHMENT11,
    ColorAttachment12 = gl::COLOR_ATTACHMENT12,
    ColorAttachment13 = gl::COLOR_ATTACHMENT13,
    ColorAttachment14 = gl::COLOR_ATTACHMENT14,
    ColorAttachment15 = gl::COLOR_ATTACHMENT15,
    ColorAttachment16 = gl::COLOR_ATTACHMENT16,
    ColorAttachment17 = gl::COLOR_ATTACHMENT17,
    ColorAttachment18 = gl::COLOR_ATTACHMENT18,
    ColorAttachment19 = gl::COLOR_ATTACHMENT19,
    ColorAttachment2 = gl::COLOR_ATTACHMENT2,
    ColorAttachment20 = gl::COLOR_ATTACHMENT20,
    ColorAttachment21 = gl::COLOR_ATTACHMENT21,
    ColorAttachment22 = gl::COLOR_ATTACHMENT22,
    ColorAttachment23 = gl::COLOR_ATTACHMENT23,
    ColorAttachment24 = gl::COLOR_ATTACHMENT24,
    ColorAttachment25 = gl::COLOR_ATTACHMENT25,
    ColorAttachment26 = gl::COLOR_ATTACHMENT26,
    ColorAttachment27 = gl::COLOR_ATTACHMENT27,
    ColorAttachment28 = gl::COLOR_ATTACHMENT28,
    ColorAttachment29 = gl::COLOR_ATTACHMENT29,
    ColorAttachment3 = gl::COLOR_ATTACHMENT3,
    ColorAttachment30 = gl::COLOR_ATTACHMENT30,
    ColorAttachment31 = gl::COLOR_ATTACHMENT31,
    ColorAttachment4 = gl::COLOR_ATTACHMENT4,
    ColorAttachment5 = gl::COLOR_ATTACHMENT5,
    ColorAttachment6 = gl::COLOR_ATTACHMENT6,
    ColorAttachment7 = gl::COLOR_ATTACHMENT7,
    ColorAttachment8 = gl::COLOR_ATTACHMENT8,
    ColorAttachment9 = gl::COLOR_ATTACHMENT9,
    DepthAttachment = gl::DEPTH_ATTACHMENT,
    DepthStencilAttachment = gl::DEPTH_STENCIL_ATTACHMENT,
    StencilAttachment = gl::STENCIL_ATTACHMENT,
};

enum class FramebufferAttachmentParameterName : gl::Enum {
    FramebufferAttachmentAlphaSize = gl::FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE,
    FramebufferAttachmentBlueSize = gl::FRAMEBUFFER_ATTACHMENT_BLUE_SIZE,
    FramebufferAttachmentColorEncoding = gl::FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,
    FramebufferAttachmentComponentType = gl::FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE,
    FramebufferAttachmentDepthSize = gl::FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE,
    FramebufferAttachmentGreenSize = gl::FRAMEBUFFER_ATTACHMENT_GREEN_SIZE,
    FramebufferAttachmentLayered = gl::FRAMEBUFFER_ATTACHMENT_LAYERED,
    FramebufferAttachmentObjectName = gl::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,
    FramebufferAttachmentObjectType = gl::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,
    FramebufferAttachmentRedSize = gl::FRAMEBUFFER_ATTACHMENT_RED_SIZE,
    FramebufferAttachmentStencilSize = gl::FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE,
    FramebufferAttachmentTextureCubeMapFace = gl::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,
    FramebufferAttachmentTextureLayer = gl::FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER,
    FramebufferAttachmentTextureLevel = gl::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,
};

enum class FramebufferParameterName : gl::Enum {
    FramebufferDefaultFixedSampleLocations = gl::FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS,
    FramebufferDefaultHeight = gl::FRAMEBUFFER_DEFAULT_HEIGHT,
    FramebufferDefaultLayers = gl::FRAMEBUFFER_DEFAULT_LAYERS,
    FramebufferDefaultSamples = gl::FRAMEBUFFER_DEFAULT_SAMPLES,
    FramebufferDefaultWidth = gl::FRAMEBUFFER_DEFAULT_WIDTH,
};

enum class FramebufferStatus : gl::Enum {
    FramebufferComplete = gl::FRAMEBUFFER_COMPLETE,
    FramebufferIncompleteAttachment = gl::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,
    FramebufferIncompleteDrawBuffer = gl::FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER,
    FramebufferIncompleteLayerTargets = gl::FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS,
    FramebufferIncompleteMissingAttachment = gl::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,
    FramebufferIncompleteMultisample = gl::FRAMEBUFFER_INCOMPLETE_MULTISAMPLE,
    FramebufferIncompleteReadBuffer = gl::FRAMEBUFFER_INCOMPLETE_READ_BUFFER,
    FramebufferUndefined = gl::FRAMEBUFFER_UNDEFINED,
    FramebufferUnsupported = gl::FRAMEBUFFER_UNSUPPORTED,
};

enum class FramebufferTarget : gl::Enum {
    DrawFramebuffer = gl::DRAW_FRAMEBUFFER,
    Framebuffer = gl::FRAMEBUFFER,
    ReadFramebuffer = gl::READ_FRAMEBUFFER,
};

enum class FrontFaceDirection : gl::Enum {
    Ccw = gl::CCW,
    Cw = gl::CW,
};

enum class GetFramebufferParameter : gl::Enum {
    Doublebuffer = gl::DOUBLEBUFFER,
    FramebufferDefaultFixedSampleLocations = gl::FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS,
    FramebufferDefaultHeight = gl::FRAMEBUFFER_DEFAULT_HEIGHT,
    FramebufferDefaultLayers = gl::FRAMEBUFFER_DEFAULT_LAYERS,
    FramebufferDefaultSamples = gl::FRAMEBUFFER_DEFAULT_SAMPLES,
    FramebufferDefaultWidth = gl::FRAMEBUFFER_DEFAULT_WIDTH,
    ImplementationColorReadFormat = gl::IMPLEMENTATION_COLOR_READ_FORMAT,
    ImplementationColorReadType = gl::IMPLEMENTATION_COLOR_READ_TYPE,
    Samples = gl::SAMPLES,
    SampleBuffers = gl::SAMPLE_BUFFERS,
    Stereo = gl::STEREO,
};

enum class GetMultisamplePNameNV : gl::Enum {
    SamplePosition = gl::SAMPLE_POSITION,
};

enum class GetPName : gl::Enum {
    ActiveTexture = gl::ACTIVE_TEXTURE,
    AliasedLineWidthRange = gl::ALIASED_LINE_WIDTH_RANGE,
    ArrayBufferBinding = gl::ARRAY_BUFFER_BINDING,
    Blend = gl::BLEND,
    BlendColor = gl::BLEND_COLOR,
    BlendDst = gl::BLEND_DST,
    BlendDstAlpha = gl::BLEND_DST_ALPHA,
    BlendDstRgb = gl::BLEND_DST_RGB,
    BlendEquation = gl::BLEND_EQUATION,
    BlendEquationAlpha = gl::BLEND_EQUATION_ALPHA,
    BlendSrc = gl::BLEND_SRC,
    BlendSrcAlpha = gl::BLEND_SRC_ALPHA,
    BlendSrcRgb = gl::BLEND_SRC_RGB,
    ColorClearValue = gl::COLOR_CLEAR_VALUE,
    ColorLogicOp = gl::COLOR_LOGIC_OP,
    ColorWritemask = gl::COLOR_WRITEMASK,
    CompressedTextureFormats = gl::COMPRESSED_TEXTURE_FORMATS,
    ContextFlags = gl::CONTEXT_FLAGS,
    ContextProfileMask = gl::CONTEXT_PROFILE_MASK,
    CullFace = gl::CULL_FACE,
    CullFaceMode = gl::CULL_FACE_MODE,
    CurrentProgram = gl::CURRENT_PROGRAM,
    DebugGroupStackDepth = gl::DEBUG_GROUP_STACK_DEPTH,
    DepthClearValue = gl::DEPTH_CLEAR_VALUE,
    DepthFunc = gl::DEPTH_FUNC,
    DepthRange = gl::DEPTH_RANGE,
    DepthTest = gl::DEPTH_TEST,
    DepthWritemask = gl::DEPTH_WRITEMASK,
    DispatchIndirectBufferBinding = gl::DISPATCH_INDIRECT_BUFFER_BINDING,
    Dither = gl::DITHER,
    Doublebuffer = gl::DOUBLEBUFFER,
    DrawBuffer = gl::DRAW_BUFFER,
    DrawFramebufferBinding = gl::DRAW_FRAMEBUFFER_BINDING,
    ElementArrayBufferBinding = gl::ELEMENT_ARRAY_BUFFER_BINDING,
    FragmentShaderDerivativeHint = gl::FRAGMENT_SHADER_DERIVATIVE_HINT,
    FrontFace = gl::FRONT_FACE,
    ImplementationColorReadFormat = gl::IMPLEMENTATION_COLOR_READ_FORMAT,
    ImplementationColorReadType = gl::IMPLEMENTATION_COLOR_READ_TYPE,
    LayerProvokingVertex = gl::LAYER_PROVOKING_VERTEX,
    LineSmooth = gl::LINE_SMOOTH,
    LineSmoothHint = gl::LINE_SMOOTH_HINT,
    LineWidth = gl::LINE_WIDTH,
    LineWidthGranularity = gl::LINE_WIDTH_GRANULARITY,
    LineWidthRange = gl::LINE_WIDTH_RANGE,
    LogicOpMode = gl::LOGIC_OP_MODE,
    MajorVersion = gl::MAJOR_VERSION,
    Max3dTextureSize = gl::MAX_3D_TEXTURE_SIZE,
    MaxArrayTextureLayers = gl::MAX_ARRAY_TEXTURE_LAYERS,
    MaxClipDistances = gl::MAX_CLIP_DISTANCES,
    MaxColorAttachments = gl::MAX_COLOR_ATTACHMENTS,
    MaxColorTextureSamples = gl::MAX_COLOR_TEXTURE_SAMPLES,
    MaxCombinedAtomicCounters = gl::MAX_COMBINED_ATOMIC_COUNTERS,
    MaxCombinedComputeUniformComponents = gl::MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS,
    MaxCombinedFragmentUniformComponents = gl::MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS,
    MaxCombinedGeometryUniformComponents = gl::MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS,
    MaxCombinedShaderStorageBlocks = gl::MAX_COMBINED_SHADER_STORAGE_BLOCKS,
    MaxCombinedTextureImageUnits = gl::MAX_COMBINED_TEXTURE_IMAGE_UNITS,
    MaxCombinedUniformBlocks = gl::MAX_COMBINED_UNIFORM_BLOCKS,
    MaxCombinedVertexUniformComponents = gl::MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS,
    MaxComputeAtomicCounters = gl::MAX_COMPUTE_ATOMIC_COUNTERS,
    MaxComputeAtomicCounterBuffers = gl::MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS,
    MaxComputeShaderStorageBlocks = gl::MAX_COMPUTE_SHADER_STORAGE_BLOCKS,
    MaxComputeTextureImageUnits = gl::MAX_COMPUTE_TEXTURE_IMAGE_UNITS,
    MaxComputeUniformBlocks = gl::MAX_COMPUTE_UNIFORM_BLOCKS,
    MaxComputeUniformComponents = gl::MAX_COMPUTE_UNIFORM_COMPONENTS,
    MaxComputeWorkGroupCount = gl::MAX_COMPUTE_WORK_GROUP_COUNT,
    MaxComputeWorkGroupInvocations = gl::MAX_COMPUTE_WORK_GROUP_INVOCATIONS,
    MaxComputeWorkGroupSize = gl::MAX_COMPUTE_WORK_GROUP_SIZE,
    MaxCubeMapTextureSize = gl::MAX_CUBE_MAP_TEXTURE_SIZE,
    MaxDebugGroupStackDepth = gl::MAX_DEBUG_GROUP_STACK_DEPTH,
    MaxDepthTextureSamples = gl::MAX_DEPTH_TEXTURE_SAMPLES,
    MaxDrawBuffers = gl::MAX_DRAW_BUFFERS,
    MaxDualSourceDrawBuffers = gl::MAX_DUAL_SOURCE_DRAW_BUFFERS,
    MaxElementsIndices = gl::MAX_ELEMENTS_INDICES,
    MaxElementsVertices = gl::MAX_ELEMENTS_VERTICES,
    MaxElementIndex = gl::MAX_ELEMENT_INDEX,
    MaxFragmentAtomicCounters = gl::MAX_FRAGMENT_ATOMIC_COUNTERS,
    MaxFragmentInputComponents = gl::MAX_FRAGMENT_INPUT_COMPONENTS,
    MaxFragmentShaderStorageBlocks = gl::MAX_FRAGMENT_SHADER_STORAGE_BLOCKS,
    MaxFragmentUniformBlocks = gl::MAX_FRAGMENT_UNIFORM_BLOCKS,
    MaxFragmentUniformComponents = gl::MAX_FRAGMENT_UNIFORM_COMPONENTS,
    MaxFragmentUniformVectors = gl::MAX_FRAGMENT_UNIFORM_VECTORS,
    MaxFramebufferHeight = gl::MAX_FRAMEBUFFER_HEIGHT,
    MaxFramebufferLayers = gl::MAX_FRAMEBUFFER_LAYERS,
    MaxFramebufferSamples = gl::MAX_FRAMEBUFFER_SAMPLES,
    MaxFramebufferWidth = gl::MAX_FRAMEBUFFER_WIDTH,
    MaxGeometryAtomicCounters = gl::MAX_GEOMETRY_ATOMIC_COUNTERS,
    MaxGeometryInputComponents = gl::MAX_GEOMETRY_INPUT_COMPONENTS,
    MaxGeometryOutputComponents = gl::MAX_GEOMETRY_OUTPUT_COMPONENTS,
    MaxGeometryShaderStorageBlocks = gl::MAX_GEOMETRY_SHADER_STORAGE_BLOCKS,
    MaxGeometryTextureImageUnits = gl::MAX_GEOMETRY_TEXTURE_IMAGE_UNITS,
    MaxGeometryUniformBlocks = gl::MAX_GEOMETRY_UNIFORM_BLOCKS,
    MaxGeometryUniformComponents = gl::MAX_GEOMETRY_UNIFORM_COMPONENTS,
    MaxIntegerSamples = gl::MAX_INTEGER_SAMPLES,
    MaxLabelLength = gl::MAX_LABEL_LENGTH,
    MaxProgramTexelOffset = gl::MAX_PROGRAM_TEXEL_OFFSET,
    MaxRectangleTextureSize = gl::MAX_RECTANGLE_TEXTURE_SIZE,
    MaxRenderbufferSize = gl::MAX_RENDERBUFFER_SIZE,
    MaxSampleMaskWords = gl::MAX_SAMPLE_MASK_WORDS,
    MaxServerWaitTimeout = gl::MAX_SERVER_WAIT_TIMEOUT,
    MaxShaderStorageBufferBindings = gl::MAX_SHADER_STORAGE_BUFFER_BINDINGS,
    MaxTessControlAtomicCounters = gl::MAX_TESS_CONTROL_ATOMIC_COUNTERS,
    MaxTessControlShaderStorageBlocks = gl::MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS,
    MaxTessControlUniformBlocks = gl::MAX_TESS_CONTROL_UNIFORM_BLOCKS,
    MaxTessEvaluationAtomicCounters = gl::MAX_TESS_EVALUATION_ATOMIC_COUNTERS,
    MaxTessEvaluationShaderStorageBlocks = gl::MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS,
    MaxTessEvaluationUniformBlocks = gl::MAX_TESS_EVALUATION_UNIFORM_BLOCKS,
    MaxTextureBufferSize = gl::MAX_TEXTURE_BUFFER_SIZE,
    MaxTextureImageUnits = gl::MAX_TEXTURE_IMAGE_UNITS,
    MaxTextureLodBias = gl::MAX_TEXTURE_LOD_BIAS,
    MaxTextureSize = gl::MAX_TEXTURE_SIZE,
    MaxUniformBlockSize = gl::MAX_UNIFORM_BLOCK_SIZE,
    MaxUniformBufferBindings = gl::MAX_UNIFORM_BUFFER_BINDINGS,
    MaxUniformLocations = gl::MAX_UNIFORM_LOCATIONS,
    MaxVaryingComponents = gl::MAX_VARYING_COMPONENTS,
    MaxVaryingVectors = gl::MAX_VARYING_VECTORS,
    MaxVertexAtomicCounters = gl::MAX_VERTEX_ATOMIC_COUNTERS,
    MaxVertexAttribs = gl::MAX_VERTEX_ATTRIBS,
    MaxVertexAttribBindings = gl::MAX_VERTEX_ATTRIB_BINDINGS,
    MaxVertexAttribRelativeOffset = gl::MAX_VERTEX_ATTRIB_RELATIVE_OFFSET,
    MaxVertexOutputComponents = gl::MAX_VERTEX_OUTPUT_COMPONENTS,
    MaxVertexShaderStorageBlocks = gl::MAX_VERTEX_SHADER_STORAGE_BLOCKS,
    MaxVertexTextureImageUnits = gl::MAX_VERTEX_TEXTURE_IMAGE_UNITS,
    MaxVertexUniformBlocks = gl::MAX_VERTEX_UNIFORM_BLOCKS,
    MaxVertexUniformComponents = gl::MAX_VERTEX_UNIFORM_COMPONENTS,
    MaxVertexUniformVectors = gl::MAX_VERTEX_UNIFORM_VECTORS,
    MaxViewports = gl::MAX_VIEWPORTS,
    MaxViewportDims = gl::MAX_VIEWPORT_DIMS,
    MinorVersion = gl::MINOR_VERSION,
    MinMapBufferAlignment = gl::MIN_MAP_BUFFER_ALIGNMENT,
    MinProgramTexelOffset = gl::MIN_PROGRAM_TEXEL_OFFSET,
    NumCompressedTextureFormats = gl::NUM_COMPRESSED_TEXTURE_FORMATS,
    NumExtensions = gl::NUM_EXTENSIONS,
    NumProgramBinaryFormats = gl::NUM_PROGRAM_BINARY_FORMATS,
    NumShaderBinaryFormats = gl::NUM_SHADER_BINARY_FORMATS,
    PackAlignment = gl::PACK_ALIGNMENT,
    PackImageHeight = gl::PACK_IMAGE_HEIGHT,
    PackLsbFirst = gl::PACK_LSB_FIRST,
    PackRowLength = gl::PACK_ROW_LENGTH,
    PackSkipImages = gl::PACK_SKIP_IMAGES,
    PackSkipPixels = gl::PACK_SKIP_PIXELS,
    PackSkipRows = gl::PACK_SKIP_ROWS,
    PackSwapBytes = gl::PACK_SWAP_BYTES,
    PixelPackBufferBinding = gl::PIXEL_PACK_BUFFER_BINDING,
    PixelUnpackBufferBinding = gl::PIXEL_UNPACK_BUFFER_BINDING,
    PointFadeThresholdSize = gl::POINT_FADE_THRESHOLD_SIZE,
    PointSize = gl::POINT_SIZE,
    PointSizeGranularity = gl::POINT_SIZE_GRANULARITY,
    PointSizeRange = gl::POINT_SIZE_RANGE,
    PolygonMode = gl::POLYGON_MODE,
    PolygonOffsetFactor = gl::POLYGON_OFFSET_FACTOR,
    PolygonOffsetFill = gl::POLYGON_OFFSET_FILL,
    PolygonOffsetLine = gl::POLYGON_OFFSET_LINE,
    PolygonOffsetPoint = gl::POLYGON_OFFSET_POINT,
    PolygonOffsetUnits = gl::POLYGON_OFFSET_UNITS,
    PolygonSmooth = gl::POLYGON_SMOOTH,
    PolygonSmoothHint = gl::POLYGON_SMOOTH_HINT,
    PrimitiveRestartIndex = gl::PRIMITIVE_RESTART_INDEX,
    ProgramBinaryFormats = gl::PROGRAM_BINARY_FORMATS,
    ProgramPipelineBinding = gl::PROGRAM_PIPELINE_BINDING,
    ProgramPointSize = gl::PROGRAM_POINT_SIZE,
    ProvokingVertex = gl::PROVOKING_VERTEX,
    ReadBuffer = gl::READ_BUFFER,
    ReadFramebufferBinding = gl::READ_FRAMEBUFFER_BINDING,
    RenderbufferBinding = gl::RENDERBUFFER_BINDING,
    SamplerBinding = gl::SAMPLER_BINDING,
    Samples = gl::SAMPLES,
    SampleBuffers = gl::SAMPLE_BUFFERS,
    SampleCoverageInvert = gl::SAMPLE_COVERAGE_INVERT,
    SampleCoverageValue = gl::SAMPLE_COVERAGE_VALUE,
    ScissorBox = gl::SCISSOR_BOX,
    ScissorTest = gl::SCISSOR_TEST,
    ShaderBinaryFormats = gl::SHADER_BINARY_FORMATS,
    ShaderCompiler = gl::SHADER_COMPILER,
    ShaderStorageBufferBinding = gl::SHADER_STORAGE_BUFFER_BINDING,
    ShaderStorageBufferOffsetAlignment = gl::SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT,
    ShaderStorageBufferSize = gl::SHADER_STORAGE_BUFFER_SIZE,
    ShaderStorageBufferStart = gl::SHADER_STORAGE_BUFFER_START,
    StencilBackFail = gl::STENCIL_BACK_FAIL,
    StencilBackFunc = gl::STENCIL_BACK_FUNC,
    StencilBackPassDepthFail = gl::STENCIL_BACK_PASS_DEPTH_FAIL,
    StencilBackPassDepthPass = gl::STENCIL_BACK_PASS_DEPTH_PASS,
    StencilBackRef = gl::STENCIL_BACK_REF,
    StencilBackValueMask = gl::STENCIL_BACK_VALUE_MASK,
    StencilBackWritemask = gl::STENCIL_BACK_WRITEMASK,
    StencilClearValue = gl::STENCIL_CLEAR_VALUE,
    StencilFail = gl::STENCIL_FAIL,
    StencilFunc = gl::STENCIL_FUNC,
    StencilPassDepthFail = gl::STENCIL_PASS_DEPTH_FAIL,
    StencilPassDepthPass = gl::STENCIL_PASS_DEPTH_PASS,
    StencilRef = gl::STENCIL_REF,
    StencilTest = gl::STENCIL_TEST,
    StencilValueMask = gl::STENCIL_VALUE_MASK,
    StencilWritemask = gl::STENCIL_WRITEMASK,
    Stereo = gl::STEREO,
    SubpixelBits = gl::SUBPIXEL_BITS,
    Texture1d = gl::TEXTURE_1D,
    Texture2d = gl::TEXTURE_2D,
    TextureBinding1d = gl::TEXTURE_BINDING_1D,
    TextureBinding1dArray = gl::TEXTURE_BINDING_1D_ARRAY,
    TextureBinding2d = gl::TEXTURE_BINDING_2D,
    TextureBinding2dArray = gl::TEXTURE_BINDING_2D_ARRAY,
    TextureBinding2dMultisample = gl::TEXTURE_BINDING_2D_MULTISAMPLE,
    TextureBinding2dMultisampleArray = gl::TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY,
    TextureBinding3d = gl::TEXTURE_BINDING_3D,
    TextureBindingBuffer = gl::TEXTURE_BINDING_BUFFER,
    TextureBindingCubeMap = gl::TEXTURE_BINDING_CUBE_MAP,
    TextureBindingRectangle = gl::TEXTURE_BINDING_RECTANGLE,
    TextureBufferOffsetAlignment = gl::TEXTURE_BUFFER_OFFSET_ALIGNMENT,
    TextureCompressionHint = gl::TEXTURE_COMPRESSION_HINT,
    Timestamp = gl::TIMESTAMP,
    TransformFeedbackBufferBinding = gl::TRANSFORM_FEEDBACK_BUFFER_BINDING,
    TransformFeedbackBufferSize = gl::TRANSFORM_FEEDBACK_BUFFER_SIZE,
    TransformFeedbackBufferStart = gl::TRANSFORM_FEEDBACK_BUFFER_START,
    UniformBufferBinding = gl::UNIFORM_BUFFER_BINDING,
    UniformBufferOffsetAlignment = gl::UNIFORM_BUFFER_OFFSET_ALIGNMENT,
    UniformBufferSize = gl::UNIFORM_BUFFER_SIZE,
    UniformBufferStart = gl::UNIFORM_BUFFER_START,
    UnpackAlignment = gl::UNPACK_ALIGNMENT,
    UnpackImageHeight = gl::UNPACK_IMAGE_HEIGHT,
    UnpackLsbFirst = gl::UNPACK_LSB_FIRST,
    UnpackRowLength = gl::UNPACK_ROW_LENGTH,
    UnpackSkipImages = gl::UNPACK_SKIP_IMAGES,
    UnpackSkipPixels = gl::UNPACK_SKIP_PIXELS,
    UnpackSkipRows = gl::UNPACK_SKIP_ROWS,
    UnpackSwapBytes = gl::UNPACK_SWAP_BYTES,
    VertexArrayBinding = gl::VERTEX_ARRAY_BINDING,
    VertexBindingDivisor = gl::VERTEX_BINDING_DIVISOR,
    VertexBindingOffset = gl::VERTEX_BINDING_OFFSET,
    VertexBindingStride = gl::VERTEX_BINDING_STRIDE,
    Viewport = gl::VIEWPORT,
    ViewportBoundsRange = gl::VIEWPORT_BOUNDS_RANGE,
    ViewportIndexProvokingVertex = gl::VIEWPORT_INDEX_PROVOKING_VERTEX,
    ViewportSubpixelBits = gl::VIEWPORT_SUBPIXEL_BITS,
};

enum class GetTextureParameter : gl::Enum {
    TextureAlphaSize = gl::TEXTURE_ALPHA_SIZE,
    TextureBlueSize = gl::TEXTURE_BLUE_SIZE,
    TextureBorderColor = gl::TEXTURE_BORDER_COLOR,
    TextureGreenSize = gl::TEXTURE_GREEN_SIZE,
    TextureHeight = gl::TEXTURE_HEIGHT,
    TextureInternalFormat = gl::TEXTURE_INTERNAL_FORMAT,
    TextureMagFilter = gl::TEXTURE_MAG_FILTER,
    TextureMinFilter = gl::TEXTURE_MIN_FILTER,
    TextureRedSize = gl::TEXTURE_RED_SIZE,
    TextureWidth = gl::TEXTURE_WIDTH,
    TextureWrapS = gl::TEXTURE_WRAP_S,
    TextureWrapT = gl::TEXTURE_WRAP_T,
};

enum class GraphicsResetStatus : gl::Enum {
    GuiltyContextReset = gl::GUILTY_CONTEXT_RESET,
    InnocentContextReset = gl::INNOCENT_CONTEXT_RESET,
    NoError = gl::NO_ERROR,
    UnknownContextReset = gl::UNKNOWN_CONTEXT_RESET,
};

enum class HintMode : gl::Enum {
    DontCare = gl::DONT_CARE,
    Fastest = gl::FASTEST,
    Nicest = gl::NICEST,
};

enum class HintTarget : gl::Enum {
    FragmentShaderDerivativeHint = gl::FRAGMENT_SHADER_DERIVATIVE_HINT,
    LineSmoothHint = gl::LINE_SMOOTH_HINT,
    PolygonSmoothHint = gl::POLYGON_SMOOTH_HINT,
    ProgramBinaryRetrievableHint = gl::PROGRAM_BINARY_RETRIEVABLE_HINT,
    TextureCompressionHint = gl::TEXTURE_COMPRESSION_HINT,
};

enum class InternalFormat : gl::Enum {
    CompressedR11Eac = gl::COMPRESSED_R11_EAC,
    CompressedRed = gl::COMPRESSED_RED,
    CompressedRedRgtc1 = gl::COMPRESSED_RED_RGTC1,
    CompressedRg = gl::COMPRESSED_RG,
    CompressedRg11Eac = gl::COMPRESSED_RG11_EAC,
    CompressedRgb = gl::COMPRESSED_RGB,
    CompressedRgb8Etc2 = gl::COMPRESSED_RGB8_ETC2,
    CompressedRgb8PunchthroughAlpha1Etc2 = gl::COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2,
    CompressedRgba = gl::COMPRESSED_RGBA,
    CompressedRgba8Etc2Eac = gl::COMPRESSED_RGBA8_ETC2_EAC,
    CompressedRgbaBptcUnorm = gl::COMPRESSED_RGBA_BPTC_UNORM,
    CompressedRgbBptcSignedFloat = gl::COMPRESSED_RGB_BPTC_SIGNED_FLOAT,
    CompressedRgbBptcUnsignedFloat = gl::COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT,
    CompressedRgRgtc2 = gl::COMPRESSED_RG_RGTC2,
    CompressedSignedR11Eac = gl::COMPRESSED_SIGNED_R11_EAC,
    CompressedSignedRedRgtc1 = gl::COMPRESSED_SIGNED_RED_RGTC1,
    CompressedSignedRg11Eac = gl::COMPRESSED_SIGNED_RG11_EAC,
    CompressedSignedRgRgtc2 = gl::COMPRESSED_SIGNED_RG_RGTC2,
    CompressedSrgb = gl::COMPRESSED_SRGB,
    CompressedSrgb8Alpha8Etc2Eac = gl::COMPRESSED_SRGB8_ALPHA8_ETC2_EAC,
    CompressedSrgb8Etc2 = gl::COMPRESSED_SRGB8_ETC2,
    CompressedSrgb8PunchthroughAlpha1Etc2 = gl::COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2,
    CompressedSrgbAlpha = gl::COMPRESSED_SRGB_ALPHA,
    CompressedSrgbAlphaBptcUnorm = gl::COMPRESSED_SRGB_ALPHA_BPTC_UNORM,
    Depth24Stencil8 = gl::DEPTH24_STENCIL8,
    Depth32fStencil8 = gl::DEPTH32F_STENCIL8,
    DepthComponent = gl::DEPTH_COMPONENT,
    DepthComponent16 = gl::DEPTH_COMPONENT16,
    DepthComponent24 = gl::DEPTH_COMPONENT24,
    DepthComponent32 = gl::DEPTH_COMPONENT32,
    DepthComponent32f = gl::DEPTH_COMPONENT32F,
    DepthStencil = gl::DEPTH_STENCIL,
    R11fG11fB10f = gl::R11F_G11F_B10F,
    R16 = gl::R16,
    R16f = gl::R16F,
    R16i = gl::R16I,
    R16ui = gl::R16UI,
    R16Snorm = gl::R16_SNORM,
    R32f = gl::R32F,
    R32i = gl::R32I,
    R32ui = gl::R32UI,
    R3G3B2 = gl::R3_G3_B2,
    R8 = gl::R8,
    R8i = gl::R8I,
    R8ui = gl::R8UI,
    R8Snorm = gl::R8_SNORM,
    Red = gl::RED,
    Rg = gl::RG,
    Rg16 = gl::RG16,
    Rg16f = gl::RG16F,
    Rg16i = gl::RG16I,
    Rg16ui = gl::RG16UI,
    Rg16Snorm = gl::RG16_SNORM,
    Rg32f = gl::RG32F,
    Rg32i = gl::RG32I,
    Rg32ui = gl::RG32UI,
    Rg8 = gl::RG8,
    Rg8i = gl::RG8I,
    Rg8ui = gl::RG8UI,
    Rg8Snorm = gl::RG8_SNORM,
    Rgb = gl::RGB,
    Rgb10 = gl::RGB10,
    Rgb10A2 = gl::RGB10_A2,
    Rgb10A2ui = gl::RGB10_A2UI,
    Rgb12 = gl::RGB12,
    Rgb16 = gl::RGB16,
    Rgb16f = gl::RGB16F,
    Rgb16i = gl::RGB16I,
    Rgb16ui = gl::RGB16UI,
    Rgb16Snorm = gl::RGB16_SNORM,
    Rgb32f = gl::RGB32F,
    Rgb32i = gl::RGB32I,
    Rgb32ui = gl::RGB32UI,
    Rgb4 = gl::RGB4,
    Rgb5 = gl::RGB5,
    Rgb565 = gl::RGB565,
    Rgb5A1 = gl::RGB5_A1,
    Rgb8 = gl::RGB8,
    Rgb8i = gl::RGB8I,
    Rgb8ui = gl::RGB8UI,
    Rgb8Snorm = gl::RGB8_SNORM,
    Rgb9E5 = gl::RGB9_E5,
    Rgba = gl::RGBA,
    Rgba12 = gl::RGBA12,
    Rgba16 = gl::RGBA16,
    Rgba16f = gl::RGBA16F,
    Rgba16i = gl::RGBA16I,
    Rgba16ui = gl::RGBA16UI,
    Rgba16Snorm = gl::RGBA16_SNORM,
    Rgba2 = gl::RGBA2,
    Rgba32f = gl::RGBA32F,
    Rgba32i = gl::RGBA32I,
    Rgba32ui = gl::RGBA32UI,
    Rgba4 = gl::RGBA4,
    Rgba8 = gl::RGBA8,
    Rgba8i = gl::RGBA8I,
    Rgba8ui = gl::RGBA8UI,
    Rgba8Snorm = gl::RGBA8_SNORM,
    Srgb = gl::SRGB,
    Srgb8 = gl::SRGB8,
    Srgb8Alpha8 = gl::SRGB8_ALPHA8,
    SrgbAlpha = gl::SRGB_ALPHA,
    StencilIndex = gl::STENCIL_INDEX,
    StencilIndex1 = gl::STENCIL_INDEX1,
    StencilIndex16 = gl::STENCIL_INDEX16,
    StencilIndex4 = gl::STENCIL_INDEX4,
    StencilIndex8 = gl::STENCIL_INDEX8,
};

enum class InternalFormatPName : gl::Enum {
    AutoGenerateMipmap = gl::AUTO_GENERATE_MIPMAP,
    ClearBuffer = gl::CLEAR_BUFFER,
    ClearTexture = gl::CLEAR_TEXTURE,
    ColorComponents = gl::COLOR_COMPONENTS,
    ColorEncoding = gl::COLOR_ENCODING,
    ColorRenderable = gl::COLOR_RENDERABLE,
    ComputeTexture = gl::COMPUTE_TEXTURE,
    DepthRenderable = gl::DEPTH_RENDERABLE,
    Filter = gl::FILTER,
    FragmentTexture = gl::FRAGMENT_TEXTURE,
    FramebufferBlend = gl::FRAMEBUFFER_BLEND,
    FramebufferRenderable = gl::FRAMEBUFFER_RENDERABLE,
    FramebufferRenderableLayered = gl::FRAMEBUFFER_RENDERABLE_LAYERED,
    GeometryTexture = gl::GEOMETRY_TEXTURE,
    GetTextureImageFormat = gl::GET_TEXTURE_IMAGE_FORMAT,
    GetTextureImageType = gl::GET_TEXTURE_IMAGE_TYPE,
    ImageCompatibilityClass = gl::IMAGE_COMPATIBILITY_CLASS,
    ImageFormatCompatibilityType = gl::IMAGE_FORMAT_COMPATIBILITY_TYPE,
    ImagePixelFormat = gl::IMAGE_PIXEL_FORMAT,
    ImagePixelType = gl::IMAGE_PIXEL_TYPE,
    ImageTexelSize = gl::IMAGE_TEXEL_SIZE,
    InternalformatAlphaSize = gl::INTERNALFORMAT_ALPHA_SIZE,
    InternalformatAlphaType = gl::INTERNALFORMAT_ALPHA_TYPE,
    InternalformatBlueSize = gl::INTERNALFORMAT_BLUE_SIZE,
    InternalformatBlueType = gl::INTERNALFORMAT_BLUE_TYPE,
    InternalformatDepthSize = gl::INTERNALFORMAT_DEPTH_SIZE,
    InternalformatDepthType = gl::INTERNALFORMAT_DEPTH_TYPE,
    InternalformatGreenSize = gl::INTERNALFORMAT_GREEN_SIZE,
    InternalformatGreenType = gl::INTERNALFORMAT_GREEN_TYPE,
    InternalformatPreferred = gl::INTERNALFORMAT_PREFERRED,
    InternalformatRedSize = gl::INTERNALFORMAT_RED_SIZE,
    InternalformatRedType = gl::INTERNALFORMAT_RED_TYPE,
    InternalformatSharedSize = gl::INTERNALFORMAT_SHARED_SIZE,
    InternalformatStencilSize = gl::INTERNALFORMAT_STENCIL_SIZE,
    InternalformatStencilType = gl::INTERNALFORMAT_STENCIL_TYPE,
    InternalformatSupported = gl::INTERNALFORMAT_SUPPORTED,
    MaxDepth = gl::MAX_DEPTH,
    MaxHeight = gl::MAX_HEIGHT,
    MaxLayers = gl::MAX_LAYERS,
    MaxWidth = gl::MAX_WIDTH,
    Mipmap = gl::MIPMAP,
    NumSampleCounts = gl::NUM_SAMPLE_COUNTS,
    ReadPixels = gl::READ_PIXELS,
    ReadPixelsFormat = gl::READ_PIXELS_FORMAT,
    ReadPixelsType = gl::READ_PIXELS_TYPE,
    Samples = gl::SAMPLES,
    ShaderImageAtomic = gl::SHADER_IMAGE_ATOMIC,
    ShaderImageLoad = gl::SHADER_IMAGE_LOAD,
    ShaderImageStore = gl::SHADER_IMAGE_STORE,
    SimultaneousTextureAndDepthTest = gl::SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST,
    SimultaneousTextureAndDepthWrite = gl::SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE,
    SimultaneousTextureAndStencilTest = gl::SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST,
    SimultaneousTextureAndStencilWrite = gl::SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE,
    SrgbRead = gl::SRGB_READ,
    SrgbWrite = gl::SRGB_WRITE,
    StencilRenderable = gl::STENCIL_RENDERABLE,
    TessControlTexture = gl::TESS_CONTROL_TEXTURE,
    TessEvaluationTexture = gl::TESS_EVALUATION_TEXTURE,
    TextureCompressed = gl::TEXTURE_COMPRESSED,
    TextureCompressedBlockHeight = gl::TEXTURE_COMPRESSED_BLOCK_HEIGHT,
    TextureCompressedBlockSize = gl::TEXTURE_COMPRESSED_BLOCK_SIZE,
    TextureCompressedBlockWidth = gl::TEXTURE_COMPRESSED_BLOCK_WIDTH,
    TextureGather = gl::TEXTURE_GATHER,
    TextureGatherShadow = gl::TEXTURE_GATHER_SHADOW,
    TextureImageFormat = gl::TEXTURE_IMAGE_FORMAT,
    TextureImageType = gl::TEXTURE_IMAGE_TYPE,
    TextureShadow = gl::TEXTURE_SHADOW,
    TextureView = gl::TEXTURE_VIEW,
    VertexTexture = gl::VERTEX_TEXTURE,
    ViewCompatibilityClass = gl::VIEW_COMPATIBILITY_CLASS,
};

enum class InvalidateFramebufferAttachment : gl::Enum {
    Color = gl::COLOR,
    ColorAttachment0 = gl::COLOR_ATTACHMENT0,
    ColorAttachment1 = gl::COLOR_ATTACHMENT1,
    ColorAttachment10 = gl::COLOR_ATTACHMENT10,
    ColorAttachment11 = gl::COLOR_ATTACHMENT11,
    ColorAttachment12 = gl::COLOR_ATTACHMENT12,
    ColorAttachment13 = gl::COLOR_ATTACHMENT13,
    ColorAttachment14 = gl::COLOR_ATTACHMENT14,
    ColorAttachment15 = gl::COLOR_ATTACHMENT15,
    ColorAttachment16 = gl::COLOR_ATTACHMENT16,
    ColorAttachment17 = gl::COLOR_ATTACHMENT17,
    ColorAttachment18 = gl::COLOR_ATTACHMENT18,
    ColorAttachment19 = gl::COLOR_ATTACHMENT19,
    ColorAttachment2 = gl::COLOR_ATTACHMENT2,
    ColorAttachment20 = gl::COLOR_ATTACHMENT20,
    ColorAttachment21 = gl::COLOR_ATTACHMENT21,
    ColorAttachment22 = gl::COLOR_ATTACHMENT22,
    ColorAttachment23 = gl::COLOR_ATTACHMENT23,
    ColorAttachment24 = gl::COLOR_ATTACHMENT24,
    ColorAttachment25 = gl::COLOR_ATTACHMENT25,
    ColorAttachment26 = gl::COLOR_ATTACHMENT26,
    ColorAttachment27 = gl::COLOR_ATTACHMENT27,
    ColorAttachment28 = gl::COLOR_ATTACHMENT28,
    ColorAttachment29 = gl::COLOR_ATTACHMENT29,
    ColorAttachment3 = gl::COLOR_ATTACHMENT3,
    ColorAttachment30 = gl::COLOR_ATTACHMENT30,
    ColorAttachment31 = gl::COLOR_ATTACHMENT31,
    ColorAttachment4 = gl::COLOR_ATTACHMENT4,
    ColorAttachment5 = gl::COLOR_ATTACHMENT5,
    ColorAttachment6 = gl::COLOR_ATTACHMENT6,
    ColorAttachment7 = gl::COLOR_ATTACHMENT7,
    ColorAttachment8 = gl::COLOR_ATTACHMENT8,
    ColorAttachment9 = gl::COLOR_ATTACHMENT9,
    Depth = gl::DEPTH,
    DepthAttachment = gl::DEPTH_ATTACHMENT,
    DepthStencilAttachment = gl::DEPTH_STENCIL_ATTACHMENT,
    Stencil = gl::STENCIL,
};

enum class LogicOp : gl::Enum {
    And = gl::AND,
    AndInverted = gl::AND_INVERTED,
    AndReverse = gl::AND_REVERSE,
    Clear = gl::CLEAR,
    Copy = gl::COPY,
    CopyInverted = gl::COPY_INVERTED,
    Equiv = gl::EQUIV,
    Invert = gl::INVERT,
    Nand = gl::NAND,
    Noop = gl::NOOP,
    Nor = gl::NOR,
    Or = gl::OR,
    OrInverted = gl::OR_INVERTED,
    OrReverse = gl::OR_REVERSE,
    Set = gl::SET,
    Xor = gl::XOR,
};

enum class MapBufferAccessMask : gl::Enum {
    MapCoherentBit = gl::MAP_COHERENT_BIT,
    MapFlushExplicitBit = gl::MAP_FLUSH_EXPLICIT_BIT,
    MapInvalidateBufferBit = gl::MAP_INVALIDATE_BUFFER_BIT,
    MapInvalidateRangeBit = gl::MAP_INVALIDATE_RANGE_BIT,
    MapPersistentBit = gl::MAP_PERSISTENT_BIT,
    MapReadBit = gl::MAP_READ_BIT,
    MapUnsynchronizedBit = gl::MAP_UNSYNCHRONIZED_BIT,
    MapWriteBit = gl::MAP_WRITE_BIT,
};

enum class MemoryBarrierMask : gl::Enum {
    AllBarrierBits = gl::ALL_BARRIER_BITS,
    AtomicCounterBarrierBit = gl::ATOMIC_COUNTER_BARRIER_BIT,
    BufferUpdateBarrierBit = gl::BUFFER_UPDATE_BARRIER_BIT,
    ClientMappedBufferBarrierBit = gl::CLIENT_MAPPED_BUFFER_BARRIER_BIT,
    CommandBarrierBit = gl::COMMAND_BARRIER_BIT,
    ElementArrayBarrierBit = gl::ELEMENT_ARRAY_BARRIER_BIT,
    FramebufferBarrierBit = gl::FRAMEBUFFER_BARRIER_BIT,
    PixelBufferBarrierBit = gl::PIXEL_BUFFER_BARRIER_BIT,
    QueryBufferBarrierBit = gl::QUERY_BUFFER_BARRIER_BIT,
    ShaderImageAccessBarrierBit = gl::SHADER_IMAGE_ACCESS_BARRIER_BIT,
    ShaderStorageBarrierBit = gl::SHADER_STORAGE_BARRIER_BIT,
    TextureFetchBarrierBit = gl::TEXTURE_FETCH_BARRIER_BIT,
    TextureUpdateBarrierBit = gl::TEXTURE_UPDATE_BARRIER_BIT,
    TransformFeedbackBarrierBit = gl::TRANSFORM_FEEDBACK_BARRIER_BIT,
    UniformBarrierBit = gl::UNIFORM_BARRIER_BIT,
    VertexAttribArrayBarrierBit = gl::VERTEX_ATTRIB_ARRAY_BARRIER_BIT,
};

enum class ObjectIdentifier : gl::Enum {
    Buffer = gl::BUFFER,
    Framebuffer = gl::FRAMEBUFFER,
    Program = gl::PROGRAM,
    ProgramPipeline = gl::PROGRAM_PIPELINE,
    Query = gl::QUERY,
    Renderbuffer = gl::RENDERBUFFER,
    Sampler = gl::SAMPLER,
    Shader = gl::SHADER,
    Texture = gl::TEXTURE,
    TransformFeedback = gl::TRANSFORM_FEEDBACK,
};

enum class PatchParameterName : gl::Enum {
    PatchDefaultInnerLevel = gl::PATCH_DEFAULT_INNER_LEVEL,
    PatchDefaultOuterLevel = gl::PATCH_DEFAULT_OUTER_LEVEL,
    PatchVertices = gl::PATCH_VERTICES,
};

enum class PipelineParameterName : gl::Enum {
    ActiveProgram = gl::ACTIVE_PROGRAM,
    FragmentShader = gl::FRAGMENT_SHADER,
    GeometryShader = gl::GEOMETRY_SHADER,
    InfoLogLength = gl::INFO_LOG_LENGTH,
    TessControlShader = gl::TESS_CONTROL_SHADER,
    TessEvaluationShader = gl::TESS_EVALUATION_SHADER,
    VertexShader = gl::VERTEX_SHADER,
};

enum class PixelFormat : gl::Enum {
    Alpha = gl::ALPHA,
    Bgr = gl::BGR,
    Bgra = gl::BGRA,
    BgraInteger = gl::BGRA_INTEGER,
    BgrInteger = gl::BGR_INTEGER,
    Blue = gl::BLUE,
    BlueInteger = gl::BLUE_INTEGER,
    DepthComponent = gl::DEPTH_COMPONENT,
    DepthStencil = gl::DEPTH_STENCIL,
    Green = gl::GREEN,
    GreenInteger = gl::GREEN_INTEGER,
    Red = gl::RED,
    RedInteger = gl::RED_INTEGER,
    Rg = gl::RG,
    Rgb = gl::RGB,
    Rgba = gl::RGBA,
    RgbaInteger = gl::RGBA_INTEGER,
    RgbInteger = gl::RGB_INTEGER,
    RgInteger = gl::RG_INTEGER,
    StencilIndex = gl::STENCIL_INDEX,
    UnsignedInt = gl::UNSIGNED_INT,
    UnsignedShort = gl::UNSIGNED_SHORT,
};

enum class PixelStoreParameter : gl::Enum {
    PackAlignment = gl::PACK_ALIGNMENT,
    PackImageHeight = gl::PACK_IMAGE_HEIGHT,
    PackLsbFirst = gl::PACK_LSB_FIRST,
    PackRowLength = gl::PACK_ROW_LENGTH,
    PackSkipImages = gl::PACK_SKIP_IMAGES,
    PackSkipPixels = gl::PACK_SKIP_PIXELS,
    PackSkipRows = gl::PACK_SKIP_ROWS,
    PackSwapBytes = gl::PACK_SWAP_BYTES,
    UnpackAlignment = gl::UNPACK_ALIGNMENT,
    UnpackImageHeight = gl::UNPACK_IMAGE_HEIGHT,
    UnpackLsbFirst = gl::UNPACK_LSB_FIRST,
    UnpackRowLength = gl::UNPACK_ROW_LENGTH,
    UnpackSkipImages = gl::UNPACK_SKIP_IMAGES,
    UnpackSkipPixels = gl::UNPACK_SKIP_PIXELS,
    UnpackSkipRows = gl::UNPACK_SKIP_ROWS,
    UnpackSwapBytes = gl::UNPACK_SWAP_BYTES,
};

enum class PixelType : gl::Enum {
    Byte = gl::BYTE,
    Float = gl::FLOAT,
    Float32UnsignedInt248Rev = gl::FLOAT_32_UNSIGNED_INT_24_8_REV,
    HalfFloat = gl::HALF_FLOAT,
    Int = gl::INT,
    Short = gl::SHORT,
    UnsignedByte = gl::UNSIGNED_BYTE,
    UnsignedByte233Rev = gl::UNSIGNED_BYTE_2_3_3_REV,
    UnsignedByte332 = gl::UNSIGNED_BYTE_3_3_2,
    UnsignedInt = gl::UNSIGNED_INT,
    UnsignedInt10f11f11fRev = gl::UNSIGNED_INT_10F_11F_11F_REV,
    UnsignedInt1010102 = gl::UNSIGNED_INT_10_10_10_2,
    UnsignedInt248 = gl::UNSIGNED_INT_24_8,
    UnsignedInt2101010Rev = gl::UNSIGNED_INT_2_10_10_10_REV,
    UnsignedInt5999Rev = gl::UNSIGNED_INT_5_9_9_9_REV,
    UnsignedInt8888 = gl::UNSIGNED_INT_8_8_8_8,
    UnsignedInt8888Rev = gl::UNSIGNED_INT_8_8_8_8_REV,
    UnsignedShort = gl::UNSIGNED_SHORT,
    UnsignedShort1555Rev = gl::UNSIGNED_SHORT_1_5_5_5_REV,
    UnsignedShort4444 = gl::UNSIGNED_SHORT_4_4_4_4,
    UnsignedShort4444Rev = gl::UNSIGNED_SHORT_4_4_4_4_REV,
    UnsignedShort5551 = gl::UNSIGNED_SHORT_5_5_5_1,
    UnsignedShort565 = gl::UNSIGNED_SHORT_5_6_5,
    UnsignedShort565Rev = gl::UNSIGNED_SHORT_5_6_5_REV,
};

enum class PointParameterNameARB : gl::Enum {
    PointFadeThresholdSize = gl::POINT_FADE_THRESHOLD_SIZE,
};

enum class PolygonMode : gl::Enum {
    Fill = gl::FILL,
    Line = gl::LINE,
    Point = gl::POINT,
};

enum class PrecisionType : gl::Enum {
    HighFloat = gl::HIGH_FLOAT,
    HighInt = gl::HIGH_INT,
    LowFloat = gl::LOW_FLOAT,
    LowInt = gl::LOW_INT,
    MediumFloat = gl::MEDIUM_FLOAT,
    MediumInt = gl::MEDIUM_INT,
};

enum class PrimitiveType : gl::Enum {
    Lines = gl::LINES,
    LinesAdjacency = gl::LINES_ADJACENCY,
    LineLoop = gl::LINE_LOOP,
    LineStrip = gl::LINE_STRIP,
    LineStripAdjacency = gl::LINE_STRIP_ADJACENCY,
    Patches = gl::PATCHES,
    Points = gl::POINTS,
    Triangles = gl::TRIANGLES,
    TrianglesAdjacency = gl::TRIANGLES_ADJACENCY,
    TriangleFan = gl::TRIANGLE_FAN,
    TriangleStrip = gl::TRIANGLE_STRIP,
    TriangleStripAdjacency = gl::TRIANGLE_STRIP_ADJACENCY,
};

enum class ProgramInterface : gl::Enum {
    BufferVariable = gl::BUFFER_VARIABLE,
    ComputeSubroutine = gl::COMPUTE_SUBROUTINE,
    ComputeSubroutineUniform = gl::COMPUTE_SUBROUTINE_UNIFORM,
    FragmentSubroutine = gl::FRAGMENT_SUBROUTINE,
    FragmentSubroutineUniform = gl::FRAGMENT_SUBROUTINE_UNIFORM,
    GeometrySubroutine = gl::GEOMETRY_SUBROUTINE,
    GeometrySubroutineUniform = gl::GEOMETRY_SUBROUTINE_UNIFORM,
    ProgramInput = gl::PROGRAM_INPUT,
    ProgramOutput = gl::PROGRAM_OUTPUT,
    ShaderStorageBlock = gl::SHADER_STORAGE_BLOCK,
    TessControlSubroutine = gl::TESS_CONTROL_SUBROUTINE,
    TessControlSubroutineUniform = gl::TESS_CONTROL_SUBROUTINE_UNIFORM,
    TessEvaluationSubroutine = gl::TESS_EVALUATION_SUBROUTINE,
    TessEvaluationSubroutineUniform = gl::TESS_EVALUATION_SUBROUTINE_UNIFORM,
    TransformFeedbackBuffer = gl::TRANSFORM_FEEDBACK_BUFFER,
    TransformFeedbackVarying = gl::TRANSFORM_FEEDBACK_VARYING,
    Uniform = gl::UNIFORM,
    UniformBlock = gl::UNIFORM_BLOCK,
    VertexSubroutine = gl::VERTEX_SUBROUTINE,
    VertexSubroutineUniform = gl::VERTEX_SUBROUTINE_UNIFORM,
};

enum class ProgramInterfacePName : gl::Enum {
    ActiveResources = gl::ACTIVE_RESOURCES,
    MaxNameLength = gl::MAX_NAME_LENGTH,
    MaxNumActiveVariables = gl::MAX_NUM_ACTIVE_VARIABLES,
    MaxNumCompatibleSubroutines = gl::MAX_NUM_COMPATIBLE_SUBROUTINES,
};

enum class ProgramParameterPName : gl::Enum {
    ProgramBinaryRetrievableHint = gl::PROGRAM_BINARY_RETRIEVABLE_HINT,
    ProgramSeparable = gl::PROGRAM_SEPARABLE,
};

enum class ProgramPropertyARB : gl::Enum {
    ActiveAtomicCounterBuffers = gl::ACTIVE_ATOMIC_COUNTER_BUFFERS,
    ActiveAttributes = gl::ACTIVE_ATTRIBUTES,
    ActiveAttributeMaxLength = gl::ACTIVE_ATTRIBUTE_MAX_LENGTH,
    ActiveUniforms = gl::ACTIVE_UNIFORMS,
    ActiveUniformBlocks = gl::ACTIVE_UNIFORM_BLOCKS,
    ActiveUniformBlockMaxNameLength = gl::ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH,
    ActiveUniformMaxLength = gl::ACTIVE_UNIFORM_MAX_LENGTH,
    AttachedShaders = gl::ATTACHED_SHADERS,
    ComputeWorkGroupSize = gl::COMPUTE_WORK_GROUP_SIZE,
    DeleteStatus = gl::DELETE_STATUS,
    GeometryInputType = gl::GEOMETRY_INPUT_TYPE,
    GeometryOutputType = gl::GEOMETRY_OUTPUT_TYPE,
    GeometryVerticesOut = gl::GEOMETRY_VERTICES_OUT,
    InfoLogLength = gl::INFO_LOG_LENGTH,
    LinkStatus = gl::LINK_STATUS,
    ProgramBinaryLength = gl::PROGRAM_BINARY_LENGTH,
    TransformFeedbackBufferMode = gl::TRANSFORM_FEEDBACK_BUFFER_MODE,
    TransformFeedbackVaryings = gl::TRANSFORM_FEEDBACK_VARYINGS,
    TransformFeedbackVaryingMaxLength = gl::TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH,
    ValidateStatus = gl::VALIDATE_STATUS,
};

enum class ProgramResourceProperty : gl::Enum {
    ActiveVariables = gl::ACTIVE_VARIABLES,
    ArraySize = gl::ARRAY_SIZE,
    ArrayStride = gl::ARRAY_STRIDE,
    AtomicCounterBufferIndex = gl::ATOMIC_COUNTER_BUFFER_INDEX,
    BlockIndex = gl::BLOCK_INDEX,
    BufferBinding = gl::BUFFER_BINDING,
    BufferDataSize = gl::BUFFER_DATA_SIZE,
    CompatibleSubroutines = gl::COMPATIBLE_SUBROUTINES,
    IsPerPatch = gl::IS_PER_PATCH,
    IsRowMajor = gl::IS_ROW_MAJOR,
    Location = gl::LOCATION,
    LocationComponent = gl::LOCATION_COMPONENT,
    LocationIndex = gl::LOCATION_INDEX,
    MatrixStride = gl::MATRIX_STRIDE,
    NameLength = gl::NAME_LENGTH,
    NumActiveVariables = gl::NUM_ACTIVE_VARIABLES,
    NumCompatibleSubroutines = gl::NUM_COMPATIBLE_SUBROUTINES,
    Offset = gl::OFFSET,
    ReferencedByComputeShader = gl::REFERENCED_BY_COMPUTE_SHADER,
    ReferencedByFragmentShader = gl::REFERENCED_BY_FRAGMENT_SHADER,
    ReferencedByGeometryShader = gl::REFERENCED_BY_GEOMETRY_SHADER,
    ReferencedByTessControlShader = gl::REFERENCED_BY_TESS_CONTROL_SHADER,
    ReferencedByTessEvaluationShader = gl::REFERENCED_BY_TESS_EVALUATION_SHADER,
    ReferencedByVertexShader = gl::REFERENCED_BY_VERTEX_SHADER,
    TopLevelArraySize = gl::TOP_LEVEL_ARRAY_SIZE,
    TopLevelArrayStride = gl::TOP_LEVEL_ARRAY_STRIDE,
    TransformFeedbackBufferIndex = gl::TRANSFORM_FEEDBACK_BUFFER_INDEX,
    TransformFeedbackBufferStride = gl::TRANSFORM_FEEDBACK_BUFFER_STRIDE,
    Type = gl::TYPE,
    Uniform = gl::UNIFORM,
};

enum class ProgramStagePName : gl::Enum {
    ActiveSubroutines = gl::ACTIVE_SUBROUTINES,
    ActiveSubroutineMaxLength = gl::ACTIVE_SUBROUTINE_MAX_LENGTH,
    ActiveSubroutineUniforms = gl::ACTIVE_SUBROUTINE_UNIFORMS,
    ActiveSubroutineUniformLocations = gl::ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS,
    ActiveSubroutineUniformMaxLength = gl::ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH,
};

enum class QueryCounterTarget : gl::Enum {
    Timestamp = gl::TIMESTAMP,
};

enum class QueryObjectParameterName : gl::Enum {
    QueryResult = gl::QUERY_RESULT,
    QueryResultAvailable = gl::QUERY_RESULT_AVAILABLE,
    QueryResultNoWait = gl::QUERY_RESULT_NO_WAIT,
    QueryTarget = gl::QUERY_TARGET,
};

enum class QueryParameterName : gl::Enum {
    CurrentQuery = gl::CURRENT_QUERY,
    QueryCounterBits = gl::QUERY_COUNTER_BITS,
};

enum class QueryTarget : gl::Enum {
    AnySamplesPassed = gl::ANY_SAMPLES_PASSED,
    AnySamplesPassedConservative = gl::ANY_SAMPLES_PASSED_CONSERVATIVE,
    PrimitivesGenerated = gl::PRIMITIVES_GENERATED,
    PrimitivesSubmitted = gl::PRIMITIVES_SUBMITTED,
    SamplesPassed = gl::SAMPLES_PASSED,
    TimeElapsed = gl::TIME_ELAPSED,
    TransformFeedbackOverflow = gl::TRANSFORM_FEEDBACK_OVERFLOW,
    TransformFeedbackPrimitivesWritten = gl::TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,
    VertexShaderInvocations = gl::VERTEX_SHADER_INVOCATIONS,
    VerticesSubmitted = gl::VERTICES_SUBMITTED,
};

enum class ReadBufferMode : gl::Enum {
    Back = gl::BACK,
    BackLeft = gl::BACK_LEFT,
    BackRight = gl::BACK_RIGHT,
    ColorAttachment0 = gl::COLOR_ATTACHMENT0,
    ColorAttachment1 = gl::COLOR_ATTACHMENT1,
    ColorAttachment10 = gl::COLOR_ATTACHMENT10,
    ColorAttachment11 = gl::COLOR_ATTACHMENT11,
    ColorAttachment12 = gl::COLOR_ATTACHMENT12,
    ColorAttachment13 = gl::COLOR_ATTACHMENT13,
    ColorAttachment14 = gl::COLOR_ATTACHMENT14,
    ColorAttachment15 = gl::COLOR_ATTACHMENT15,
    ColorAttachment2 = gl::COLOR_ATTACHMENT2,
    ColorAttachment3 = gl::COLOR_ATTACHMENT3,
    ColorAttachment4 = gl::COLOR_ATTACHMENT4,
    ColorAttachment5 = gl::COLOR_ATTACHMENT5,
    ColorAttachment6 = gl::COLOR_ATTACHMENT6,
    ColorAttachment7 = gl::COLOR_ATTACHMENT7,
    ColorAttachment8 = gl::COLOR_ATTACHMENT8,
    ColorAttachment9 = gl::COLOR_ATTACHMENT9,
    Front = gl::FRONT,
    FrontLeft = gl::FRONT_LEFT,
    FrontRight = gl::FRONT_RIGHT,
    Left = gl::LEFT,
    None = gl::NONE,
    Right = gl::RIGHT,
};

enum class RenderbufferParameterName : gl::Enum {
    RenderbufferAlphaSize = gl::RENDERBUFFER_ALPHA_SIZE,
    RenderbufferBlueSize = gl::RENDERBUFFER_BLUE_SIZE,
    RenderbufferDepthSize = gl::RENDERBUFFER_DEPTH_SIZE,
    RenderbufferGreenSize = gl::RENDERBUFFER_GREEN_SIZE,
    RenderbufferHeight = gl::RENDERBUFFER_HEIGHT,
    RenderbufferInternalFormat = gl::RENDERBUFFER_INTERNAL_FORMAT,
    RenderbufferRedSize = gl::RENDERBUFFER_RED_SIZE,
    RenderbufferSamples = gl::RENDERBUFFER_SAMPLES,
    RenderbufferStencilSize = gl::RENDERBUFFER_STENCIL_SIZE,
    RenderbufferWidth = gl::RENDERBUFFER_WIDTH,
};

enum class RenderbufferTarget : gl::Enum {
    Renderbuffer = gl::RENDERBUFFER,
};

enum class SamplerParameterF : gl::Enum {
    TextureBorderColor = gl::TEXTURE_BORDER_COLOR,
    TextureLodBias = gl::TEXTURE_LOD_BIAS,
    TextureMaxAnisotropy = gl::TEXTURE_MAX_ANISOTROPY,
    TextureMaxLod = gl::TEXTURE_MAX_LOD,
    TextureMinLod = gl::TEXTURE_MIN_LOD,
};

enum class SamplerParameterI : gl::Enum {
    TextureCompareFunc = gl::TEXTURE_COMPARE_FUNC,
    TextureCompareMode = gl::TEXTURE_COMPARE_MODE,
    TextureMagFilter = gl::TEXTURE_MAG_FILTER,
    TextureMinFilter = gl::TEXTURE_MIN_FILTER,
    TextureWrapR = gl::TEXTURE_WRAP_R,
    TextureWrapS = gl::TEXTURE_WRAP_S,
    TextureWrapT = gl::TEXTURE_WRAP_T,
};

enum class ShaderBinaryFormat : gl::Enum {
    ShaderBinaryFormatSpirV = gl::SHADER_BINARY_FORMAT_SPIR_V,
};

enum class ShaderParameterName : gl::Enum {
    CompileStatus = gl::COMPILE_STATUS,
    DeleteStatus = gl::DELETE_STATUS,
    InfoLogLength = gl::INFO_LOG_LENGTH,
    ShaderSourceLength = gl::SHADER_SOURCE_LENGTH,
    ShaderType = gl::SHADER_TYPE,
};

enum class ShaderType : gl::Enum {
    ComputeShader = gl::COMPUTE_SHADER,
    FragmentShader = gl::FRAGMENT_SHADER,
    GeometryShader = gl::GEOMETRY_SHADER,
    TessControlShader = gl::TESS_CONTROL_SHADER,
    TessEvaluationShader = gl::TESS_EVALUATION_SHADER,
    VertexShader = gl::VERTEX_SHADER,
};

enum class SizedInternalFormat : gl::Enum {
    CompressedR11Eac = gl::COMPRESSED_R11_EAC,
    CompressedRedRgtc1 = gl::COMPRESSED_RED_RGTC1,
    CompressedRg11Eac = gl::COMPRESSED_RG11_EAC,
    CompressedRgb8Etc2 = gl::COMPRESSED_RGB8_ETC2,
    CompressedRgb8PunchthroughAlpha1Etc2 = gl::COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2,
    CompressedRgba8Etc2Eac = gl::COMPRESSED_RGBA8_ETC2_EAC,
    CompressedRgbaBptcUnorm = gl::COMPRESSED_RGBA_BPTC_UNORM,
    CompressedRgbBptcSignedFloat = gl::COMPRESSED_RGB_BPTC_SIGNED_FLOAT,
    CompressedRgbBptcUnsignedFloat = gl::COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT,
    CompressedRgRgtc2 = gl::COMPRESSED_RG_RGTC2,
    CompressedSignedR11Eac = gl::COMPRESSED_SIGNED_R11_EAC,
    CompressedSignedRedRgtc1 = gl::COMPRESSED_SIGNED_RED_RGTC1,
    CompressedSignedRg11Eac = gl::COMPRESSED_SIGNED_RG11_EAC,
    CompressedSignedRgRgtc2 = gl::COMPRESSED_SIGNED_RG_RGTC2,
    CompressedSrgb8Alpha8Etc2Eac = gl::COMPRESSED_SRGB8_ALPHA8_ETC2_EAC,
    CompressedSrgb8Etc2 = gl::COMPRESSED_SRGB8_ETC2,
    CompressedSrgb8PunchthroughAlpha1Etc2 = gl::COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2,
    CompressedSrgbAlphaBptcUnorm = gl::COMPRESSED_SRGB_ALPHA_BPTC_UNORM,
    Depth24Stencil8 = gl::DEPTH24_STENCIL8,
    Depth32fStencil8 = gl::DEPTH32F_STENCIL8,
    DepthComponent16 = gl::DEPTH_COMPONENT16,
    DepthComponent24 = gl::DEPTH_COMPONENT24,
    DepthComponent32 = gl::DEPTH_COMPONENT32,
    DepthComponent32f = gl::DEPTH_COMPONENT32F,
    R11fG11fB10f = gl::R11F_G11F_B10F,
    R16 = gl::R16,
    R16f = gl::R16F,
    R16i = gl::R16I,
    R16ui = gl::R16UI,
    R16Snorm = gl::R16_SNORM,
    R32f = gl::R32F,
    R32i = gl::R32I,
    R32ui = gl::R32UI,
    R3G3B2 = gl::R3_G3_B2,
    R8 = gl::R8,
    R8i = gl::R8I,
    R8ui = gl::R8UI,
    R8Snorm = gl::R8_SNORM,
    Rg16 = gl::RG16,
    Rg16f = gl::RG16F,
    Rg16i = gl::RG16I,
    Rg16ui = gl::RG16UI,
    Rg16Snorm = gl::RG16_SNORM,
    Rg32f = gl::RG32F,
    Rg32i = gl::RG32I,
    Rg32ui = gl::RG32UI,
    Rg8 = gl::RG8,
    Rg8i = gl::RG8I,
    Rg8ui = gl::RG8UI,
    Rg8Snorm = gl::RG8_SNORM,
    Rgb10 = gl::RGB10,
    Rgb10A2 = gl::RGB10_A2,
    Rgb10A2ui = gl::RGB10_A2UI,
    Rgb12 = gl::RGB12,
    Rgb16 = gl::RGB16,
    Rgb16f = gl::RGB16F,
    Rgb16i = gl::RGB16I,
    Rgb16ui = gl::RGB16UI,
    Rgb16Snorm = gl::RGB16_SNORM,
    Rgb32f = gl::RGB32F,
    Rgb32i = gl::RGB32I,
    Rgb32ui = gl::RGB32UI,
    Rgb4 = gl::RGB4,
    Rgb5 = gl::RGB5,
    Rgb565 = gl::RGB565,
    Rgb5A1 = gl::RGB5_A1,
    Rgb8 = gl::RGB8,
    Rgb8i = gl::RGB8I,
    Rgb8ui = gl::RGB8UI,
    Rgb8Snorm = gl::RGB8_SNORM,
    Rgb9E5 = gl::RGB9_E5,
    Rgba12 = gl::RGBA12,
    Rgba16 = gl::RGBA16,
    Rgba16f = gl::RGBA16F,
    Rgba16i = gl::RGBA16I,
    Rgba16ui = gl::RGBA16UI,
    Rgba16Snorm = gl::RGBA16_SNORM,
    Rgba2 = gl::RGBA2,
    Rgba32f = gl::RGBA32F,
    Rgba32i = gl::RGBA32I,
    Rgba32ui = gl::RGBA32UI,
    Rgba4 = gl::RGBA4,
    Rgba8 = gl::RGBA8,
    Rgba8i = gl::RGBA8I,
    Rgba8ui = gl::RGBA8UI,
    Rgba8Snorm = gl::RGBA8_SNORM,
    Srgb8 = gl::SRGB8,
    Srgb8Alpha8 = gl::SRGB8_ALPHA8,
    StencilIndex1 = gl::STENCIL_INDEX1,
    StencilIndex16 = gl::STENCIL_INDEX16,
    StencilIndex4 = gl::STENCIL_INDEX4,
    StencilIndex8 = gl::STENCIL_INDEX8,
};

enum class StencilFunction : gl::Enum {
    Always = gl::ALWAYS,
    Equal = gl::EQUAL,
    Gequal = gl::GEQUAL,
    Greater = gl::GREATER,
    Lequal = gl::LEQUAL,
    Less = gl::LESS,
    Never = gl::NEVER,
    Notequal = gl::NOTEQUAL,
};

enum class StencilOpType : gl::Enum {
    Decr = gl::DECR,
    DecrWrap = gl::DECR_WRAP,
    Incr = gl::INCR,
    IncrWrap = gl::INCR_WRAP,
    Invert = gl::INVERT,
    Keep = gl::KEEP,
    Replace = gl::REPLACE,
    Zero = gl::ZERO,
};

enum class StringName : gl::Enum {
    Extensions = gl::EXTENSIONS,
    Renderer = gl::RENDERER,
    ShadingLanguageVersion = gl::SHADING_LANGUAGE_VERSION,
    Vendor = gl::VENDOR,
    Version = gl::VERSION,
};

enum class SubroutineParameterName : gl::Enum {
    CompatibleSubroutines = gl::COMPATIBLE_SUBROUTINES,
    NumCompatibleSubroutines = gl::NUM_COMPATIBLE_SUBROUTINES,
    UniformNameLength = gl::UNIFORM_NAME_LENGTH,
    UniformSize = gl::UNIFORM_SIZE,
};

enum class SyncBehaviorFlags : gl::Enum {
    None = gl::NONE,
};

enum class SyncCondition : gl::Enum {
    SyncGpuCommandsComplete = gl::SYNC_GPU_COMMANDS_COMPLETE,
};

enum class SyncObjectMask : gl::Enum {
    SyncFlushCommandsBit = gl::SYNC_FLUSH_COMMANDS_BIT,
};

enum class SyncParameterName : gl::Enum {
    ObjectType = gl::OBJECT_TYPE,
    SyncCondition = gl::SYNC_CONDITION,
    SyncFlags = gl::SYNC_FLAGS,
    SyncStatus = gl::SYNC_STATUS,
};

enum class SyncStatus : gl::Enum {
    AlreadySignaled = gl::ALREADY_SIGNALED,
    ConditionSatisfied = gl::CONDITION_SATISFIED,
    TimeoutExpired = gl::TIMEOUT_EXPIRED,
    WaitFailed = gl::WAIT_FAILED,
};

enum class TextureParameterName : gl::Enum {
    DepthStencilTextureMode = gl::DEPTH_STENCIL_TEXTURE_MODE,
    TextureAlphaSize = gl::TEXTURE_ALPHA_SIZE,
    TextureBaseLevel = gl::TEXTURE_BASE_LEVEL,
    TextureBlueSize = gl::TEXTURE_BLUE_SIZE,
    TextureBorderColor = gl::TEXTURE_BORDER_COLOR,
    TextureCompareFunc = gl::TEXTURE_COMPARE_FUNC,
    TextureCompareMode = gl::TEXTURE_COMPARE_MODE,
    TextureGreenSize = gl::TEXTURE_GREEN_SIZE,
    TextureHeight = gl::TEXTURE_HEIGHT,
    TextureInternalFormat = gl::TEXTURE_INTERNAL_FORMAT,
    TextureLodBias = gl::TEXTURE_LOD_BIAS,
    TextureMagFilter = gl::TEXTURE_MAG_FILTER,
    TextureMaxAnisotropy = gl::TEXTURE_MAX_ANISOTROPY,
    TextureMaxLevel = gl::TEXTURE_MAX_LEVEL,
    TextureMaxLod = gl::TEXTURE_MAX_LOD,
    TextureMinFilter = gl::TEXTURE_MIN_FILTER,
    TextureMinLod = gl::TEXTURE_MIN_LOD,
    TextureRedSize = gl::TEXTURE_RED_SIZE,
    TextureSwizzleA = gl::TEXTURE_SWIZZLE_A,
    TextureSwizzleB = gl::TEXTURE_SWIZZLE_B,
    TextureSwizzleG = gl::TEXTURE_SWIZZLE_G,
    TextureSwizzleR = gl::TEXTURE_SWIZZLE_R,
    TextureSwizzleRgba = gl::TEXTURE_SWIZZLE_RGBA,
    TextureWidth = gl::TEXTURE_WIDTH,
    TextureWrapR = gl::TEXTURE_WRAP_R,
    TextureWrapS = gl::TEXTURE_WRAP_S,
    TextureWrapT = gl::TEXTURE_WRAP_T,
};

enum class TextureTarget : gl::Enum {
    ProxyTexture1d = gl::PROXY_TEXTURE_1D,
    ProxyTexture1dArray = gl::PROXY_TEXTURE_1D_ARRAY,
    ProxyTexture2d = gl::PROXY_TEXTURE_2D,
    ProxyTexture2dArray = gl::PROXY_TEXTURE_2D_ARRAY,
    ProxyTexture2dMultisample = gl::PROXY_TEXTURE_2D_MULTISAMPLE,
    ProxyTexture2dMultisampleArray = gl::PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY,
    ProxyTexture3d = gl::PROXY_TEXTURE_3D,
    ProxyTextureCubeMap = gl::PROXY_TEXTURE_CUBE_MAP,
    ProxyTextureCubeMapArray = gl::PROXY_TEXTURE_CUBE_MAP_ARRAY,
    ProxyTextureRectangle = gl::PROXY_TEXTURE_RECTANGLE,
    Renderbuffer = gl::RENDERBUFFER,
    Texture1d = gl::TEXTURE_1D,
    Texture1dArray = gl::TEXTURE_1D_ARRAY,
    Texture2d = gl::TEXTURE_2D,
    Texture2dArray = gl::TEXTURE_2D_ARRAY,
    Texture2dMultisample = gl::TEXTURE_2D_MULTISAMPLE,
    Texture2dMultisampleArray = gl::TEXTURE_2D_MULTISAMPLE_ARRAY,
    Texture3d = gl::TEXTURE_3D,
    TextureBuffer = gl::TEXTURE_BUFFER,
    TextureCubeMap = gl::TEXTURE_CUBE_MAP,
    TextureCubeMapArray = gl::TEXTURE_CUBE_MAP_ARRAY,
    TextureCubeMapNegativeX = gl::TEXTURE_CUBE_MAP_NEGATIVE_X,
    TextureCubeMapNegativeY = gl::TEXTURE_CUBE_MAP_NEGATIVE_Y,
    TextureCubeMapNegativeZ = gl::TEXTURE_CUBE_MAP_NEGATIVE_Z,
    TextureCubeMapPositiveX = gl::TEXTURE_CUBE_MAP_POSITIVE_X,
    TextureCubeMapPositiveY = gl::TEXTURE_CUBE_MAP_POSITIVE_Y,
    TextureCubeMapPositiveZ = gl::TEXTURE_CUBE_MAP_POSITIVE_Z,
    TextureRectangle = gl::TEXTURE_RECTANGLE,
};

enum class TextureUnit : gl::Enum {
    Texture0 = gl::TEXTURE0,
    Texture1 = gl::TEXTURE1,
    Texture10 = gl::TEXTURE10,
    Texture11 = gl::TEXTURE11,
    Texture12 = gl::TEXTURE12,
    Texture13 = gl::TEXTURE13,
    Texture14 = gl::TEXTURE14,
    Texture15 = gl::TEXTURE15,
    Texture16 = gl::TEXTURE16,
    Texture17 = gl::TEXTURE17,
    Texture18 = gl::TEXTURE18,
    Texture19 = gl::TEXTURE19,
    Texture2 = gl::TEXTURE2,
    Texture20 = gl::TEXTURE20,
    Texture21 = gl::TEXTURE21,
    Texture22 = gl::TEXTURE22,
    Texture23 = gl::TEXTURE23,
    Texture24 = gl::TEXTURE24,
    Texture25 = gl::TEXTURE25,
    Texture26 = gl::TEXTURE26,
    Texture27 = gl::TEXTURE27,
    Texture28 = gl::TEXTURE28,
    Texture29 = gl::TEXTURE29,
    Texture3 = gl::TEXTURE3,
    Texture30 = gl::TEXTURE30,
    Texture31 = gl::TEXTURE31,
    Texture4 = gl::TEXTURE4,
    Texture5 = gl::TEXTURE5,
    Texture6 = gl::TEXTURE6,
    Texture7 = gl::TEXTURE7,
    Texture8 = gl::TEXTURE8,
    Texture9 = gl::TEXTURE9,
};

enum class TransformFeedbackBufferMode : gl::Enum {
    InterleavedAttribs = gl::INTERLEAVED_ATTRIBS,
    SeparateAttribs = gl::SEPARATE_ATTRIBS,
};

enum class TransformFeedbackPName : gl::Enum {
    TransformFeedbackActive = gl::TRANSFORM_FEEDBACK_ACTIVE,
    TransformFeedbackBufferBinding = gl::TRANSFORM_FEEDBACK_BUFFER_BINDING,
    TransformFeedbackBufferSize = gl::TRANSFORM_FEEDBACK_BUFFER_SIZE,
    TransformFeedbackBufferStart = gl::TRANSFORM_FEEDBACK_BUFFER_START,
    TransformFeedbackPaused = gl::TRANSFORM_FEEDBACK_PAUSED,
};

enum class TriangleFace : gl::Enum {
    Back = gl::BACK,
    Front = gl::FRONT,
    FrontAndBack = gl::FRONT_AND_BACK,
};

enum class UniformBlockPName : gl::Enum {
    UniformBlockActiveUniforms = gl::UNIFORM_BLOCK_ACTIVE_UNIFORMS,
    UniformBlockActiveUniformIndices = gl::UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES,
    UniformBlockBinding = gl::UNIFORM_BLOCK_BINDING,
    UniformBlockDataSize = gl::UNIFORM_BLOCK_DATA_SIZE,
    UniformBlockNameLength = gl::UNIFORM_BLOCK_NAME_LENGTH,
    UniformBlockReferencedByComputeShader = gl::UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER,
    UniformBlockReferencedByFragmentShader = gl::UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER,
    UniformBlockReferencedByGeometryShader = gl::UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER,
    UniformBlockReferencedByTessControlShader = gl::UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER,
    UniformBlockReferencedByTessEvaluationShader = gl::UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER,
    UniformBlockReferencedByVertexShader = gl::UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER,
};

enum class UniformPName : gl::Enum {
    UniformArrayStride = gl::UNIFORM_ARRAY_STRIDE,
    UniformAtomicCounterBufferIndex = gl::UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX,
    UniformBlockIndex = gl::UNIFORM_BLOCK_INDEX,
    UniformIsRowMajor = gl::UNIFORM_IS_ROW_MAJOR,
    UniformMatrixStride = gl::UNIFORM_MATRIX_STRIDE,
    UniformNameLength = gl::UNIFORM_NAME_LENGTH,
    UniformOffset = gl::UNIFORM_OFFSET,
    UniformSize = gl::UNIFORM_SIZE,
    UniformType = gl::UNIFORM_TYPE,
};

enum class UniformType : gl::Enum {
    Bool = gl::BOOL,
    BoolVec2 = gl::BOOL_VEC2,
    BoolVec3 = gl::BOOL_VEC3,
    BoolVec4 = gl::BOOL_VEC4,
    Double = gl::DOUBLE,
    DoubleMat2 = gl::DOUBLE_MAT2,
    DoubleMat2x3 = gl::DOUBLE_MAT2x3,
    DoubleMat2x4 = gl::DOUBLE_MAT2x4,
    DoubleMat3 = gl::DOUBLE_MAT3,
    DoubleMat3x2 = gl::DOUBLE_MAT3x2,
    DoubleMat3x4 = gl::DOUBLE_MAT3x4,
    DoubleMat4 = gl::DOUBLE_MAT4,
    DoubleMat4x2 = gl::DOUBLE_MAT4x2,
    DoubleMat4x3 = gl::DOUBLE_MAT4x3,
    DoubleVec2 = gl::DOUBLE_VEC2,
    DoubleVec3 = gl::DOUBLE_VEC3,
    DoubleVec4 = gl::DOUBLE_VEC4,
    Float = gl::FLOAT,
    FloatMat2 = gl::FLOAT_MAT2,
    FloatMat2x3 = gl::FLOAT_MAT2x3,
    FloatMat2x4 = gl::FLOAT_MAT2x4,
    FloatMat3 = gl::FLOAT_MAT3,
    FloatMat3x2 = gl::FLOAT_MAT3x2,
    FloatMat3x4 = gl::FLOAT_MAT3x4,
    FloatMat4 = gl::FLOAT_MAT4,
    FloatMat4x2 = gl::FLOAT_MAT4x2,
    FloatMat4x3 = gl::FLOAT_MAT4x3,
    FloatVec2 = gl::FLOAT_VEC2,
    FloatVec3 = gl::FLOAT_VEC3,
    FloatVec4 = gl::FLOAT_VEC4,
    Int = gl::INT,
    IntSampler1d = gl::INT_SAMPLER_1D,
    IntSampler1dArray = gl::INT_SAMPLER_1D_ARRAY,
    IntSampler2d = gl::INT_SAMPLER_2D,
    IntSampler2dArray = gl::INT_SAMPLER_2D_ARRAY,
    IntSampler2dMultisample = gl::INT_SAMPLER_2D_MULTISAMPLE,
    IntSampler2dMultisampleArray = gl::INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
    IntSampler2dRect = gl::INT_SAMPLER_2D_RECT,
    IntSampler3d = gl::INT_SAMPLER_3D,
    IntSamplerBuffer = gl::INT_SAMPLER_BUFFER,
    IntSamplerCube = gl::INT_SAMPLER_CUBE,
    IntSamplerCubeMapArray = gl::INT_SAMPLER_CUBE_MAP_ARRAY,
    IntVec2 = gl::INT_VEC2,
    IntVec3 = gl::INT_VEC3,
    IntVec4 = gl::INT_VEC4,
    Sampler1d = gl::SAMPLER_1D,
    Sampler1dArray = gl::SAMPLER_1D_ARRAY,
    Sampler1dArrayShadow = gl::SAMPLER_1D_ARRAY_SHADOW,
    Sampler1dShadow = gl::SAMPLER_1D_SHADOW,
    Sampler2d = gl::SAMPLER_2D,
    Sampler2dArray = gl::SAMPLER_2D_ARRAY,
    Sampler2dArrayShadow = gl::SAMPLER_2D_ARRAY_SHADOW,
    Sampler2dMultisample = gl::SAMPLER_2D_MULTISAMPLE,
    Sampler2dMultisampleArray = gl::SAMPLER_2D_MULTISAMPLE_ARRAY,
    Sampler2dRect = gl::SAMPLER_2D_RECT,
    Sampler2dRectShadow = gl::SAMPLER_2D_RECT_SHADOW,
    Sampler2dShadow = gl::SAMPLER_2D_SHADOW,
    Sampler3d = gl::SAMPLER_3D,
    SamplerBuffer = gl::SAMPLER_BUFFER,
    SamplerCube = gl::SAMPLER_CUBE,
    SamplerCubeMapArray = gl::SAMPLER_CUBE_MAP_ARRAY,
    SamplerCubeMapArrayShadow = gl::SAMPLER_CUBE_MAP_ARRAY_SHADOW,
    SamplerCubeShadow = gl::SAMPLER_CUBE_SHADOW,
    UnsignedInt = gl::UNSIGNED_INT,
    UnsignedIntSampler1d = gl::UNSIGNED_INT_SAMPLER_1D,
    UnsignedIntSampler1dArray = gl::UNSIGNED_INT_SAMPLER_1D_ARRAY,
    UnsignedIntSampler2d = gl::UNSIGNED_INT_SAMPLER_2D,
    UnsignedIntSampler2dArray = gl::UNSIGNED_INT_SAMPLER_2D_ARRAY,
    UnsignedIntSampler2dMultisample = gl::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE,
    UnsignedIntSampler2dMultisampleArray = gl::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
    UnsignedIntSampler2dRect = gl::UNSIGNED_INT_SAMPLER_2D_RECT,
    UnsignedIntSampler3d = gl::UNSIGNED_INT_SAMPLER_3D,
    UnsignedIntSamplerBuffer = gl::UNSIGNED_INT_SAMPLER_BUFFER,
    UnsignedIntSamplerCube = gl::UNSIGNED_INT_SAMPLER_CUBE,
    UnsignedIntSamplerCubeMapArray = gl::UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY,
    UnsignedIntVec2 = gl::UNSIGNED_INT_VEC2,
    UnsignedIntVec3 = gl::UNSIGNED_INT_VEC3,
    UnsignedIntVec4 = gl::UNSIGNED_INT_VEC4,
};

enum class UseProgramStageMask : gl::Enum {
    AllShaderBits = gl::ALL_SHADER_BITS,
    ComputeShaderBit = gl::COMPUTE_SHADER_BIT,
    FragmentShaderBit = gl::FRAGMENT_SHADER_BIT,
    GeometryShaderBit = gl::GEOMETRY_SHADER_BIT,
    TessControlShaderBit = gl::TESS_CONTROL_SHADER_BIT,
    TessEvaluationShaderBit = gl::TESS_EVALUATION_SHADER_BIT,
    VertexShaderBit = gl::VERTEX_SHADER_BIT,
};

enum class VertexArrayPName : gl::Enum {
    VertexAttribArrayDivisor = gl::VERTEX_ATTRIB_ARRAY_DIVISOR,
    VertexAttribArrayEnabled = gl::VERTEX_ATTRIB_ARRAY_ENABLED,
    VertexAttribArrayInteger = gl::VERTEX_ATTRIB_ARRAY_INTEGER,
    VertexAttribArrayLong = gl::VERTEX_ATTRIB_ARRAY_LONG,
    VertexAttribArrayNormalized = gl::VERTEX_ATTRIB_ARRAY_NORMALIZED,
    VertexAttribArraySize = gl::VERTEX_ATTRIB_ARRAY_SIZE,
    VertexAttribArrayStride = gl::VERTEX_ATTRIB_ARRAY_STRIDE,
    VertexAttribArrayType = gl::VERTEX_ATTRIB_ARRAY_TYPE,
    VertexAttribRelativeOffset = gl::VERTEX_ATTRIB_RELATIVE_OFFSET,
};

enum class VertexAttribEnum : gl::Enum {
    CurrentVertexAttrib = gl::CURRENT_VERTEX_ATTRIB,
    VertexAttribArrayBufferBinding = gl::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,
    VertexAttribArrayDivisor = gl::VERTEX_ATTRIB_ARRAY_DIVISOR,
    VertexAttribArrayEnabled = gl::VERTEX_ATTRIB_ARRAY_ENABLED,
    VertexAttribArrayInteger = gl::VERTEX_ATTRIB_ARRAY_INTEGER,
    VertexAttribArrayNormalized = gl::VERTEX_ATTRIB_ARRAY_NORMALIZED,
    VertexAttribArraySize = gl::VERTEX_ATTRIB_ARRAY_SIZE,
    VertexAttribArrayStride = gl::VERTEX_ATTRIB_ARRAY_STRIDE,
    VertexAttribArrayType = gl::VERTEX_ATTRIB_ARRAY_TYPE,
};

enum class VertexAttribIType : gl::Enum {
    Byte = gl::BYTE,
    Int = gl::INT,
    Short = gl::SHORT,
    UnsignedByte = gl::UNSIGNED_BYTE,
    UnsignedInt = gl::UNSIGNED_INT,
    UnsignedShort = gl::UNSIGNED_SHORT,
};

enum class VertexAttribLType : gl::Enum {
    Double = gl::DOUBLE,
};

enum class VertexAttribPointerPropertyARB : gl::Enum {
    VertexAttribArrayPointer = gl::VERTEX_ATTRIB_ARRAY_POINTER,
};

enum class VertexAttribPointerType : gl::Enum {
    Byte = gl::BYTE,
    Double = gl::DOUBLE,
    Fixed = gl::FIXED,
    Float = gl::FLOAT,
    HalfFloat = gl::HALF_FLOAT,
    Int = gl::INT,
    Int2101010Rev = gl::INT_2_10_10_10_REV,
    Short = gl::SHORT,
    UnsignedByte = gl::UNSIGNED_BYTE,
    UnsignedInt = gl::UNSIGNED_INT,
    UnsignedInt10f11f11fRev = gl::UNSIGNED_INT_10F_11F_11F_REV,
    UnsignedInt2101010Rev = gl::UNSIGNED_INT_2_10_10_10_REV,
    UnsignedShort = gl::UNSIGNED_SHORT,
};

enum class VertexAttribPropertyARB : gl::Enum {
    CurrentVertexAttrib = gl::CURRENT_VERTEX_ATTRIB,
    VertexAttribArrayBufferBinding = gl::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,
    VertexAttribArrayDivisor = gl::VERTEX_ATTRIB_ARRAY_DIVISOR,
    VertexAttribArrayEnabled = gl::VERTEX_ATTRIB_ARRAY_ENABLED,
    VertexAttribArrayInteger = gl::VERTEX_ATTRIB_ARRAY_INTEGER,
    VertexAttribArrayLong = gl::VERTEX_ATTRIB_ARRAY_LONG,
    VertexAttribArrayNormalized = gl::VERTEX_ATTRIB_ARRAY_NORMALIZED,
    VertexAttribArraySize = gl::VERTEX_ATTRIB_ARRAY_SIZE,
    VertexAttribArrayStride = gl::VERTEX_ATTRIB_ARRAY_STRIDE,
    VertexAttribArrayType = gl::VERTEX_ATTRIB_ARRAY_TYPE,
    VertexAttribBinding = gl::VERTEX_ATTRIB_BINDING,
    VertexAttribRelativeOffset = gl::VERTEX_ATTRIB_RELATIVE_OFFSET,
};

enum class VertexAttribType : gl::Enum {
    Byte = gl::BYTE,
    Double = gl::DOUBLE,
    Fixed = gl::FIXED,
    Float = gl::FLOAT,
    HalfFloat = gl::HALF_FLOAT,
    Int = gl::INT,
    Int2101010Rev = gl::INT_2_10_10_10_REV,
    Short = gl::SHORT,
    UnsignedByte = gl::UNSIGNED_BYTE,
    UnsignedInt = gl::UNSIGNED_INT,
    UnsignedInt10f11f11fRev = gl::UNSIGNED_INT_10F_11F_11F_REV,
    UnsignedInt2101010Rev = gl::UNSIGNED_INT_2_10_10_10_REV,
    UnsignedShort = gl::UNSIGNED_SHORT,
};

enum class VertexProvokingMode : gl::Enum {
    FirstVertexConvention = gl::FIRST_VERTEX_CONVENTION,
    LastVertexConvention = gl::LAST_VERTEX_CONVENTION,
};

} // namespace gm


// ============ Special Constants ============
export namespace gm {

constexpr gl::Enum FALSE = gl::FALSE;
constexpr gl::Enum INVALID_INDEX = gl::INVALID_INDEX;
constexpr gl::Enum NONE = gl::NONE;
constexpr gl::Enum NO_ERROR = gl::NO_ERROR;
constexpr gl::Enum ONE = gl::ONE;
constexpr gl::Enum TIMEOUT_IGNORED = gl::TIMEOUT_IGNORED;
constexpr gl::Enum TRUE = gl::TRUE;
constexpr gl::Enum ZERO = gl::ZERO;

} // namespace gm


// ============ Functions ============
export namespace gm {

// Re-exported (no type transformation needed)
using gl::BlendColor;
using gl::ClearColor;
using gl::ClearDepth;
using gl::ClearDepthf;
using gl::ClearStencil;
using gl::ColorMask;
using gl::ColorMaski;
using gl::DebugMessageCallback;
using gl::DepthMask;
using gl::DepthRange;
using gl::DepthRangeArrayv;
using gl::DepthRangeIndexed;
using gl::DepthRangef;
using gl::DisableVertexAttribArray;
using gl::DispatchCompute;
using gl::DispatchComputeIndirect;
using gl::EnableVertexAttribArray;
using gl::EndConditionalRender;
using gl::EndTransformFeedback;
using gl::Finish;
using gl::Flush;
using gl::GetObjectPtrLabel;
using gl::LineWidth;
using gl::MinSampleShading;
using gl::ObjectPtrLabel;
using gl::PauseTransformFeedback;
using gl::PointSize;
using gl::PolygonOffset;
using gl::PolygonOffsetClamp;
using gl::PopDebugGroup;
using gl::PrimitiveRestartIndex;
using gl::ReleaseShaderCompiler;
using gl::ResumeTransformFeedback;
using gl::SampleCoverage;
using gl::SampleMaski;
using gl::Scissor;
using gl::ScissorArrayv;
using gl::ScissorIndexed;
using gl::ScissorIndexedv;
using gl::StencilMask;
using gl::TextureBarrier;
using gl::Uniform1d;
using gl::Uniform1dv;
using gl::Uniform1f;
using gl::Uniform1fv;
using gl::Uniform1i;
using gl::Uniform1iv;
using gl::Uniform1ui;
using gl::Uniform1uiv;
using gl::Uniform2d;
using gl::Uniform2dv;
using gl::Uniform2f;
using gl::Uniform2fv;
using gl::Uniform2i;
using gl::Uniform2iv;
using gl::Uniform2ui;
using gl::Uniform2uiv;
using gl::Uniform3d;
using gl::Uniform3dv;
using gl::Uniform3f;
using gl::Uniform3fv;
using gl::Uniform3i;
using gl::Uniform3iv;
using gl::Uniform3ui;
using gl::Uniform3uiv;
using gl::Uniform4d;
using gl::Uniform4dv;
using gl::Uniform4f;
using gl::Uniform4fv;
using gl::Uniform4i;
using gl::Uniform4iv;
using gl::Uniform4ui;
using gl::Uniform4uiv;
using gl::UniformMatrix2dv;
using gl::UniformMatrix2fv;
using gl::UniformMatrix2x3dv;
using gl::UniformMatrix2x3fv;
using gl::UniformMatrix2x4dv;
using gl::UniformMatrix2x4fv;
using gl::UniformMatrix3dv;
using gl::UniformMatrix3fv;
using gl::UniformMatrix3x2dv;
using gl::UniformMatrix3x2fv;
using gl::UniformMatrix3x4dv;
using gl::UniformMatrix3x4fv;
using gl::UniformMatrix4dv;
using gl::UniformMatrix4fv;
using gl::UniformMatrix4x2dv;
using gl::UniformMatrix4x2fv;
using gl::UniformMatrix4x3dv;
using gl::UniformMatrix4x3fv;
using gl::VertexAttrib1d;
using gl::VertexAttrib1dv;
using gl::VertexAttrib1f;
using gl::VertexAttrib1fv;
using gl::VertexAttrib1s;
using gl::VertexAttrib1sv;
using gl::VertexAttrib2d;
using gl::VertexAttrib2dv;
using gl::VertexAttrib2f;
using gl::VertexAttrib2fv;
using gl::VertexAttrib2s;
using gl::VertexAttrib2sv;
using gl::VertexAttrib3d;
using gl::VertexAttrib3dv;
using gl::VertexAttrib3f;
using gl::VertexAttrib3fv;
using gl::VertexAttrib3s;
using gl::VertexAttrib3sv;
using gl::VertexAttrib4Nbv;
using gl::VertexAttrib4Niv;
using gl::VertexAttrib4Nsv;
using gl::VertexAttrib4Nub;
using gl::VertexAttrib4Nubv;
using gl::VertexAttrib4Nuiv;
using gl::VertexAttrib4Nusv;
using gl::VertexAttrib4bv;
using gl::VertexAttrib4d;
using gl::VertexAttrib4dv;
using gl::VertexAttrib4f;
using gl::VertexAttrib4fv;
using gl::VertexAttrib4iv;
using gl::VertexAttrib4s;
using gl::VertexAttrib4sv;
using gl::VertexAttrib4ubv;
using gl::VertexAttrib4uiv;
using gl::VertexAttrib4usv;
using gl::VertexAttribBinding;
using gl::VertexAttribDivisor;
using gl::VertexAttribI1i;
using gl::VertexAttribI1iv;
using gl::VertexAttribI1ui;
using gl::VertexAttribI1uiv;
using gl::VertexAttribI2i;
using gl::VertexAttribI2iv;
using gl::VertexAttribI2ui;
using gl::VertexAttribI2uiv;
using gl::VertexAttribI3i;
using gl::VertexAttribI3iv;
using gl::VertexAttribI3ui;
using gl::VertexAttribI3uiv;
using gl::VertexAttribI4bv;
using gl::VertexAttribI4i;
using gl::VertexAttribI4iv;
using gl::VertexAttribI4sv;
using gl::VertexAttribI4ubv;
using gl::VertexAttribI4ui;
using gl::VertexAttribI4uiv;
using gl::VertexAttribI4usv;
using gl::VertexAttribL1d;
using gl::VertexAttribL1dv;
using gl::VertexAttribL2d;
using gl::VertexAttribL2dv;
using gl::VertexAttribL3d;
using gl::VertexAttribL3dv;
using gl::VertexAttribL4d;
using gl::VertexAttribL4dv;
using gl::VertexBindingDivisor;
using gl::Viewport;
using gl::ViewportArrayv;
using gl::ViewportIndexedf;
using gl::ViewportIndexedfv;

// Wrapped functions with type safety
void ActiveShaderProgram(ProgramPipeline pipeline, Program program) { gl::ActiveShaderProgram(pipeline.handle, program.handle); }

void ActiveTexture(TextureUnit texture) { gl::ActiveTexture(static_cast<gl::Enum>(texture)); }

void AttachShader(Program program, Shader shader) { gl::AttachShader(program.handle, shader.handle); }

void BeginConditionalRender(Uint id, ConditionalRenderMode mode) { gl::BeginConditionalRender(id, static_cast<gl::Enum>(mode)); }

void BeginQuery(QueryTarget target, Query id) { gl::BeginQuery(static_cast<gl::Enum>(target), id.handle); }

void BeginQueryIndexed(QueryTarget target, Uint index, Query id) { gl::BeginQueryIndexed(static_cast<gl::Enum>(target), index, id.handle); }

void BeginTransformFeedback(PrimitiveType primitiveMode) { gl::BeginTransformFeedback(static_cast<gl::Enum>(primitiveMode)); }

void BindAttribLocation(Program program, Uint index, const Char* name) { gl::BindAttribLocation(program.handle, index, name); }

void BindBuffer(BufferTargetARB target, Buffer buffer) { gl::BindBuffer(static_cast<gl::Enum>(target), buffer.handle); }

void BindBufferBase(BufferTargetARB target, Uint index, Buffer buffer) { gl::BindBufferBase(static_cast<gl::Enum>(target), index, buffer.handle); }

void BindBufferRange(BufferTargetARB target, Uint index, Buffer buffer, Intptr offset, Sizeiptr size) { gl::BindBufferRange(static_cast<gl::Enum>(target), index, buffer.handle, offset, size); }

void BindBuffersBase(BufferTargetARB target, Uint first, Sizei count, const Buffer* buffers) { gl::BindBuffersBase(static_cast<gl::Enum>(target), first, count, reinterpret_cast<const gl::Uint*>(buffers)); }

void BindBuffersRange(BufferTargetARB target, Uint first, Sizei count, const Buffer* buffers, const Intptr* offsets, const Sizeiptr* sizes) { gl::BindBuffersRange(static_cast<gl::Enum>(target), first, count, reinterpret_cast<const gl::Uint*>(buffers), offsets, sizes); }

void BindFragDataLocation(Program program, Uint color, const Char* name) { gl::BindFragDataLocation(program.handle, color, name); }

void BindFragDataLocationIndexed(Program program, Uint colorNumber, Uint index, const Char* name) { gl::BindFragDataLocationIndexed(program.handle, colorNumber, index, name); }

void BindFramebuffer(FramebufferTarget target, Framebuffer framebuffer) { gl::BindFramebuffer(static_cast<gl::Enum>(target), framebuffer.handle); }

void BindImageTexture(Uint unit, Texture texture, Int level, Boolean layered, Int layer, BufferAccessARB access, InternalFormat format) { gl::BindImageTexture(unit, texture.handle, level, layered, layer, static_cast<gl::Enum>(access), static_cast<gl::Enum>(format)); }

void BindImageTextures(Uint first, Sizei count, const Texture* textures) { gl::BindImageTextures(first, count, reinterpret_cast<const gl::Uint*>(textures)); }

void BindProgramPipeline(ProgramPipeline pipeline) { gl::BindProgramPipeline(pipeline.handle); }

void BindRenderbuffer(RenderbufferTarget target, Renderbuffer renderbuffer) { gl::BindRenderbuffer(static_cast<gl::Enum>(target), renderbuffer.handle); }

void BindSampler(Uint unit, Sampler sampler) { gl::BindSampler(unit, sampler.handle); }

void BindSamplers(Uint first, Sizei count, const Sampler* samplers) { gl::BindSamplers(first, count, reinterpret_cast<const gl::Uint*>(samplers)); }

void BindTexture(TextureTarget target, Texture texture) { gl::BindTexture(static_cast<gl::Enum>(target), texture.handle); }

void BindTextureUnit(Uint unit, Texture texture) { gl::BindTextureUnit(unit, texture.handle); }

void BindTextures(Uint first, Sizei count, const Texture* textures) { gl::BindTextures(first, count, reinterpret_cast<const gl::Uint*>(textures)); }

void BindTransformFeedback(BindTransformFeedbackTarget target, TransformFeedback id) { gl::BindTransformFeedback(static_cast<gl::Enum>(target), id.handle); }

void BindVertexArray(VertexArray array) { gl::BindVertexArray(array.handle); }

void BindVertexBuffer(Uint bindingindex, Buffer buffer, Intptr offset, Sizei stride) { gl::BindVertexBuffer(bindingindex, buffer.handle, offset, stride); }

void BindVertexBuffers(Uint first, Sizei count, const Buffer* buffers, const Intptr* offsets, const Sizei* strides) { gl::BindVertexBuffers(first, count, reinterpret_cast<const gl::Uint*>(buffers), offsets, strides); }

void BlendEquation(BlendEquationModeEXT mode) { gl::BlendEquation(static_cast<gl::Enum>(mode)); }

void BlendEquationSeparate(BlendEquationModeEXT modeRGB, BlendEquationModeEXT modeAlpha) { gl::BlendEquationSeparate(static_cast<gl::Enum>(modeRGB), static_cast<gl::Enum>(modeAlpha)); }

void BlendEquationSeparatei(Uint buf, BlendEquationModeEXT modeRGB, BlendEquationModeEXT modeAlpha) { gl::BlendEquationSeparatei(buf, static_cast<gl::Enum>(modeRGB), static_cast<gl::Enum>(modeAlpha)); }

void BlendEquationi(Uint buf, BlendEquationModeEXT mode) { gl::BlendEquationi(buf, static_cast<gl::Enum>(mode)); }

void BlendFunc(BlendingFactor sfactor, BlendingFactor dfactor) { gl::BlendFunc(static_cast<gl::Enum>(sfactor), static_cast<gl::Enum>(dfactor)); }

void BlendFuncSeparate(BlendingFactor sfactorRGB, BlendingFactor dfactorRGB, BlendingFactor sfactorAlpha, BlendingFactor dfactorAlpha) { gl::BlendFuncSeparate(static_cast<gl::Enum>(sfactorRGB), static_cast<gl::Enum>(dfactorRGB), static_cast<gl::Enum>(sfactorAlpha), static_cast<gl::Enum>(dfactorAlpha)); }

void BlendFuncSeparatei(Uint buf, BlendingFactor srcRGB, BlendingFactor dstRGB, BlendingFactor srcAlpha, BlendingFactor dstAlpha) { gl::BlendFuncSeparatei(buf, static_cast<gl::Enum>(srcRGB), static_cast<gl::Enum>(dstRGB), static_cast<gl::Enum>(srcAlpha), static_cast<gl::Enum>(dstAlpha)); }

void BlendFunci(Uint buf, BlendingFactor src, BlendingFactor dst) { gl::BlendFunci(buf, static_cast<gl::Enum>(src), static_cast<gl::Enum>(dst)); }

void BlitFramebuffer(Int srcX0, Int srcY0, Int srcX1, Int srcY1, Int dstX0, Int dstY0, Int dstX1, Int dstY1, ClearBufferMask mask, BlitFramebufferFilter filter) { gl::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, static_cast<gl::Enum>(mask), static_cast<gl::Enum>(filter)); }

void BlitNamedFramebuffer(Framebuffer readFramebuffer, Framebuffer drawFramebuffer, Int srcX0, Int srcY0, Int srcX1, Int srcY1, Int dstX0, Int dstY0, Int dstX1, Int dstY1, ClearBufferMask mask, BlitFramebufferFilter filter) { gl::BlitNamedFramebuffer(readFramebuffer.handle, drawFramebuffer.handle, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, static_cast<gl::Enum>(mask), static_cast<gl::Enum>(filter)); }

void BufferData(BufferTargetARB target, Sizeiptr size, const void* data, BufferUsageARB usage) { gl::BufferData(static_cast<gl::Enum>(target), size, data, static_cast<gl::Enum>(usage)); }

void BufferStorage(BufferStorageTarget target, Sizeiptr size, const void* data, BufferStorageMask flags) { gl::BufferStorage(static_cast<gl::Enum>(target), size, data, static_cast<gl::Enum>(flags)); }

void BufferSubData(BufferTargetARB target, Intptr offset, Sizeiptr size, const void* data) { gl::BufferSubData(static_cast<gl::Enum>(target), offset, size, data); }

FramebufferStatus CheckFramebufferStatus(FramebufferTarget target) { return static_cast<FramebufferStatus>(gl::CheckFramebufferStatus(static_cast<gl::Enum>(target))); }

FramebufferStatus CheckNamedFramebufferStatus(Framebuffer framebuffer, FramebufferTarget target) { return static_cast<FramebufferStatus>(gl::CheckNamedFramebufferStatus(framebuffer.handle, static_cast<gl::Enum>(target))); }

void ClampColor(ClampColorTargetARB target, ClampColorModeARB clamp) { gl::ClampColor(static_cast<gl::Enum>(target), static_cast<gl::Enum>(clamp)); }

void Clear(ClearBufferMask mask) { gl::Clear(static_cast<gl::Enum>(mask)); }

void ClearBufferData(BufferStorageTarget target, SizedInternalFormat internalformat, PixelFormat format, PixelType type, const void* data) { gl::ClearBufferData(static_cast<gl::Enum>(target), static_cast<gl::Enum>(internalformat), static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), data); }

void ClearBufferSubData(BufferTargetARB target, SizedInternalFormat internalformat, Intptr offset, Sizeiptr size, PixelFormat format, PixelType type, const void* data) { gl::ClearBufferSubData(static_cast<gl::Enum>(target), static_cast<gl::Enum>(internalformat), offset, size, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), data); }

void ClearBufferfi(BufferType buffer, Int drawbuffer, Float depth, Int stencil) { gl::ClearBufferfi(static_cast<gl::Enum>(buffer), drawbuffer, depth, stencil); }

void ClearBufferfv(BufferType buffer, Int drawbuffer, const Float* value) { gl::ClearBufferfv(static_cast<gl::Enum>(buffer), drawbuffer, value); }

void ClearBufferiv(BufferType buffer, Int drawbuffer, const Int* value) { gl::ClearBufferiv(static_cast<gl::Enum>(buffer), drawbuffer, value); }

void ClearBufferuiv(BufferType buffer, Int drawbuffer, const Uint* value) { gl::ClearBufferuiv(static_cast<gl::Enum>(buffer), drawbuffer, value); }

void ClearNamedBufferData(Buffer buffer, SizedInternalFormat internalformat, PixelFormat format, PixelType type, const void* data) { gl::ClearNamedBufferData(buffer.handle, static_cast<gl::Enum>(internalformat), static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), data); }

void ClearNamedBufferSubData(Buffer buffer, SizedInternalFormat internalformat, Intptr offset, Sizeiptr size, PixelFormat format, PixelType type, const void* data) { gl::ClearNamedBufferSubData(buffer.handle, static_cast<gl::Enum>(internalformat), offset, size, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), data); }

void ClearNamedFramebufferfi(Framebuffer framebuffer, BufferType buffer, Int drawbuffer, Float depth, Int stencil) { gl::ClearNamedFramebufferfi(framebuffer.handle, static_cast<gl::Enum>(buffer), drawbuffer, depth, stencil); }

void ClearNamedFramebufferfv(Framebuffer framebuffer, BufferType buffer, Int drawbuffer, const Float* value) { gl::ClearNamedFramebufferfv(framebuffer.handle, static_cast<gl::Enum>(buffer), drawbuffer, value); }

void ClearNamedFramebufferiv(Framebuffer framebuffer, BufferType buffer, Int drawbuffer, const Int* value) { gl::ClearNamedFramebufferiv(framebuffer.handle, static_cast<gl::Enum>(buffer), drawbuffer, value); }

void ClearNamedFramebufferuiv(Framebuffer framebuffer, BufferType buffer, Int drawbuffer, const Uint* value) { gl::ClearNamedFramebufferuiv(framebuffer.handle, static_cast<gl::Enum>(buffer), drawbuffer, value); }

void ClearTexImage(Texture texture, Int level, PixelFormat format, PixelType type, const void* data) { gl::ClearTexImage(texture.handle, level, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), data); }

void ClearTexSubImage(Texture texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, PixelFormat format, PixelType type, const void* data) { gl::ClearTexSubImage(texture.handle, level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), data); }

SyncStatus ClientWaitSync(Sync sync, SyncObjectMask flags, Uint64 timeout) { return static_cast<SyncStatus>(gl::ClientWaitSync(sync.handle, static_cast<gl::Enum>(flags), timeout)); }

void ClipControl(ClipControlOrigin origin, ClipControlDepth depth) { gl::ClipControl(static_cast<gl::Enum>(origin), static_cast<gl::Enum>(depth)); }

void CompileShader(Shader shader) { gl::CompileShader(shader.handle); }

void CompressedTexImage1D(TextureTarget target, Int level, InternalFormat internalformat, Sizei width, Int border, Sizei imageSize, const void* data) { gl::CompressedTexImage1D(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(internalformat), width, border, imageSize, data); }

void CompressedTexImage2D(TextureTarget target, Int level, InternalFormat internalformat, Sizei width, Sizei height, Int border, Sizei imageSize, const void* data) { gl::CompressedTexImage2D(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(internalformat), width, height, border, imageSize, data); }

void CompressedTexImage3D(TextureTarget target, Int level, InternalFormat internalformat, Sizei width, Sizei height, Sizei depth, Int border, Sizei imageSize, const void* data) { gl::CompressedTexImage3D(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(internalformat), width, height, depth, border, imageSize, data); }

void CompressedTexSubImage1D(TextureTarget target, Int level, Int xoffset, Sizei width, InternalFormat format, Sizei imageSize, const void* data) { gl::CompressedTexSubImage1D(static_cast<gl::Enum>(target), level, xoffset, width, static_cast<gl::Enum>(format), imageSize, data); }

void CompressedTexSubImage2D(TextureTarget target, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, InternalFormat format, Sizei imageSize, const void* data) { gl::CompressedTexSubImage2D(static_cast<gl::Enum>(target), level, xoffset, yoffset, width, height, static_cast<gl::Enum>(format), imageSize, data); }

void CompressedTexSubImage3D(TextureTarget target, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, InternalFormat format, Sizei imageSize, const void* data) { gl::CompressedTexSubImage3D(static_cast<gl::Enum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::Enum>(format), imageSize, data); }

void CompressedTextureSubImage1D(Texture texture, Int level, Int xoffset, Sizei width, InternalFormat format, Sizei imageSize, const void* data) { gl::CompressedTextureSubImage1D(texture.handle, level, xoffset, width, static_cast<gl::Enum>(format), imageSize, data); }

void CompressedTextureSubImage2D(Texture texture, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, InternalFormat format, Sizei imageSize, const void* data) { gl::CompressedTextureSubImage2D(texture.handle, level, xoffset, yoffset, width, height, static_cast<gl::Enum>(format), imageSize, data); }

void CompressedTextureSubImage3D(Texture texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, InternalFormat format, Sizei imageSize, const void* data) { gl::CompressedTextureSubImage3D(texture.handle, level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::Enum>(format), imageSize, data); }

void CopyBufferSubData(CopyBufferSubDataTarget readTarget, CopyBufferSubDataTarget writeTarget, Intptr readOffset, Intptr writeOffset, Sizeiptr size) { gl::CopyBufferSubData(static_cast<gl::Enum>(readTarget), static_cast<gl::Enum>(writeTarget), readOffset, writeOffset, size); }

void CopyImageSubData(Uint srcName, CopyImageSubDataTarget srcTarget, Int srcLevel, Int srcX, Int srcY, Int srcZ, Uint dstName, CopyImageSubDataTarget dstTarget, Int dstLevel, Int dstX, Int dstY, Int dstZ, Sizei srcWidth, Sizei srcHeight, Sizei srcDepth) { gl::CopyImageSubData(srcName, static_cast<gl::Enum>(srcTarget), srcLevel, srcX, srcY, srcZ, dstName, static_cast<gl::Enum>(dstTarget), dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth); }

void CopyNamedBufferSubData(Buffer readBuffer, Buffer writeBuffer, Intptr readOffset, Intptr writeOffset, Sizeiptr size) { gl::CopyNamedBufferSubData(readBuffer.handle, writeBuffer.handle, readOffset, writeOffset, size); }

void CopyTexImage1D(TextureTarget target, Int level, InternalFormat internalformat, Int x, Int y, Sizei width, Int border) { gl::CopyTexImage1D(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(internalformat), x, y, width, border); }

void CopyTexImage2D(TextureTarget target, Int level, InternalFormat internalformat, Int x, Int y, Sizei width, Sizei height, Int border) { gl::CopyTexImage2D(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(internalformat), x, y, width, height, border); }

void CopyTexSubImage1D(TextureTarget target, Int level, Int xoffset, Int x, Int y, Sizei width) { gl::CopyTexSubImage1D(static_cast<gl::Enum>(target), level, xoffset, x, y, width); }

void CopyTexSubImage2D(TextureTarget target, Int level, Int xoffset, Int yoffset, Int x, Int y, Sizei width, Sizei height) { gl::CopyTexSubImage2D(static_cast<gl::Enum>(target), level, xoffset, yoffset, x, y, width, height); }

void CopyTexSubImage3D(TextureTarget target, Int level, Int xoffset, Int yoffset, Int zoffset, Int x, Int y, Sizei width, Sizei height) { gl::CopyTexSubImage3D(static_cast<gl::Enum>(target), level, xoffset, yoffset, zoffset, x, y, width, height); }

void CopyTextureSubImage1D(Texture texture, Int level, Int xoffset, Int x, Int y, Sizei width) { gl::CopyTextureSubImage1D(texture.handle, level, xoffset, x, y, width); }

void CopyTextureSubImage2D(Texture texture, Int level, Int xoffset, Int yoffset, Int x, Int y, Sizei width, Sizei height) { gl::CopyTextureSubImage2D(texture.handle, level, xoffset, yoffset, x, y, width, height); }

void CopyTextureSubImage3D(Texture texture, Int level, Int xoffset, Int yoffset, Int zoffset, Int x, Int y, Sizei width, Sizei height) { gl::CopyTextureSubImage3D(texture.handle, level, xoffset, yoffset, zoffset, x, y, width, height); }

void CreateBuffers(Sizei n, Buffer* buffers) { gl::CreateBuffers(n, reinterpret_cast<gl::Uint*>(buffers)); }

void CreateFramebuffers(Sizei n, Framebuffer* framebuffers) { gl::CreateFramebuffers(n, reinterpret_cast<gl::Uint*>(framebuffers)); }

Program CreateProgram() { return Program{ gl::CreateProgram() }; }

void CreateProgramPipelines(Sizei n, ProgramPipeline* pipelines) { gl::CreateProgramPipelines(n, reinterpret_cast<gl::Uint*>(pipelines)); }

void CreateQueries(QueryTarget target, Sizei n, Query* ids) { gl::CreateQueries(static_cast<gl::Enum>(target), n, reinterpret_cast<gl::Uint*>(ids)); }

void CreateRenderbuffers(Sizei n, Renderbuffer* renderbuffers) { gl::CreateRenderbuffers(n, reinterpret_cast<gl::Uint*>(renderbuffers)); }

void CreateSamplers(Sizei n, Sampler* samplers) { gl::CreateSamplers(n, reinterpret_cast<gl::Uint*>(samplers)); }

Shader CreateShader(ShaderType type) { return Shader{ gl::CreateShader(static_cast<gl::Enum>(type)) }; }

Program CreateShaderProgramv(ShaderType type, Sizei count, const Char** strings) { return Program{ gl::CreateShaderProgramv(static_cast<gl::Enum>(type), count, strings) }; }

void CreateTextures(TextureTarget target, Sizei n, Texture* textures) { gl::CreateTextures(static_cast<gl::Enum>(target), n, reinterpret_cast<gl::Uint*>(textures)); }

void CreateTransformFeedbacks(Sizei n, TransformFeedback* ids) { gl::CreateTransformFeedbacks(n, reinterpret_cast<gl::Uint*>(ids)); }

void CreateVertexArrays(Sizei n, VertexArray* arrays) { gl::CreateVertexArrays(n, reinterpret_cast<gl::Uint*>(arrays)); }

void CullFace(TriangleFace mode) { gl::CullFace(static_cast<gl::Enum>(mode)); }

void DebugMessageControl(DebugSource source, DebugType type, DebugSeverity severity, Sizei count, const Uint* ids, Boolean enabled) { gl::DebugMessageControl(static_cast<gl::Enum>(source), static_cast<gl::Enum>(type), static_cast<gl::Enum>(severity), count, ids, enabled); }

void DebugMessageInsert(DebugSource source, DebugType type, Uint id, DebugSeverity severity, Sizei length, const Char* buf) { gl::DebugMessageInsert(static_cast<gl::Enum>(source), static_cast<gl::Enum>(type), id, static_cast<gl::Enum>(severity), length, buf); }

void DeleteBuffers(Sizei n, const Buffer* buffers) { gl::DeleteBuffers(n, reinterpret_cast<const gl::Uint*>(buffers)); }

void DeleteFramebuffers(Sizei n, const Framebuffer* framebuffers) { gl::DeleteFramebuffers(n, reinterpret_cast<const gl::Uint*>(framebuffers)); }

void DeleteProgram(Program program) { gl::DeleteProgram(program.handle); }

void DeleteProgramPipelines(Sizei n, const ProgramPipeline* pipelines) { gl::DeleteProgramPipelines(n, reinterpret_cast<const gl::Uint*>(pipelines)); }

void DeleteQueries(Sizei n, const Query* ids) { gl::DeleteQueries(n, reinterpret_cast<const gl::Uint*>(ids)); }

void DeleteRenderbuffers(Sizei n, const Renderbuffer* renderbuffers) { gl::DeleteRenderbuffers(n, reinterpret_cast<const gl::Uint*>(renderbuffers)); }

void DeleteSamplers(Sizei count, const Sampler* samplers) { gl::DeleteSamplers(count, reinterpret_cast<const gl::Uint*>(samplers)); }

void DeleteShader(Shader shader) { gl::DeleteShader(shader.handle); }

void DeleteSync(Sync sync) { gl::DeleteSync(sync.handle); }

void DeleteTextures(Sizei n, const Texture* textures) { gl::DeleteTextures(n, reinterpret_cast<const gl::Uint*>(textures)); }

void DeleteTransformFeedbacks(Sizei n, const TransformFeedback* ids) { gl::DeleteTransformFeedbacks(n, reinterpret_cast<const gl::Uint*>(ids)); }

void DeleteVertexArrays(Sizei n, const VertexArray* arrays) { gl::DeleteVertexArrays(n, reinterpret_cast<const gl::Uint*>(arrays)); }

void DepthFunc(DepthFunction func) { gl::DepthFunc(static_cast<gl::Enum>(func)); }

void DetachShader(Program program, Shader shader) { gl::DetachShader(program.handle, shader.handle); }

void Disable(EnableCap cap) { gl::Disable(static_cast<gl::Enum>(cap)); }

void DisableVertexArrayAttrib(VertexArray vaobj, Uint index) { gl::DisableVertexArrayAttrib(vaobj.handle, index); }

void Disablei(EnableCap target, Uint index) { gl::Disablei(static_cast<gl::Enum>(target), index); }

void DrawArrays(PrimitiveType mode, Int first, Sizei count) { gl::DrawArrays(static_cast<gl::Enum>(mode), first, count); }

void DrawArraysIndirect(PrimitiveType mode, const void* indirect) { gl::DrawArraysIndirect(static_cast<gl::Enum>(mode), indirect); }

void DrawArraysInstanced(PrimitiveType mode, Int first, Sizei count, Sizei instancecount) { gl::DrawArraysInstanced(static_cast<gl::Enum>(mode), first, count, instancecount); }

void DrawArraysInstancedBaseInstance(PrimitiveType mode, Int first, Sizei count, Sizei instancecount, Uint baseinstance) { gl::DrawArraysInstancedBaseInstance(static_cast<gl::Enum>(mode), first, count, instancecount, baseinstance); }

void DrawBuffer(DrawBufferMode buf) { gl::DrawBuffer(static_cast<gl::Enum>(buf)); }

void DrawBuffers(Sizei n, const DrawBufferMode* bufs) { gl::DrawBuffers(n, reinterpret_cast<const gl::Enum*>(bufs)); }

void DrawElements(PrimitiveType mode, Sizei count, DrawElementsType type, const void* indices) { gl::DrawElements(static_cast<gl::Enum>(mode), count, static_cast<gl::Enum>(type), indices); }

void DrawElementsBaseVertex(PrimitiveType mode, Sizei count, DrawElementsType type, const void* indices, Int basevertex) { gl::DrawElementsBaseVertex(static_cast<gl::Enum>(mode), count, static_cast<gl::Enum>(type), indices, basevertex); }

void DrawElementsIndirect(PrimitiveType mode, DrawElementsType type, const void* indirect) { gl::DrawElementsIndirect(static_cast<gl::Enum>(mode), static_cast<gl::Enum>(type), indirect); }

void DrawElementsInstanced(PrimitiveType mode, Sizei count, DrawElementsType type, const void* indices, Sizei instancecount) { gl::DrawElementsInstanced(static_cast<gl::Enum>(mode), count, static_cast<gl::Enum>(type), indices, instancecount); }

void DrawElementsInstancedBaseInstance(PrimitiveType mode, Sizei count, DrawElementsType type, const void* indices, Sizei instancecount, Uint baseinstance) { gl::DrawElementsInstancedBaseInstance(static_cast<gl::Enum>(mode), count, static_cast<gl::Enum>(type), indices, instancecount, baseinstance); }

void DrawElementsInstancedBaseVertex(PrimitiveType mode, Sizei count, DrawElementsType type, const void* indices, Sizei instancecount, Int basevertex) { gl::DrawElementsInstancedBaseVertex(static_cast<gl::Enum>(mode), count, static_cast<gl::Enum>(type), indices, instancecount, basevertex); }

void DrawElementsInstancedBaseVertexBaseInstance(PrimitiveType mode, Sizei count, DrawElementsType type, const void* indices, Sizei instancecount, Int basevertex, Uint baseinstance) { gl::DrawElementsInstancedBaseVertexBaseInstance(static_cast<gl::Enum>(mode), count, static_cast<gl::Enum>(type), indices, instancecount, basevertex, baseinstance); }

void DrawRangeElements(PrimitiveType mode, Uint start, Uint end, Sizei count, DrawElementsType type, const void* indices) { gl::DrawRangeElements(static_cast<gl::Enum>(mode), start, end, count, static_cast<gl::Enum>(type), indices); }

void DrawRangeElementsBaseVertex(PrimitiveType mode, Uint start, Uint end, Sizei count, DrawElementsType type, const void* indices, Int basevertex) { gl::DrawRangeElementsBaseVertex(static_cast<gl::Enum>(mode), start, end, count, static_cast<gl::Enum>(type), indices, basevertex); }

void DrawTransformFeedback(PrimitiveType mode, TransformFeedback id) { gl::DrawTransformFeedback(static_cast<gl::Enum>(mode), id.handle); }

void DrawTransformFeedbackInstanced(PrimitiveType mode, TransformFeedback id, Sizei instancecount) { gl::DrawTransformFeedbackInstanced(static_cast<gl::Enum>(mode), id.handle, instancecount); }

void DrawTransformFeedbackStream(PrimitiveType mode, TransformFeedback id, Uint stream) { gl::DrawTransformFeedbackStream(static_cast<gl::Enum>(mode), id.handle, stream); }

void DrawTransformFeedbackStreamInstanced(PrimitiveType mode, TransformFeedback id, Uint stream, Sizei instancecount) { gl::DrawTransformFeedbackStreamInstanced(static_cast<gl::Enum>(mode), id.handle, stream, instancecount); }

void Enable(EnableCap cap) { gl::Enable(static_cast<gl::Enum>(cap)); }

void EnableVertexArrayAttrib(VertexArray vaobj, Uint index) { gl::EnableVertexArrayAttrib(vaobj.handle, index); }

void Enablei(EnableCap target, Uint index) { gl::Enablei(static_cast<gl::Enum>(target), index); }

void EndQuery(QueryTarget target) { gl::EndQuery(static_cast<gl::Enum>(target)); }

void EndQueryIndexed(QueryTarget target, Uint index) { gl::EndQueryIndexed(static_cast<gl::Enum>(target), index); }

Sync FenceSync(SyncCondition condition, SyncBehaviorFlags flags) { return Sync{ gl::FenceSync(static_cast<gl::Enum>(condition), static_cast<gl::Enum>(flags)) }; }

void FlushMappedBufferRange(BufferTargetARB target, Intptr offset, Sizeiptr length) { gl::FlushMappedBufferRange(static_cast<gl::Enum>(target), offset, length); }

void FlushMappedNamedBufferRange(Buffer buffer, Intptr offset, Sizeiptr length) { gl::FlushMappedNamedBufferRange(buffer.handle, offset, length); }

void FramebufferParameteri(FramebufferTarget target, FramebufferParameterName pname, Int param) { gl::FramebufferParameteri(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), param); }

void FramebufferRenderbuffer(FramebufferTarget target, FramebufferAttachment attachment, RenderbufferTarget renderbuffertarget, Renderbuffer renderbuffer) { gl::FramebufferRenderbuffer(static_cast<gl::Enum>(target), static_cast<gl::Enum>(attachment), static_cast<gl::Enum>(renderbuffertarget), renderbuffer.handle); }

void FramebufferTexture(FramebufferTarget target, FramebufferAttachment attachment, Texture texture, Int level) { gl::FramebufferTexture(static_cast<gl::Enum>(target), static_cast<gl::Enum>(attachment), texture.handle, level); }

void FramebufferTexture1D(FramebufferTarget target, FramebufferAttachment attachment, TextureTarget textarget, Texture texture, Int level) { gl::FramebufferTexture1D(static_cast<gl::Enum>(target), static_cast<gl::Enum>(attachment), static_cast<gl::Enum>(textarget), texture.handle, level); }

void FramebufferTexture2D(FramebufferTarget target, FramebufferAttachment attachment, TextureTarget textarget, Texture texture, Int level) { gl::FramebufferTexture2D(static_cast<gl::Enum>(target), static_cast<gl::Enum>(attachment), static_cast<gl::Enum>(textarget), texture.handle, level); }

void FramebufferTexture3D(FramebufferTarget target, FramebufferAttachment attachment, TextureTarget textarget, Texture texture, Int level, Int zoffset) { gl::FramebufferTexture3D(static_cast<gl::Enum>(target), static_cast<gl::Enum>(attachment), static_cast<gl::Enum>(textarget), texture.handle, level, zoffset); }

void FramebufferTextureLayer(FramebufferTarget target, FramebufferAttachment attachment, Texture texture, Int level, Int layer) { gl::FramebufferTextureLayer(static_cast<gl::Enum>(target), static_cast<gl::Enum>(attachment), texture.handle, level, layer); }

void FrontFace(FrontFaceDirection mode) { gl::FrontFace(static_cast<gl::Enum>(mode)); }

void GenBuffers(Sizei n, Buffer* buffers) { gl::GenBuffers(n, reinterpret_cast<gl::Uint*>(buffers)); }

void GenFramebuffers(Sizei n, Framebuffer* framebuffers) { gl::GenFramebuffers(n, reinterpret_cast<gl::Uint*>(framebuffers)); }

void GenProgramPipelines(Sizei n, ProgramPipeline* pipelines) { gl::GenProgramPipelines(n, reinterpret_cast<gl::Uint*>(pipelines)); }

void GenQueries(Sizei n, Query* ids) { gl::GenQueries(n, reinterpret_cast<gl::Uint*>(ids)); }

void GenRenderbuffers(Sizei n, Renderbuffer* renderbuffers) { gl::GenRenderbuffers(n, reinterpret_cast<gl::Uint*>(renderbuffers)); }

void GenSamplers(Sizei count, Sampler* samplers) { gl::GenSamplers(count, reinterpret_cast<gl::Uint*>(samplers)); }

void GenTextures(Sizei n, Texture* textures) { gl::GenTextures(n, reinterpret_cast<gl::Uint*>(textures)); }

void GenTransformFeedbacks(Sizei n, TransformFeedback* ids) { gl::GenTransformFeedbacks(n, reinterpret_cast<gl::Uint*>(ids)); }

void GenVertexArrays(Sizei n, VertexArray* arrays) { gl::GenVertexArrays(n, reinterpret_cast<gl::Uint*>(arrays)); }

void GenerateMipmap(TextureTarget target) { gl::GenerateMipmap(static_cast<gl::Enum>(target)); }

void GenerateTextureMipmap(Texture texture) { gl::GenerateTextureMipmap(texture.handle); }

void GetActiveAtomicCounterBufferiv(Program program, Uint bufferIndex, AtomicCounterBufferPName pname, Int* params) { gl::GetActiveAtomicCounterBufferiv(program.handle, bufferIndex, static_cast<gl::Enum>(pname), params); }

void GetActiveAttrib(Program program, Uint index, Sizei bufSize, Sizei* length, Int* size, AttributeType* type, Char* name) { gl::GetActiveAttrib(program.handle, index, bufSize, length, size, reinterpret_cast<gl::Enum*>(type), name); }

void GetActiveSubroutineName(Program program, ShaderType shadertype, Uint index, Sizei bufSize, Sizei* length, Char* name) { gl::GetActiveSubroutineName(program.handle, static_cast<gl::Enum>(shadertype), index, bufSize, length, name); }

void GetActiveSubroutineUniformName(Program program, ShaderType shadertype, Uint index, Sizei bufSize, Sizei* length, Char* name) { gl::GetActiveSubroutineUniformName(program.handle, static_cast<gl::Enum>(shadertype), index, bufSize, length, name); }

void GetActiveSubroutineUniformiv(Program program, ShaderType shadertype, Uint index, SubroutineParameterName pname, Int* values) { gl::GetActiveSubroutineUniformiv(program.handle, static_cast<gl::Enum>(shadertype), index, static_cast<gl::Enum>(pname), values); }

void GetActiveUniform(Program program, Uint index, Sizei bufSize, Sizei* length, Int* size, UniformType* type, Char* name) { gl::GetActiveUniform(program.handle, index, bufSize, length, size, reinterpret_cast<gl::Enum*>(type), name); }

void GetActiveUniformBlockName(Program program, Uint uniformBlockIndex, Sizei bufSize, Sizei* length, Char* uniformBlockName) { gl::GetActiveUniformBlockName(program.handle, uniformBlockIndex, bufSize, length, uniformBlockName); }

void GetActiveUniformBlockiv(Program program, Uint uniformBlockIndex, UniformBlockPName pname, Int* params) { gl::GetActiveUniformBlockiv(program.handle, uniformBlockIndex, static_cast<gl::Enum>(pname), params); }

void GetActiveUniformName(Program program, Uint uniformIndex, Sizei bufSize, Sizei* length, Char* uniformName) { gl::GetActiveUniformName(program.handle, uniformIndex, bufSize, length, uniformName); }

void GetActiveUniformsiv(Program program, Sizei uniformCount, const Uint* uniformIndices, UniformPName pname, Int* params) { gl::GetActiveUniformsiv(program.handle, uniformCount, uniformIndices, static_cast<gl::Enum>(pname), params); }

void GetAttachedShaders(Program program, Sizei maxCount, Sizei* count, Shader* shaders) { gl::GetAttachedShaders(program.handle, maxCount, count, reinterpret_cast<gl::Uint*>(shaders)); }

Int GetAttribLocation(Program program, const Char* name) { return gl::GetAttribLocation(program.handle, name); }

void GetBooleani_v(BufferTargetARB target, Uint index, Boolean* data) { gl::GetBooleani_v(static_cast<gl::Enum>(target), index, data); }

void GetBooleanv(GetPName pname, Boolean* data) { gl::GetBooleanv(static_cast<gl::Enum>(pname), data); }

void GetBufferParameteri64v(BufferTargetARB target, BufferPNameARB pname, Int64* params) { gl::GetBufferParameteri64v(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void GetBufferParameteriv(BufferTargetARB target, BufferPNameARB pname, Int* params) { gl::GetBufferParameteriv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void GetBufferPointerv(BufferTargetARB target, BufferPointerNameARB pname, void** params) { gl::GetBufferPointerv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void GetBufferSubData(BufferTargetARB target, Intptr offset, Sizeiptr size, void* data) { gl::GetBufferSubData(static_cast<gl::Enum>(target), offset, size, data); }

void GetCompressedTexImage(TextureTarget target, Int level, void* img) { gl::GetCompressedTexImage(static_cast<gl::Enum>(target), level, img); }

void GetCompressedTextureImage(Texture texture, Int level, Sizei bufSize, void* pixels) { gl::GetCompressedTextureImage(texture.handle, level, bufSize, pixels); }

void GetCompressedTextureSubImage(Texture texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Sizei bufSize, void* pixels) { gl::GetCompressedTextureSubImage(texture.handle, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels); }

Uint GetDebugMessageLog(Uint count, Sizei bufSize, DebugSource* sources, DebugType* types, Uint* ids, DebugSeverity* severities, Sizei* lengths, Char* messageLog) { return gl::GetDebugMessageLog(count, bufSize, reinterpret_cast<gl::Enum*>(sources), reinterpret_cast<gl::Enum*>(types), ids, reinterpret_cast<gl::Enum*>(severities), lengths, messageLog); }

void GetDoublei_v(GetPName target, Uint index, Double* data) { gl::GetDoublei_v(static_cast<gl::Enum>(target), index, data); }

void GetDoublev(GetPName pname, Double* data) { gl::GetDoublev(static_cast<gl::Enum>(pname), data); }

ErrorCode GetError() { return static_cast<ErrorCode>(gl::GetError()); }

void GetFloati_v(GetPName target, Uint index, Float* data) { gl::GetFloati_v(static_cast<gl::Enum>(target), index, data); }

void GetFloatv(GetPName pname, Float* data) { gl::GetFloatv(static_cast<gl::Enum>(pname), data); }

Int GetFragDataIndex(Program program, const Char* name) { return gl::GetFragDataIndex(program.handle, name); }

Int GetFragDataLocation(Program program, const Char* name) { return gl::GetFragDataLocation(program.handle, name); }

void GetFramebufferAttachmentParameteriv(FramebufferTarget target, FramebufferAttachment attachment, FramebufferAttachmentParameterName pname, Int* params) { gl::GetFramebufferAttachmentParameteriv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(attachment), static_cast<gl::Enum>(pname), params); }

void GetFramebufferParameteriv(FramebufferTarget target, FramebufferAttachmentParameterName pname, Int* params) { gl::GetFramebufferParameteriv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

GraphicsResetStatus GetGraphicsResetStatus() { return static_cast<GraphicsResetStatus>(gl::GetGraphicsResetStatus()); }

void GetInteger64i_v(GetPName target, Uint index, Int64* data) { gl::GetInteger64i_v(static_cast<gl::Enum>(target), index, data); }

void GetInteger64v(GetPName pname, Int64* data) { gl::GetInteger64v(static_cast<gl::Enum>(pname), data); }

void GetIntegeri_v(GetPName target, Uint index, Int* data) { gl::GetIntegeri_v(static_cast<gl::Enum>(target), index, data); }

void GetIntegerv(GetPName pname, Int* data) { gl::GetIntegerv(static_cast<gl::Enum>(pname), data); }

void GetInternalformati64v(TextureTarget target, InternalFormat internalformat, InternalFormatPName pname, Sizei count, Int64* params) { gl::GetInternalformati64v(static_cast<gl::Enum>(target), static_cast<gl::Enum>(internalformat), static_cast<gl::Enum>(pname), count, params); }

void GetInternalformativ(TextureTarget target, InternalFormat internalformat, InternalFormatPName pname, Sizei count, Int* params) { gl::GetInternalformativ(static_cast<gl::Enum>(target), static_cast<gl::Enum>(internalformat), static_cast<gl::Enum>(pname), count, params); }

void GetMultisamplefv(GetMultisamplePNameNV pname, Uint index, Float* val) { gl::GetMultisamplefv(static_cast<gl::Enum>(pname), index, val); }

void GetNamedBufferParameteri64v(Buffer buffer, BufferPNameARB pname, Int64* params) { gl::GetNamedBufferParameteri64v(buffer.handle, static_cast<gl::Enum>(pname), params); }

void GetNamedBufferParameteriv(Buffer buffer, BufferPNameARB pname, Int* params) { gl::GetNamedBufferParameteriv(buffer.handle, static_cast<gl::Enum>(pname), params); }

void GetNamedBufferPointerv(Buffer buffer, BufferPointerNameARB pname, void** params) { gl::GetNamedBufferPointerv(buffer.handle, static_cast<gl::Enum>(pname), params); }

void GetNamedBufferSubData(Buffer buffer, Intptr offset, Sizeiptr size, void* data) { gl::GetNamedBufferSubData(buffer.handle, offset, size, data); }

void GetNamedFramebufferAttachmentParameteriv(Framebuffer framebuffer, FramebufferAttachment attachment, FramebufferAttachmentParameterName pname, Int* params) { gl::GetNamedFramebufferAttachmentParameteriv(framebuffer.handle, static_cast<gl::Enum>(attachment), static_cast<gl::Enum>(pname), params); }

void GetNamedFramebufferParameteriv(Framebuffer framebuffer, GetFramebufferParameter pname, Int* param) { gl::GetNamedFramebufferParameteriv(framebuffer.handle, static_cast<gl::Enum>(pname), param); }

void GetNamedRenderbufferParameteriv(Renderbuffer renderbuffer, RenderbufferParameterName pname, Int* params) { gl::GetNamedRenderbufferParameteriv(renderbuffer.handle, static_cast<gl::Enum>(pname), params); }

void GetObjectLabel(ObjectIdentifier identifier, Uint name, Sizei bufSize, Sizei* length, Char* label) { gl::GetObjectLabel(static_cast<gl::Enum>(identifier), name, bufSize, length, label); }

void GetProgramBinary(Program program, Sizei bufSize, Sizei* length, ProgramBinaryFormat* binaryFormat, void* binary) { gl::GetProgramBinary(program.handle, bufSize, length, reinterpret_cast<gl::Enum*>(binaryFormat), binary); }

void GetProgramInfoLog(Program program, Sizei bufSize, Sizei* length, Char* infoLog) { gl::GetProgramInfoLog(program.handle, bufSize, length, infoLog); }

void GetProgramInterfaceiv(Program program, ProgramInterface programInterface, ProgramInterfacePName pname, Int* params) { gl::GetProgramInterfaceiv(program.handle, static_cast<gl::Enum>(programInterface), static_cast<gl::Enum>(pname), params); }

void GetProgramPipelineInfoLog(ProgramPipeline pipeline, Sizei bufSize, Sizei* length, Char* infoLog) { gl::GetProgramPipelineInfoLog(pipeline.handle, bufSize, length, infoLog); }

void GetProgramPipelineiv(ProgramPipeline pipeline, PipelineParameterName pname, Int* params) { gl::GetProgramPipelineiv(pipeline.handle, static_cast<gl::Enum>(pname), params); }

Uint GetProgramResourceIndex(Program program, ProgramInterface programInterface, const Char* name) { return gl::GetProgramResourceIndex(program.handle, static_cast<gl::Enum>(programInterface), name); }

Int GetProgramResourceLocation(Program program, ProgramInterface programInterface, const Char* name) { return gl::GetProgramResourceLocation(program.handle, static_cast<gl::Enum>(programInterface), name); }

Int GetProgramResourceLocationIndex(Program program, ProgramInterface programInterface, const Char* name) { return gl::GetProgramResourceLocationIndex(program.handle, static_cast<gl::Enum>(programInterface), name); }

void GetProgramResourceName(Program program, ProgramInterface programInterface, Uint index, Sizei bufSize, Sizei* length, Char* name) { gl::GetProgramResourceName(program.handle, static_cast<gl::Enum>(programInterface), index, bufSize, length, name); }

void GetProgramResourceiv(Program program, ProgramInterface programInterface, Uint index, Sizei propCount, const ProgramResourceProperty* props, Sizei count, Sizei* length, Int* params) { gl::GetProgramResourceiv(program.handle, static_cast<gl::Enum>(programInterface), index, propCount, reinterpret_cast<const gl::Enum*>(props), count, length, params); }

void GetProgramStageiv(Program program, ShaderType shadertype, ProgramStagePName pname, Int* values) { gl::GetProgramStageiv(program.handle, static_cast<gl::Enum>(shadertype), static_cast<gl::Enum>(pname), values); }

void GetProgramiv(Program program, ProgramPropertyARB pname, Int* params) { gl::GetProgramiv(program.handle, static_cast<gl::Enum>(pname), params); }

void GetQueryBufferObjecti64v(Query id, Buffer buffer, QueryObjectParameterName pname, Intptr offset) { gl::GetQueryBufferObjecti64v(id.handle, buffer.handle, static_cast<gl::Enum>(pname), offset); }

void GetQueryBufferObjectiv(Query id, Buffer buffer, QueryObjectParameterName pname, Intptr offset) { gl::GetQueryBufferObjectiv(id.handle, buffer.handle, static_cast<gl::Enum>(pname), offset); }

void GetQueryBufferObjectui64v(Query id, Buffer buffer, QueryObjectParameterName pname, Intptr offset) { gl::GetQueryBufferObjectui64v(id.handle, buffer.handle, static_cast<gl::Enum>(pname), offset); }

void GetQueryBufferObjectuiv(Query id, Buffer buffer, QueryObjectParameterName pname, Intptr offset) { gl::GetQueryBufferObjectuiv(id.handle, buffer.handle, static_cast<gl::Enum>(pname), offset); }

void GetQueryIndexediv(QueryTarget target, Uint index, QueryParameterName pname, Int* params) { gl::GetQueryIndexediv(static_cast<gl::Enum>(target), index, static_cast<gl::Enum>(pname), params); }

void GetQueryObjecti64v(Query id, QueryObjectParameterName pname, Int64* params) { gl::GetQueryObjecti64v(id.handle, static_cast<gl::Enum>(pname), params); }

void GetQueryObjectiv(Query id, QueryObjectParameterName pname, Int* params) { gl::GetQueryObjectiv(id.handle, static_cast<gl::Enum>(pname), params); }

void GetQueryObjectui64v(Query id, QueryObjectParameterName pname, Uint64* params) { gl::GetQueryObjectui64v(id.handle, static_cast<gl::Enum>(pname), params); }

void GetQueryObjectuiv(Query id, QueryObjectParameterName pname, Uint* params) { gl::GetQueryObjectuiv(id.handle, static_cast<gl::Enum>(pname), params); }

void GetQueryiv(QueryTarget target, QueryParameterName pname, Int* params) { gl::GetQueryiv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void GetRenderbufferParameteriv(RenderbufferTarget target, RenderbufferParameterName pname, Int* params) { gl::GetRenderbufferParameteriv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void GetSamplerParameterIiv(Sampler sampler, SamplerParameterI pname, Int* params) { gl::GetSamplerParameterIiv(sampler.handle, static_cast<gl::Enum>(pname), params); }

void GetSamplerParameterIuiv(Sampler sampler, SamplerParameterI pname, Uint* params) { gl::GetSamplerParameterIuiv(sampler.handle, static_cast<gl::Enum>(pname), params); }

void GetSamplerParameterfv(Sampler sampler, SamplerParameterF pname, Float* params) { gl::GetSamplerParameterfv(sampler.handle, static_cast<gl::Enum>(pname), params); }

void GetSamplerParameteriv(Sampler sampler, SamplerParameterI pname, Int* params) { gl::GetSamplerParameteriv(sampler.handle, static_cast<gl::Enum>(pname), params); }

void GetShaderInfoLog(Shader shader, Sizei bufSize, Sizei* length, Char* infoLog) { gl::GetShaderInfoLog(shader.handle, bufSize, length, infoLog); }

void GetShaderPrecisionFormat(ShaderType shadertype, PrecisionType precisiontype, Int* range, Int* precision) { gl::GetShaderPrecisionFormat(static_cast<gl::Enum>(shadertype), static_cast<gl::Enum>(precisiontype), range, precision); }

void GetShaderSource(Shader shader, Sizei bufSize, Sizei* length, Char* source) { gl::GetShaderSource(shader.handle, bufSize, length, source); }

void GetShaderiv(Shader shader, ShaderParameterName pname, Int* params) { gl::GetShaderiv(shader.handle, static_cast<gl::Enum>(pname), params); }

const Ubyte* GetString(StringName name) { return gl::GetString(static_cast<gl::Enum>(name)); }

const Ubyte* GetStringi(StringName name, Uint index) { return gl::GetStringi(static_cast<gl::Enum>(name), index); }

Uint GetSubroutineIndex(Program program, ShaderType shadertype, const Char* name) { return gl::GetSubroutineIndex(program.handle, static_cast<gl::Enum>(shadertype), name); }

Int GetSubroutineUniformLocation(Program program, ShaderType shadertype, const Char* name) { return gl::GetSubroutineUniformLocation(program.handle, static_cast<gl::Enum>(shadertype), name); }

void GetSynciv(Sync sync, SyncParameterName pname, Sizei count, Sizei* length, Int* values) { gl::GetSynciv(sync.handle, static_cast<gl::Enum>(pname), count, length, values); }

void GetTexImage(TextureTarget target, Int level, PixelFormat format, PixelType type, void* pixels) { gl::GetTexImage(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void GetTexLevelParameterfv(TextureTarget target, Int level, GetTextureParameter pname, Float* params) { gl::GetTexLevelParameterfv(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(pname), params); }

void GetTexLevelParameteriv(TextureTarget target, Int level, GetTextureParameter pname, Int* params) { gl::GetTexLevelParameteriv(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(pname), params); }

void GetTexParameterIiv(TextureTarget target, GetTextureParameter pname, Int* params) { gl::GetTexParameterIiv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void GetTexParameterIuiv(TextureTarget target, GetTextureParameter pname, Uint* params) { gl::GetTexParameterIuiv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void GetTexParameterfv(TextureTarget target, GetTextureParameter pname, Float* params) { gl::GetTexParameterfv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void GetTexParameteriv(TextureTarget target, GetTextureParameter pname, Int* params) { gl::GetTexParameteriv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void GetTextureImage(Texture texture, Int level, PixelFormat format, PixelType type, Sizei bufSize, void* pixels) { gl::GetTextureImage(texture.handle, level, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), bufSize, pixels); }

void GetTextureLevelParameterfv(Texture texture, Int level, GetTextureParameter pname, Float* params) { gl::GetTextureLevelParameterfv(texture.handle, level, static_cast<gl::Enum>(pname), params); }

void GetTextureLevelParameteriv(Texture texture, Int level, GetTextureParameter pname, Int* params) { gl::GetTextureLevelParameteriv(texture.handle, level, static_cast<gl::Enum>(pname), params); }

void GetTextureParameterIiv(Texture texture, GetTextureParameter pname, Int* params) { gl::GetTextureParameterIiv(texture.handle, static_cast<gl::Enum>(pname), params); }

void GetTextureParameterIuiv(Texture texture, GetTextureParameter pname, Uint* params) { gl::GetTextureParameterIuiv(texture.handle, static_cast<gl::Enum>(pname), params); }

void GetTextureParameterfv(Texture texture, GetTextureParameter pname, Float* params) { gl::GetTextureParameterfv(texture.handle, static_cast<gl::Enum>(pname), params); }

void GetTextureParameteriv(Texture texture, GetTextureParameter pname, Int* params) { gl::GetTextureParameteriv(texture.handle, static_cast<gl::Enum>(pname), params); }

void GetTextureSubImage(Texture texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, PixelFormat format, PixelType type, Sizei bufSize, void* pixels) { gl::GetTextureSubImage(texture.handle, level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), bufSize, pixels); }

void GetTransformFeedbackVarying(Program program, Uint index, Sizei bufSize, Sizei* length, Sizei* size, AttributeType* type, Char* name) { gl::GetTransformFeedbackVarying(program.handle, index, bufSize, length, size, reinterpret_cast<gl::Enum*>(type), name); }

void GetTransformFeedbacki64_v(TransformFeedback xfb, TransformFeedbackPName pname, Uint index, Int64* param) { gl::GetTransformFeedbacki64_v(xfb.handle, static_cast<gl::Enum>(pname), index, param); }

void GetTransformFeedbacki_v(TransformFeedback xfb, TransformFeedbackPName pname, Uint index, Int* param) { gl::GetTransformFeedbacki_v(xfb.handle, static_cast<gl::Enum>(pname), index, param); }

void GetTransformFeedbackiv(TransformFeedback xfb, TransformFeedbackPName pname, Int* param) { gl::GetTransformFeedbackiv(xfb.handle, static_cast<gl::Enum>(pname), param); }

Uint GetUniformBlockIndex(Program program, const Char* uniformBlockName) { return gl::GetUniformBlockIndex(program.handle, uniformBlockName); }

void GetUniformIndices(Program program, Sizei uniformCount, const Char** uniformNames, Uint* uniformIndices) { gl::GetUniformIndices(program.handle, uniformCount, uniformNames, uniformIndices); }

Int GetUniformLocation(Program program, const Char* name) { return gl::GetUniformLocation(program.handle, name); }

void GetUniformSubroutineuiv(ShaderType shadertype, Int location, Uint* params) { gl::GetUniformSubroutineuiv(static_cast<gl::Enum>(shadertype), location, params); }

void GetUniformdv(Program program, Int location, Double* params) { gl::GetUniformdv(program.handle, location, params); }

void GetUniformfv(Program program, Int location, Float* params) { gl::GetUniformfv(program.handle, location, params); }

void GetUniformiv(Program program, Int location, Int* params) { gl::GetUniformiv(program.handle, location, params); }

void GetUniformuiv(Program program, Int location, Uint* params) { gl::GetUniformuiv(program.handle, location, params); }

void GetVertexArrayIndexed64iv(VertexArray vaobj, Uint index, VertexArrayPName pname, Int64* param) { gl::GetVertexArrayIndexed64iv(vaobj.handle, index, static_cast<gl::Enum>(pname), param); }

void GetVertexArrayIndexediv(VertexArray vaobj, Uint index, VertexArrayPName pname, Int* param) { gl::GetVertexArrayIndexediv(vaobj.handle, index, static_cast<gl::Enum>(pname), param); }

void GetVertexArrayiv(VertexArray vaobj, VertexArrayPName pname, Int* param) { gl::GetVertexArrayiv(vaobj.handle, static_cast<gl::Enum>(pname), param); }

void GetVertexAttribIiv(Uint index, VertexAttribEnum pname, Int* params) { gl::GetVertexAttribIiv(index, static_cast<gl::Enum>(pname), params); }

void GetVertexAttribIuiv(Uint index, VertexAttribEnum pname, Uint* params) { gl::GetVertexAttribIuiv(index, static_cast<gl::Enum>(pname), params); }

void GetVertexAttribLdv(Uint index, VertexAttribEnum pname, Double* params) { gl::GetVertexAttribLdv(index, static_cast<gl::Enum>(pname), params); }

void GetVertexAttribPointerv(Uint index, VertexAttribPointerPropertyARB pname, void** pointer) { gl::GetVertexAttribPointerv(index, static_cast<gl::Enum>(pname), pointer); }

void GetVertexAttribdv(Uint index, VertexAttribPropertyARB pname, Double* params) { gl::GetVertexAttribdv(index, static_cast<gl::Enum>(pname), params); }

void GetVertexAttribfv(Uint index, VertexAttribPropertyARB pname, Float* params) { gl::GetVertexAttribfv(index, static_cast<gl::Enum>(pname), params); }

void GetVertexAttribiv(Uint index, VertexAttribPropertyARB pname, Int* params) { gl::GetVertexAttribiv(index, static_cast<gl::Enum>(pname), params); }

void GetnCompressedTexImage(TextureTarget target, Int lod, Sizei bufSize, void* pixels) { gl::GetnCompressedTexImage(static_cast<gl::Enum>(target), lod, bufSize, pixels); }

void GetnTexImage(TextureTarget target, Int level, PixelFormat format, PixelType type, Sizei bufSize, void* pixels) { gl::GetnTexImage(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), bufSize, pixels); }

void GetnUniformdv(Program program, Int location, Sizei bufSize, Double* params) { gl::GetnUniformdv(program.handle, location, bufSize, params); }

void GetnUniformfv(Program program, Int location, Sizei bufSize, Float* params) { gl::GetnUniformfv(program.handle, location, bufSize, params); }

void GetnUniformiv(Program program, Int location, Sizei bufSize, Int* params) { gl::GetnUniformiv(program.handle, location, bufSize, params); }

void GetnUniformuiv(Program program, Int location, Sizei bufSize, Uint* params) { gl::GetnUniformuiv(program.handle, location, bufSize, params); }

void Hint(HintTarget target, HintMode mode) { gl::Hint(static_cast<gl::Enum>(target), static_cast<gl::Enum>(mode)); }

void InvalidateBufferData(Buffer buffer) { gl::InvalidateBufferData(buffer.handle); }

void InvalidateBufferSubData(Buffer buffer, Intptr offset, Sizeiptr length) { gl::InvalidateBufferSubData(buffer.handle, offset, length); }

void InvalidateFramebuffer(FramebufferTarget target, Sizei numAttachments, const InvalidateFramebufferAttachment* attachments) { gl::InvalidateFramebuffer(static_cast<gl::Enum>(target), numAttachments, reinterpret_cast<const gl::Enum*>(attachments)); }

void InvalidateNamedFramebufferData(Framebuffer framebuffer, Sizei numAttachments, const FramebufferAttachment* attachments) { gl::InvalidateNamedFramebufferData(framebuffer.handle, numAttachments, reinterpret_cast<const gl::Enum*>(attachments)); }

void InvalidateNamedFramebufferSubData(Framebuffer framebuffer, Sizei numAttachments, const FramebufferAttachment* attachments, Int x, Int y, Sizei width, Sizei height) { gl::InvalidateNamedFramebufferSubData(framebuffer.handle, numAttachments, reinterpret_cast<const gl::Enum*>(attachments), x, y, width, height); }

void InvalidateSubFramebuffer(FramebufferTarget target, Sizei numAttachments, const InvalidateFramebufferAttachment* attachments, Int x, Int y, Sizei width, Sizei height) { gl::InvalidateSubFramebuffer(static_cast<gl::Enum>(target), numAttachments, reinterpret_cast<const gl::Enum*>(attachments), x, y, width, height); }

void InvalidateTexImage(Texture texture, Int level) { gl::InvalidateTexImage(texture.handle, level); }

void InvalidateTexSubImage(Texture texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth) { gl::InvalidateTexSubImage(texture.handle, level, xoffset, yoffset, zoffset, width, height, depth); }

Boolean IsBuffer(Buffer buffer) { return gl::IsBuffer(buffer.handle); }

Boolean IsEnabled(EnableCap cap) { return gl::IsEnabled(static_cast<gl::Enum>(cap)); }

Boolean IsEnabledi(EnableCap target, Uint index) { return gl::IsEnabledi(static_cast<gl::Enum>(target), index); }

Boolean IsFramebuffer(Framebuffer framebuffer) { return gl::IsFramebuffer(framebuffer.handle); }

Boolean IsProgram(Program program) { return gl::IsProgram(program.handle); }

Boolean IsProgramPipeline(ProgramPipeline pipeline) { return gl::IsProgramPipeline(pipeline.handle); }

Boolean IsQuery(Query id) { return gl::IsQuery(id.handle); }

Boolean IsRenderbuffer(Renderbuffer renderbuffer) { return gl::IsRenderbuffer(renderbuffer.handle); }

Boolean IsSampler(Sampler sampler) { return gl::IsSampler(sampler.handle); }

Boolean IsShader(Shader shader) { return gl::IsShader(shader.handle); }

Boolean IsSync(Sync sync) { return gl::IsSync(sync.handle); }

Boolean IsTexture(Texture texture) { return gl::IsTexture(texture.handle); }

Boolean IsTransformFeedback(TransformFeedback id) { return gl::IsTransformFeedback(id.handle); }

Boolean IsVertexArray(VertexArray array) { return gl::IsVertexArray(array.handle); }

void LinkProgram(Program program) { gl::LinkProgram(program.handle); }

void LogicOp(LogicOp opcode) { gl::LogicOp(static_cast<gl::Enum>(opcode)); }

void* MapBuffer(BufferTargetARB target, BufferAccessARB access) { return gl::MapBuffer(static_cast<gl::Enum>(target), static_cast<gl::Enum>(access)); }

void* MapBufferRange(BufferTargetARB target, Intptr offset, Sizeiptr length, MapBufferAccessMask access) { return gl::MapBufferRange(static_cast<gl::Enum>(target), offset, length, static_cast<gl::Enum>(access)); }

void* MapNamedBuffer(Buffer buffer, BufferAccessARB access) { return gl::MapNamedBuffer(buffer.handle, static_cast<gl::Enum>(access)); }

void* MapNamedBufferRange(Buffer buffer, Intptr offset, Sizeiptr length, MapBufferAccessMask access) { return gl::MapNamedBufferRange(buffer.handle, offset, length, static_cast<gl::Enum>(access)); }

void MemoryBarrier(MemoryBarrierMask barriers) { gl::MemoryBarrier(static_cast<gl::Enum>(barriers)); }

void MemoryBarrierByRegion(MemoryBarrierMask barriers) { gl::MemoryBarrierByRegion(static_cast<gl::Enum>(barriers)); }

void MultiDrawArrays(PrimitiveType mode, const Int* first, const Sizei* count, Sizei drawcount) { gl::MultiDrawArrays(static_cast<gl::Enum>(mode), first, count, drawcount); }

void MultiDrawArraysIndirect(PrimitiveType mode, const void* indirect, Sizei drawcount, Sizei stride) { gl::MultiDrawArraysIndirect(static_cast<gl::Enum>(mode), indirect, drawcount, stride); }

void MultiDrawArraysIndirectCount(PrimitiveType mode, const void* indirect, Intptr drawcount, Sizei maxdrawcount, Sizei stride) { gl::MultiDrawArraysIndirectCount(static_cast<gl::Enum>(mode), indirect, drawcount, maxdrawcount, stride); }

void MultiDrawElements(PrimitiveType mode, const Sizei* count, DrawElementsType type, const void** indices, Sizei drawcount) { gl::MultiDrawElements(static_cast<gl::Enum>(mode), count, static_cast<gl::Enum>(type), indices, drawcount); }

void MultiDrawElementsBaseVertex(PrimitiveType mode, const Sizei* count, DrawElementsType type, const void** indices, Sizei drawcount, const Int* basevertex) { gl::MultiDrawElementsBaseVertex(static_cast<gl::Enum>(mode), count, static_cast<gl::Enum>(type), indices, drawcount, basevertex); }

void MultiDrawElementsIndirect(PrimitiveType mode, DrawElementsType type, const void* indirect, Sizei drawcount, Sizei stride) { gl::MultiDrawElementsIndirect(static_cast<gl::Enum>(mode), static_cast<gl::Enum>(type), indirect, drawcount, stride); }

void MultiDrawElementsIndirectCount(PrimitiveType mode, DrawElementsType type, const void* indirect, Intptr drawcount, Sizei maxdrawcount, Sizei stride) { gl::MultiDrawElementsIndirectCount(static_cast<gl::Enum>(mode), static_cast<gl::Enum>(type), indirect, drawcount, maxdrawcount, stride); }

void NamedBufferData(Buffer buffer, Sizeiptr size, const void* data, BufferUsageARB usage) { gl::NamedBufferData(buffer.handle, size, data, static_cast<gl::Enum>(usage)); }

void NamedBufferStorage(Buffer buffer, Sizeiptr size, const void* data, BufferStorageMask flags) { gl::NamedBufferStorage(buffer.handle, size, data, static_cast<gl::Enum>(flags)); }

void NamedBufferSubData(Buffer buffer, Intptr offset, Sizeiptr size, const void* data) { gl::NamedBufferSubData(buffer.handle, offset, size, data); }

void NamedFramebufferDrawBuffer(Framebuffer framebuffer, ColorBuffer buf) { gl::NamedFramebufferDrawBuffer(framebuffer.handle, static_cast<gl::Enum>(buf)); }

void NamedFramebufferDrawBuffers(Framebuffer framebuffer, Sizei n, const ColorBuffer* bufs) { gl::NamedFramebufferDrawBuffers(framebuffer.handle, n, reinterpret_cast<const gl::Enum*>(bufs)); }

void NamedFramebufferParameteri(Framebuffer framebuffer, FramebufferParameterName pname, Int param) { gl::NamedFramebufferParameteri(framebuffer.handle, static_cast<gl::Enum>(pname), param); }

void NamedFramebufferReadBuffer(Framebuffer framebuffer, ColorBuffer src) { gl::NamedFramebufferReadBuffer(framebuffer.handle, static_cast<gl::Enum>(src)); }

void NamedFramebufferRenderbuffer(Framebuffer framebuffer, FramebufferAttachment attachment, RenderbufferTarget renderbuffertarget, Renderbuffer renderbuffer) { gl::NamedFramebufferRenderbuffer(framebuffer.handle, static_cast<gl::Enum>(attachment), static_cast<gl::Enum>(renderbuffertarget), renderbuffer.handle); }

void NamedFramebufferTexture(Framebuffer framebuffer, FramebufferAttachment attachment, Texture texture, Int level) { gl::NamedFramebufferTexture(framebuffer.handle, static_cast<gl::Enum>(attachment), texture.handle, level); }

void NamedFramebufferTextureLayer(Framebuffer framebuffer, FramebufferAttachment attachment, Texture texture, Int level, Int layer) { gl::NamedFramebufferTextureLayer(framebuffer.handle, static_cast<gl::Enum>(attachment), texture.handle, level, layer); }

void NamedRenderbufferStorage(Renderbuffer renderbuffer, InternalFormat internalformat, Sizei width, Sizei height) { gl::NamedRenderbufferStorage(renderbuffer.handle, static_cast<gl::Enum>(internalformat), width, height); }

void NamedRenderbufferStorageMultisample(Renderbuffer renderbuffer, Sizei samples, InternalFormat internalformat, Sizei width, Sizei height) { gl::NamedRenderbufferStorageMultisample(renderbuffer.handle, samples, static_cast<gl::Enum>(internalformat), width, height); }

void ObjectLabel(ObjectIdentifier identifier, Uint name, Sizei length, const Char* label) { gl::ObjectLabel(static_cast<gl::Enum>(identifier), name, length, label); }

void PatchParameterfv(PatchParameterName pname, const Float* values) { gl::PatchParameterfv(static_cast<gl::Enum>(pname), values); }

void PatchParameteri(PatchParameterName pname, Int value) { gl::PatchParameteri(static_cast<gl::Enum>(pname), value); }

void PixelStoref(PixelStoreParameter pname, Float param) { gl::PixelStoref(static_cast<gl::Enum>(pname), param); }

void PixelStorei(PixelStoreParameter pname, Int param) { gl::PixelStorei(static_cast<gl::Enum>(pname), param); }

void PointParameterf(PointParameterNameARB pname, Float param) { gl::PointParameterf(static_cast<gl::Enum>(pname), param); }

void PointParameterfv(PointParameterNameARB pname, const Float* params) { gl::PointParameterfv(static_cast<gl::Enum>(pname), params); }

void PointParameteri(PointParameterNameARB pname, Int param) { gl::PointParameteri(static_cast<gl::Enum>(pname), param); }

void PointParameteriv(PointParameterNameARB pname, const Int* params) { gl::PointParameteriv(static_cast<gl::Enum>(pname), params); }

void PolygonMode(TriangleFace face, PolygonMode mode) { gl::PolygonMode(static_cast<gl::Enum>(face), static_cast<gl::Enum>(mode)); }

void ProgramBinary(Program program, ProgramBinaryFormat binaryFormat, const void* binary, Sizei length) { gl::ProgramBinary(program.handle, binaryFormat.value, binary, length); }

void ProgramParameteri(Program program, ProgramParameterPName pname, Int value) { gl::ProgramParameteri(program.handle, static_cast<gl::Enum>(pname), value); }

void ProgramUniform1d(Program program, Int location, Double v0) { gl::ProgramUniform1d(program.handle, location, v0); }

void ProgramUniform1dv(Program program, Int location, Sizei count, const Double* value) { gl::ProgramUniform1dv(program.handle, location, count, value); }

void ProgramUniform1f(Program program, Int location, Float v0) { gl::ProgramUniform1f(program.handle, location, v0); }

void ProgramUniform1fv(Program program, Int location, Sizei count, const Float* value) { gl::ProgramUniform1fv(program.handle, location, count, value); }

void ProgramUniform1i(Program program, Int location, Int v0) { gl::ProgramUniform1i(program.handle, location, v0); }

void ProgramUniform1iv(Program program, Int location, Sizei count, const Int* value) { gl::ProgramUniform1iv(program.handle, location, count, value); }

void ProgramUniform1ui(Program program, Int location, Uint v0) { gl::ProgramUniform1ui(program.handle, location, v0); }

void ProgramUniform1uiv(Program program, Int location, Sizei count, const Uint* value) { gl::ProgramUniform1uiv(program.handle, location, count, value); }

void ProgramUniform2d(Program program, Int location, Double v0, Double v1) { gl::ProgramUniform2d(program.handle, location, v0, v1); }

void ProgramUniform2dv(Program program, Int location, Sizei count, const Double* value) { gl::ProgramUniform2dv(program.handle, location, count, value); }

void ProgramUniform2f(Program program, Int location, Float v0, Float v1) { gl::ProgramUniform2f(program.handle, location, v0, v1); }

void ProgramUniform2fv(Program program, Int location, Sizei count, const Float* value) { gl::ProgramUniform2fv(program.handle, location, count, value); }

void ProgramUniform2i(Program program, Int location, Int v0, Int v1) { gl::ProgramUniform2i(program.handle, location, v0, v1); }

void ProgramUniform2iv(Program program, Int location, Sizei count, const Int* value) { gl::ProgramUniform2iv(program.handle, location, count, value); }

void ProgramUniform2ui(Program program, Int location, Uint v0, Uint v1) { gl::ProgramUniform2ui(program.handle, location, v0, v1); }

void ProgramUniform2uiv(Program program, Int location, Sizei count, const Uint* value) { gl::ProgramUniform2uiv(program.handle, location, count, value); }

void ProgramUniform3d(Program program, Int location, Double v0, Double v1, Double v2) { gl::ProgramUniform3d(program.handle, location, v0, v1, v2); }

void ProgramUniform3dv(Program program, Int location, Sizei count, const Double* value) { gl::ProgramUniform3dv(program.handle, location, count, value); }

void ProgramUniform3f(Program program, Int location, Float v0, Float v1, Float v2) { gl::ProgramUniform3f(program.handle, location, v0, v1, v2); }

void ProgramUniform3fv(Program program, Int location, Sizei count, const Float* value) { gl::ProgramUniform3fv(program.handle, location, count, value); }

void ProgramUniform3i(Program program, Int location, Int v0, Int v1, Int v2) { gl::ProgramUniform3i(program.handle, location, v0, v1, v2); }

void ProgramUniform3iv(Program program, Int location, Sizei count, const Int* value) { gl::ProgramUniform3iv(program.handle, location, count, value); }

void ProgramUniform3ui(Program program, Int location, Uint v0, Uint v1, Uint v2) { gl::ProgramUniform3ui(program.handle, location, v0, v1, v2); }

void ProgramUniform3uiv(Program program, Int location, Sizei count, const Uint* value) { gl::ProgramUniform3uiv(program.handle, location, count, value); }

void ProgramUniform4d(Program program, Int location, Double v0, Double v1, Double v2, Double v3) { gl::ProgramUniform4d(program.handle, location, v0, v1, v2, v3); }

void ProgramUniform4dv(Program program, Int location, Sizei count, const Double* value) { gl::ProgramUniform4dv(program.handle, location, count, value); }

void ProgramUniform4f(Program program, Int location, Float v0, Float v1, Float v2, Float v3) { gl::ProgramUniform4f(program.handle, location, v0, v1, v2, v3); }

void ProgramUniform4fv(Program program, Int location, Sizei count, const Float* value) { gl::ProgramUniform4fv(program.handle, location, count, value); }

void ProgramUniform4i(Program program, Int location, Int v0, Int v1, Int v2, Int v3) { gl::ProgramUniform4i(program.handle, location, v0, v1, v2, v3); }

void ProgramUniform4iv(Program program, Int location, Sizei count, const Int* value) { gl::ProgramUniform4iv(program.handle, location, count, value); }

void ProgramUniform4ui(Program program, Int location, Uint v0, Uint v1, Uint v2, Uint v3) { gl::ProgramUniform4ui(program.handle, location, v0, v1, v2, v3); }

void ProgramUniform4uiv(Program program, Int location, Sizei count, const Uint* value) { gl::ProgramUniform4uiv(program.handle, location, count, value); }

void ProgramUniformMatrix2dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value) { gl::ProgramUniformMatrix2dv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix2fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value) { gl::ProgramUniformMatrix2fv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix2x3dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value) { gl::ProgramUniformMatrix2x3dv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix2x3fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value) { gl::ProgramUniformMatrix2x3fv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix2x4dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value) { gl::ProgramUniformMatrix2x4dv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix2x4fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value) { gl::ProgramUniformMatrix2x4fv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix3dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value) { gl::ProgramUniformMatrix3dv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix3fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value) { gl::ProgramUniformMatrix3fv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix3x2dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value) { gl::ProgramUniformMatrix3x2dv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix3x2fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value) { gl::ProgramUniformMatrix3x2fv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix3x4dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value) { gl::ProgramUniformMatrix3x4dv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix3x4fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value) { gl::ProgramUniformMatrix3x4fv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix4dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value) { gl::ProgramUniformMatrix4dv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix4fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value) { gl::ProgramUniformMatrix4fv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix4x2dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value) { gl::ProgramUniformMatrix4x2dv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix4x2fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value) { gl::ProgramUniformMatrix4x2fv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix4x3dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value) { gl::ProgramUniformMatrix4x3dv(program.handle, location, count, transpose, value); }

void ProgramUniformMatrix4x3fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value) { gl::ProgramUniformMatrix4x3fv(program.handle, location, count, transpose, value); }

void ProvokingVertex(VertexProvokingMode mode) { gl::ProvokingVertex(static_cast<gl::Enum>(mode)); }

void PushDebugGroup(DebugSource source, Uint id, Sizei length, const Char* message) { gl::PushDebugGroup(static_cast<gl::Enum>(source), id, length, message); }

void QueryCounter(Query id, QueryCounterTarget target) { gl::QueryCounter(id.handle, static_cast<gl::Enum>(target)); }

void ReadBuffer(ReadBufferMode src) { gl::ReadBuffer(static_cast<gl::Enum>(src)); }

void ReadPixels(Int x, Int y, Sizei width, Sizei height, PixelFormat format, PixelType type, void* pixels) { gl::ReadPixels(x, y, width, height, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void ReadnPixels(Int x, Int y, Sizei width, Sizei height, PixelFormat format, PixelType type, Sizei bufSize, void* data) { gl::ReadnPixels(x, y, width, height, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), bufSize, data); }

void RenderbufferStorage(RenderbufferTarget target, InternalFormat internalformat, Sizei width, Sizei height) { gl::RenderbufferStorage(static_cast<gl::Enum>(target), static_cast<gl::Enum>(internalformat), width, height); }

void RenderbufferStorageMultisample(RenderbufferTarget target, Sizei samples, InternalFormat internalformat, Sizei width, Sizei height) { gl::RenderbufferStorageMultisample(static_cast<gl::Enum>(target), samples, static_cast<gl::Enum>(internalformat), width, height); }

void SamplerParameterIiv(Sampler sampler, SamplerParameterI pname, const Int* param) { gl::SamplerParameterIiv(sampler.handle, static_cast<gl::Enum>(pname), param); }

void SamplerParameterIuiv(Sampler sampler, SamplerParameterI pname, const Uint* param) { gl::SamplerParameterIuiv(sampler.handle, static_cast<gl::Enum>(pname), param); }

void SamplerParameterf(Sampler sampler, SamplerParameterF pname, Float param) { gl::SamplerParameterf(sampler.handle, static_cast<gl::Enum>(pname), param); }

void SamplerParameterfv(Sampler sampler, SamplerParameterF pname, const Float* param) { gl::SamplerParameterfv(sampler.handle, static_cast<gl::Enum>(pname), param); }

void SamplerParameteri(Sampler sampler, SamplerParameterI pname, Int param) { gl::SamplerParameteri(sampler.handle, static_cast<gl::Enum>(pname), param); }

void SamplerParameteriv(Sampler sampler, SamplerParameterI pname, const Int* param) { gl::SamplerParameteriv(sampler.handle, static_cast<gl::Enum>(pname), param); }

void ShaderBinary(Sizei count, const Shader* shaders, ShaderBinaryFormat binaryFormat, const void* binary, Sizei length) { gl::ShaderBinary(count, reinterpret_cast<const gl::Uint*>(shaders), static_cast<gl::Enum>(binaryFormat), binary, length); }

void ShaderSource(Shader shader, Sizei count, const Char** string, const Int* length) { gl::ShaderSource(shader.handle, count, string, length); }

void ShaderStorageBlockBinding(Program program, Uint storageBlockIndex, Uint storageBlockBinding) { gl::ShaderStorageBlockBinding(program.handle, storageBlockIndex, storageBlockBinding); }

void SpecializeShader(Shader shader, const Char* pEntryPoint, Uint numSpecializationConstants, const Uint* pConstantIndex, const Uint* pConstantValue) { gl::SpecializeShader(shader.handle, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue); }

void StencilFunc(StencilFunction func, Int ref, Uint mask) { gl::StencilFunc(static_cast<gl::Enum>(func), ref, mask); }

void StencilFuncSeparate(TriangleFace face, StencilFunction func, Int ref, Uint mask) { gl::StencilFuncSeparate(static_cast<gl::Enum>(face), static_cast<gl::Enum>(func), ref, mask); }

void StencilMaskSeparate(TriangleFace face, Uint mask) { gl::StencilMaskSeparate(static_cast<gl::Enum>(face), mask); }

void StencilOp(StencilOpType fail, StencilOpType zfail, StencilOpType zpass) { gl::StencilOp(static_cast<gl::Enum>(fail), static_cast<gl::Enum>(zfail), static_cast<gl::Enum>(zpass)); }

void StencilOpSeparate(TriangleFace face, StencilOpType sfail, StencilOpType dpfail, StencilOpType dppass) { gl::StencilOpSeparate(static_cast<gl::Enum>(face), static_cast<gl::Enum>(sfail), static_cast<gl::Enum>(dpfail), static_cast<gl::Enum>(dppass)); }

void TexBuffer(TextureTarget target, SizedInternalFormat internalformat, Buffer buffer) { gl::TexBuffer(static_cast<gl::Enum>(target), static_cast<gl::Enum>(internalformat), buffer.handle); }

void TexBufferRange(TextureTarget target, SizedInternalFormat internalformat, Buffer buffer, Intptr offset, Sizeiptr size) { gl::TexBufferRange(static_cast<gl::Enum>(target), static_cast<gl::Enum>(internalformat), buffer.handle, offset, size); }

void TexImage1D(TextureTarget target, Int level, InternalFormat internalformat, Sizei width, Int border, PixelFormat format, PixelType type, const void* pixels) { gl::TexImage1D(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(internalformat), width, border, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void TexImage2D(TextureTarget target, Int level, InternalFormat internalformat, Sizei width, Sizei height, Int border, PixelFormat format, PixelType type, const void* pixels) { gl::TexImage2D(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(internalformat), width, height, border, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void TexImage2DMultisample(TextureTarget target, Sizei samples, InternalFormat internalformat, Sizei width, Sizei height, Boolean fixedsamplelocations) { gl::TexImage2DMultisample(static_cast<gl::Enum>(target), samples, static_cast<gl::Enum>(internalformat), width, height, fixedsamplelocations); }

void TexImage3D(TextureTarget target, Int level, InternalFormat internalformat, Sizei width, Sizei height, Sizei depth, Int border, PixelFormat format, PixelType type, const void* pixels) { gl::TexImage3D(static_cast<gl::Enum>(target), level, static_cast<gl::Enum>(internalformat), width, height, depth, border, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void TexImage3DMultisample(TextureTarget target, Sizei samples, InternalFormat internalformat, Sizei width, Sizei height, Sizei depth, Boolean fixedsamplelocations) { gl::TexImage3DMultisample(static_cast<gl::Enum>(target), samples, static_cast<gl::Enum>(internalformat), width, height, depth, fixedsamplelocations); }

void TexParameterIiv(TextureTarget target, TextureParameterName pname, const Int* params) { gl::TexParameterIiv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void TexParameterIuiv(TextureTarget target, TextureParameterName pname, const Uint* params) { gl::TexParameterIuiv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void TexParameterf(TextureTarget target, TextureParameterName pname, Float param) { gl::TexParameterf(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), param); }

void TexParameterfv(TextureTarget target, TextureParameterName pname, const Float* params) { gl::TexParameterfv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void TexParameteri(TextureTarget target, TextureParameterName pname, Int param) { gl::TexParameteri(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), param); }

void TexParameteriv(TextureTarget target, TextureParameterName pname, const Int* params) { gl::TexParameteriv(static_cast<gl::Enum>(target), static_cast<gl::Enum>(pname), params); }

void TexStorage1D(TextureTarget target, Sizei levels, SizedInternalFormat internalformat, Sizei width) { gl::TexStorage1D(static_cast<gl::Enum>(target), levels, static_cast<gl::Enum>(internalformat), width); }

void TexStorage2D(TextureTarget target, Sizei levels, SizedInternalFormat internalformat, Sizei width, Sizei height) { gl::TexStorage2D(static_cast<gl::Enum>(target), levels, static_cast<gl::Enum>(internalformat), width, height); }

void TexStorage2DMultisample(TextureTarget target, Sizei samples, SizedInternalFormat internalformat, Sizei width, Sizei height, Boolean fixedsamplelocations) { gl::TexStorage2DMultisample(static_cast<gl::Enum>(target), samples, static_cast<gl::Enum>(internalformat), width, height, fixedsamplelocations); }

void TexStorage3D(TextureTarget target, Sizei levels, SizedInternalFormat internalformat, Sizei width, Sizei height, Sizei depth) { gl::TexStorage3D(static_cast<gl::Enum>(target), levels, static_cast<gl::Enum>(internalformat), width, height, depth); }

void TexStorage3DMultisample(TextureTarget target, Sizei samples, SizedInternalFormat internalformat, Sizei width, Sizei height, Sizei depth, Boolean fixedsamplelocations) { gl::TexStorage3DMultisample(static_cast<gl::Enum>(target), samples, static_cast<gl::Enum>(internalformat), width, height, depth, fixedsamplelocations); }

void TexSubImage1D(TextureTarget target, Int level, Int xoffset, Sizei width, PixelFormat format, PixelType type, const void* pixels) { gl::TexSubImage1D(static_cast<gl::Enum>(target), level, xoffset, width, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void TexSubImage2D(TextureTarget target, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, PixelFormat format, PixelType type, const void* pixels) { gl::TexSubImage2D(static_cast<gl::Enum>(target), level, xoffset, yoffset, width, height, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void TexSubImage3D(TextureTarget target, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, PixelFormat format, PixelType type, const void* pixels) { gl::TexSubImage3D(static_cast<gl::Enum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void TextureBuffer(Texture texture, SizedInternalFormat internalformat, Buffer buffer) { gl::TextureBuffer(texture.handle, static_cast<gl::Enum>(internalformat), buffer.handle); }

void TextureBufferRange(Texture texture, SizedInternalFormat internalformat, Buffer buffer, Intptr offset, Sizeiptr size) { gl::TextureBufferRange(texture.handle, static_cast<gl::Enum>(internalformat), buffer.handle, offset, size); }

void TextureParameterIiv(Texture texture, TextureParameterName pname, const Int* params) { gl::TextureParameterIiv(texture.handle, static_cast<gl::Enum>(pname), params); }

void TextureParameterIuiv(Texture texture, TextureParameterName pname, const Uint* params) { gl::TextureParameterIuiv(texture.handle, static_cast<gl::Enum>(pname), params); }

void TextureParameterf(Texture texture, TextureParameterName pname, Float param) { gl::TextureParameterf(texture.handle, static_cast<gl::Enum>(pname), param); }

void TextureParameterfv(Texture texture, TextureParameterName pname, const Float* param) { gl::TextureParameterfv(texture.handle, static_cast<gl::Enum>(pname), param); }

void TextureParameteri(Texture texture, TextureParameterName pname, Int param) { gl::TextureParameteri(texture.handle, static_cast<gl::Enum>(pname), param); }

void TextureParameteriv(Texture texture, TextureParameterName pname, const Int* param) { gl::TextureParameteriv(texture.handle, static_cast<gl::Enum>(pname), param); }

void TextureStorage1D(Texture texture, Sizei levels, SizedInternalFormat internalformat, Sizei width) { gl::TextureStorage1D(texture.handle, levels, static_cast<gl::Enum>(internalformat), width); }

void TextureStorage2D(Texture texture, Sizei levels, SizedInternalFormat internalformat, Sizei width, Sizei height) { gl::TextureStorage2D(texture.handle, levels, static_cast<gl::Enum>(internalformat), width, height); }

void TextureStorage2DMultisample(Texture texture, Sizei samples, SizedInternalFormat internalformat, Sizei width, Sizei height, Boolean fixedsamplelocations) { gl::TextureStorage2DMultisample(texture.handle, samples, static_cast<gl::Enum>(internalformat), width, height, fixedsamplelocations); }

void TextureStorage3D(Texture texture, Sizei levels, SizedInternalFormat internalformat, Sizei width, Sizei height, Sizei depth) { gl::TextureStorage3D(texture.handle, levels, static_cast<gl::Enum>(internalformat), width, height, depth); }

void TextureStorage3DMultisample(Texture texture, Sizei samples, SizedInternalFormat internalformat, Sizei width, Sizei height, Sizei depth, Boolean fixedsamplelocations) { gl::TextureStorage3DMultisample(texture.handle, samples, static_cast<gl::Enum>(internalformat), width, height, depth, fixedsamplelocations); }

void TextureSubImage1D(Texture texture, Int level, Int xoffset, Sizei width, PixelFormat format, PixelType type, const void* pixels) { gl::TextureSubImage1D(texture.handle, level, xoffset, width, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void TextureSubImage2D(Texture texture, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, PixelFormat format, PixelType type, const void* pixels) { gl::TextureSubImage2D(texture.handle, level, xoffset, yoffset, width, height, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void TextureSubImage3D(Texture texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, PixelFormat format, PixelType type, const void* pixels) { gl::TextureSubImage3D(texture.handle, level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::Enum>(format), static_cast<gl::Enum>(type), pixels); }

void TextureView(Texture texture, TextureTarget target, Texture origtexture, SizedInternalFormat internalformat, Uint minlevel, Uint numlevels, Uint minlayer, Uint numlayers) { gl::TextureView(texture.handle, static_cast<gl::Enum>(target), origtexture.handle, static_cast<gl::Enum>(internalformat), minlevel, numlevels, minlayer, numlayers); }

void TransformFeedbackBufferBase(TransformFeedback xfb, Uint index, Buffer buffer) { gl::TransformFeedbackBufferBase(xfb.handle, index, buffer.handle); }

void TransformFeedbackBufferRange(TransformFeedback xfb, Uint index, Buffer buffer, Intptr offset, Sizeiptr size) { gl::TransformFeedbackBufferRange(xfb.handle, index, buffer.handle, offset, size); }

void TransformFeedbackVaryings(Program program, Sizei count, const Char** varyings, TransformFeedbackBufferMode bufferMode) { gl::TransformFeedbackVaryings(program.handle, count, varyings, static_cast<gl::Enum>(bufferMode)); }

void UniformBlockBinding(Program program, Uint uniformBlockIndex, Uint uniformBlockBinding) { gl::UniformBlockBinding(program.handle, uniformBlockIndex, uniformBlockBinding); }

void UniformSubroutinesuiv(ShaderType shadertype, Sizei count, const Uint* indices) { gl::UniformSubroutinesuiv(static_cast<gl::Enum>(shadertype), count, indices); }

Boolean UnmapBuffer(BufferTargetARB target) { return gl::UnmapBuffer(static_cast<gl::Enum>(target)); }

Boolean UnmapNamedBuffer(Buffer buffer) { return gl::UnmapNamedBuffer(buffer.handle); }

void UseProgram(Program program) { gl::UseProgram(program.handle); }

void UseProgramStages(ProgramPipeline pipeline, UseProgramStageMask stages, Program program) { gl::UseProgramStages(pipeline.handle, static_cast<gl::Enum>(stages), program.handle); }

void ValidateProgram(Program program) { gl::ValidateProgram(program.handle); }

void ValidateProgramPipeline(ProgramPipeline pipeline) { gl::ValidateProgramPipeline(pipeline.handle); }

void VertexArrayAttribBinding(VertexArray vaobj, Uint attribindex, Uint bindingindex) { gl::VertexArrayAttribBinding(vaobj.handle, attribindex, bindingindex); }

void VertexArrayAttribFormat(VertexArray vaobj, Uint attribindex, Int size, VertexAttribType type, Boolean normalized, Uint relativeoffset) { gl::VertexArrayAttribFormat(vaobj.handle, attribindex, size, static_cast<gl::Enum>(type), normalized, relativeoffset); }

void VertexArrayAttribIFormat(VertexArray vaobj, Uint attribindex, Int size, VertexAttribIType type, Uint relativeoffset) { gl::VertexArrayAttribIFormat(vaobj.handle, attribindex, size, static_cast<gl::Enum>(type), relativeoffset); }

void VertexArrayAttribLFormat(VertexArray vaobj, Uint attribindex, Int size, VertexAttribLType type, Uint relativeoffset) { gl::VertexArrayAttribLFormat(vaobj.handle, attribindex, size, static_cast<gl::Enum>(type), relativeoffset); }

void VertexArrayBindingDivisor(VertexArray vaobj, Uint bindingindex, Uint divisor) { gl::VertexArrayBindingDivisor(vaobj.handle, bindingindex, divisor); }

void VertexArrayElementBuffer(VertexArray vaobj, Buffer buffer) { gl::VertexArrayElementBuffer(vaobj.handle, buffer.handle); }

void VertexArrayVertexBuffer(VertexArray vaobj, Uint bindingindex, Buffer buffer, Intptr offset, Sizei stride) { gl::VertexArrayVertexBuffer(vaobj.handle, bindingindex, buffer.handle, offset, stride); }

void VertexArrayVertexBuffers(VertexArray vaobj, Uint first, Sizei count, const Buffer* buffers, const Intptr* offsets, const Sizei* strides) { gl::VertexArrayVertexBuffers(vaobj.handle, first, count, reinterpret_cast<const gl::Uint*>(buffers), offsets, strides); }

void VertexAttribFormat(Uint attribindex, Int size, VertexAttribType type, Boolean normalized, Uint relativeoffset) { gl::VertexAttribFormat(attribindex, size, static_cast<gl::Enum>(type), normalized, relativeoffset); }

void VertexAttribIFormat(Uint attribindex, Int size, VertexAttribIType type, Uint relativeoffset) { gl::VertexAttribIFormat(attribindex, size, static_cast<gl::Enum>(type), relativeoffset); }

void VertexAttribIPointer(Uint index, Int size, VertexAttribIType type, Sizei stride, const void* pointer) { gl::VertexAttribIPointer(index, size, static_cast<gl::Enum>(type), stride, pointer); }

void VertexAttribLFormat(Uint attribindex, Int size, VertexAttribLType type, Uint relativeoffset) { gl::VertexAttribLFormat(attribindex, size, static_cast<gl::Enum>(type), relativeoffset); }

void VertexAttribLPointer(Uint index, Int size, VertexAttribLType type, Sizei stride, const void* pointer) { gl::VertexAttribLPointer(index, size, static_cast<gl::Enum>(type), stride, pointer); }

void VertexAttribP1ui(Uint index, VertexAttribPointerType type, Boolean normalized, Uint value) { gl::VertexAttribP1ui(index, static_cast<gl::Enum>(type), normalized, value); }

void VertexAttribP1uiv(Uint index, VertexAttribPointerType type, Boolean normalized, const Uint* value) { gl::VertexAttribP1uiv(index, static_cast<gl::Enum>(type), normalized, value); }

void VertexAttribP2ui(Uint index, VertexAttribPointerType type, Boolean normalized, Uint value) { gl::VertexAttribP2ui(index, static_cast<gl::Enum>(type), normalized, value); }

void VertexAttribP2uiv(Uint index, VertexAttribPointerType type, Boolean normalized, const Uint* value) { gl::VertexAttribP2uiv(index, static_cast<gl::Enum>(type), normalized, value); }

void VertexAttribP3ui(Uint index, VertexAttribPointerType type, Boolean normalized, Uint value) { gl::VertexAttribP3ui(index, static_cast<gl::Enum>(type), normalized, value); }

void VertexAttribP3uiv(Uint index, VertexAttribPointerType type, Boolean normalized, const Uint* value) { gl::VertexAttribP3uiv(index, static_cast<gl::Enum>(type), normalized, value); }

void VertexAttribP4ui(Uint index, VertexAttribPointerType type, Boolean normalized, Uint value) { gl::VertexAttribP4ui(index, static_cast<gl::Enum>(type), normalized, value); }

void VertexAttribP4uiv(Uint index, VertexAttribPointerType type, Boolean normalized, const Uint* value) { gl::VertexAttribP4uiv(index, static_cast<gl::Enum>(type), normalized, value); }

void VertexAttribPointer(Uint index, Int size, VertexAttribPointerType type, Boolean normalized, Sizei stride, const void* pointer) { gl::VertexAttribPointer(index, size, static_cast<gl::Enum>(type), normalized, stride, pointer); }

void WaitSync(Sync sync, SyncBehaviorFlags flags, Uint64 timeout) { gl::WaitSync(sync.handle, static_cast<gl::Enum>(flags), timeout); }


} // namespace gm


// ============ Loader ============
export namespace gm {

using gl::load;
using gl::LoadProc;
using gl::FUNCTION_COUNT;
using gl::isComplete;

} // namespace gm


// ============ Statistics ============
// Handle types: 12
// Special wrappers: 1
// Enum classes: 107
// Special constants: 8
// Functions wrapped: 494
// Functions re-exported: 162
