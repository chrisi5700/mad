// Auto-generated OpenGL module - do not edit
// OpenGL 4.6 Core Profile

export module gl;

#include <cstdint>
#include <cstddef>

#if defined(_WIN32)
    #define GL_APIENTRYP __stdcall *
#else
    #define GL_APIENTRYP *
#endif


export namespace gl {

using Enum = unsigned int;
using Boolean = unsigned char;
using Bitfield = unsigned int;
using Byte = signed char;
using Ubyte = unsigned char;
using Short = short;
using Ushort = unsigned short;
using Int = int;
using Uint = unsigned int;
using Sizei = int;
using Float = float;
using Clampf = float;
using Double = double;
using Clampd = double;
using Char = char;
using Half = unsigned short;
using Fixed = int;
using Int64 = std::int64_t;
using Uint64 = std::uint64_t;
using Clampx = int;

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1070
using Intptr = long;
using Sizeiptr = long;
#else
using Intptr = std::intptr_t;
using Sizeiptr = std::ptrdiff_t;
#endif

using Sync = struct __GLsync*;
using DebugProc = void (GL_APIENTRYP)(Enum, Enum, Uint, Enum, Sizei, const Char*, const void*);
using EglImageOES = void*;
using EglClientBufferEXT = void*;
using HandleARB = unsigned int;

inline constexpr Boolean TRUE_VALUE = 1;
inline constexpr Boolean FALSE_VALUE = 0;

} // namespace gl


export namespace gl {

inline constexpr Enum ACTIVE_ATOMIC_COUNTER_BUFFERS = 0x92D9;
inline constexpr Enum ACTIVE_ATTRIBUTES = 0x8B89;
inline constexpr Enum ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A;
inline constexpr Enum ACTIVE_PROGRAM = 0x8259;
inline constexpr Enum ACTIVE_RESOURCES = 0x92F5;
inline constexpr Enum ACTIVE_SUBROUTINES = 0x8DE5;
inline constexpr Enum ACTIVE_SUBROUTINE_MAX_LENGTH = 0x8E48;
inline constexpr Enum ACTIVE_SUBROUTINE_UNIFORMS = 0x8DE6;
inline constexpr Enum ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS = 0x8E47;
inline constexpr Enum ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH = 0x8E49;
inline constexpr Enum ACTIVE_TEXTURE = 0x84E0;
inline constexpr Enum ACTIVE_UNIFORMS = 0x8B86;
inline constexpr Enum ACTIVE_UNIFORM_BLOCKS = 0x8A36;
inline constexpr Enum ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35;
inline constexpr Enum ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87;
inline constexpr Enum ACTIVE_VARIABLES = 0x9305;
inline constexpr Enum ALIASED_LINE_WIDTH_RANGE = 0x846E;
inline constexpr Enum ALL_BARRIER_BITS = 0xFFFFFFFF;
inline constexpr Enum ALL_SHADER_BITS = 0xFFFFFFFF;
inline constexpr Enum ALPHA = 0x1906;
inline constexpr Enum ALREADY_SIGNALED = 0x911A;
inline constexpr Enum ALWAYS = 0x0207;
inline constexpr Enum AND = 0x1501;
inline constexpr Enum AND_INVERTED = 0x1504;
inline constexpr Enum AND_REVERSE = 0x1502;
inline constexpr Enum ANY_SAMPLES_PASSED = 0x8C2F;
inline constexpr Enum ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A;
inline constexpr Enum ARRAY_BUFFER = 0x8892;
inline constexpr Enum ARRAY_BUFFER_BINDING = 0x8894;
inline constexpr Enum ARRAY_SIZE = 0x92FB;
inline constexpr Enum ARRAY_STRIDE = 0x92FE;
inline constexpr Enum ATOMIC_COUNTER_BARRIER_BIT = 0x00001000;
inline constexpr Enum ATOMIC_COUNTER_BUFFER = 0x92C0;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS = 0x92C5;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES = 0x92C6;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_BINDING = 0x92C1;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_DATA_SIZE = 0x92C4;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_INDEX = 0x9301;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER = 0x90ED;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER = 0x92CB;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER = 0x92CA;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER = 0x92C8;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x92C9;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER = 0x92C7;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_SIZE = 0x92C3;
inline constexpr Enum ATOMIC_COUNTER_BUFFER_START = 0x92C2;
inline constexpr Enum ATTACHED_SHADERS = 0x8B85;
inline constexpr Enum AUTO_GENERATE_MIPMAP = 0x8295;
inline constexpr Enum BACK = 0x0405;
inline constexpr Enum BACK_LEFT = 0x0402;
inline constexpr Enum BACK_RIGHT = 0x0403;
inline constexpr Enum BGR = 0x80E0;
inline constexpr Enum BGRA = 0x80E1;
inline constexpr Enum BGRA_INTEGER = 0x8D9B;
inline constexpr Enum BGR_INTEGER = 0x8D9A;
inline constexpr Enum BLEND = 0x0BE2;
inline constexpr Enum BLEND_COLOR = 0x8005;
inline constexpr Enum BLEND_DST = 0x0BE0;
inline constexpr Enum BLEND_DST_ALPHA = 0x80CA;
inline constexpr Enum BLEND_DST_RGB = 0x80C8;
inline constexpr Enum BLEND_EQUATION = 0x8009;
inline constexpr Enum BLEND_EQUATION_ALPHA = 0x883D;
inline constexpr Enum BLEND_EQUATION_RGB = 0x8009;
inline constexpr Enum BLEND_SRC = 0x0BE1;
inline constexpr Enum BLEND_SRC_ALPHA = 0x80CB;
inline constexpr Enum BLEND_SRC_RGB = 0x80C9;
inline constexpr Enum BLOCK_INDEX = 0x92FD;
inline constexpr Enum BLUE = 0x1905;
inline constexpr Enum BLUE_INTEGER = 0x8D96;
inline constexpr Enum BOOL = 0x8B56;
inline constexpr Enum BOOL_VEC2 = 0x8B57;
inline constexpr Enum BOOL_VEC3 = 0x8B58;
inline constexpr Enum BOOL_VEC4 = 0x8B59;
inline constexpr Enum BUFFER = 0x82E0;
inline constexpr Enum BUFFER_ACCESS = 0x88BB;
inline constexpr Enum BUFFER_ACCESS_FLAGS = 0x911F;
inline constexpr Enum BUFFER_BINDING = 0x9302;
inline constexpr Enum BUFFER_DATA_SIZE = 0x9303;
inline constexpr Enum BUFFER_IMMUTABLE_STORAGE = 0x821F;
inline constexpr Enum BUFFER_MAPPED = 0x88BC;
inline constexpr Enum BUFFER_MAP_LENGTH = 0x9120;
inline constexpr Enum BUFFER_MAP_OFFSET = 0x9121;
inline constexpr Enum BUFFER_MAP_POINTER = 0x88BD;
inline constexpr Enum BUFFER_SIZE = 0x8764;
inline constexpr Enum BUFFER_STORAGE_FLAGS = 0x8220;
inline constexpr Enum BUFFER_UPDATE_BARRIER_BIT = 0x00000200;
inline constexpr Enum BUFFER_USAGE = 0x8765;
inline constexpr Enum BUFFER_VARIABLE = 0x92E5;
inline constexpr Enum BYTE = 0x1400;
inline constexpr Enum CAVEAT_SUPPORT = 0x82B8;
inline constexpr Enum CCW = 0x0901;
inline constexpr Enum CLAMP_READ_COLOR = 0x891C;
inline constexpr Enum CLAMP_TO_BORDER = 0x812D;
inline constexpr Enum CLAMP_TO_EDGE = 0x812F;
inline constexpr Enum CLEAR = 0x1500;
inline constexpr Enum CLEAR_BUFFER = 0x82B4;
inline constexpr Enum CLEAR_TEXTURE = 0x9365;
inline constexpr Enum CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000;
inline constexpr Enum CLIENT_STORAGE_BIT = 0x0200;
inline constexpr Enum CLIPPING_INPUT_PRIMITIVES = 0x82F6;
inline constexpr Enum CLIPPING_OUTPUT_PRIMITIVES = 0x82F7;
inline constexpr Enum CLIP_DEPTH_MODE = 0x935D;
inline constexpr Enum CLIP_DISTANCE0 = 0x3000;
inline constexpr Enum CLIP_DISTANCE1 = 0x3001;
inline constexpr Enum CLIP_DISTANCE2 = 0x3002;
inline constexpr Enum CLIP_DISTANCE3 = 0x3003;
inline constexpr Enum CLIP_DISTANCE4 = 0x3004;
inline constexpr Enum CLIP_DISTANCE5 = 0x3005;
inline constexpr Enum CLIP_DISTANCE6 = 0x3006;
inline constexpr Enum CLIP_DISTANCE7 = 0x3007;
inline constexpr Enum CLIP_ORIGIN = 0x935C;
inline constexpr Enum COLOR = 0x1800;
inline constexpr Enum COLOR_ATTACHMENT0 = 0x8CE0;
inline constexpr Enum COLOR_ATTACHMENT1 = 0x8CE1;
inline constexpr Enum COLOR_ATTACHMENT10 = 0x8CEA;
inline constexpr Enum COLOR_ATTACHMENT11 = 0x8CEB;
inline constexpr Enum COLOR_ATTACHMENT12 = 0x8CEC;
inline constexpr Enum COLOR_ATTACHMENT13 = 0x8CED;
inline constexpr Enum COLOR_ATTACHMENT14 = 0x8CEE;
inline constexpr Enum COLOR_ATTACHMENT15 = 0x8CEF;
inline constexpr Enum COLOR_ATTACHMENT16 = 0x8CF0;
inline constexpr Enum COLOR_ATTACHMENT17 = 0x8CF1;
inline constexpr Enum COLOR_ATTACHMENT18 = 0x8CF2;
inline constexpr Enum COLOR_ATTACHMENT19 = 0x8CF3;
inline constexpr Enum COLOR_ATTACHMENT2 = 0x8CE2;
inline constexpr Enum COLOR_ATTACHMENT20 = 0x8CF4;
inline constexpr Enum COLOR_ATTACHMENT21 = 0x8CF5;
inline constexpr Enum COLOR_ATTACHMENT22 = 0x8CF6;
inline constexpr Enum COLOR_ATTACHMENT23 = 0x8CF7;
inline constexpr Enum COLOR_ATTACHMENT24 = 0x8CF8;
inline constexpr Enum COLOR_ATTACHMENT25 = 0x8CF9;
inline constexpr Enum COLOR_ATTACHMENT26 = 0x8CFA;
inline constexpr Enum COLOR_ATTACHMENT27 = 0x8CFB;
inline constexpr Enum COLOR_ATTACHMENT28 = 0x8CFC;
inline constexpr Enum COLOR_ATTACHMENT29 = 0x8CFD;
inline constexpr Enum COLOR_ATTACHMENT3 = 0x8CE3;
inline constexpr Enum COLOR_ATTACHMENT30 = 0x8CFE;
inline constexpr Enum COLOR_ATTACHMENT31 = 0x8CFF;
inline constexpr Enum COLOR_ATTACHMENT4 = 0x8CE4;
inline constexpr Enum COLOR_ATTACHMENT5 = 0x8CE5;
inline constexpr Enum COLOR_ATTACHMENT6 = 0x8CE6;
inline constexpr Enum COLOR_ATTACHMENT7 = 0x8CE7;
inline constexpr Enum COLOR_ATTACHMENT8 = 0x8CE8;
inline constexpr Enum COLOR_ATTACHMENT9 = 0x8CE9;
inline constexpr Enum COLOR_BUFFER_BIT = 0x00004000;
inline constexpr Enum COLOR_CLEAR_VALUE = 0x0C22;
inline constexpr Enum COLOR_COMPONENTS = 0x8283;
inline constexpr Enum COLOR_ENCODING = 0x8296;
inline constexpr Enum COLOR_LOGIC_OP = 0x0BF2;
inline constexpr Enum COLOR_RENDERABLE = 0x8286;
inline constexpr Enum COLOR_WRITEMASK = 0x0C23;
inline constexpr Enum COMMAND_BARRIER_BIT = 0x00000040;
inline constexpr Enum COMPARE_REF_TO_TEXTURE = 0x884E;
inline constexpr Enum COMPATIBLE_SUBROUTINES = 0x8E4B;
inline constexpr Enum COMPILE_STATUS = 0x8B81;
inline constexpr Enum COMPRESSED_R11_EAC = 0x9270;
inline constexpr Enum COMPRESSED_RED = 0x8225;
inline constexpr Enum COMPRESSED_RED_RGTC1 = 0x8DBB;
inline constexpr Enum COMPRESSED_RG = 0x8226;
inline constexpr Enum COMPRESSED_RG11_EAC = 0x9272;
inline constexpr Enum COMPRESSED_RGB = 0x84ED;
inline constexpr Enum COMPRESSED_RGB8_ETC2 = 0x9274;
inline constexpr Enum COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276;
inline constexpr Enum COMPRESSED_RGBA = 0x84EE;
inline constexpr Enum COMPRESSED_RGBA8_ETC2_EAC = 0x9278;
inline constexpr Enum COMPRESSED_RGBA_BPTC_UNORM = 0x8E8C;
inline constexpr Enum COMPRESSED_RGB_BPTC_SIGNED_FLOAT = 0x8E8E;
inline constexpr Enum COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = 0x8E8F;
inline constexpr Enum COMPRESSED_RG_RGTC2 = 0x8DBD;
inline constexpr Enum COMPRESSED_SIGNED_R11_EAC = 0x9271;
inline constexpr Enum COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC;
inline constexpr Enum COMPRESSED_SIGNED_RG11_EAC = 0x9273;
inline constexpr Enum COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE;
inline constexpr Enum COMPRESSED_SRGB = 0x8C48;
inline constexpr Enum COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279;
inline constexpr Enum COMPRESSED_SRGB8_ETC2 = 0x9275;
inline constexpr Enum COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277;
inline constexpr Enum COMPRESSED_SRGB_ALPHA = 0x8C49;
inline constexpr Enum COMPRESSED_SRGB_ALPHA_BPTC_UNORM = 0x8E8D;
inline constexpr Enum COMPRESSED_TEXTURE_FORMATS = 0x86A3;
inline constexpr Enum COMPUTE_SHADER = 0x91B9;
inline constexpr Enum COMPUTE_SHADER_BIT = 0x00000020;
inline constexpr Enum COMPUTE_SHADER_INVOCATIONS = 0x82F5;
inline constexpr Enum COMPUTE_SUBROUTINE = 0x92ED;
inline constexpr Enum COMPUTE_SUBROUTINE_UNIFORM = 0x92F3;
inline constexpr Enum COMPUTE_TEXTURE = 0x82A0;
inline constexpr Enum COMPUTE_WORK_GROUP_SIZE = 0x8267;
inline constexpr Enum CONDITION_SATISFIED = 0x911C;
inline constexpr Enum CONSTANT_ALPHA = 0x8003;
inline constexpr Enum CONSTANT_COLOR = 0x8001;
inline constexpr Enum CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002;
inline constexpr Enum CONTEXT_CORE_PROFILE_BIT = 0x00000001;
inline constexpr Enum CONTEXT_FLAGS = 0x821E;
inline constexpr Enum CONTEXT_FLAG_DEBUG_BIT = 0x00000002;
inline constexpr Enum CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001;
inline constexpr Enum CONTEXT_FLAG_NO_ERROR_BIT = 0x00000008;
inline constexpr Enum CONTEXT_FLAG_ROBUST_ACCESS_BIT = 0x00000004;
inline constexpr Enum CONTEXT_LOST = 0x0507;
inline constexpr Enum CONTEXT_PROFILE_MASK = 0x9126;
inline constexpr Enum CONTEXT_RELEASE_BEHAVIOR = 0x82FB;
inline constexpr Enum CONTEXT_RELEASE_BEHAVIOR_FLUSH = 0x82FC;
inline constexpr Enum COPY = 0x1503;
inline constexpr Enum COPY_INVERTED = 0x150C;
inline constexpr Enum COPY_READ_BUFFER = 0x8F36;
inline constexpr Enum COPY_READ_BUFFER_BINDING = 0x8F36;
inline constexpr Enum COPY_WRITE_BUFFER = 0x8F37;
inline constexpr Enum COPY_WRITE_BUFFER_BINDING = 0x8F37;
inline constexpr Enum CULL_FACE = 0x0B44;
inline constexpr Enum CULL_FACE_MODE = 0x0B45;
inline constexpr Enum CURRENT_PROGRAM = 0x8B8D;
inline constexpr Enum CURRENT_QUERY = 0x8865;
inline constexpr Enum CURRENT_VERTEX_ATTRIB = 0x8626;
inline constexpr Enum CW = 0x0900;
inline constexpr Enum DEBUG_CALLBACK_FUNCTION = 0x8244;
inline constexpr Enum DEBUG_CALLBACK_USER_PARAM = 0x8245;
inline constexpr Enum DEBUG_GROUP_STACK_DEPTH = 0x826D;
inline constexpr Enum DEBUG_LOGGED_MESSAGES = 0x9145;
inline constexpr Enum DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 0x8243;
inline constexpr Enum DEBUG_OUTPUT = 0x92E0;
inline constexpr Enum DEBUG_OUTPUT_SYNCHRONOUS = 0x8242;
inline constexpr Enum DEBUG_SEVERITY_HIGH = 0x9146;
inline constexpr Enum DEBUG_SEVERITY_LOW = 0x9148;
inline constexpr Enum DEBUG_SEVERITY_MEDIUM = 0x9147;
inline constexpr Enum DEBUG_SEVERITY_NOTIFICATION = 0x826B;
inline constexpr Enum DEBUG_SOURCE_API = 0x8246;
inline constexpr Enum DEBUG_SOURCE_APPLICATION = 0x824A;
inline constexpr Enum DEBUG_SOURCE_OTHER = 0x824B;
inline constexpr Enum DEBUG_SOURCE_SHADER_COMPILER = 0x8248;
inline constexpr Enum DEBUG_SOURCE_THIRD_PARTY = 0x8249;
inline constexpr Enum DEBUG_SOURCE_WINDOW_SYSTEM = 0x8247;
inline constexpr Enum DEBUG_TYPE_DEPRECATED_BEHAVIOR = 0x824D;
inline constexpr Enum DEBUG_TYPE_ERROR = 0x824C;
inline constexpr Enum DEBUG_TYPE_MARKER = 0x8268;
inline constexpr Enum DEBUG_TYPE_OTHER = 0x8251;
inline constexpr Enum DEBUG_TYPE_PERFORMANCE = 0x8250;
inline constexpr Enum DEBUG_TYPE_POP_GROUP = 0x826A;
inline constexpr Enum DEBUG_TYPE_PORTABILITY = 0x824F;
inline constexpr Enum DEBUG_TYPE_PUSH_GROUP = 0x8269;
inline constexpr Enum DEBUG_TYPE_UNDEFINED_BEHAVIOR = 0x824E;
inline constexpr Enum DECR = 0x1E03;
inline constexpr Enum DECR_WRAP = 0x8508;
inline constexpr Enum DELETE_STATUS = 0x8B80;
inline constexpr Enum DEPTH = 0x1801;
inline constexpr Enum DEPTH24_STENCIL8 = 0x88F0;
inline constexpr Enum DEPTH32F_STENCIL8 = 0x8CAD;
inline constexpr Enum DEPTH_ATTACHMENT = 0x8D00;
inline constexpr Enum DEPTH_BUFFER_BIT = 0x00000100;
inline constexpr Enum DEPTH_CLAMP = 0x864F;
inline constexpr Enum DEPTH_CLEAR_VALUE = 0x0B73;
inline constexpr Enum DEPTH_COMPONENT = 0x1902;
inline constexpr Enum DEPTH_COMPONENT16 = 0x81A5;
inline constexpr Enum DEPTH_COMPONENT24 = 0x81A6;
inline constexpr Enum DEPTH_COMPONENT32 = 0x81A7;
inline constexpr Enum DEPTH_COMPONENT32F = 0x8CAC;
inline constexpr Enum DEPTH_COMPONENTS = 0x8284;
inline constexpr Enum DEPTH_FUNC = 0x0B74;
inline constexpr Enum DEPTH_RANGE = 0x0B70;
inline constexpr Enum DEPTH_RENDERABLE = 0x8287;
inline constexpr Enum DEPTH_STENCIL = 0x84F9;
inline constexpr Enum DEPTH_STENCIL_ATTACHMENT = 0x821A;
inline constexpr Enum DEPTH_STENCIL_TEXTURE_MODE = 0x90EA;
inline constexpr Enum DEPTH_TEST = 0x0B71;
inline constexpr Enum DEPTH_WRITEMASK = 0x0B72;
inline constexpr Enum DISPATCH_INDIRECT_BUFFER = 0x90EE;
inline constexpr Enum DISPATCH_INDIRECT_BUFFER_BINDING = 0x90EF;
inline constexpr Enum DITHER = 0x0BD0;
inline constexpr Enum DONT_CARE = 0x1100;
inline constexpr Enum DOUBLE = 0x140A;
inline constexpr Enum DOUBLEBUFFER = 0x0C32;
inline constexpr Enum DOUBLE_MAT2 = 0x8F46;
inline constexpr Enum DOUBLE_MAT2x3 = 0x8F49;
inline constexpr Enum DOUBLE_MAT2x4 = 0x8F4A;
inline constexpr Enum DOUBLE_MAT3 = 0x8F47;
inline constexpr Enum DOUBLE_MAT3x2 = 0x8F4B;
inline constexpr Enum DOUBLE_MAT3x4 = 0x8F4C;
inline constexpr Enum DOUBLE_MAT4 = 0x8F48;
inline constexpr Enum DOUBLE_MAT4x2 = 0x8F4D;
inline constexpr Enum DOUBLE_MAT4x3 = 0x8F4E;
inline constexpr Enum DOUBLE_VEC2 = 0x8FFC;
inline constexpr Enum DOUBLE_VEC3 = 0x8FFD;
inline constexpr Enum DOUBLE_VEC4 = 0x8FFE;
inline constexpr Enum DRAW_BUFFER = 0x0C01;
inline constexpr Enum DRAW_BUFFER0 = 0x8825;
inline constexpr Enum DRAW_BUFFER1 = 0x8826;
inline constexpr Enum DRAW_BUFFER10 = 0x882F;
inline constexpr Enum DRAW_BUFFER11 = 0x8830;
inline constexpr Enum DRAW_BUFFER12 = 0x8831;
inline constexpr Enum DRAW_BUFFER13 = 0x8832;
inline constexpr Enum DRAW_BUFFER14 = 0x8833;
inline constexpr Enum DRAW_BUFFER15 = 0x8834;
inline constexpr Enum DRAW_BUFFER2 = 0x8827;
inline constexpr Enum DRAW_BUFFER3 = 0x8828;
inline constexpr Enum DRAW_BUFFER4 = 0x8829;
inline constexpr Enum DRAW_BUFFER5 = 0x882A;
inline constexpr Enum DRAW_BUFFER6 = 0x882B;
inline constexpr Enum DRAW_BUFFER7 = 0x882C;
inline constexpr Enum DRAW_BUFFER8 = 0x882D;
inline constexpr Enum DRAW_BUFFER9 = 0x882E;
inline constexpr Enum DRAW_FRAMEBUFFER = 0x8CA9;
inline constexpr Enum DRAW_FRAMEBUFFER_BINDING = 0x8CA6;
inline constexpr Enum DRAW_INDIRECT_BUFFER = 0x8F3F;
inline constexpr Enum DRAW_INDIRECT_BUFFER_BINDING = 0x8F43;
inline constexpr Enum DST_ALPHA = 0x0304;
inline constexpr Enum DST_COLOR = 0x0306;
inline constexpr Enum DYNAMIC_COPY = 0x88EA;
inline constexpr Enum DYNAMIC_DRAW = 0x88E8;
inline constexpr Enum DYNAMIC_READ = 0x88E9;
inline constexpr Enum DYNAMIC_STORAGE_BIT = 0x0100;
inline constexpr Enum ELEMENT_ARRAY_BARRIER_BIT = 0x00000002;
inline constexpr Enum ELEMENT_ARRAY_BUFFER = 0x8893;
inline constexpr Enum ELEMENT_ARRAY_BUFFER_BINDING = 0x8895;
inline constexpr Enum EQUAL = 0x0202;
inline constexpr Enum EQUIV = 0x1509;
inline constexpr Enum EXTENSIONS = 0x1F03;
inline constexpr Enum FALSE = 0;
inline constexpr Enum FASTEST = 0x1101;
inline constexpr Enum FILL = 0x1B02;
inline constexpr Enum FILTER = 0x829A;
inline constexpr Enum FIRST_VERTEX_CONVENTION = 0x8E4D;
inline constexpr Enum FIXED = 0x140C;
inline constexpr Enum FIXED_ONLY = 0x891D;
inline constexpr Enum FLOAT = 0x1406;
inline constexpr Enum FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD;
inline constexpr Enum FLOAT_MAT2 = 0x8B5A;
inline constexpr Enum FLOAT_MAT2x3 = 0x8B65;
inline constexpr Enum FLOAT_MAT2x4 = 0x8B66;
inline constexpr Enum FLOAT_MAT3 = 0x8B5B;
inline constexpr Enum FLOAT_MAT3x2 = 0x8B67;
inline constexpr Enum FLOAT_MAT3x4 = 0x8B68;
inline constexpr Enum FLOAT_MAT4 = 0x8B5C;
inline constexpr Enum FLOAT_MAT4x2 = 0x8B69;
inline constexpr Enum FLOAT_MAT4x3 = 0x8B6A;
inline constexpr Enum FLOAT_VEC2 = 0x8B50;
inline constexpr Enum FLOAT_VEC3 = 0x8B51;
inline constexpr Enum FLOAT_VEC4 = 0x8B52;
inline constexpr Enum FRACTIONAL_EVEN = 0x8E7C;
inline constexpr Enum FRACTIONAL_ODD = 0x8E7B;
inline constexpr Enum FRAGMENT_INTERPOLATION_OFFSET_BITS = 0x8E5D;
inline constexpr Enum FRAGMENT_SHADER = 0x8B30;
inline constexpr Enum FRAGMENT_SHADER_BIT = 0x00000002;
inline constexpr Enum FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B;
inline constexpr Enum FRAGMENT_SHADER_INVOCATIONS = 0x82F4;
inline constexpr Enum FRAGMENT_SUBROUTINE = 0x92EC;
inline constexpr Enum FRAGMENT_SUBROUTINE_UNIFORM = 0x92F2;
inline constexpr Enum FRAGMENT_TEXTURE = 0x829F;
inline constexpr Enum FRAMEBUFFER = 0x8D40;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_LAYERED = 0x8DA7;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4;
inline constexpr Enum FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2;
inline constexpr Enum FRAMEBUFFER_BARRIER_BIT = 0x00000400;
inline constexpr Enum FRAMEBUFFER_BINDING = 0x8CA6;
inline constexpr Enum FRAMEBUFFER_BLEND = 0x828B;
inline constexpr Enum FRAMEBUFFER_COMPLETE = 0x8CD5;
inline constexpr Enum FRAMEBUFFER_DEFAULT = 0x8218;
inline constexpr Enum FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = 0x9314;
inline constexpr Enum FRAMEBUFFER_DEFAULT_HEIGHT = 0x9311;
inline constexpr Enum FRAMEBUFFER_DEFAULT_LAYERS = 0x9312;
inline constexpr Enum FRAMEBUFFER_DEFAULT_SAMPLES = 0x9313;
inline constexpr Enum FRAMEBUFFER_DEFAULT_WIDTH = 0x9310;
inline constexpr Enum FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6;
inline constexpr Enum FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = 0x8CDB;
inline constexpr Enum FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = 0x8DA8;
inline constexpr Enum FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7;
inline constexpr Enum FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56;
inline constexpr Enum FRAMEBUFFER_INCOMPLETE_READ_BUFFER = 0x8CDC;
inline constexpr Enum FRAMEBUFFER_RENDERABLE = 0x8289;
inline constexpr Enum FRAMEBUFFER_RENDERABLE_LAYERED = 0x828A;
inline constexpr Enum FRAMEBUFFER_SRGB = 0x8DB9;
inline constexpr Enum FRAMEBUFFER_UNDEFINED = 0x8219;
inline constexpr Enum FRAMEBUFFER_UNSUPPORTED = 0x8CDD;
inline constexpr Enum FRONT = 0x0404;
inline constexpr Enum FRONT_AND_BACK = 0x0408;
inline constexpr Enum FRONT_FACE = 0x0B46;
inline constexpr Enum FRONT_LEFT = 0x0400;
inline constexpr Enum FRONT_RIGHT = 0x0401;
inline constexpr Enum FULL_SUPPORT = 0x82B7;
inline constexpr Enum FUNC_ADD = 0x8006;
inline constexpr Enum FUNC_REVERSE_SUBTRACT = 0x800B;
inline constexpr Enum FUNC_SUBTRACT = 0x800A;
inline constexpr Enum GEOMETRY_INPUT_TYPE = 0x8917;
inline constexpr Enum GEOMETRY_OUTPUT_TYPE = 0x8918;
inline constexpr Enum GEOMETRY_SHADER = 0x8DD9;
inline constexpr Enum GEOMETRY_SHADER_BIT = 0x00000004;
inline constexpr Enum GEOMETRY_SHADER_INVOCATIONS = 0x887F;
inline constexpr Enum GEOMETRY_SHADER_PRIMITIVES_EMITTED = 0x82F3;
inline constexpr Enum GEOMETRY_SUBROUTINE = 0x92EB;
inline constexpr Enum GEOMETRY_SUBROUTINE_UNIFORM = 0x92F1;
inline constexpr Enum GEOMETRY_TEXTURE = 0x829E;
inline constexpr Enum GEOMETRY_VERTICES_OUT = 0x8916;
inline constexpr Enum GEQUAL = 0x0206;
inline constexpr Enum GET_TEXTURE_IMAGE_FORMAT = 0x8291;
inline constexpr Enum GET_TEXTURE_IMAGE_TYPE = 0x8292;
inline constexpr Enum GREATER = 0x0204;
inline constexpr Enum GREEN = 0x1904;
inline constexpr Enum GREEN_INTEGER = 0x8D95;
inline constexpr Enum GUILTY_CONTEXT_RESET = 0x8253;
inline constexpr Enum HALF_FLOAT = 0x140B;
inline constexpr Enum HIGH_FLOAT = 0x8DF2;
inline constexpr Enum HIGH_INT = 0x8DF5;
inline constexpr Enum IMAGE_1D = 0x904C;
inline constexpr Enum IMAGE_1D_ARRAY = 0x9052;
inline constexpr Enum IMAGE_2D = 0x904D;
inline constexpr Enum IMAGE_2D_ARRAY = 0x9053;
inline constexpr Enum IMAGE_2D_MULTISAMPLE = 0x9055;
inline constexpr Enum IMAGE_2D_MULTISAMPLE_ARRAY = 0x9056;
inline constexpr Enum IMAGE_2D_RECT = 0x904F;
inline constexpr Enum IMAGE_3D = 0x904E;
inline constexpr Enum IMAGE_BINDING_ACCESS = 0x8F3E;
inline constexpr Enum IMAGE_BINDING_FORMAT = 0x906E;
inline constexpr Enum IMAGE_BINDING_LAYER = 0x8F3D;
inline constexpr Enum IMAGE_BINDING_LAYERED = 0x8F3C;
inline constexpr Enum IMAGE_BINDING_LEVEL = 0x8F3B;
inline constexpr Enum IMAGE_BINDING_NAME = 0x8F3A;
inline constexpr Enum IMAGE_BUFFER = 0x9051;
inline constexpr Enum IMAGE_CLASS_10_10_10_2 = 0x82C3;
inline constexpr Enum IMAGE_CLASS_11_11_10 = 0x82C2;
inline constexpr Enum IMAGE_CLASS_1_X_16 = 0x82BE;
inline constexpr Enum IMAGE_CLASS_1_X_32 = 0x82BB;
inline constexpr Enum IMAGE_CLASS_1_X_8 = 0x82C1;
inline constexpr Enum IMAGE_CLASS_2_X_16 = 0x82BD;
inline constexpr Enum IMAGE_CLASS_2_X_32 = 0x82BA;
inline constexpr Enum IMAGE_CLASS_2_X_8 = 0x82C0;
inline constexpr Enum IMAGE_CLASS_4_X_16 = 0x82BC;
inline constexpr Enum IMAGE_CLASS_4_X_32 = 0x82B9;
inline constexpr Enum IMAGE_CLASS_4_X_8 = 0x82BF;
inline constexpr Enum IMAGE_COMPATIBILITY_CLASS = 0x82A8;
inline constexpr Enum IMAGE_CUBE = 0x9050;
inline constexpr Enum IMAGE_CUBE_MAP_ARRAY = 0x9054;
inline constexpr Enum IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = 0x90C9;
inline constexpr Enum IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = 0x90C8;
inline constexpr Enum IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7;
inline constexpr Enum IMAGE_PIXEL_FORMAT = 0x82A9;
inline constexpr Enum IMAGE_PIXEL_TYPE = 0x82AA;
inline constexpr Enum IMAGE_TEXEL_SIZE = 0x82A7;
inline constexpr Enum IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B;
inline constexpr Enum IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A;
inline constexpr Enum INCR = 0x1E02;
inline constexpr Enum INCR_WRAP = 0x8507;
inline constexpr Enum INFO_LOG_LENGTH = 0x8B84;
inline constexpr Enum INNOCENT_CONTEXT_RESET = 0x8254;
inline constexpr Enum INT = 0x1404;
inline constexpr Enum INTERLEAVED_ATTRIBS = 0x8C8C;
inline constexpr Enum INTERNALFORMAT_ALPHA_SIZE = 0x8274;
inline constexpr Enum INTERNALFORMAT_ALPHA_TYPE = 0x827B;
inline constexpr Enum INTERNALFORMAT_BLUE_SIZE = 0x8273;
inline constexpr Enum INTERNALFORMAT_BLUE_TYPE = 0x827A;
inline constexpr Enum INTERNALFORMAT_DEPTH_SIZE = 0x8275;
inline constexpr Enum INTERNALFORMAT_DEPTH_TYPE = 0x827C;
inline constexpr Enum INTERNALFORMAT_GREEN_SIZE = 0x8272;
inline constexpr Enum INTERNALFORMAT_GREEN_TYPE = 0x8279;
inline constexpr Enum INTERNALFORMAT_PREFERRED = 0x8270;
inline constexpr Enum INTERNALFORMAT_RED_SIZE = 0x8271;
inline constexpr Enum INTERNALFORMAT_RED_TYPE = 0x8278;
inline constexpr Enum INTERNALFORMAT_SHARED_SIZE = 0x8277;
inline constexpr Enum INTERNALFORMAT_STENCIL_SIZE = 0x8276;
inline constexpr Enum INTERNALFORMAT_STENCIL_TYPE = 0x827D;
inline constexpr Enum INTERNALFORMAT_SUPPORTED = 0x826F;
inline constexpr Enum INT_2_10_10_10_REV = 0x8D9F;
inline constexpr Enum INT_IMAGE_1D = 0x9057;
inline constexpr Enum INT_IMAGE_1D_ARRAY = 0x905D;
inline constexpr Enum INT_IMAGE_2D = 0x9058;
inline constexpr Enum INT_IMAGE_2D_ARRAY = 0x905E;
inline constexpr Enum INT_IMAGE_2D_MULTISAMPLE = 0x9060;
inline constexpr Enum INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9061;
inline constexpr Enum INT_IMAGE_2D_RECT = 0x905A;
inline constexpr Enum INT_IMAGE_3D = 0x9059;
inline constexpr Enum INT_IMAGE_BUFFER = 0x905C;
inline constexpr Enum INT_IMAGE_CUBE = 0x905B;
inline constexpr Enum INT_IMAGE_CUBE_MAP_ARRAY = 0x905F;
inline constexpr Enum INT_SAMPLER_1D = 0x8DC9;
inline constexpr Enum INT_SAMPLER_1D_ARRAY = 0x8DCE;
inline constexpr Enum INT_SAMPLER_2D = 0x8DCA;
inline constexpr Enum INT_SAMPLER_2D_ARRAY = 0x8DCF;
inline constexpr Enum INT_SAMPLER_2D_MULTISAMPLE = 0x9109;
inline constexpr Enum INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910C;
inline constexpr Enum INT_SAMPLER_2D_RECT = 0x8DCD;
inline constexpr Enum INT_SAMPLER_3D = 0x8DCB;
inline constexpr Enum INT_SAMPLER_BUFFER = 0x8DD0;
inline constexpr Enum INT_SAMPLER_CUBE = 0x8DCC;
inline constexpr Enum INT_SAMPLER_CUBE_MAP_ARRAY = 0x900E;
inline constexpr Enum INT_VEC2 = 0x8B53;
inline constexpr Enum INT_VEC3 = 0x8B54;
inline constexpr Enum INT_VEC4 = 0x8B55;
inline constexpr Enum INVALID_ENUM = 0x0500;
inline constexpr Enum INVALID_FRAMEBUFFER_OPERATION = 0x0506;
inline constexpr Enum INVALID_INDEX = 0xFFFFFFFF;
inline constexpr Enum INVALID_OPERATION = 0x0502;
inline constexpr Enum INVALID_VALUE = 0x0501;
inline constexpr Enum INVERT = 0x150A;
inline constexpr Enum ISOLINES = 0x8E7A;
inline constexpr Enum IS_PER_PATCH = 0x92E7;
inline constexpr Enum IS_ROW_MAJOR = 0x9300;
inline constexpr Enum KEEP = 0x1E00;
inline constexpr Enum LAST_VERTEX_CONVENTION = 0x8E4E;
inline constexpr Enum LAYER_PROVOKING_VERTEX = 0x825E;
inline constexpr Enum LEFT = 0x0406;
inline constexpr Enum LEQUAL = 0x0203;
inline constexpr Enum LESS = 0x0201;
inline constexpr Enum LINE = 0x1B01;
inline constexpr Enum LINEAR = 0x2601;
inline constexpr Enum LINEAR_MIPMAP_LINEAR = 0x2703;
inline constexpr Enum LINEAR_MIPMAP_NEAREST = 0x2701;
inline constexpr Enum LINES = 0x0001;
inline constexpr Enum LINES_ADJACENCY = 0x000A;
inline constexpr Enum LINE_LOOP = 0x0002;
inline constexpr Enum LINE_SMOOTH = 0x0B20;
inline constexpr Enum LINE_SMOOTH_HINT = 0x0C52;
inline constexpr Enum LINE_STRIP = 0x0003;
inline constexpr Enum LINE_STRIP_ADJACENCY = 0x000B;
inline constexpr Enum LINE_WIDTH = 0x0B21;
inline constexpr Enum LINE_WIDTH_GRANULARITY = 0x0B23;
inline constexpr Enum LINE_WIDTH_RANGE = 0x0B22;
inline constexpr Enum LINK_STATUS = 0x8B82;
inline constexpr Enum LOCATION = 0x930E;
inline constexpr Enum LOCATION_COMPONENT = 0x934A;
inline constexpr Enum LOCATION_INDEX = 0x930F;
inline constexpr Enum LOGIC_OP_MODE = 0x0BF0;
inline constexpr Enum LOSE_CONTEXT_ON_RESET = 0x8252;
inline constexpr Enum LOWER_LEFT = 0x8CA1;
inline constexpr Enum LOW_FLOAT = 0x8DF0;
inline constexpr Enum LOW_INT = 0x8DF3;
inline constexpr Enum MAJOR_VERSION = 0x821B;
inline constexpr Enum MANUAL_GENERATE_MIPMAP = 0x8294;
inline constexpr Enum MAP_COHERENT_BIT = 0x0080;
inline constexpr Enum MAP_FLUSH_EXPLICIT_BIT = 0x0010;
inline constexpr Enum MAP_INVALIDATE_BUFFER_BIT = 0x0008;
inline constexpr Enum MAP_INVALIDATE_RANGE_BIT = 0x0004;
inline constexpr Enum MAP_PERSISTENT_BIT = 0x0040;
inline constexpr Enum MAP_READ_BIT = 0x0001;
inline constexpr Enum MAP_UNSYNCHRONIZED_BIT = 0x0020;
inline constexpr Enum MAP_WRITE_BIT = 0x0002;
inline constexpr Enum MATRIX_STRIDE = 0x92FF;
inline constexpr Enum MAX = 0x8008;
inline constexpr Enum MAX_3D_TEXTURE_SIZE = 0x8073;
inline constexpr Enum MAX_ARRAY_TEXTURE_LAYERS = 0x88FF;
inline constexpr Enum MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = 0x92DC;
inline constexpr Enum MAX_ATOMIC_COUNTER_BUFFER_SIZE = 0x92D8;
inline constexpr Enum MAX_CLIP_DISTANCES = 0x0D32;
inline constexpr Enum MAX_COLOR_ATTACHMENTS = 0x8CDF;
inline constexpr Enum MAX_COLOR_TEXTURE_SAMPLES = 0x910E;
inline constexpr Enum MAX_COMBINED_ATOMIC_COUNTERS = 0x92D7;
inline constexpr Enum MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = 0x92D1;
inline constexpr Enum MAX_COMBINED_CLIP_AND_CULL_DISTANCES = 0x82FA;
inline constexpr Enum MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = 0x8266;
inline constexpr Enum MAX_COMBINED_DIMENSIONS = 0x8282;
inline constexpr Enum MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33;
inline constexpr Enum MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32;
inline constexpr Enum MAX_COMBINED_IMAGE_UNIFORMS = 0x90CF;
inline constexpr Enum MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = 0x8F39;
inline constexpr Enum MAX_COMBINED_SHADER_OUTPUT_RESOURCES = 0x8F39;
inline constexpr Enum MAX_COMBINED_SHADER_STORAGE_BLOCKS = 0x90DC;
inline constexpr Enum MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E1E;
inline constexpr Enum MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E1F;
inline constexpr Enum MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D;
inline constexpr Enum MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E;
inline constexpr Enum MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31;
inline constexpr Enum MAX_COMPUTE_ATOMIC_COUNTERS = 0x8265;
inline constexpr Enum MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = 0x8264;
inline constexpr Enum MAX_COMPUTE_IMAGE_UNIFORMS = 0x91BD;
inline constexpr Enum MAX_COMPUTE_SHADER_STORAGE_BLOCKS = 0x90DB;
inline constexpr Enum MAX_COMPUTE_SHARED_MEMORY_SIZE = 0x8262;
inline constexpr Enum MAX_COMPUTE_TEXTURE_IMAGE_UNITS = 0x91BC;
inline constexpr Enum MAX_COMPUTE_UNIFORM_BLOCKS = 0x91BB;
inline constexpr Enum MAX_COMPUTE_UNIFORM_COMPONENTS = 0x8263;
inline constexpr Enum MAX_COMPUTE_WORK_GROUP_COUNT = 0x91BE;
inline constexpr Enum MAX_COMPUTE_WORK_GROUP_INVOCATIONS = 0x90EB;
inline constexpr Enum MAX_COMPUTE_WORK_GROUP_SIZE = 0x91BF;
inline constexpr Enum MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C;
inline constexpr Enum MAX_CULL_DISTANCES = 0x82F9;
inline constexpr Enum MAX_DEBUG_GROUP_STACK_DEPTH = 0x826C;
inline constexpr Enum MAX_DEBUG_LOGGED_MESSAGES = 0x9144;
inline constexpr Enum MAX_DEBUG_MESSAGE_LENGTH = 0x9143;
inline constexpr Enum MAX_DEPTH = 0x8280;
inline constexpr Enum MAX_DEPTH_TEXTURE_SAMPLES = 0x910F;
inline constexpr Enum MAX_DRAW_BUFFERS = 0x8824;
inline constexpr Enum MAX_DUAL_SOURCE_DRAW_BUFFERS = 0x88FC;
inline constexpr Enum MAX_ELEMENTS_INDICES = 0x80E9;
inline constexpr Enum MAX_ELEMENTS_VERTICES = 0x80E8;
inline constexpr Enum MAX_ELEMENT_INDEX = 0x8D6B;
inline constexpr Enum MAX_FRAGMENT_ATOMIC_COUNTERS = 0x92D6;
inline constexpr Enum MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = 0x92D0;
inline constexpr Enum MAX_FRAGMENT_IMAGE_UNIFORMS = 0x90CE;
inline constexpr Enum MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125;
inline constexpr Enum MAX_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5C;
inline constexpr Enum MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = 0x90DA;
inline constexpr Enum MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D;
inline constexpr Enum MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49;
inline constexpr Enum MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD;
inline constexpr Enum MAX_FRAMEBUFFER_HEIGHT = 0x9316;
inline constexpr Enum MAX_FRAMEBUFFER_LAYERS = 0x9317;
inline constexpr Enum MAX_FRAMEBUFFER_SAMPLES = 0x9318;
inline constexpr Enum MAX_FRAMEBUFFER_WIDTH = 0x9315;
inline constexpr Enum MAX_GEOMETRY_ATOMIC_COUNTERS = 0x92D5;
inline constexpr Enum MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = 0x92CF;
inline constexpr Enum MAX_GEOMETRY_IMAGE_UNIFORMS = 0x90CD;
inline constexpr Enum MAX_GEOMETRY_INPUT_COMPONENTS = 0x9123;
inline constexpr Enum MAX_GEOMETRY_OUTPUT_COMPONENTS = 0x9124;
inline constexpr Enum MAX_GEOMETRY_OUTPUT_VERTICES = 0x8DE0;
inline constexpr Enum MAX_GEOMETRY_SHADER_INVOCATIONS = 0x8E5A;
inline constexpr Enum MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = 0x90D7;
inline constexpr Enum MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = 0x8C29;
inline constexpr Enum MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = 0x8DE1;
inline constexpr Enum MAX_GEOMETRY_UNIFORM_BLOCKS = 0x8A2C;
inline constexpr Enum MAX_GEOMETRY_UNIFORM_COMPONENTS = 0x8DDF;
inline constexpr Enum MAX_HEIGHT = 0x827F;
inline constexpr Enum MAX_IMAGE_SAMPLES = 0x906D;
inline constexpr Enum MAX_IMAGE_UNITS = 0x8F38;
inline constexpr Enum MAX_INTEGER_SAMPLES = 0x9110;
inline constexpr Enum MAX_LABEL_LENGTH = 0x82E8;
inline constexpr Enum MAX_LAYERS = 0x8281;
inline constexpr Enum MAX_NAME_LENGTH = 0x92F6;
inline constexpr Enum MAX_NUM_ACTIVE_VARIABLES = 0x92F7;
inline constexpr Enum MAX_NUM_COMPATIBLE_SUBROUTINES = 0x92F8;
inline constexpr Enum MAX_PATCH_VERTICES = 0x8E7D;
inline constexpr Enum MAX_PROGRAM_TEXEL_OFFSET = 0x8905;
inline constexpr Enum MAX_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5F;
inline constexpr Enum MAX_RECTANGLE_TEXTURE_SIZE = 0x84F8;
inline constexpr Enum MAX_RENDERBUFFER_SIZE = 0x84E8;
inline constexpr Enum MAX_SAMPLES = 0x8D57;
inline constexpr Enum MAX_SAMPLE_MASK_WORDS = 0x8E59;
inline constexpr Enum MAX_SERVER_WAIT_TIMEOUT = 0x9111;
inline constexpr Enum MAX_SHADER_STORAGE_BLOCK_SIZE = 0x90DE;
inline constexpr Enum MAX_SHADER_STORAGE_BUFFER_BINDINGS = 0x90DD;
inline constexpr Enum MAX_SUBROUTINES = 0x8DE7;
inline constexpr Enum MAX_SUBROUTINE_UNIFORM_LOCATIONS = 0x8DE8;
inline constexpr Enum MAX_TESS_CONTROL_ATOMIC_COUNTERS = 0x92D3;
inline constexpr Enum MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = 0x92CD;
inline constexpr Enum MAX_TESS_CONTROL_IMAGE_UNIFORMS = 0x90CB;
inline constexpr Enum MAX_TESS_CONTROL_INPUT_COMPONENTS = 0x886C;
inline constexpr Enum MAX_TESS_CONTROL_OUTPUT_COMPONENTS = 0x8E83;
inline constexpr Enum MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = 0x90D8;
inline constexpr Enum MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = 0x8E81;
inline constexpr Enum MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = 0x8E85;
inline constexpr Enum MAX_TESS_CONTROL_UNIFORM_BLOCKS = 0x8E89;
inline constexpr Enum MAX_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E7F;
inline constexpr Enum MAX_TESS_EVALUATION_ATOMIC_COUNTERS = 0x92D4;
inline constexpr Enum MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = 0x92CE;
inline constexpr Enum MAX_TESS_EVALUATION_IMAGE_UNIFORMS = 0x90CC;
inline constexpr Enum MAX_TESS_EVALUATION_INPUT_COMPONENTS = 0x886D;
inline constexpr Enum MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = 0x8E86;
inline constexpr Enum MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = 0x90D9;
inline constexpr Enum MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = 0x8E82;
inline constexpr Enum MAX_TESS_EVALUATION_UNIFORM_BLOCKS = 0x8E8A;
inline constexpr Enum MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E80;
inline constexpr Enum MAX_TESS_GEN_LEVEL = 0x8E7E;
inline constexpr Enum MAX_TESS_PATCH_COMPONENTS = 0x8E84;
inline constexpr Enum MAX_TEXTURE_BUFFER_SIZE = 0x8C2B;
inline constexpr Enum MAX_TEXTURE_IMAGE_UNITS = 0x8872;
inline constexpr Enum MAX_TEXTURE_LOD_BIAS = 0x84FD;
inline constexpr Enum MAX_TEXTURE_MAX_ANISOTROPY = 0x84FF;
inline constexpr Enum MAX_TEXTURE_SIZE = 0x0D33;
inline constexpr Enum MAX_TRANSFORM_FEEDBACK_BUFFERS = 0x8E70;
inline constexpr Enum MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A;
inline constexpr Enum MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B;
inline constexpr Enum MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80;
inline constexpr Enum MAX_UNIFORM_BLOCK_SIZE = 0x8A30;
inline constexpr Enum MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F;
inline constexpr Enum MAX_UNIFORM_LOCATIONS = 0x826E;
inline constexpr Enum MAX_VARYING_COMPONENTS = 0x8B4B;
inline constexpr Enum MAX_VARYING_FLOATS = 0x8B4B;
inline constexpr Enum MAX_VARYING_VECTORS = 0x8DFC;
inline constexpr Enum MAX_VERTEX_ATOMIC_COUNTERS = 0x92D2;
inline constexpr Enum MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = 0x92CC;
inline constexpr Enum MAX_VERTEX_ATTRIBS = 0x8869;
inline constexpr Enum MAX_VERTEX_ATTRIB_BINDINGS = 0x82DA;
inline constexpr Enum MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D9;
inline constexpr Enum MAX_VERTEX_ATTRIB_STRIDE = 0x82E5;
inline constexpr Enum MAX_VERTEX_IMAGE_UNIFORMS = 0x90CA;
inline constexpr Enum MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122;
inline constexpr Enum MAX_VERTEX_SHADER_STORAGE_BLOCKS = 0x90D6;
inline constexpr Enum MAX_VERTEX_STREAMS = 0x8E71;
inline constexpr Enum MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C;
inline constexpr Enum MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B;
inline constexpr Enum MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A;
inline constexpr Enum MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB;
inline constexpr Enum MAX_VIEWPORTS = 0x825B;
inline constexpr Enum MAX_VIEWPORT_DIMS = 0x0D3A;
inline constexpr Enum MAX_WIDTH = 0x827E;
inline constexpr Enum MEDIUM_FLOAT = 0x8DF1;
inline constexpr Enum MEDIUM_INT = 0x8DF4;
inline constexpr Enum MIN = 0x8007;
inline constexpr Enum MINOR_VERSION = 0x821C;
inline constexpr Enum MIN_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5B;
inline constexpr Enum MIN_MAP_BUFFER_ALIGNMENT = 0x90BC;
inline constexpr Enum MIN_PROGRAM_TEXEL_OFFSET = 0x8904;
inline constexpr Enum MIN_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5E;
inline constexpr Enum MIN_SAMPLE_SHADING_VALUE = 0x8C37;
inline constexpr Enum MIPMAP = 0x8293;
inline constexpr Enum MIRRORED_REPEAT = 0x8370;
inline constexpr Enum MIRROR_CLAMP_TO_EDGE = 0x8743;
inline constexpr Enum MULTISAMPLE = 0x809D;
inline constexpr Enum NAME_LENGTH = 0x92F9;
inline constexpr Enum NAND = 0x150E;
inline constexpr Enum NEAREST = 0x2600;
inline constexpr Enum NEAREST_MIPMAP_LINEAR = 0x2702;
inline constexpr Enum NEAREST_MIPMAP_NEAREST = 0x2700;
inline constexpr Enum NEGATIVE_ONE_TO_ONE = 0x935E;
inline constexpr Enum NEVER = 0x0200;
inline constexpr Enum NICEST = 0x1102;
inline constexpr Enum NONE = 0;
inline constexpr Enum NOOP = 0x1505;
inline constexpr Enum NOR = 0x1508;
inline constexpr Enum NOTEQUAL = 0x0205;
inline constexpr Enum NO_ERROR = 0;
inline constexpr Enum NO_RESET_NOTIFICATION = 0x8261;
inline constexpr Enum NUM_ACTIVE_VARIABLES = 0x9304;
inline constexpr Enum NUM_COMPATIBLE_SUBROUTINES = 0x8E4A;
inline constexpr Enum NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2;
inline constexpr Enum NUM_EXTENSIONS = 0x821D;
inline constexpr Enum NUM_PROGRAM_BINARY_FORMATS = 0x87FE;
inline constexpr Enum NUM_SAMPLE_COUNTS = 0x9380;
inline constexpr Enum NUM_SHADER_BINARY_FORMATS = 0x8DF9;
inline constexpr Enum NUM_SHADING_LANGUAGE_VERSIONS = 0x82E9;
inline constexpr Enum NUM_SPIR_V_EXTENSIONS = 0x9554;
inline constexpr Enum OBJECT_TYPE = 0x9112;
inline constexpr Enum OFFSET = 0x92FC;
inline constexpr Enum ONE = 1;
inline constexpr Enum ONE_MINUS_CONSTANT_ALPHA = 0x8004;
inline constexpr Enum ONE_MINUS_CONSTANT_COLOR = 0x8002;
inline constexpr Enum ONE_MINUS_DST_ALPHA = 0x0305;
inline constexpr Enum ONE_MINUS_DST_COLOR = 0x0307;
inline constexpr Enum ONE_MINUS_SRC1_ALPHA = 0x88FB;
inline constexpr Enum ONE_MINUS_SRC1_COLOR = 0x88FA;
inline constexpr Enum ONE_MINUS_SRC_ALPHA = 0x0303;
inline constexpr Enum ONE_MINUS_SRC_COLOR = 0x0301;
inline constexpr Enum OR = 0x1507;
inline constexpr Enum OR_INVERTED = 0x150D;
inline constexpr Enum OR_REVERSE = 0x150B;
inline constexpr Enum OUT_OF_MEMORY = 0x0505;
inline constexpr Enum PACK_ALIGNMENT = 0x0D05;
inline constexpr Enum PACK_COMPRESSED_BLOCK_DEPTH = 0x912D;
inline constexpr Enum PACK_COMPRESSED_BLOCK_HEIGHT = 0x912C;
inline constexpr Enum PACK_COMPRESSED_BLOCK_SIZE = 0x912E;
inline constexpr Enum PACK_COMPRESSED_BLOCK_WIDTH = 0x912B;
inline constexpr Enum PACK_IMAGE_HEIGHT = 0x806C;
inline constexpr Enum PACK_LSB_FIRST = 0x0D01;
inline constexpr Enum PACK_ROW_LENGTH = 0x0D02;
inline constexpr Enum PACK_SKIP_IMAGES = 0x806B;
inline constexpr Enum PACK_SKIP_PIXELS = 0x0D04;
inline constexpr Enum PACK_SKIP_ROWS = 0x0D03;
inline constexpr Enum PACK_SWAP_BYTES = 0x0D00;
inline constexpr Enum PARAMETER_BUFFER = 0x80EE;
inline constexpr Enum PARAMETER_BUFFER_BINDING = 0x80EF;
inline constexpr Enum PATCHES = 0x000E;
inline constexpr Enum PATCH_DEFAULT_INNER_LEVEL = 0x8E73;
inline constexpr Enum PATCH_DEFAULT_OUTER_LEVEL = 0x8E74;
inline constexpr Enum PATCH_VERTICES = 0x8E72;
inline constexpr Enum PIXEL_BUFFER_BARRIER_BIT = 0x00000080;
inline constexpr Enum PIXEL_PACK_BUFFER = 0x88EB;
inline constexpr Enum PIXEL_PACK_BUFFER_BINDING = 0x88ED;
inline constexpr Enum PIXEL_UNPACK_BUFFER = 0x88EC;
inline constexpr Enum PIXEL_UNPACK_BUFFER_BINDING = 0x88EF;
inline constexpr Enum POINT = 0x1B00;
inline constexpr Enum POINTS = 0x0000;
inline constexpr Enum POINT_FADE_THRESHOLD_SIZE = 0x8128;
inline constexpr Enum POINT_SIZE = 0x0B11;
inline constexpr Enum POINT_SIZE_GRANULARITY = 0x0B13;
inline constexpr Enum POINT_SIZE_RANGE = 0x0B12;
inline constexpr Enum POINT_SPRITE_COORD_ORIGIN = 0x8CA0;
inline constexpr Enum POLYGON_MODE = 0x0B40;
inline constexpr Enum POLYGON_OFFSET_CLAMP = 0x8E1B;
inline constexpr Enum POLYGON_OFFSET_FACTOR = 0x8038;
inline constexpr Enum POLYGON_OFFSET_FILL = 0x8037;
inline constexpr Enum POLYGON_OFFSET_LINE = 0x2A02;
inline constexpr Enum POLYGON_OFFSET_POINT = 0x2A01;
inline constexpr Enum POLYGON_OFFSET_UNITS = 0x2A00;
inline constexpr Enum POLYGON_SMOOTH = 0x0B41;
inline constexpr Enum POLYGON_SMOOTH_HINT = 0x0C53;
inline constexpr Enum PRIMITIVES_GENERATED = 0x8C87;
inline constexpr Enum PRIMITIVES_SUBMITTED = 0x82EF;
inline constexpr Enum PRIMITIVE_RESTART = 0x8F9D;
inline constexpr Enum PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69;
inline constexpr Enum PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = 0x8221;
inline constexpr Enum PRIMITIVE_RESTART_INDEX = 0x8F9E;
inline constexpr Enum PROGRAM = 0x82E2;
inline constexpr Enum PROGRAM_BINARY_FORMATS = 0x87FF;
inline constexpr Enum PROGRAM_BINARY_LENGTH = 0x8741;
inline constexpr Enum PROGRAM_BINARY_RETRIEVABLE_HINT = 0x8257;
inline constexpr Enum PROGRAM_INPUT = 0x92E3;
inline constexpr Enum PROGRAM_OUTPUT = 0x92E4;
inline constexpr Enum PROGRAM_PIPELINE = 0x82E4;
inline constexpr Enum PROGRAM_PIPELINE_BINDING = 0x825A;
inline constexpr Enum PROGRAM_POINT_SIZE = 0x8642;
inline constexpr Enum PROGRAM_SEPARABLE = 0x8258;
inline constexpr Enum PROVOKING_VERTEX = 0x8E4F;
inline constexpr Enum PROXY_TEXTURE_1D = 0x8063;
inline constexpr Enum PROXY_TEXTURE_1D_ARRAY = 0x8C19;
inline constexpr Enum PROXY_TEXTURE_2D = 0x8064;
inline constexpr Enum PROXY_TEXTURE_2D_ARRAY = 0x8C1B;
inline constexpr Enum PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101;
inline constexpr Enum PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9103;
inline constexpr Enum PROXY_TEXTURE_3D = 0x8070;
inline constexpr Enum PROXY_TEXTURE_CUBE_MAP = 0x851B;
inline constexpr Enum PROXY_TEXTURE_CUBE_MAP_ARRAY = 0x900B;
inline constexpr Enum PROXY_TEXTURE_RECTANGLE = 0x84F7;
inline constexpr Enum QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = 0x8E4C;
inline constexpr Enum QUERY = 0x82E3;
inline constexpr Enum QUERY_BUFFER = 0x9192;
inline constexpr Enum QUERY_BUFFER_BARRIER_BIT = 0x00008000;
inline constexpr Enum QUERY_BUFFER_BINDING = 0x9193;
inline constexpr Enum QUERY_BY_REGION_NO_WAIT = 0x8E16;
inline constexpr Enum QUERY_BY_REGION_NO_WAIT_INVERTED = 0x8E1A;
inline constexpr Enum QUERY_BY_REGION_WAIT = 0x8E15;
inline constexpr Enum QUERY_BY_REGION_WAIT_INVERTED = 0x8E19;
inline constexpr Enum QUERY_COUNTER_BITS = 0x8864;
inline constexpr Enum QUERY_NO_WAIT = 0x8E14;
inline constexpr Enum QUERY_NO_WAIT_INVERTED = 0x8E18;
inline constexpr Enum QUERY_RESULT = 0x8866;
inline constexpr Enum QUERY_RESULT_AVAILABLE = 0x8867;
inline constexpr Enum QUERY_RESULT_NO_WAIT = 0x9194;
inline constexpr Enum QUERY_TARGET = 0x82EA;
inline constexpr Enum QUERY_WAIT = 0x8E13;
inline constexpr Enum QUERY_WAIT_INVERTED = 0x8E17;
inline constexpr Enum R11F_G11F_B10F = 0x8C3A;
inline constexpr Enum R16 = 0x822A;
inline constexpr Enum R16F = 0x822D;
inline constexpr Enum R16I = 0x8233;
inline constexpr Enum R16UI = 0x8234;
inline constexpr Enum R16_SNORM = 0x8F98;
inline constexpr Enum R32F = 0x822E;
inline constexpr Enum R32I = 0x8235;
inline constexpr Enum R32UI = 0x8236;
inline constexpr Enum R3_G3_B2 = 0x2A10;
inline constexpr Enum R8 = 0x8229;
inline constexpr Enum R8I = 0x8231;
inline constexpr Enum R8UI = 0x8232;
inline constexpr Enum R8_SNORM = 0x8F94;
inline constexpr Enum RASTERIZER_DISCARD = 0x8C89;
inline constexpr Enum READ_BUFFER = 0x0C02;
inline constexpr Enum READ_FRAMEBUFFER = 0x8CA8;
inline constexpr Enum READ_FRAMEBUFFER_BINDING = 0x8CAA;
inline constexpr Enum READ_ONLY = 0x88B8;
inline constexpr Enum READ_PIXELS = 0x828C;
inline constexpr Enum READ_PIXELS_FORMAT = 0x828D;
inline constexpr Enum READ_PIXELS_TYPE = 0x828E;
inline constexpr Enum READ_WRITE = 0x88BA;
inline constexpr Enum RED = 0x1903;
inline constexpr Enum RED_INTEGER = 0x8D94;
inline constexpr Enum REFERENCED_BY_COMPUTE_SHADER = 0x930B;
inline constexpr Enum REFERENCED_BY_FRAGMENT_SHADER = 0x930A;
inline constexpr Enum REFERENCED_BY_GEOMETRY_SHADER = 0x9309;
inline constexpr Enum REFERENCED_BY_TESS_CONTROL_SHADER = 0x9307;
inline constexpr Enum REFERENCED_BY_TESS_EVALUATION_SHADER = 0x9308;
inline constexpr Enum REFERENCED_BY_VERTEX_SHADER = 0x9306;
inline constexpr Enum RENDERBUFFER = 0x8D41;
inline constexpr Enum RENDERBUFFER_ALPHA_SIZE = 0x8D53;
inline constexpr Enum RENDERBUFFER_BINDING = 0x8CA7;
inline constexpr Enum RENDERBUFFER_BLUE_SIZE = 0x8D52;
inline constexpr Enum RENDERBUFFER_DEPTH_SIZE = 0x8D54;
inline constexpr Enum RENDERBUFFER_GREEN_SIZE = 0x8D51;
inline constexpr Enum RENDERBUFFER_HEIGHT = 0x8D43;
inline constexpr Enum RENDERBUFFER_INTERNAL_FORMAT = 0x8D44;
inline constexpr Enum RENDERBUFFER_RED_SIZE = 0x8D50;
inline constexpr Enum RENDERBUFFER_SAMPLES = 0x8CAB;
inline constexpr Enum RENDERBUFFER_STENCIL_SIZE = 0x8D55;
inline constexpr Enum RENDERBUFFER_WIDTH = 0x8D42;
inline constexpr Enum RENDERER = 0x1F01;
inline constexpr Enum REPEAT = 0x2901;
inline constexpr Enum REPLACE = 0x1E01;
inline constexpr Enum RESET_NOTIFICATION_STRATEGY = 0x8256;
inline constexpr Enum RG = 0x8227;
inline constexpr Enum RG16 = 0x822C;
inline constexpr Enum RG16F = 0x822F;
inline constexpr Enum RG16I = 0x8239;
inline constexpr Enum RG16UI = 0x823A;
inline constexpr Enum RG16_SNORM = 0x8F99;
inline constexpr Enum RG32F = 0x8230;
inline constexpr Enum RG32I = 0x823B;
inline constexpr Enum RG32UI = 0x823C;
inline constexpr Enum RG8 = 0x822B;
inline constexpr Enum RG8I = 0x8237;
inline constexpr Enum RG8UI = 0x8238;
inline constexpr Enum RG8_SNORM = 0x8F95;
inline constexpr Enum RGB = 0x1907;
inline constexpr Enum RGB10 = 0x8052;
inline constexpr Enum RGB10_A2 = 0x8059;
inline constexpr Enum RGB10_A2UI = 0x906F;
inline constexpr Enum RGB12 = 0x8053;
inline constexpr Enum RGB16 = 0x8054;
inline constexpr Enum RGB16F = 0x881B;
inline constexpr Enum RGB16I = 0x8D89;
inline constexpr Enum RGB16UI = 0x8D77;
inline constexpr Enum RGB16_SNORM = 0x8F9A;
inline constexpr Enum RGB32F = 0x8815;
inline constexpr Enum RGB32I = 0x8D83;
inline constexpr Enum RGB32UI = 0x8D71;
inline constexpr Enum RGB4 = 0x804F;
inline constexpr Enum RGB5 = 0x8050;
inline constexpr Enum RGB565 = 0x8D62;
inline constexpr Enum RGB5_A1 = 0x8057;
inline constexpr Enum RGB8 = 0x8051;
inline constexpr Enum RGB8I = 0x8D8F;
inline constexpr Enum RGB8UI = 0x8D7D;
inline constexpr Enum RGB8_SNORM = 0x8F96;
inline constexpr Enum RGB9_E5 = 0x8C3D;
inline constexpr Enum RGBA = 0x1908;
inline constexpr Enum RGBA12 = 0x805A;
inline constexpr Enum RGBA16 = 0x805B;
inline constexpr Enum RGBA16F = 0x881A;
inline constexpr Enum RGBA16I = 0x8D88;
inline constexpr Enum RGBA16UI = 0x8D76;
inline constexpr Enum RGBA16_SNORM = 0x8F9B;
inline constexpr Enum RGBA2 = 0x8055;
inline constexpr Enum RGBA32F = 0x8814;
inline constexpr Enum RGBA32I = 0x8D82;
inline constexpr Enum RGBA32UI = 0x8D70;
inline constexpr Enum RGBA4 = 0x8056;
inline constexpr Enum RGBA8 = 0x8058;
inline constexpr Enum RGBA8I = 0x8D8E;
inline constexpr Enum RGBA8UI = 0x8D7C;
inline constexpr Enum RGBA8_SNORM = 0x8F97;
inline constexpr Enum RGBA_INTEGER = 0x8D99;
inline constexpr Enum RGB_INTEGER = 0x8D98;
inline constexpr Enum RG_INTEGER = 0x8228;
inline constexpr Enum RIGHT = 0x0407;
inline constexpr Enum SAMPLER = 0x82E6;
inline constexpr Enum SAMPLER_1D = 0x8B5D;
inline constexpr Enum SAMPLER_1D_ARRAY = 0x8DC0;
inline constexpr Enum SAMPLER_1D_ARRAY_SHADOW = 0x8DC3;
inline constexpr Enum SAMPLER_1D_SHADOW = 0x8B61;
inline constexpr Enum SAMPLER_2D = 0x8B5E;
inline constexpr Enum SAMPLER_2D_ARRAY = 0x8DC1;
inline constexpr Enum SAMPLER_2D_ARRAY_SHADOW = 0x8DC4;
inline constexpr Enum SAMPLER_2D_MULTISAMPLE = 0x9108;
inline constexpr Enum SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910B;
inline constexpr Enum SAMPLER_2D_RECT = 0x8B63;
inline constexpr Enum SAMPLER_2D_RECT_SHADOW = 0x8B64;
inline constexpr Enum SAMPLER_2D_SHADOW = 0x8B62;
inline constexpr Enum SAMPLER_3D = 0x8B5F;
inline constexpr Enum SAMPLER_BINDING = 0x8919;
inline constexpr Enum SAMPLER_BUFFER = 0x8DC2;
inline constexpr Enum SAMPLER_CUBE = 0x8B60;
inline constexpr Enum SAMPLER_CUBE_MAP_ARRAY = 0x900C;
inline constexpr Enum SAMPLER_CUBE_MAP_ARRAY_SHADOW = 0x900D;
inline constexpr Enum SAMPLER_CUBE_SHADOW = 0x8DC5;
inline constexpr Enum SAMPLES = 0x80A9;
inline constexpr Enum SAMPLES_PASSED = 0x8914;
inline constexpr Enum SAMPLE_ALPHA_TO_COVERAGE = 0x809E;
inline constexpr Enum SAMPLE_ALPHA_TO_ONE = 0x809F;
inline constexpr Enum SAMPLE_BUFFERS = 0x80A8;
inline constexpr Enum SAMPLE_COVERAGE = 0x80A0;
inline constexpr Enum SAMPLE_COVERAGE_INVERT = 0x80AB;
inline constexpr Enum SAMPLE_COVERAGE_VALUE = 0x80AA;
inline constexpr Enum SAMPLE_MASK = 0x8E51;
inline constexpr Enum SAMPLE_MASK_VALUE = 0x8E52;
inline constexpr Enum SAMPLE_POSITION = 0x8E50;
inline constexpr Enum SAMPLE_SHADING = 0x8C36;
inline constexpr Enum SCISSOR_BOX = 0x0C10;
inline constexpr Enum SCISSOR_TEST = 0x0C11;
inline constexpr Enum SEPARATE_ATTRIBS = 0x8C8D;
inline constexpr Enum SET = 0x150F;
inline constexpr Enum SHADER = 0x82E1;
inline constexpr Enum SHADER_BINARY_FORMATS = 0x8DF8;
inline constexpr Enum SHADER_BINARY_FORMAT_SPIR_V = 0x9551;
inline constexpr Enum SHADER_COMPILER = 0x8DFA;
inline constexpr Enum SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020;
inline constexpr Enum SHADER_IMAGE_ATOMIC = 0x82A6;
inline constexpr Enum SHADER_IMAGE_LOAD = 0x82A4;
inline constexpr Enum SHADER_IMAGE_STORE = 0x82A5;
inline constexpr Enum SHADER_SOURCE_LENGTH = 0x8B88;
inline constexpr Enum SHADER_STORAGE_BARRIER_BIT = 0x00002000;
inline constexpr Enum SHADER_STORAGE_BLOCK = 0x92E6;
inline constexpr Enum SHADER_STORAGE_BUFFER = 0x90D2;
inline constexpr Enum SHADER_STORAGE_BUFFER_BINDING = 0x90D3;
inline constexpr Enum SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = 0x90DF;
inline constexpr Enum SHADER_STORAGE_BUFFER_SIZE = 0x90D5;
inline constexpr Enum SHADER_STORAGE_BUFFER_START = 0x90D4;
inline constexpr Enum SHADER_TYPE = 0x8B4F;
inline constexpr Enum SHADING_LANGUAGE_VERSION = 0x8B8C;
inline constexpr Enum SHORT = 0x1402;
inline constexpr Enum SIGNALED = 0x9119;
inline constexpr Enum SIGNED_NORMALIZED = 0x8F9C;
inline constexpr Enum SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = 0x82AC;
inline constexpr Enum SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = 0x82AE;
inline constexpr Enum SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = 0x82AD;
inline constexpr Enum SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = 0x82AF;
inline constexpr Enum SMOOTH_LINE_WIDTH_GRANULARITY = 0x0B23;
inline constexpr Enum SMOOTH_LINE_WIDTH_RANGE = 0x0B22;
inline constexpr Enum SMOOTH_POINT_SIZE_GRANULARITY = 0x0B13;
inline constexpr Enum SMOOTH_POINT_SIZE_RANGE = 0x0B12;
inline constexpr Enum SPIR_V_BINARY = 0x9552;
inline constexpr Enum SPIR_V_EXTENSIONS = 0x9553;
inline constexpr Enum SRC1_ALPHA = 0x8589;
inline constexpr Enum SRC1_COLOR = 0x88F9;
inline constexpr Enum SRC_ALPHA = 0x0302;
inline constexpr Enum SRC_ALPHA_SATURATE = 0x0308;
inline constexpr Enum SRC_COLOR = 0x0300;
inline constexpr Enum SRGB = 0x8C40;
inline constexpr Enum SRGB8 = 0x8C41;
inline constexpr Enum SRGB8_ALPHA8 = 0x8C43;
inline constexpr Enum SRGB_ALPHA = 0x8C42;
inline constexpr Enum SRGB_READ = 0x8297;
inline constexpr Enum SRGB_WRITE = 0x8298;
inline constexpr Enum STATIC_COPY = 0x88E6;
inline constexpr Enum STATIC_DRAW = 0x88E4;
inline constexpr Enum STATIC_READ = 0x88E5;
inline constexpr Enum STENCIL = 0x1802;
inline constexpr Enum STENCIL_ATTACHMENT = 0x8D20;
inline constexpr Enum STENCIL_BACK_FAIL = 0x8801;
inline constexpr Enum STENCIL_BACK_FUNC = 0x8800;
inline constexpr Enum STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802;
inline constexpr Enum STENCIL_BACK_PASS_DEPTH_PASS = 0x8803;
inline constexpr Enum STENCIL_BACK_REF = 0x8CA3;
inline constexpr Enum STENCIL_BACK_VALUE_MASK = 0x8CA4;
inline constexpr Enum STENCIL_BACK_WRITEMASK = 0x8CA5;
inline constexpr Enum STENCIL_BUFFER_BIT = 0x00000400;
inline constexpr Enum STENCIL_CLEAR_VALUE = 0x0B91;
inline constexpr Enum STENCIL_COMPONENTS = 0x8285;
inline constexpr Enum STENCIL_FAIL = 0x0B94;
inline constexpr Enum STENCIL_FUNC = 0x0B92;
inline constexpr Enum STENCIL_INDEX = 0x1901;
inline constexpr Enum STENCIL_INDEX1 = 0x8D46;
inline constexpr Enum STENCIL_INDEX16 = 0x8D49;
inline constexpr Enum STENCIL_INDEX4 = 0x8D47;
inline constexpr Enum STENCIL_INDEX8 = 0x8D48;
inline constexpr Enum STENCIL_PASS_DEPTH_FAIL = 0x0B95;
inline constexpr Enum STENCIL_PASS_DEPTH_PASS = 0x0B96;
inline constexpr Enum STENCIL_REF = 0x0B97;
inline constexpr Enum STENCIL_RENDERABLE = 0x8288;
inline constexpr Enum STENCIL_TEST = 0x0B90;
inline constexpr Enum STENCIL_VALUE_MASK = 0x0B93;
inline constexpr Enum STENCIL_WRITEMASK = 0x0B98;
inline constexpr Enum STEREO = 0x0C33;
inline constexpr Enum STREAM_COPY = 0x88E2;
inline constexpr Enum STREAM_DRAW = 0x88E0;
inline constexpr Enum STREAM_READ = 0x88E1;
inline constexpr Enum SUBPIXEL_BITS = 0x0D50;
inline constexpr Enum SYNC_CONDITION = 0x9113;
inline constexpr Enum SYNC_FENCE = 0x9116;
inline constexpr Enum SYNC_FLAGS = 0x9115;
inline constexpr Enum SYNC_FLUSH_COMMANDS_BIT = 0x00000001;
inline constexpr Enum SYNC_GPU_COMMANDS_COMPLETE = 0x9117;
inline constexpr Enum SYNC_STATUS = 0x9114;
inline constexpr Enum TESS_CONTROL_OUTPUT_VERTICES = 0x8E75;
inline constexpr Enum TESS_CONTROL_SHADER = 0x8E88;
inline constexpr Enum TESS_CONTROL_SHADER_BIT = 0x00000008;
inline constexpr Enum TESS_CONTROL_SHADER_PATCHES = 0x82F1;
inline constexpr Enum TESS_CONTROL_SUBROUTINE = 0x92E9;
inline constexpr Enum TESS_CONTROL_SUBROUTINE_UNIFORM = 0x92EF;
inline constexpr Enum TESS_CONTROL_TEXTURE = 0x829C;
inline constexpr Enum TESS_EVALUATION_SHADER = 0x8E87;
inline constexpr Enum TESS_EVALUATION_SHADER_BIT = 0x00000010;
inline constexpr Enum TESS_EVALUATION_SHADER_INVOCATIONS = 0x82F2;
inline constexpr Enum TESS_EVALUATION_SUBROUTINE = 0x92EA;
inline constexpr Enum TESS_EVALUATION_SUBROUTINE_UNIFORM = 0x92F0;
inline constexpr Enum TESS_EVALUATION_TEXTURE = 0x829D;
inline constexpr Enum TESS_GEN_MODE = 0x8E76;
inline constexpr Enum TESS_GEN_POINT_MODE = 0x8E79;
inline constexpr Enum TESS_GEN_SPACING = 0x8E77;
inline constexpr Enum TESS_GEN_VERTEX_ORDER = 0x8E78;
inline constexpr Enum TEXTURE = 0x1702;
inline constexpr Enum TEXTURE0 = 0x84C0;
inline constexpr Enum TEXTURE1 = 0x84C1;
inline constexpr Enum TEXTURE10 = 0x84CA;
inline constexpr Enum TEXTURE11 = 0x84CB;
inline constexpr Enum TEXTURE12 = 0x84CC;
inline constexpr Enum TEXTURE13 = 0x84CD;
inline constexpr Enum TEXTURE14 = 0x84CE;
inline constexpr Enum TEXTURE15 = 0x84CF;
inline constexpr Enum TEXTURE16 = 0x84D0;
inline constexpr Enum TEXTURE17 = 0x84D1;
inline constexpr Enum TEXTURE18 = 0x84D2;
inline constexpr Enum TEXTURE19 = 0x84D3;
inline constexpr Enum TEXTURE2 = 0x84C2;
inline constexpr Enum TEXTURE20 = 0x84D4;
inline constexpr Enum TEXTURE21 = 0x84D5;
inline constexpr Enum TEXTURE22 = 0x84D6;
inline constexpr Enum TEXTURE23 = 0x84D7;
inline constexpr Enum TEXTURE24 = 0x84D8;
inline constexpr Enum TEXTURE25 = 0x84D9;
inline constexpr Enum TEXTURE26 = 0x84DA;
inline constexpr Enum TEXTURE27 = 0x84DB;
inline constexpr Enum TEXTURE28 = 0x84DC;
inline constexpr Enum TEXTURE29 = 0x84DD;
inline constexpr Enum TEXTURE3 = 0x84C3;
inline constexpr Enum TEXTURE30 = 0x84DE;
inline constexpr Enum TEXTURE31 = 0x84DF;
inline constexpr Enum TEXTURE4 = 0x84C4;
inline constexpr Enum TEXTURE5 = 0x84C5;
inline constexpr Enum TEXTURE6 = 0x84C6;
inline constexpr Enum TEXTURE7 = 0x84C7;
inline constexpr Enum TEXTURE8 = 0x84C8;
inline constexpr Enum TEXTURE9 = 0x84C9;
inline constexpr Enum TEXTURE_1D = 0x0DE0;
inline constexpr Enum TEXTURE_1D_ARRAY = 0x8C18;
inline constexpr Enum TEXTURE_2D = 0x0DE1;
inline constexpr Enum TEXTURE_2D_ARRAY = 0x8C1A;
inline constexpr Enum TEXTURE_2D_MULTISAMPLE = 0x9100;
inline constexpr Enum TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102;
inline constexpr Enum TEXTURE_3D = 0x806F;
inline constexpr Enum TEXTURE_ALPHA_SIZE = 0x805F;
inline constexpr Enum TEXTURE_ALPHA_TYPE = 0x8C13;
inline constexpr Enum TEXTURE_BASE_LEVEL = 0x813C;
inline constexpr Enum TEXTURE_BINDING_1D = 0x8068;
inline constexpr Enum TEXTURE_BINDING_1D_ARRAY = 0x8C1C;
inline constexpr Enum TEXTURE_BINDING_2D = 0x8069;
inline constexpr Enum TEXTURE_BINDING_2D_ARRAY = 0x8C1D;
inline constexpr Enum TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104;
inline constexpr Enum TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = 0x9105;
inline constexpr Enum TEXTURE_BINDING_3D = 0x806A;
inline constexpr Enum TEXTURE_BINDING_BUFFER = 0x8C2C;
inline constexpr Enum TEXTURE_BINDING_CUBE_MAP = 0x8514;
inline constexpr Enum TEXTURE_BINDING_CUBE_MAP_ARRAY = 0x900A;
inline constexpr Enum TEXTURE_BINDING_RECTANGLE = 0x84F6;
inline constexpr Enum TEXTURE_BLUE_SIZE = 0x805E;
inline constexpr Enum TEXTURE_BLUE_TYPE = 0x8C12;
inline constexpr Enum TEXTURE_BORDER_COLOR = 0x1004;
inline constexpr Enum TEXTURE_BUFFER = 0x8C2A;
inline constexpr Enum TEXTURE_BUFFER_BINDING = 0x8C2A;
inline constexpr Enum TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D;
inline constexpr Enum TEXTURE_BUFFER_OFFSET = 0x919D;
inline constexpr Enum TEXTURE_BUFFER_OFFSET_ALIGNMENT = 0x919F;
inline constexpr Enum TEXTURE_BUFFER_SIZE = 0x919E;
inline constexpr Enum TEXTURE_COMPARE_FUNC = 0x884D;
inline constexpr Enum TEXTURE_COMPARE_MODE = 0x884C;
inline constexpr Enum TEXTURE_COMPRESSED = 0x86A1;
inline constexpr Enum TEXTURE_COMPRESSED_BLOCK_HEIGHT = 0x82B2;
inline constexpr Enum TEXTURE_COMPRESSED_BLOCK_SIZE = 0x82B3;
inline constexpr Enum TEXTURE_COMPRESSED_BLOCK_WIDTH = 0x82B1;
inline constexpr Enum TEXTURE_COMPRESSED_IMAGE_SIZE = 0x86A0;
inline constexpr Enum TEXTURE_COMPRESSION_HINT = 0x84EF;
inline constexpr Enum TEXTURE_CUBE_MAP = 0x8513;
inline constexpr Enum TEXTURE_CUBE_MAP_ARRAY = 0x9009;
inline constexpr Enum TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516;
inline constexpr Enum TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518;
inline constexpr Enum TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A;
inline constexpr Enum TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515;
inline constexpr Enum TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517;
inline constexpr Enum TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519;
inline constexpr Enum TEXTURE_CUBE_MAP_SEAMLESS = 0x884F;
inline constexpr Enum TEXTURE_DEPTH = 0x8071;
inline constexpr Enum TEXTURE_DEPTH_SIZE = 0x884A;
inline constexpr Enum TEXTURE_DEPTH_TYPE = 0x8C16;
inline constexpr Enum TEXTURE_FETCH_BARRIER_BIT = 0x00000008;
inline constexpr Enum TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107;
inline constexpr Enum TEXTURE_GATHER = 0x82A2;
inline constexpr Enum TEXTURE_GATHER_SHADOW = 0x82A3;
inline constexpr Enum TEXTURE_GREEN_SIZE = 0x805D;
inline constexpr Enum TEXTURE_GREEN_TYPE = 0x8C11;
inline constexpr Enum TEXTURE_HEIGHT = 0x1001;
inline constexpr Enum TEXTURE_IMAGE_FORMAT = 0x828F;
inline constexpr Enum TEXTURE_IMAGE_TYPE = 0x8290;
inline constexpr Enum TEXTURE_IMMUTABLE_FORMAT = 0x912F;
inline constexpr Enum TEXTURE_IMMUTABLE_LEVELS = 0x82DF;
inline constexpr Enum TEXTURE_INTERNAL_FORMAT = 0x1003;
inline constexpr Enum TEXTURE_LOD_BIAS = 0x8501;
inline constexpr Enum TEXTURE_MAG_FILTER = 0x2800;
inline constexpr Enum TEXTURE_MAX_ANISOTROPY = 0x84FE;
inline constexpr Enum TEXTURE_MAX_LEVEL = 0x813D;
inline constexpr Enum TEXTURE_MAX_LOD = 0x813B;
inline constexpr Enum TEXTURE_MIN_FILTER = 0x2801;
inline constexpr Enum TEXTURE_MIN_LOD = 0x813A;
inline constexpr Enum TEXTURE_RECTANGLE = 0x84F5;
inline constexpr Enum TEXTURE_RED_SIZE = 0x805C;
inline constexpr Enum TEXTURE_RED_TYPE = 0x8C10;
inline constexpr Enum TEXTURE_SAMPLES = 0x9106;
inline constexpr Enum TEXTURE_SHADOW = 0x82A1;
inline constexpr Enum TEXTURE_SHARED_SIZE = 0x8C3F;
inline constexpr Enum TEXTURE_STENCIL_SIZE = 0x88F1;
inline constexpr Enum TEXTURE_SWIZZLE_A = 0x8E45;
inline constexpr Enum TEXTURE_SWIZZLE_B = 0x8E44;
inline constexpr Enum TEXTURE_SWIZZLE_G = 0x8E43;
inline constexpr Enum TEXTURE_SWIZZLE_R = 0x8E42;
inline constexpr Enum TEXTURE_SWIZZLE_RGBA = 0x8E46;
inline constexpr Enum TEXTURE_TARGET = 0x1006;
inline constexpr Enum TEXTURE_UPDATE_BARRIER_BIT = 0x00000100;
inline constexpr Enum TEXTURE_VIEW = 0x82B5;
inline constexpr Enum TEXTURE_VIEW_MIN_LAYER = 0x82DD;
inline constexpr Enum TEXTURE_VIEW_MIN_LEVEL = 0x82DB;
inline constexpr Enum TEXTURE_VIEW_NUM_LAYERS = 0x82DE;
inline constexpr Enum TEXTURE_VIEW_NUM_LEVELS = 0x82DC;
inline constexpr Enum TEXTURE_WIDTH = 0x1000;
inline constexpr Enum TEXTURE_WRAP_R = 0x8072;
inline constexpr Enum TEXTURE_WRAP_S = 0x2802;
inline constexpr Enum TEXTURE_WRAP_T = 0x2803;
inline constexpr Enum TIMEOUT_EXPIRED = 0x911B;
inline constexpr Enum TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFF;
inline constexpr Enum TIMESTAMP = 0x8E28;
inline constexpr Enum TIME_ELAPSED = 0x88BF;
inline constexpr Enum TOP_LEVEL_ARRAY_SIZE = 0x930C;
inline constexpr Enum TOP_LEVEL_ARRAY_STRIDE = 0x930D;
inline constexpr Enum TRANSFORM_FEEDBACK = 0x8E22;
inline constexpr Enum TRANSFORM_FEEDBACK_ACTIVE = 0x8E24;
inline constexpr Enum TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800;
inline constexpr Enum TRANSFORM_FEEDBACK_BINDING = 0x8E25;
inline constexpr Enum TRANSFORM_FEEDBACK_BUFFER = 0x8C8E;
inline constexpr Enum TRANSFORM_FEEDBACK_BUFFER_ACTIVE = 0x8E24;
inline constexpr Enum TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F;
inline constexpr Enum TRANSFORM_FEEDBACK_BUFFER_INDEX = 0x934B;
inline constexpr Enum TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F;
inline constexpr Enum TRANSFORM_FEEDBACK_BUFFER_PAUSED = 0x8E23;
inline constexpr Enum TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85;
inline constexpr Enum TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84;
inline constexpr Enum TRANSFORM_FEEDBACK_BUFFER_STRIDE = 0x934C;
inline constexpr Enum TRANSFORM_FEEDBACK_OVERFLOW = 0x82EC;
inline constexpr Enum TRANSFORM_FEEDBACK_PAUSED = 0x8E23;
inline constexpr Enum TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88;
inline constexpr Enum TRANSFORM_FEEDBACK_STREAM_OVERFLOW = 0x82ED;
inline constexpr Enum TRANSFORM_FEEDBACK_VARYING = 0x92F4;
inline constexpr Enum TRANSFORM_FEEDBACK_VARYINGS = 0x8C83;
inline constexpr Enum TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76;
inline constexpr Enum TRIANGLES = 0x0004;
inline constexpr Enum TRIANGLES_ADJACENCY = 0x000C;
inline constexpr Enum TRIANGLE_FAN = 0x0006;
inline constexpr Enum TRIANGLE_STRIP = 0x0005;
inline constexpr Enum TRIANGLE_STRIP_ADJACENCY = 0x000D;
inline constexpr Enum TRUE = 1;
inline constexpr Enum TYPE = 0x92FA;
inline constexpr Enum UNDEFINED_VERTEX = 0x8260;
inline constexpr Enum UNIFORM = 0x92E1;
inline constexpr Enum UNIFORM_ARRAY_STRIDE = 0x8A3C;
inline constexpr Enum UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX = 0x92DA;
inline constexpr Enum UNIFORM_BARRIER_BIT = 0x00000004;
inline constexpr Enum UNIFORM_BLOCK = 0x92E2;
inline constexpr Enum UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42;
inline constexpr Enum UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43;
inline constexpr Enum UNIFORM_BLOCK_BINDING = 0x8A3F;
inline constexpr Enum UNIFORM_BLOCK_DATA_SIZE = 0x8A40;
inline constexpr Enum UNIFORM_BLOCK_INDEX = 0x8A3A;
inline constexpr Enum UNIFORM_BLOCK_NAME_LENGTH = 0x8A41;
inline constexpr Enum UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER = 0x90EC;
inline constexpr Enum UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46;
inline constexpr Enum UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = 0x8A45;
inline constexpr Enum UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = 0x84F0;
inline constexpr Enum UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x84F1;
inline constexpr Enum UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44;
inline constexpr Enum UNIFORM_BUFFER = 0x8A11;
inline constexpr Enum UNIFORM_BUFFER_BINDING = 0x8A28;
inline constexpr Enum UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34;
inline constexpr Enum UNIFORM_BUFFER_SIZE = 0x8A2A;
inline constexpr Enum UNIFORM_BUFFER_START = 0x8A29;
inline constexpr Enum UNIFORM_IS_ROW_MAJOR = 0x8A3E;
inline constexpr Enum UNIFORM_MATRIX_STRIDE = 0x8A3D;
inline constexpr Enum UNIFORM_NAME_LENGTH = 0x8A39;
inline constexpr Enum UNIFORM_OFFSET = 0x8A3B;
inline constexpr Enum UNIFORM_SIZE = 0x8A38;
inline constexpr Enum UNIFORM_TYPE = 0x8A37;
inline constexpr Enum UNKNOWN_CONTEXT_RESET = 0x8255;
inline constexpr Enum UNPACK_ALIGNMENT = 0x0CF5;
inline constexpr Enum UNPACK_COMPRESSED_BLOCK_DEPTH = 0x9129;
inline constexpr Enum UNPACK_COMPRESSED_BLOCK_HEIGHT = 0x9128;
inline constexpr Enum UNPACK_COMPRESSED_BLOCK_SIZE = 0x912A;
inline constexpr Enum UNPACK_COMPRESSED_BLOCK_WIDTH = 0x9127;
inline constexpr Enum UNPACK_IMAGE_HEIGHT = 0x806E;
inline constexpr Enum UNPACK_LSB_FIRST = 0x0CF1;
inline constexpr Enum UNPACK_ROW_LENGTH = 0x0CF2;
inline constexpr Enum UNPACK_SKIP_IMAGES = 0x806D;
inline constexpr Enum UNPACK_SKIP_PIXELS = 0x0CF4;
inline constexpr Enum UNPACK_SKIP_ROWS = 0x0CF3;
inline constexpr Enum UNPACK_SWAP_BYTES = 0x0CF0;
inline constexpr Enum UNSIGNALED = 0x9118;
inline constexpr Enum UNSIGNED_BYTE = 0x1401;
inline constexpr Enum UNSIGNED_BYTE_2_3_3_REV = 0x8362;
inline constexpr Enum UNSIGNED_BYTE_3_3_2 = 0x8032;
inline constexpr Enum UNSIGNED_INT = 0x1405;
inline constexpr Enum UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B;
inline constexpr Enum UNSIGNED_INT_10_10_10_2 = 0x8036;
inline constexpr Enum UNSIGNED_INT_24_8 = 0x84FA;
inline constexpr Enum UNSIGNED_INT_2_10_10_10_REV = 0x8368;
inline constexpr Enum UNSIGNED_INT_5_9_9_9_REV = 0x8C3E;
inline constexpr Enum UNSIGNED_INT_8_8_8_8 = 0x8035;
inline constexpr Enum UNSIGNED_INT_8_8_8_8_REV = 0x8367;
inline constexpr Enum UNSIGNED_INT_ATOMIC_COUNTER = 0x92DB;
inline constexpr Enum UNSIGNED_INT_IMAGE_1D = 0x9062;
inline constexpr Enum UNSIGNED_INT_IMAGE_1D_ARRAY = 0x9068;
inline constexpr Enum UNSIGNED_INT_IMAGE_2D = 0x9063;
inline constexpr Enum UNSIGNED_INT_IMAGE_2D_ARRAY = 0x9069;
inline constexpr Enum UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = 0x906B;
inline constexpr Enum UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x906C;
inline constexpr Enum UNSIGNED_INT_IMAGE_2D_RECT = 0x9065;
inline constexpr Enum UNSIGNED_INT_IMAGE_3D = 0x9064;
inline constexpr Enum UNSIGNED_INT_IMAGE_BUFFER = 0x9067;
inline constexpr Enum UNSIGNED_INT_IMAGE_CUBE = 0x9066;
inline constexpr Enum UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = 0x906A;
inline constexpr Enum UNSIGNED_INT_SAMPLER_1D = 0x8DD1;
inline constexpr Enum UNSIGNED_INT_SAMPLER_1D_ARRAY = 0x8DD6;
inline constexpr Enum UNSIGNED_INT_SAMPLER_2D = 0x8DD2;
inline constexpr Enum UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7;
inline constexpr Enum UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A;
inline constexpr Enum UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910D;
inline constexpr Enum UNSIGNED_INT_SAMPLER_2D_RECT = 0x8DD5;
inline constexpr Enum UNSIGNED_INT_SAMPLER_3D = 0x8DD3;
inline constexpr Enum UNSIGNED_INT_SAMPLER_BUFFER = 0x8DD8;
inline constexpr Enum UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4;
inline constexpr Enum UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900F;
inline constexpr Enum UNSIGNED_INT_VEC2 = 0x8DC6;
inline constexpr Enum UNSIGNED_INT_VEC3 = 0x8DC7;
inline constexpr Enum UNSIGNED_INT_VEC4 = 0x8DC8;
inline constexpr Enum UNSIGNED_NORMALIZED = 0x8C17;
inline constexpr Enum UNSIGNED_SHORT = 0x1403;
inline constexpr Enum UNSIGNED_SHORT_1_5_5_5_REV = 0x8366;
inline constexpr Enum UNSIGNED_SHORT_4_4_4_4 = 0x8033;
inline constexpr Enum UNSIGNED_SHORT_4_4_4_4_REV = 0x8365;
inline constexpr Enum UNSIGNED_SHORT_5_5_5_1 = 0x8034;
inline constexpr Enum UNSIGNED_SHORT_5_6_5 = 0x8363;
inline constexpr Enum UNSIGNED_SHORT_5_6_5_REV = 0x8364;
inline constexpr Enum UPPER_LEFT = 0x8CA2;
inline constexpr Enum VALIDATE_STATUS = 0x8B83;
inline constexpr Enum VENDOR = 0x1F00;
inline constexpr Enum VERSION = 0x1F02;
inline constexpr Enum VERTEX_ARRAY_BINDING = 0x85B5;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_LONG = 0x874E;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_POINTER = 0x8645;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_SIZE = 0x8623;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624;
inline constexpr Enum VERTEX_ATTRIB_ARRAY_TYPE = 0x8625;
inline constexpr Enum VERTEX_ATTRIB_BINDING = 0x82D4;
inline constexpr Enum VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D5;
inline constexpr Enum VERTEX_BINDING_BUFFER = 0x8F4F;
inline constexpr Enum VERTEX_BINDING_DIVISOR = 0x82D6;
inline constexpr Enum VERTEX_BINDING_OFFSET = 0x82D7;
inline constexpr Enum VERTEX_BINDING_STRIDE = 0x82D8;
inline constexpr Enum VERTEX_PROGRAM_POINT_SIZE = 0x8642;
inline constexpr Enum VERTEX_SHADER = 0x8B31;
inline constexpr Enum VERTEX_SHADER_BIT = 0x00000001;
inline constexpr Enum VERTEX_SHADER_INVOCATIONS = 0x82F0;
inline constexpr Enum VERTEX_SUBROUTINE = 0x92E8;
inline constexpr Enum VERTEX_SUBROUTINE_UNIFORM = 0x92EE;
inline constexpr Enum VERTEX_TEXTURE = 0x829B;
inline constexpr Enum VERTICES_SUBMITTED = 0x82EE;
inline constexpr Enum VIEWPORT = 0x0BA2;
inline constexpr Enum VIEWPORT_BOUNDS_RANGE = 0x825D;
inline constexpr Enum VIEWPORT_INDEX_PROVOKING_VERTEX = 0x825F;
inline constexpr Enum VIEWPORT_SUBPIXEL_BITS = 0x825C;
inline constexpr Enum VIEW_CLASS_128_BITS = 0x82C4;
inline constexpr Enum VIEW_CLASS_16_BITS = 0x82CA;
inline constexpr Enum VIEW_CLASS_24_BITS = 0x82C9;
inline constexpr Enum VIEW_CLASS_32_BITS = 0x82C8;
inline constexpr Enum VIEW_CLASS_48_BITS = 0x82C7;
inline constexpr Enum VIEW_CLASS_64_BITS = 0x82C6;
inline constexpr Enum VIEW_CLASS_8_BITS = 0x82CB;
inline constexpr Enum VIEW_CLASS_96_BITS = 0x82C5;
inline constexpr Enum VIEW_CLASS_BPTC_FLOAT = 0x82D3;
inline constexpr Enum VIEW_CLASS_BPTC_UNORM = 0x82D2;
inline constexpr Enum VIEW_CLASS_RGTC1_RED = 0x82D0;
inline constexpr Enum VIEW_CLASS_RGTC2_RG = 0x82D1;
inline constexpr Enum VIEW_CLASS_S3TC_DXT1_RGB = 0x82CC;
inline constexpr Enum VIEW_CLASS_S3TC_DXT1_RGBA = 0x82CD;
inline constexpr Enum VIEW_CLASS_S3TC_DXT3_RGBA = 0x82CE;
inline constexpr Enum VIEW_CLASS_S3TC_DXT5_RGBA = 0x82CF;
inline constexpr Enum VIEW_COMPATIBILITY_CLASS = 0x82B6;
inline constexpr Enum WAIT_FAILED = 0x911D;
inline constexpr Enum WRITE_ONLY = 0x88B9;
inline constexpr Enum XOR = 0x1506;
inline constexpr Enum ZERO = 0;
inline constexpr Enum ZERO_TO_ONE = 0x935F;

} // namespace gl


export namespace gl {
namespace detail {

using PFNACTIVESHADERPROGRAMPROC = void (GL_APIENTRYP)(Uint pipeline, Uint program);
using PFNACTIVETEXTUREPROC = void (GL_APIENTRYP)(Enum texture);
using PFNATTACHSHADERPROC = void (GL_APIENTRYP)(Uint program, Uint shader);
using PFNBEGINCONDITIONALRENDERPROC = void (GL_APIENTRYP)(Uint id, Enum mode);
using PFNBEGINQUERYPROC = void (GL_APIENTRYP)(Enum target, Uint id);
using PFNBEGINQUERYINDEXEDPROC = void (GL_APIENTRYP)(Enum target, Uint index, Uint id);
using PFNBEGINTRANSFORMFEEDBACKPROC = void (GL_APIENTRYP)(Enum primitiveMode);
using PFNBINDATTRIBLOCATIONPROC = void (GL_APIENTRYP)(Uint program, Uint index, const Char* name);
using PFNBINDBUFFERPROC = void (GL_APIENTRYP)(Enum target, Uint buffer);
using PFNBINDBUFFERBASEPROC = void (GL_APIENTRYP)(Enum target, Uint index, Uint buffer);
using PFNBINDBUFFERRANGEPROC = void (GL_APIENTRYP)(Enum target, Uint index, Uint buffer, Intptr offset, Sizeiptr size);
using PFNBINDBUFFERSBASEPROC = void (GL_APIENTRYP)(Enum target, Uint first, Sizei count, const Uint* buffers);
using PFNBINDBUFFERSRANGEPROC = void (GL_APIENTRYP)(Enum target, Uint first, Sizei count, const Uint* buffers, const Intptr* offsets, const Sizeiptr* sizes);
using PFNBINDFRAGDATALOCATIONPROC = void (GL_APIENTRYP)(Uint program, Uint color, const Char* name);
using PFNBINDFRAGDATALOCATIONINDEXEDPROC = void (GL_APIENTRYP)(Uint program, Uint colorNumber, Uint index, const Char* name);
using PFNBINDFRAMEBUFFERPROC = void (GL_APIENTRYP)(Enum target, Uint framebuffer);
using PFNBINDIMAGETEXTUREPROC = void (GL_APIENTRYP)(Uint unit, Uint texture, Int level, Boolean layered, Int layer, Enum access, Enum format);
using PFNBINDIMAGETEXTURESPROC = void (GL_APIENTRYP)(Uint first, Sizei count, const Uint* textures);
using PFNBINDPROGRAMPIPELINEPROC = void (GL_APIENTRYP)(Uint pipeline);
using PFNBINDRENDERBUFFERPROC = void (GL_APIENTRYP)(Enum target, Uint renderbuffer);
using PFNBINDSAMPLERPROC = void (GL_APIENTRYP)(Uint unit, Uint sampler);
using PFNBINDSAMPLERSPROC = void (GL_APIENTRYP)(Uint first, Sizei count, const Uint* samplers);
using PFNBINDTEXTUREPROC = void (GL_APIENTRYP)(Enum target, Uint texture);
using PFNBINDTEXTUREUNITPROC = void (GL_APIENTRYP)(Uint unit, Uint texture);
using PFNBINDTEXTURESPROC = void (GL_APIENTRYP)(Uint first, Sizei count, const Uint* textures);
using PFNBINDTRANSFORMFEEDBACKPROC = void (GL_APIENTRYP)(Enum target, Uint id);
using PFNBINDVERTEXARRAYPROC = void (GL_APIENTRYP)(Uint array);
using PFNBINDVERTEXBUFFERPROC = void (GL_APIENTRYP)(Uint bindingindex, Uint buffer, Intptr offset, Sizei stride);
using PFNBINDVERTEXBUFFERSPROC = void (GL_APIENTRYP)(Uint first, Sizei count, const Uint* buffers, const Intptr* offsets, const Sizei* strides);
using PFNBLENDCOLORPROC = void (GL_APIENTRYP)(Float red, Float green, Float blue, Float alpha);
using PFNBLENDEQUATIONPROC = void (GL_APIENTRYP)(Enum mode);
using PFNBLENDEQUATIONSEPARATEPROC = void (GL_APIENTRYP)(Enum modeRGB, Enum modeAlpha);
using PFNBLENDEQUATIONSEPARATEIPROC = void (GL_APIENTRYP)(Uint buf, Enum modeRGB, Enum modeAlpha);
using PFNBLENDEQUATIONIPROC = void (GL_APIENTRYP)(Uint buf, Enum mode);
using PFNBLENDFUNCPROC = void (GL_APIENTRYP)(Enum sfactor, Enum dfactor);
using PFNBLENDFUNCSEPARATEPROC = void (GL_APIENTRYP)(Enum sfactorRGB, Enum dfactorRGB, Enum sfactorAlpha, Enum dfactorAlpha);
using PFNBLENDFUNCSEPARATEIPROC = void (GL_APIENTRYP)(Uint buf, Enum srcRGB, Enum dstRGB, Enum srcAlpha, Enum dstAlpha);
using PFNBLENDFUNCIPROC = void (GL_APIENTRYP)(Uint buf, Enum src, Enum dst);
using PFNBLITFRAMEBUFFERPROC = void (GL_APIENTRYP)(Int srcX0, Int srcY0, Int srcX1, Int srcY1, Int dstX0, Int dstY0, Int dstX1, Int dstY1, Bitfield mask, Enum filter);
using PFNBLITNAMEDFRAMEBUFFERPROC = void (GL_APIENTRYP)(Uint readFramebuffer, Uint drawFramebuffer, Int srcX0, Int srcY0, Int srcX1, Int srcY1, Int dstX0, Int dstY0, Int dstX1, Int dstY1, Bitfield mask, Enum filter);
using PFNBUFFERDATAPROC = void (GL_APIENTRYP)(Enum target, Sizeiptr size, const void* data, Enum usage);
using PFNBUFFERSTORAGEPROC = void (GL_APIENTRYP)(Enum target, Sizeiptr size, const void* data, Bitfield flags);
using PFNBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Enum target, Intptr offset, Sizeiptr size, const void* data);
using PFNCHECKFRAMEBUFFERSTATUSPROC = Enum (GL_APIENTRYP)(Enum target);
using PFNCHECKNAMEDFRAMEBUFFERSTATUSPROC = Enum (GL_APIENTRYP)(Uint framebuffer, Enum target);
using PFNCLAMPCOLORPROC = void (GL_APIENTRYP)(Enum target, Enum clamp);
using PFNCLEARPROC = void (GL_APIENTRYP)(Bitfield mask);
using PFNCLEARBUFFERDATAPROC = void (GL_APIENTRYP)(Enum target, Enum internalformat, Enum format, Enum type, const void* data);
using PFNCLEARBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Enum target, Enum internalformat, Intptr offset, Sizeiptr size, Enum format, Enum type, const void* data);
using PFNCLEARBUFFERFIPROC = void (GL_APIENTRYP)(Enum buffer, Int drawbuffer, Float depth, Int stencil);
using PFNCLEARBUFFERFVPROC = void (GL_APIENTRYP)(Enum buffer, Int drawbuffer, const Float* value);
using PFNCLEARBUFFERIVPROC = void (GL_APIENTRYP)(Enum buffer, Int drawbuffer, const Int* value);
using PFNCLEARBUFFERUIVPROC = void (GL_APIENTRYP)(Enum buffer, Int drawbuffer, const Uint* value);
using PFNCLEARCOLORPROC = void (GL_APIENTRYP)(Float red, Float green, Float blue, Float alpha);
using PFNCLEARDEPTHPROC = void (GL_APIENTRYP)(Double depth);
using PFNCLEARDEPTHFPROC = void (GL_APIENTRYP)(Float d);
using PFNCLEARNAMEDBUFFERDATAPROC = void (GL_APIENTRYP)(Uint buffer, Enum internalformat, Enum format, Enum type, const void* data);
using PFNCLEARNAMEDBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Uint buffer, Enum internalformat, Intptr offset, Sizeiptr size, Enum format, Enum type, const void* data);
using PFNCLEARNAMEDFRAMEBUFFERFIPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum buffer, Int drawbuffer, Float depth, Int stencil);
using PFNCLEARNAMEDFRAMEBUFFERFVPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum buffer, Int drawbuffer, const Float* value);
using PFNCLEARNAMEDFRAMEBUFFERIVPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum buffer, Int drawbuffer, const Int* value);
using PFNCLEARNAMEDFRAMEBUFFERUIVPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum buffer, Int drawbuffer, const Uint* value);
using PFNCLEARSTENCILPROC = void (GL_APIENTRYP)(Int s);
using PFNCLEARTEXIMAGEPROC = void (GL_APIENTRYP)(Uint texture, Int level, Enum format, Enum type, const void* data);
using PFNCLEARTEXSUBIMAGEPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Enum type, const void* data);
using PFNCLIENTWAITSYNCPROC = Enum (GL_APIENTRYP)(Sync sync, Bitfield flags, Uint64 timeout);
using PFNCLIPCONTROLPROC = void (GL_APIENTRYP)(Enum origin, Enum depth);
using PFNCOLORMASKPROC = void (GL_APIENTRYP)(Boolean red, Boolean green, Boolean blue, Boolean alpha);
using PFNCOLORMASKIPROC = void (GL_APIENTRYP)(Uint index, Boolean r, Boolean g, Boolean b, Boolean a);
using PFNCOMPILESHADERPROC = void (GL_APIENTRYP)(Uint shader);
using PFNCOMPRESSEDTEXIMAGE1DPROC = void (GL_APIENTRYP)(Enum target, Int level, Enum internalformat, Sizei width, Int border, Sizei imageSize, const void* data);
using PFNCOMPRESSEDTEXIMAGE2DPROC = void (GL_APIENTRYP)(Enum target, Int level, Enum internalformat, Sizei width, Sizei height, Int border, Sizei imageSize, const void* data);
using PFNCOMPRESSEDTEXIMAGE3DPROC = void (GL_APIENTRYP)(Enum target, Int level, Enum internalformat, Sizei width, Sizei height, Sizei depth, Int border, Sizei imageSize, const void* data);
using PFNCOMPRESSEDTEXSUBIMAGE1DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int xoffset, Sizei width, Enum format, Sizei imageSize, const void* data);
using PFNCOMPRESSEDTEXSUBIMAGE2DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, Enum format, Sizei imageSize, const void* data);
using PFNCOMPRESSEDTEXSUBIMAGE3DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Sizei imageSize, const void* data);
using PFNCOMPRESSEDTEXTURESUBIMAGE1DPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Sizei width, Enum format, Sizei imageSize, const void* data);
using PFNCOMPRESSEDTEXTURESUBIMAGE2DPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, Enum format, Sizei imageSize, const void* data);
using PFNCOMPRESSEDTEXTURESUBIMAGE3DPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Sizei imageSize, const void* data);
using PFNCOPYBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Enum readTarget, Enum writeTarget, Intptr readOffset, Intptr writeOffset, Sizeiptr size);
using PFNCOPYIMAGESUBDATAPROC = void (GL_APIENTRYP)(Uint srcName, Enum srcTarget, Int srcLevel, Int srcX, Int srcY, Int srcZ, Uint dstName, Enum dstTarget, Int dstLevel, Int dstX, Int dstY, Int dstZ, Sizei srcWidth, Sizei srcHeight, Sizei srcDepth);
using PFNCOPYNAMEDBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Uint readBuffer, Uint writeBuffer, Intptr readOffset, Intptr writeOffset, Sizeiptr size);
using PFNCOPYTEXIMAGE1DPROC = void (GL_APIENTRYP)(Enum target, Int level, Enum internalformat, Int x, Int y, Sizei width, Int border);
using PFNCOPYTEXIMAGE2DPROC = void (GL_APIENTRYP)(Enum target, Int level, Enum internalformat, Int x, Int y, Sizei width, Sizei height, Int border);
using PFNCOPYTEXSUBIMAGE1DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int xoffset, Int x, Int y, Sizei width);
using PFNCOPYTEXSUBIMAGE2DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int xoffset, Int yoffset, Int x, Int y, Sizei width, Sizei height);
using PFNCOPYTEXSUBIMAGE3DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int xoffset, Int yoffset, Int zoffset, Int x, Int y, Sizei width, Sizei height);
using PFNCOPYTEXTURESUBIMAGE1DPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int x, Int y, Sizei width);
using PFNCOPYTEXTURESUBIMAGE2DPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Int x, Int y, Sizei width, Sizei height);
using PFNCOPYTEXTURESUBIMAGE3DPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Int x, Int y, Sizei width, Sizei height);
using PFNCREATEBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, Uint* buffers);
using PFNCREATEFRAMEBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, Uint* framebuffers);
using PFNCREATEPROGRAMPROC = Uint (GL_APIENTRYP)();
using PFNCREATEPROGRAMPIPELINESPROC = void (GL_APIENTRYP)(Sizei n, Uint* pipelines);
using PFNCREATEQUERIESPROC = void (GL_APIENTRYP)(Enum target, Sizei n, Uint* ids);
using PFNCREATERENDERBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, Uint* renderbuffers);
using PFNCREATESAMPLERSPROC = void (GL_APIENTRYP)(Sizei n, Uint* samplers);
using PFNCREATESHADERPROC = Uint (GL_APIENTRYP)(Enum type);
using PFNCREATESHADERPROGRAMVPROC = Uint (GL_APIENTRYP)(Enum type, Sizei count, const Char** strings);
using PFNCREATETEXTURESPROC = void (GL_APIENTRYP)(Enum target, Sizei n, Uint* textures);
using PFNCREATETRANSFORMFEEDBACKSPROC = void (GL_APIENTRYP)(Sizei n, Uint* ids);
using PFNCREATEVERTEXARRAYSPROC = void (GL_APIENTRYP)(Sizei n, Uint* arrays);
using PFNCULLFACEPROC = void (GL_APIENTRYP)(Enum mode);
using PFNDEBUGMESSAGECALLBACKPROC = void (GL_APIENTRYP)(DebugProc callback, const void* userParam);
using PFNDEBUGMESSAGECONTROLPROC = void (GL_APIENTRYP)(Enum source, Enum type, Enum severity, Sizei count, const Uint* ids, Boolean enabled);
using PFNDEBUGMESSAGEINSERTPROC = void (GL_APIENTRYP)(Enum source, Enum type, Uint id, Enum severity, Sizei length, const Char* buf);
using PFNDELETEBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, const Uint* buffers);
using PFNDELETEFRAMEBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, const Uint* framebuffers);
using PFNDELETEPROGRAMPROC = void (GL_APIENTRYP)(Uint program);
using PFNDELETEPROGRAMPIPELINESPROC = void (GL_APIENTRYP)(Sizei n, const Uint* pipelines);
using PFNDELETEQUERIESPROC = void (GL_APIENTRYP)(Sizei n, const Uint* ids);
using PFNDELETERENDERBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, const Uint* renderbuffers);
using PFNDELETESAMPLERSPROC = void (GL_APIENTRYP)(Sizei count, const Uint* samplers);
using PFNDELETESHADERPROC = void (GL_APIENTRYP)(Uint shader);
using PFNDELETESYNCPROC = void (GL_APIENTRYP)(Sync sync);
using PFNDELETETEXTURESPROC = void (GL_APIENTRYP)(Sizei n, const Uint* textures);
using PFNDELETETRANSFORMFEEDBACKSPROC = void (GL_APIENTRYP)(Sizei n, const Uint* ids);
using PFNDELETEVERTEXARRAYSPROC = void (GL_APIENTRYP)(Sizei n, const Uint* arrays);
using PFNDEPTHFUNCPROC = void (GL_APIENTRYP)(Enum func);
using PFNDEPTHMASKPROC = void (GL_APIENTRYP)(Boolean flag);
using PFNDEPTHRANGEPROC = void (GL_APIENTRYP)(Double n, Double f);
using PFNDEPTHRANGEARRAYVPROC = void (GL_APIENTRYP)(Uint first, Sizei count, const Double* v);
using PFNDEPTHRANGEINDEXEDPROC = void (GL_APIENTRYP)(Uint index, Double n, Double f);
using PFNDEPTHRANGEFPROC = void (GL_APIENTRYP)(Float n, Float f);
using PFNDETACHSHADERPROC = void (GL_APIENTRYP)(Uint program, Uint shader);
using PFNDISABLEPROC = void (GL_APIENTRYP)(Enum cap);
using PFNDISABLEVERTEXARRAYATTRIBPROC = void (GL_APIENTRYP)(Uint vaobj, Uint index);
using PFNDISABLEVERTEXATTRIBARRAYPROC = void (GL_APIENTRYP)(Uint index);
using PFNDISABLEIPROC = void (GL_APIENTRYP)(Enum target, Uint index);
using PFNDISPATCHCOMPUTEPROC = void (GL_APIENTRYP)(Uint num_groups_x, Uint num_groups_y, Uint num_groups_z);
using PFNDISPATCHCOMPUTEINDIRECTPROC = void (GL_APIENTRYP)(Intptr indirect);
using PFNDRAWARRAYSPROC = void (GL_APIENTRYP)(Enum mode, Int first, Sizei count);
using PFNDRAWARRAYSINDIRECTPROC = void (GL_APIENTRYP)(Enum mode, const void* indirect);
using PFNDRAWARRAYSINSTANCEDPROC = void (GL_APIENTRYP)(Enum mode, Int first, Sizei count, Sizei instancecount);
using PFNDRAWARRAYSINSTANCEDBASEINSTANCEPROC = void (GL_APIENTRYP)(Enum mode, Int first, Sizei count, Sizei instancecount, Uint baseinstance);
using PFNDRAWBUFFERPROC = void (GL_APIENTRYP)(Enum buf);
using PFNDRAWBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, const Enum* bufs);
using PFNDRAWELEMENTSPROC = void (GL_APIENTRYP)(Enum mode, Sizei count, Enum type, const void* indices);
using PFNDRAWELEMENTSBASEVERTEXPROC = void (GL_APIENTRYP)(Enum mode, Sizei count, Enum type, const void* indices, Int basevertex);
using PFNDRAWELEMENTSINDIRECTPROC = void (GL_APIENTRYP)(Enum mode, Enum type, const void* indirect);
using PFNDRAWELEMENTSINSTANCEDPROC = void (GL_APIENTRYP)(Enum mode, Sizei count, Enum type, const void* indices, Sizei instancecount);
using PFNDRAWELEMENTSINSTANCEDBASEINSTANCEPROC = void (GL_APIENTRYP)(Enum mode, Sizei count, Enum type, const void* indices, Sizei instancecount, Uint baseinstance);
using PFNDRAWELEMENTSINSTANCEDBASEVERTEXPROC = void (GL_APIENTRYP)(Enum mode, Sizei count, Enum type, const void* indices, Sizei instancecount, Int basevertex);
using PFNDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC = void (GL_APIENTRYP)(Enum mode, Sizei count, Enum type, const void* indices, Sizei instancecount, Int basevertex, Uint baseinstance);
using PFNDRAWRANGEELEMENTSPROC = void (GL_APIENTRYP)(Enum mode, Uint start, Uint end, Sizei count, Enum type, const void* indices);
using PFNDRAWRANGEELEMENTSBASEVERTEXPROC = void (GL_APIENTRYP)(Enum mode, Uint start, Uint end, Sizei count, Enum type, const void* indices, Int basevertex);
using PFNDRAWTRANSFORMFEEDBACKPROC = void (GL_APIENTRYP)(Enum mode, Uint id);
using PFNDRAWTRANSFORMFEEDBACKINSTANCEDPROC = void (GL_APIENTRYP)(Enum mode, Uint id, Sizei instancecount);
using PFNDRAWTRANSFORMFEEDBACKSTREAMPROC = void (GL_APIENTRYP)(Enum mode, Uint id, Uint stream);
using PFNDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC = void (GL_APIENTRYP)(Enum mode, Uint id, Uint stream, Sizei instancecount);
using PFNENABLEPROC = void (GL_APIENTRYP)(Enum cap);
using PFNENABLEVERTEXARRAYATTRIBPROC = void (GL_APIENTRYP)(Uint vaobj, Uint index);
using PFNENABLEVERTEXATTRIBARRAYPROC = void (GL_APIENTRYP)(Uint index);
using PFNENABLEIPROC = void (GL_APIENTRYP)(Enum target, Uint index);
using PFNENDCONDITIONALRENDERPROC = void (GL_APIENTRYP)();
using PFNENDQUERYPROC = void (GL_APIENTRYP)(Enum target);
using PFNENDQUERYINDEXEDPROC = void (GL_APIENTRYP)(Enum target, Uint index);
using PFNENDTRANSFORMFEEDBACKPROC = void (GL_APIENTRYP)();
using PFNFENCESYNCPROC = Sync (GL_APIENTRYP)(Enum condition, Bitfield flags);
using PFNFINISHPROC = void (GL_APIENTRYP)();
using PFNFLUSHPROC = void (GL_APIENTRYP)();
using PFNFLUSHMAPPEDBUFFERRANGEPROC = void (GL_APIENTRYP)(Enum target, Intptr offset, Sizeiptr length);
using PFNFLUSHMAPPEDNAMEDBUFFERRANGEPROC = void (GL_APIENTRYP)(Uint buffer, Intptr offset, Sizeiptr length);
using PFNFRAMEBUFFERPARAMETERIPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Int param);
using PFNFRAMEBUFFERRENDERBUFFERPROC = void (GL_APIENTRYP)(Enum target, Enum attachment, Enum renderbuffertarget, Uint renderbuffer);
using PFNFRAMEBUFFERTEXTUREPROC = void (GL_APIENTRYP)(Enum target, Enum attachment, Uint texture, Int level);
using PFNFRAMEBUFFERTEXTURE1DPROC = void (GL_APIENTRYP)(Enum target, Enum attachment, Enum textarget, Uint texture, Int level);
using PFNFRAMEBUFFERTEXTURE2DPROC = void (GL_APIENTRYP)(Enum target, Enum attachment, Enum textarget, Uint texture, Int level);
using PFNFRAMEBUFFERTEXTURE3DPROC = void (GL_APIENTRYP)(Enum target, Enum attachment, Enum textarget, Uint texture, Int level, Int zoffset);
using PFNFRAMEBUFFERTEXTURELAYERPROC = void (GL_APIENTRYP)(Enum target, Enum attachment, Uint texture, Int level, Int layer);
using PFNFRONTFACEPROC = void (GL_APIENTRYP)(Enum mode);
using PFNGENBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, Uint* buffers);
using PFNGENFRAMEBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, Uint* framebuffers);
using PFNGENPROGRAMPIPELINESPROC = void (GL_APIENTRYP)(Sizei n, Uint* pipelines);
using PFNGENQUERIESPROC = void (GL_APIENTRYP)(Sizei n, Uint* ids);
using PFNGENRENDERBUFFERSPROC = void (GL_APIENTRYP)(Sizei n, Uint* renderbuffers);
using PFNGENSAMPLERSPROC = void (GL_APIENTRYP)(Sizei count, Uint* samplers);
using PFNGENTEXTURESPROC = void (GL_APIENTRYP)(Sizei n, Uint* textures);
using PFNGENTRANSFORMFEEDBACKSPROC = void (GL_APIENTRYP)(Sizei n, Uint* ids);
using PFNGENVERTEXARRAYSPROC = void (GL_APIENTRYP)(Sizei n, Uint* arrays);
using PFNGENERATEMIPMAPPROC = void (GL_APIENTRYP)(Enum target);
using PFNGENERATETEXTUREMIPMAPPROC = void (GL_APIENTRYP)(Uint texture);
using PFNGETACTIVEATOMICCOUNTERBUFFERIVPROC = void (GL_APIENTRYP)(Uint program, Uint bufferIndex, Enum pname, Int* params);
using PFNGETACTIVEATTRIBPROC = void (GL_APIENTRYP)(Uint program, Uint index, Sizei bufSize, Sizei* length, Int* size, Enum* type, Char* name);
using PFNGETACTIVESUBROUTINENAMEPROC = void (GL_APIENTRYP)(Uint program, Enum shadertype, Uint index, Sizei bufSize, Sizei* length, Char* name);
using PFNGETACTIVESUBROUTINEUNIFORMNAMEPROC = void (GL_APIENTRYP)(Uint program, Enum shadertype, Uint index, Sizei bufSize, Sizei* length, Char* name);
using PFNGETACTIVESUBROUTINEUNIFORMIVPROC = void (GL_APIENTRYP)(Uint program, Enum shadertype, Uint index, Enum pname, Int* values);
using PFNGETACTIVEUNIFORMPROC = void (GL_APIENTRYP)(Uint program, Uint index, Sizei bufSize, Sizei* length, Int* size, Enum* type, Char* name);
using PFNGETACTIVEUNIFORMBLOCKNAMEPROC = void (GL_APIENTRYP)(Uint program, Uint uniformBlockIndex, Sizei bufSize, Sizei* length, Char* uniformBlockName);
using PFNGETACTIVEUNIFORMBLOCKIVPROC = void (GL_APIENTRYP)(Uint program, Uint uniformBlockIndex, Enum pname, Int* params);
using PFNGETACTIVEUNIFORMNAMEPROC = void (GL_APIENTRYP)(Uint program, Uint uniformIndex, Sizei bufSize, Sizei* length, Char* uniformName);
using PFNGETACTIVEUNIFORMSIVPROC = void (GL_APIENTRYP)(Uint program, Sizei uniformCount, const Uint* uniformIndices, Enum pname, Int* params);
using PFNGETATTACHEDSHADERSPROC = void (GL_APIENTRYP)(Uint program, Sizei maxCount, Sizei* count, Uint* shaders);
using PFNGETATTRIBLOCATIONPROC = Int (GL_APIENTRYP)(Uint program, const Char* name);
using PFNGETBOOLEANI_VPROC = void (GL_APIENTRYP)(Enum target, Uint index, Boolean* data);
using PFNGETBOOLEANVPROC = void (GL_APIENTRYP)(Enum pname, Boolean* data);
using PFNGETBUFFERPARAMETERI64VPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Int64* params);
using PFNGETBUFFERPARAMETERIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Int* params);
using PFNGETBUFFERPOINTERVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, void** params);
using PFNGETBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Enum target, Intptr offset, Sizeiptr size, void* data);
using PFNGETCOMPRESSEDTEXIMAGEPROC = void (GL_APIENTRYP)(Enum target, Int level, void* img);
using PFNGETCOMPRESSEDTEXTUREIMAGEPROC = void (GL_APIENTRYP)(Uint texture, Int level, Sizei bufSize, void* pixels);
using PFNGETCOMPRESSEDTEXTURESUBIMAGEPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Sizei bufSize, void* pixels);
using PFNGETDEBUGMESSAGELOGPROC = Uint (GL_APIENTRYP)(Uint count, Sizei bufSize, Enum* sources, Enum* types, Uint* ids, Enum* severities, Sizei* lengths, Char* messageLog);
using PFNGETDOUBLEI_VPROC = void (GL_APIENTRYP)(Enum target, Uint index, Double* data);
using PFNGETDOUBLEVPROC = void (GL_APIENTRYP)(Enum pname, Double* data);
using PFNGETERRORPROC = Enum (GL_APIENTRYP)();
using PFNGETFLOATI_VPROC = void (GL_APIENTRYP)(Enum target, Uint index, Float* data);
using PFNGETFLOATVPROC = void (GL_APIENTRYP)(Enum pname, Float* data);
using PFNGETFRAGDATAINDEXPROC = Int (GL_APIENTRYP)(Uint program, const Char* name);
using PFNGETFRAGDATALOCATIONPROC = Int (GL_APIENTRYP)(Uint program, const Char* name);
using PFNGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC = void (GL_APIENTRYP)(Enum target, Enum attachment, Enum pname, Int* params);
using PFNGETFRAMEBUFFERPARAMETERIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Int* params);
using PFNGETGRAPHICSRESETSTATUSPROC = Enum (GL_APIENTRYP)();
using PFNGETINTEGER64I_VPROC = void (GL_APIENTRYP)(Enum target, Uint index, Int64* data);
using PFNGETINTEGER64VPROC = void (GL_APIENTRYP)(Enum pname, Int64* data);
using PFNGETINTEGERI_VPROC = void (GL_APIENTRYP)(Enum target, Uint index, Int* data);
using PFNGETINTEGERVPROC = void (GL_APIENTRYP)(Enum pname, Int* data);
using PFNGETINTERNALFORMATI64VPROC = void (GL_APIENTRYP)(Enum target, Enum internalformat, Enum pname, Sizei count, Int64* params);
using PFNGETINTERNALFORMATIVPROC = void (GL_APIENTRYP)(Enum target, Enum internalformat, Enum pname, Sizei count, Int* params);
using PFNGETMULTISAMPLEFVPROC = void (GL_APIENTRYP)(Enum pname, Uint index, Float* val);
using PFNGETNAMEDBUFFERPARAMETERI64VPROC = void (GL_APIENTRYP)(Uint buffer, Enum pname, Int64* params);
using PFNGETNAMEDBUFFERPARAMETERIVPROC = void (GL_APIENTRYP)(Uint buffer, Enum pname, Int* params);
using PFNGETNAMEDBUFFERPOINTERVPROC = void (GL_APIENTRYP)(Uint buffer, Enum pname, void** params);
using PFNGETNAMEDBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Uint buffer, Intptr offset, Sizeiptr size, void* data);
using PFNGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum attachment, Enum pname, Int* params);
using PFNGETNAMEDFRAMEBUFFERPARAMETERIVPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum pname, Int* param);
using PFNGETNAMEDRENDERBUFFERPARAMETERIVPROC = void (GL_APIENTRYP)(Uint renderbuffer, Enum pname, Int* params);
using PFNGETOBJECTLABELPROC = void (GL_APIENTRYP)(Enum identifier, Uint name, Sizei bufSize, Sizei* length, Char* label);
using PFNGETOBJECTPTRLABELPROC = void (GL_APIENTRYP)(const void* ptr, Sizei bufSize, Sizei* length, Char* label);
using PFNGETPROGRAMBINARYPROC = void (GL_APIENTRYP)(Uint program, Sizei bufSize, Sizei* length, Enum* binaryFormat, void* binary);
using PFNGETPROGRAMINFOLOGPROC = void (GL_APIENTRYP)(Uint program, Sizei bufSize, Sizei* length, Char* infoLog);
using PFNGETPROGRAMINTERFACEIVPROC = void (GL_APIENTRYP)(Uint program, Enum programInterface, Enum pname, Int* params);
using PFNGETPROGRAMPIPELINEINFOLOGPROC = void (GL_APIENTRYP)(Uint pipeline, Sizei bufSize, Sizei* length, Char* infoLog);
using PFNGETPROGRAMPIPELINEIVPROC = void (GL_APIENTRYP)(Uint pipeline, Enum pname, Int* params);
using PFNGETPROGRAMRESOURCEINDEXPROC = Uint (GL_APIENTRYP)(Uint program, Enum programInterface, const Char* name);
using PFNGETPROGRAMRESOURCELOCATIONPROC = Int (GL_APIENTRYP)(Uint program, Enum programInterface, const Char* name);
using PFNGETPROGRAMRESOURCELOCATIONINDEXPROC = Int (GL_APIENTRYP)(Uint program, Enum programInterface, const Char* name);
using PFNGETPROGRAMRESOURCENAMEPROC = void (GL_APIENTRYP)(Uint program, Enum programInterface, Uint index, Sizei bufSize, Sizei* length, Char* name);
using PFNGETPROGRAMRESOURCEIVPROC = void (GL_APIENTRYP)(Uint program, Enum programInterface, Uint index, Sizei propCount, const Enum* props, Sizei count, Sizei* length, Int* params);
using PFNGETPROGRAMSTAGEIVPROC = void (GL_APIENTRYP)(Uint program, Enum shadertype, Enum pname, Int* values);
using PFNGETPROGRAMIVPROC = void (GL_APIENTRYP)(Uint program, Enum pname, Int* params);
using PFNGETQUERYBUFFEROBJECTI64VPROC = void (GL_APIENTRYP)(Uint id, Uint buffer, Enum pname, Intptr offset);
using PFNGETQUERYBUFFEROBJECTIVPROC = void (GL_APIENTRYP)(Uint id, Uint buffer, Enum pname, Intptr offset);
using PFNGETQUERYBUFFEROBJECTUI64VPROC = void (GL_APIENTRYP)(Uint id, Uint buffer, Enum pname, Intptr offset);
using PFNGETQUERYBUFFEROBJECTUIVPROC = void (GL_APIENTRYP)(Uint id, Uint buffer, Enum pname, Intptr offset);
using PFNGETQUERYINDEXEDIVPROC = void (GL_APIENTRYP)(Enum target, Uint index, Enum pname, Int* params);
using PFNGETQUERYOBJECTI64VPROC = void (GL_APIENTRYP)(Uint id, Enum pname, Int64* params);
using PFNGETQUERYOBJECTIVPROC = void (GL_APIENTRYP)(Uint id, Enum pname, Int* params);
using PFNGETQUERYOBJECTUI64VPROC = void (GL_APIENTRYP)(Uint id, Enum pname, Uint64* params);
using PFNGETQUERYOBJECTUIVPROC = void (GL_APIENTRYP)(Uint id, Enum pname, Uint* params);
using PFNGETQUERYIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Int* params);
using PFNGETRENDERBUFFERPARAMETERIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Int* params);
using PFNGETSAMPLERPARAMETERIIVPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, Int* params);
using PFNGETSAMPLERPARAMETERIUIVPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, Uint* params);
using PFNGETSAMPLERPARAMETERFVPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, Float* params);
using PFNGETSAMPLERPARAMETERIVPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, Int* params);
using PFNGETSHADERINFOLOGPROC = void (GL_APIENTRYP)(Uint shader, Sizei bufSize, Sizei* length, Char* infoLog);
using PFNGETSHADERPRECISIONFORMATPROC = void (GL_APIENTRYP)(Enum shadertype, Enum precisiontype, Int* range, Int* precision);
using PFNGETSHADERSOURCEPROC = void (GL_APIENTRYP)(Uint shader, Sizei bufSize, Sizei* length, Char* source);
using PFNGETSHADERIVPROC = void (GL_APIENTRYP)(Uint shader, Enum pname, Int* params);
using PFNGETSTRINGPROC = const Ubyte* (GL_APIENTRYP)(Enum name);
using PFNGETSTRINGIPROC = const Ubyte* (GL_APIENTRYP)(Enum name, Uint index);
using PFNGETSUBROUTINEINDEXPROC = Uint (GL_APIENTRYP)(Uint program, Enum shadertype, const Char* name);
using PFNGETSUBROUTINEUNIFORMLOCATIONPROC = Int (GL_APIENTRYP)(Uint program, Enum shadertype, const Char* name);
using PFNGETSYNCIVPROC = void (GL_APIENTRYP)(Sync sync, Enum pname, Sizei count, Sizei* length, Int* values);
using PFNGETTEXIMAGEPROC = void (GL_APIENTRYP)(Enum target, Int level, Enum format, Enum type, void* pixels);
using PFNGETTEXLEVELPARAMETERFVPROC = void (GL_APIENTRYP)(Enum target, Int level, Enum pname, Float* params);
using PFNGETTEXLEVELPARAMETERIVPROC = void (GL_APIENTRYP)(Enum target, Int level, Enum pname, Int* params);
using PFNGETTEXPARAMETERIIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Int* params);
using PFNGETTEXPARAMETERIUIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Uint* params);
using PFNGETTEXPARAMETERFVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Float* params);
using PFNGETTEXPARAMETERIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Int* params);
using PFNGETTEXTUREIMAGEPROC = void (GL_APIENTRYP)(Uint texture, Int level, Enum format, Enum type, Sizei bufSize, void* pixels);
using PFNGETTEXTURELEVELPARAMETERFVPROC = void (GL_APIENTRYP)(Uint texture, Int level, Enum pname, Float* params);
using PFNGETTEXTURELEVELPARAMETERIVPROC = void (GL_APIENTRYP)(Uint texture, Int level, Enum pname, Int* params);
using PFNGETTEXTUREPARAMETERIIVPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, Int* params);
using PFNGETTEXTUREPARAMETERIUIVPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, Uint* params);
using PFNGETTEXTUREPARAMETERFVPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, Float* params);
using PFNGETTEXTUREPARAMETERIVPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, Int* params);
using PFNGETTEXTURESUBIMAGEPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Enum type, Sizei bufSize, void* pixels);
using PFNGETTRANSFORMFEEDBACKVARYINGPROC = void (GL_APIENTRYP)(Uint program, Uint index, Sizei bufSize, Sizei* length, Sizei* size, Enum* type, Char* name);
using PFNGETTRANSFORMFEEDBACKI64_VPROC = void (GL_APIENTRYP)(Uint xfb, Enum pname, Uint index, Int64* param);
using PFNGETTRANSFORMFEEDBACKI_VPROC = void (GL_APIENTRYP)(Uint xfb, Enum pname, Uint index, Int* param);
using PFNGETTRANSFORMFEEDBACKIVPROC = void (GL_APIENTRYP)(Uint xfb, Enum pname, Int* param);
using PFNGETUNIFORMBLOCKINDEXPROC = Uint (GL_APIENTRYP)(Uint program, const Char* uniformBlockName);
using PFNGETUNIFORMINDICESPROC = void (GL_APIENTRYP)(Uint program, Sizei uniformCount, const Char** uniformNames, Uint* uniformIndices);
using PFNGETUNIFORMLOCATIONPROC = Int (GL_APIENTRYP)(Uint program, const Char* name);
using PFNGETUNIFORMSUBROUTINEUIVPROC = void (GL_APIENTRYP)(Enum shadertype, Int location, Uint* params);
using PFNGETUNIFORMDVPROC = void (GL_APIENTRYP)(Uint program, Int location, Double* params);
using PFNGETUNIFORMFVPROC = void (GL_APIENTRYP)(Uint program, Int location, Float* params);
using PFNGETUNIFORMIVPROC = void (GL_APIENTRYP)(Uint program, Int location, Int* params);
using PFNGETUNIFORMUIVPROC = void (GL_APIENTRYP)(Uint program, Int location, Uint* params);
using PFNGETVERTEXARRAYINDEXED64IVPROC = void (GL_APIENTRYP)(Uint vaobj, Uint index, Enum pname, Int64* param);
using PFNGETVERTEXARRAYINDEXEDIVPROC = void (GL_APIENTRYP)(Uint vaobj, Uint index, Enum pname, Int* param);
using PFNGETVERTEXARRAYIVPROC = void (GL_APIENTRYP)(Uint vaobj, Enum pname, Int* param);
using PFNGETVERTEXATTRIBIIVPROC = void (GL_APIENTRYP)(Uint index, Enum pname, Int* params);
using PFNGETVERTEXATTRIBIUIVPROC = void (GL_APIENTRYP)(Uint index, Enum pname, Uint* params);
using PFNGETVERTEXATTRIBLDVPROC = void (GL_APIENTRYP)(Uint index, Enum pname, Double* params);
using PFNGETVERTEXATTRIBPOINTERVPROC = void (GL_APIENTRYP)(Uint index, Enum pname, void** pointer);
using PFNGETVERTEXATTRIBDVPROC = void (GL_APIENTRYP)(Uint index, Enum pname, Double* params);
using PFNGETVERTEXATTRIBFVPROC = void (GL_APIENTRYP)(Uint index, Enum pname, Float* params);
using PFNGETVERTEXATTRIBIVPROC = void (GL_APIENTRYP)(Uint index, Enum pname, Int* params);
using PFNGETNCOMPRESSEDTEXIMAGEPROC = void (GL_APIENTRYP)(Enum target, Int lod, Sizei bufSize, void* pixels);
using PFNGETNTEXIMAGEPROC = void (GL_APIENTRYP)(Enum target, Int level, Enum format, Enum type, Sizei bufSize, void* pixels);
using PFNGETNUNIFORMDVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei bufSize, Double* params);
using PFNGETNUNIFORMFVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei bufSize, Float* params);
using PFNGETNUNIFORMIVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei bufSize, Int* params);
using PFNGETNUNIFORMUIVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei bufSize, Uint* params);
using PFNHINTPROC = void (GL_APIENTRYP)(Enum target, Enum mode);
using PFNINVALIDATEBUFFERDATAPROC = void (GL_APIENTRYP)(Uint buffer);
using PFNINVALIDATEBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Uint buffer, Intptr offset, Sizeiptr length);
using PFNINVALIDATEFRAMEBUFFERPROC = void (GL_APIENTRYP)(Enum target, Sizei numAttachments, const Enum* attachments);
using PFNINVALIDATENAMEDFRAMEBUFFERDATAPROC = void (GL_APIENTRYP)(Uint framebuffer, Sizei numAttachments, const Enum* attachments);
using PFNINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Uint framebuffer, Sizei numAttachments, const Enum* attachments, Int x, Int y, Sizei width, Sizei height);
using PFNINVALIDATESUBFRAMEBUFFERPROC = void (GL_APIENTRYP)(Enum target, Sizei numAttachments, const Enum* attachments, Int x, Int y, Sizei width, Sizei height);
using PFNINVALIDATETEXIMAGEPROC = void (GL_APIENTRYP)(Uint texture, Int level);
using PFNINVALIDATETEXSUBIMAGEPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth);
using PFNISBUFFERPROC = Boolean (GL_APIENTRYP)(Uint buffer);
using PFNISENABLEDPROC = Boolean (GL_APIENTRYP)(Enum cap);
using PFNISENABLEDIPROC = Boolean (GL_APIENTRYP)(Enum target, Uint index);
using PFNISFRAMEBUFFERPROC = Boolean (GL_APIENTRYP)(Uint framebuffer);
using PFNISPROGRAMPROC = Boolean (GL_APIENTRYP)(Uint program);
using PFNISPROGRAMPIPELINEPROC = Boolean (GL_APIENTRYP)(Uint pipeline);
using PFNISQUERYPROC = Boolean (GL_APIENTRYP)(Uint id);
using PFNISRENDERBUFFERPROC = Boolean (GL_APIENTRYP)(Uint renderbuffer);
using PFNISSAMPLERPROC = Boolean (GL_APIENTRYP)(Uint sampler);
using PFNISSHADERPROC = Boolean (GL_APIENTRYP)(Uint shader);
using PFNISSYNCPROC = Boolean (GL_APIENTRYP)(Sync sync);
using PFNISTEXTUREPROC = Boolean (GL_APIENTRYP)(Uint texture);
using PFNISTRANSFORMFEEDBACKPROC = Boolean (GL_APIENTRYP)(Uint id);
using PFNISVERTEXARRAYPROC = Boolean (GL_APIENTRYP)(Uint array);
using PFNLINEWIDTHPROC = void (GL_APIENTRYP)(Float width);
using PFNLINKPROGRAMPROC = void (GL_APIENTRYP)(Uint program);
using PFNLOGICOPPROC = void (GL_APIENTRYP)(Enum opcode);
using PFNMAPBUFFERPROC = void* (GL_APIENTRYP)(Enum target, Enum access);
using PFNMAPBUFFERRANGEPROC = void* (GL_APIENTRYP)(Enum target, Intptr offset, Sizeiptr length, Bitfield access);
using PFNMAPNAMEDBUFFERPROC = void* (GL_APIENTRYP)(Uint buffer, Enum access);
using PFNMAPNAMEDBUFFERRANGEPROC = void* (GL_APIENTRYP)(Uint buffer, Intptr offset, Sizeiptr length, Bitfield access);
using PFNMEMORYBARRIERPROC = void (GL_APIENTRYP)(Bitfield barriers);
using PFNMEMORYBARRIERBYREGIONPROC = void (GL_APIENTRYP)(Bitfield barriers);
using PFNMINSAMPLESHADINGPROC = void (GL_APIENTRYP)(Float value);
using PFNMULTIDRAWARRAYSPROC = void (GL_APIENTRYP)(Enum mode, const Int* first, const Sizei* count, Sizei drawcount);
using PFNMULTIDRAWARRAYSINDIRECTPROC = void (GL_APIENTRYP)(Enum mode, const void* indirect, Sizei drawcount, Sizei stride);
using PFNMULTIDRAWARRAYSINDIRECTCOUNTPROC = void (GL_APIENTRYP)(Enum mode, const void* indirect, Intptr drawcount, Sizei maxdrawcount, Sizei stride);
using PFNMULTIDRAWELEMENTSPROC = void (GL_APIENTRYP)(Enum mode, const Sizei* count, Enum type, const void** indices, Sizei drawcount);
using PFNMULTIDRAWELEMENTSBASEVERTEXPROC = void (GL_APIENTRYP)(Enum mode, const Sizei* count, Enum type, const void** indices, Sizei drawcount, const Int* basevertex);
using PFNMULTIDRAWELEMENTSINDIRECTPROC = void (GL_APIENTRYP)(Enum mode, Enum type, const void* indirect, Sizei drawcount, Sizei stride);
using PFNMULTIDRAWELEMENTSINDIRECTCOUNTPROC = void (GL_APIENTRYP)(Enum mode, Enum type, const void* indirect, Intptr drawcount, Sizei maxdrawcount, Sizei stride);
using PFNNAMEDBUFFERDATAPROC = void (GL_APIENTRYP)(Uint buffer, Sizeiptr size, const void* data, Enum usage);
using PFNNAMEDBUFFERSTORAGEPROC = void (GL_APIENTRYP)(Uint buffer, Sizeiptr size, const void* data, Bitfield flags);
using PFNNAMEDBUFFERSUBDATAPROC = void (GL_APIENTRYP)(Uint buffer, Intptr offset, Sizeiptr size, const void* data);
using PFNNAMEDFRAMEBUFFERDRAWBUFFERPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum buf);
using PFNNAMEDFRAMEBUFFERDRAWBUFFERSPROC = void (GL_APIENTRYP)(Uint framebuffer, Sizei n, const Enum* bufs);
using PFNNAMEDFRAMEBUFFERPARAMETERIPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum pname, Int param);
using PFNNAMEDFRAMEBUFFERREADBUFFERPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum src);
using PFNNAMEDFRAMEBUFFERRENDERBUFFERPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum attachment, Enum renderbuffertarget, Uint renderbuffer);
using PFNNAMEDFRAMEBUFFERTEXTUREPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum attachment, Uint texture, Int level);
using PFNNAMEDFRAMEBUFFERTEXTURELAYERPROC = void (GL_APIENTRYP)(Uint framebuffer, Enum attachment, Uint texture, Int level, Int layer);
using PFNNAMEDRENDERBUFFERSTORAGEPROC = void (GL_APIENTRYP)(Uint renderbuffer, Enum internalformat, Sizei width, Sizei height);
using PFNNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC = void (GL_APIENTRYP)(Uint renderbuffer, Sizei samples, Enum internalformat, Sizei width, Sizei height);
using PFNOBJECTLABELPROC = void (GL_APIENTRYP)(Enum identifier, Uint name, Sizei length, const Char* label);
using PFNOBJECTPTRLABELPROC = void (GL_APIENTRYP)(const void* ptr, Sizei length, const Char* label);
using PFNPATCHPARAMETERFVPROC = void (GL_APIENTRYP)(Enum pname, const Float* values);
using PFNPATCHPARAMETERIPROC = void (GL_APIENTRYP)(Enum pname, Int value);
using PFNPAUSETRANSFORMFEEDBACKPROC = void (GL_APIENTRYP)();
using PFNPIXELSTOREFPROC = void (GL_APIENTRYP)(Enum pname, Float param);
using PFNPIXELSTOREIPROC = void (GL_APIENTRYP)(Enum pname, Int param);
using PFNPOINTPARAMETERFPROC = void (GL_APIENTRYP)(Enum pname, Float param);
using PFNPOINTPARAMETERFVPROC = void (GL_APIENTRYP)(Enum pname, const Float* params);
using PFNPOINTPARAMETERIPROC = void (GL_APIENTRYP)(Enum pname, Int param);
using PFNPOINTPARAMETERIVPROC = void (GL_APIENTRYP)(Enum pname, const Int* params);
using PFNPOINTSIZEPROC = void (GL_APIENTRYP)(Float size);
using PFNPOLYGONMODEPROC = void (GL_APIENTRYP)(Enum face, Enum mode);
using PFNPOLYGONOFFSETPROC = void (GL_APIENTRYP)(Float factor, Float units);
using PFNPOLYGONOFFSETCLAMPPROC = void (GL_APIENTRYP)(Float factor, Float units, Float clamp);
using PFNPOPDEBUGGROUPPROC = void (GL_APIENTRYP)();
using PFNPRIMITIVERESTARTINDEXPROC = void (GL_APIENTRYP)(Uint index);
using PFNPROGRAMBINARYPROC = void (GL_APIENTRYP)(Uint program, Enum binaryFormat, const void* binary, Sizei length);
using PFNPROGRAMPARAMETERIPROC = void (GL_APIENTRYP)(Uint program, Enum pname, Int value);
using PFNPROGRAMUNIFORM1DPROC = void (GL_APIENTRYP)(Uint program, Int location, Double v0);
using PFNPROGRAMUNIFORM1DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Double* value);
using PFNPROGRAMUNIFORM1FPROC = void (GL_APIENTRYP)(Uint program, Int location, Float v0);
using PFNPROGRAMUNIFORM1FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Float* value);
using PFNPROGRAMUNIFORM1IPROC = void (GL_APIENTRYP)(Uint program, Int location, Int v0);
using PFNPROGRAMUNIFORM1IVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Int* value);
using PFNPROGRAMUNIFORM1UIPROC = void (GL_APIENTRYP)(Uint program, Int location, Uint v0);
using PFNPROGRAMUNIFORM1UIVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Uint* value);
using PFNPROGRAMUNIFORM2DPROC = void (GL_APIENTRYP)(Uint program, Int location, Double v0, Double v1);
using PFNPROGRAMUNIFORM2DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Double* value);
using PFNPROGRAMUNIFORM2FPROC = void (GL_APIENTRYP)(Uint program, Int location, Float v0, Float v1);
using PFNPROGRAMUNIFORM2FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Float* value);
using PFNPROGRAMUNIFORM2IPROC = void (GL_APIENTRYP)(Uint program, Int location, Int v0, Int v1);
using PFNPROGRAMUNIFORM2IVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Int* value);
using PFNPROGRAMUNIFORM2UIPROC = void (GL_APIENTRYP)(Uint program, Int location, Uint v0, Uint v1);
using PFNPROGRAMUNIFORM2UIVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Uint* value);
using PFNPROGRAMUNIFORM3DPROC = void (GL_APIENTRYP)(Uint program, Int location, Double v0, Double v1, Double v2);
using PFNPROGRAMUNIFORM3DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Double* value);
using PFNPROGRAMUNIFORM3FPROC = void (GL_APIENTRYP)(Uint program, Int location, Float v0, Float v1, Float v2);
using PFNPROGRAMUNIFORM3FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Float* value);
using PFNPROGRAMUNIFORM3IPROC = void (GL_APIENTRYP)(Uint program, Int location, Int v0, Int v1, Int v2);
using PFNPROGRAMUNIFORM3IVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Int* value);
using PFNPROGRAMUNIFORM3UIPROC = void (GL_APIENTRYP)(Uint program, Int location, Uint v0, Uint v1, Uint v2);
using PFNPROGRAMUNIFORM3UIVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Uint* value);
using PFNPROGRAMUNIFORM4DPROC = void (GL_APIENTRYP)(Uint program, Int location, Double v0, Double v1, Double v2, Double v3);
using PFNPROGRAMUNIFORM4DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Double* value);
using PFNPROGRAMUNIFORM4FPROC = void (GL_APIENTRYP)(Uint program, Int location, Float v0, Float v1, Float v2, Float v3);
using PFNPROGRAMUNIFORM4FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Float* value);
using PFNPROGRAMUNIFORM4IPROC = void (GL_APIENTRYP)(Uint program, Int location, Int v0, Int v1, Int v2, Int v3);
using PFNPROGRAMUNIFORM4IVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Int* value);
using PFNPROGRAMUNIFORM4UIPROC = void (GL_APIENTRYP)(Uint program, Int location, Uint v0, Uint v1, Uint v2, Uint v3);
using PFNPROGRAMUNIFORM4UIVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, const Uint* value);
using PFNPROGRAMUNIFORMMATRIX2DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Double* value);
using PFNPROGRAMUNIFORMMATRIX2FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Float* value);
using PFNPROGRAMUNIFORMMATRIX2X3DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Double* value);
using PFNPROGRAMUNIFORMMATRIX2X3FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Float* value);
using PFNPROGRAMUNIFORMMATRIX2X4DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Double* value);
using PFNPROGRAMUNIFORMMATRIX2X4FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Float* value);
using PFNPROGRAMUNIFORMMATRIX3DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Double* value);
using PFNPROGRAMUNIFORMMATRIX3FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Float* value);
using PFNPROGRAMUNIFORMMATRIX3X2DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Double* value);
using PFNPROGRAMUNIFORMMATRIX3X2FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Float* value);
using PFNPROGRAMUNIFORMMATRIX3X4DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Double* value);
using PFNPROGRAMUNIFORMMATRIX3X4FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Float* value);
using PFNPROGRAMUNIFORMMATRIX4DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Double* value);
using PFNPROGRAMUNIFORMMATRIX4FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Float* value);
using PFNPROGRAMUNIFORMMATRIX4X2DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Double* value);
using PFNPROGRAMUNIFORMMATRIX4X2FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Float* value);
using PFNPROGRAMUNIFORMMATRIX4X3DVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Double* value);
using PFNPROGRAMUNIFORMMATRIX4X3FVPROC = void (GL_APIENTRYP)(Uint program, Int location, Sizei count, Boolean transpose, const Float* value);
using PFNPROVOKINGVERTEXPROC = void (GL_APIENTRYP)(Enum mode);
using PFNPUSHDEBUGGROUPPROC = void (GL_APIENTRYP)(Enum source, Uint id, Sizei length, const Char* message);
using PFNQUERYCOUNTERPROC = void (GL_APIENTRYP)(Uint id, Enum target);
using PFNREADBUFFERPROC = void (GL_APIENTRYP)(Enum src);
using PFNREADPIXELSPROC = void (GL_APIENTRYP)(Int x, Int y, Sizei width, Sizei height, Enum format, Enum type, void* pixels);
using PFNREADNPIXELSPROC = void (GL_APIENTRYP)(Int x, Int y, Sizei width, Sizei height, Enum format, Enum type, Sizei bufSize, void* data);
using PFNRELEASESHADERCOMPILERPROC = void (GL_APIENTRYP)();
using PFNRENDERBUFFERSTORAGEPROC = void (GL_APIENTRYP)(Enum target, Enum internalformat, Sizei width, Sizei height);
using PFNRENDERBUFFERSTORAGEMULTISAMPLEPROC = void (GL_APIENTRYP)(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height);
using PFNRESUMETRANSFORMFEEDBACKPROC = void (GL_APIENTRYP)();
using PFNSAMPLECOVERAGEPROC = void (GL_APIENTRYP)(Float value, Boolean invert);
using PFNSAMPLEMASKIPROC = void (GL_APIENTRYP)(Uint maskNumber, Bitfield mask);
using PFNSAMPLERPARAMETERIIVPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, const Int* param);
using PFNSAMPLERPARAMETERIUIVPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, const Uint* param);
using PFNSAMPLERPARAMETERFPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, Float param);
using PFNSAMPLERPARAMETERFVPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, const Float* param);
using PFNSAMPLERPARAMETERIPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, Int param);
using PFNSAMPLERPARAMETERIVPROC = void (GL_APIENTRYP)(Uint sampler, Enum pname, const Int* param);
using PFNSCISSORPROC = void (GL_APIENTRYP)(Int x, Int y, Sizei width, Sizei height);
using PFNSCISSORARRAYVPROC = void (GL_APIENTRYP)(Uint first, Sizei count, const Int* v);
using PFNSCISSORINDEXEDPROC = void (GL_APIENTRYP)(Uint index, Int left, Int bottom, Sizei width, Sizei height);
using PFNSCISSORINDEXEDVPROC = void (GL_APIENTRYP)(Uint index, const Int* v);
using PFNSHADERBINARYPROC = void (GL_APIENTRYP)(Sizei count, const Uint* shaders, Enum binaryFormat, const void* binary, Sizei length);
using PFNSHADERSOURCEPROC = void (GL_APIENTRYP)(Uint shader, Sizei count, const Char** string, const Int* length);
using PFNSHADERSTORAGEBLOCKBINDINGPROC = void (GL_APIENTRYP)(Uint program, Uint storageBlockIndex, Uint storageBlockBinding);
using PFNSPECIALIZESHADERPROC = void (GL_APIENTRYP)(Uint shader, const Char* pEntryPoint, Uint numSpecializationConstants, const Uint* pConstantIndex, const Uint* pConstantValue);
using PFNSTENCILFUNCPROC = void (GL_APIENTRYP)(Enum func, Int ref, Uint mask);
using PFNSTENCILFUNCSEPARATEPROC = void (GL_APIENTRYP)(Enum face, Enum func, Int ref, Uint mask);
using PFNSTENCILMASKPROC = void (GL_APIENTRYP)(Uint mask);
using PFNSTENCILMASKSEPARATEPROC = void (GL_APIENTRYP)(Enum face, Uint mask);
using PFNSTENCILOPPROC = void (GL_APIENTRYP)(Enum fail, Enum zfail, Enum zpass);
using PFNSTENCILOPSEPARATEPROC = void (GL_APIENTRYP)(Enum face, Enum sfail, Enum dpfail, Enum dppass);
using PFNTEXBUFFERPROC = void (GL_APIENTRYP)(Enum target, Enum internalformat, Uint buffer);
using PFNTEXBUFFERRANGEPROC = void (GL_APIENTRYP)(Enum target, Enum internalformat, Uint buffer, Intptr offset, Sizeiptr size);
using PFNTEXIMAGE1DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int internalformat, Sizei width, Int border, Enum format, Enum type, const void* pixels);
using PFNTEXIMAGE2DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int internalformat, Sizei width, Sizei height, Int border, Enum format, Enum type, const void* pixels);
using PFNTEXIMAGE2DMULTISAMPLEPROC = void (GL_APIENTRYP)(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height, Boolean fixedsamplelocations);
using PFNTEXIMAGE3DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int internalformat, Sizei width, Sizei height, Sizei depth, Int border, Enum format, Enum type, const void* pixels);
using PFNTEXIMAGE3DMULTISAMPLEPROC = void (GL_APIENTRYP)(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height, Sizei depth, Boolean fixedsamplelocations);
using PFNTEXPARAMETERIIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, const Int* params);
using PFNTEXPARAMETERIUIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, const Uint* params);
using PFNTEXPARAMETERFPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Float param);
using PFNTEXPARAMETERFVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, const Float* params);
using PFNTEXPARAMETERIPROC = void (GL_APIENTRYP)(Enum target, Enum pname, Int param);
using PFNTEXPARAMETERIVPROC = void (GL_APIENTRYP)(Enum target, Enum pname, const Int* params);
using PFNTEXSTORAGE1DPROC = void (GL_APIENTRYP)(Enum target, Sizei levels, Enum internalformat, Sizei width);
using PFNTEXSTORAGE2DPROC = void (GL_APIENTRYP)(Enum target, Sizei levels, Enum internalformat, Sizei width, Sizei height);
using PFNTEXSTORAGE2DMULTISAMPLEPROC = void (GL_APIENTRYP)(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height, Boolean fixedsamplelocations);
using PFNTEXSTORAGE3DPROC = void (GL_APIENTRYP)(Enum target, Sizei levels, Enum internalformat, Sizei width, Sizei height, Sizei depth);
using PFNTEXSTORAGE3DMULTISAMPLEPROC = void (GL_APIENTRYP)(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height, Sizei depth, Boolean fixedsamplelocations);
using PFNTEXSUBIMAGE1DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int xoffset, Sizei width, Enum format, Enum type, const void* pixels);
using PFNTEXSUBIMAGE2DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, Enum format, Enum type, const void* pixels);
using PFNTEXSUBIMAGE3DPROC = void (GL_APIENTRYP)(Enum target, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Enum type, const void* pixels);
using PFNTEXTUREBARRIERPROC = void (GL_APIENTRYP)();
using PFNTEXTUREBUFFERPROC = void (GL_APIENTRYP)(Uint texture, Enum internalformat, Uint buffer);
using PFNTEXTUREBUFFERRANGEPROC = void (GL_APIENTRYP)(Uint texture, Enum internalformat, Uint buffer, Intptr offset, Sizeiptr size);
using PFNTEXTUREPARAMETERIIVPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, const Int* params);
using PFNTEXTUREPARAMETERIUIVPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, const Uint* params);
using PFNTEXTUREPARAMETERFPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, Float param);
using PFNTEXTUREPARAMETERFVPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, const Float* param);
using PFNTEXTUREPARAMETERIPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, Int param);
using PFNTEXTUREPARAMETERIVPROC = void (GL_APIENTRYP)(Uint texture, Enum pname, const Int* param);
using PFNTEXTURESTORAGE1DPROC = void (GL_APIENTRYP)(Uint texture, Sizei levels, Enum internalformat, Sizei width);
using PFNTEXTURESTORAGE2DPROC = void (GL_APIENTRYP)(Uint texture, Sizei levels, Enum internalformat, Sizei width, Sizei height);
using PFNTEXTURESTORAGE2DMULTISAMPLEPROC = void (GL_APIENTRYP)(Uint texture, Sizei samples, Enum internalformat, Sizei width, Sizei height, Boolean fixedsamplelocations);
using PFNTEXTURESTORAGE3DPROC = void (GL_APIENTRYP)(Uint texture, Sizei levels, Enum internalformat, Sizei width, Sizei height, Sizei depth);
using PFNTEXTURESTORAGE3DMULTISAMPLEPROC = void (GL_APIENTRYP)(Uint texture, Sizei samples, Enum internalformat, Sizei width, Sizei height, Sizei depth, Boolean fixedsamplelocations);
using PFNTEXTURESUBIMAGE1DPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Sizei width, Enum format, Enum type, const void* pixels);
using PFNTEXTURESUBIMAGE2DPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, Enum format, Enum type, const void* pixels);
using PFNTEXTURESUBIMAGE3DPROC = void (GL_APIENTRYP)(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Enum type, const void* pixels);
using PFNTEXTUREVIEWPROC = void (GL_APIENTRYP)(Uint texture, Enum target, Uint origtexture, Enum internalformat, Uint minlevel, Uint numlevels, Uint minlayer, Uint numlayers);
using PFNTRANSFORMFEEDBACKBUFFERBASEPROC = void (GL_APIENTRYP)(Uint xfb, Uint index, Uint buffer);
using PFNTRANSFORMFEEDBACKBUFFERRANGEPROC = void (GL_APIENTRYP)(Uint xfb, Uint index, Uint buffer, Intptr offset, Sizeiptr size);
using PFNTRANSFORMFEEDBACKVARYINGSPROC = void (GL_APIENTRYP)(Uint program, Sizei count, const Char** varyings, Enum bufferMode);
using PFNUNIFORM1DPROC = void (GL_APIENTRYP)(Int location, Double x);
using PFNUNIFORM1DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Double* value);
using PFNUNIFORM1FPROC = void (GL_APIENTRYP)(Int location, Float v0);
using PFNUNIFORM1FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Float* value);
using PFNUNIFORM1IPROC = void (GL_APIENTRYP)(Int location, Int v0);
using PFNUNIFORM1IVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Int* value);
using PFNUNIFORM1UIPROC = void (GL_APIENTRYP)(Int location, Uint v0);
using PFNUNIFORM1UIVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Uint* value);
using PFNUNIFORM2DPROC = void (GL_APIENTRYP)(Int location, Double x, Double y);
using PFNUNIFORM2DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Double* value);
using PFNUNIFORM2FPROC = void (GL_APIENTRYP)(Int location, Float v0, Float v1);
using PFNUNIFORM2FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Float* value);
using PFNUNIFORM2IPROC = void (GL_APIENTRYP)(Int location, Int v0, Int v1);
using PFNUNIFORM2IVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Int* value);
using PFNUNIFORM2UIPROC = void (GL_APIENTRYP)(Int location, Uint v0, Uint v1);
using PFNUNIFORM2UIVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Uint* value);
using PFNUNIFORM3DPROC = void (GL_APIENTRYP)(Int location, Double x, Double y, Double z);
using PFNUNIFORM3DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Double* value);
using PFNUNIFORM3FPROC = void (GL_APIENTRYP)(Int location, Float v0, Float v1, Float v2);
using PFNUNIFORM3FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Float* value);
using PFNUNIFORM3IPROC = void (GL_APIENTRYP)(Int location, Int v0, Int v1, Int v2);
using PFNUNIFORM3IVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Int* value);
using PFNUNIFORM3UIPROC = void (GL_APIENTRYP)(Int location, Uint v0, Uint v1, Uint v2);
using PFNUNIFORM3UIVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Uint* value);
using PFNUNIFORM4DPROC = void (GL_APIENTRYP)(Int location, Double x, Double y, Double z, Double w);
using PFNUNIFORM4DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Double* value);
using PFNUNIFORM4FPROC = void (GL_APIENTRYP)(Int location, Float v0, Float v1, Float v2, Float v3);
using PFNUNIFORM4FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Float* value);
using PFNUNIFORM4IPROC = void (GL_APIENTRYP)(Int location, Int v0, Int v1, Int v2, Int v3);
using PFNUNIFORM4IVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Int* value);
using PFNUNIFORM4UIPROC = void (GL_APIENTRYP)(Int location, Uint v0, Uint v1, Uint v2, Uint v3);
using PFNUNIFORM4UIVPROC = void (GL_APIENTRYP)(Int location, Sizei count, const Uint* value);
using PFNUNIFORMBLOCKBINDINGPROC = void (GL_APIENTRYP)(Uint program, Uint uniformBlockIndex, Uint uniformBlockBinding);
using PFNUNIFORMMATRIX2DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Double* value);
using PFNUNIFORMMATRIX2FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Float* value);
using PFNUNIFORMMATRIX2X3DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Double* value);
using PFNUNIFORMMATRIX2X3FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Float* value);
using PFNUNIFORMMATRIX2X4DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Double* value);
using PFNUNIFORMMATRIX2X4FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Float* value);
using PFNUNIFORMMATRIX3DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Double* value);
using PFNUNIFORMMATRIX3FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Float* value);
using PFNUNIFORMMATRIX3X2DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Double* value);
using PFNUNIFORMMATRIX3X2FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Float* value);
using PFNUNIFORMMATRIX3X4DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Double* value);
using PFNUNIFORMMATRIX3X4FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Float* value);
using PFNUNIFORMMATRIX4DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Double* value);
using PFNUNIFORMMATRIX4FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Float* value);
using PFNUNIFORMMATRIX4X2DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Double* value);
using PFNUNIFORMMATRIX4X2FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Float* value);
using PFNUNIFORMMATRIX4X3DVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Double* value);
using PFNUNIFORMMATRIX4X3FVPROC = void (GL_APIENTRYP)(Int location, Sizei count, Boolean transpose, const Float* value);
using PFNUNIFORMSUBROUTINESUIVPROC = void (GL_APIENTRYP)(Enum shadertype, Sizei count, const Uint* indices);
using PFNUNMAPBUFFERPROC = Boolean (GL_APIENTRYP)(Enum target);
using PFNUNMAPNAMEDBUFFERPROC = Boolean (GL_APIENTRYP)(Uint buffer);
using PFNUSEPROGRAMPROC = void (GL_APIENTRYP)(Uint program);
using PFNUSEPROGRAMSTAGESPROC = void (GL_APIENTRYP)(Uint pipeline, Bitfield stages, Uint program);
using PFNVALIDATEPROGRAMPROC = void (GL_APIENTRYP)(Uint program);
using PFNVALIDATEPROGRAMPIPELINEPROC = void (GL_APIENTRYP)(Uint pipeline);
using PFNVERTEXARRAYATTRIBBINDINGPROC = void (GL_APIENTRYP)(Uint vaobj, Uint attribindex, Uint bindingindex);
using PFNVERTEXARRAYATTRIBFORMATPROC = void (GL_APIENTRYP)(Uint vaobj, Uint attribindex, Int size, Enum type, Boolean normalized, Uint relativeoffset);
using PFNVERTEXARRAYATTRIBIFORMATPROC = void (GL_APIENTRYP)(Uint vaobj, Uint attribindex, Int size, Enum type, Uint relativeoffset);
using PFNVERTEXARRAYATTRIBLFORMATPROC = void (GL_APIENTRYP)(Uint vaobj, Uint attribindex, Int size, Enum type, Uint relativeoffset);
using PFNVERTEXARRAYBINDINGDIVISORPROC = void (GL_APIENTRYP)(Uint vaobj, Uint bindingindex, Uint divisor);
using PFNVERTEXARRAYELEMENTBUFFERPROC = void (GL_APIENTRYP)(Uint vaobj, Uint buffer);
using PFNVERTEXARRAYVERTEXBUFFERPROC = void (GL_APIENTRYP)(Uint vaobj, Uint bindingindex, Uint buffer, Intptr offset, Sizei stride);
using PFNVERTEXARRAYVERTEXBUFFERSPROC = void (GL_APIENTRYP)(Uint vaobj, Uint first, Sizei count, const Uint* buffers, const Intptr* offsets, const Sizei* strides);
using PFNVERTEXATTRIB1DPROC = void (GL_APIENTRYP)(Uint index, Double x);
using PFNVERTEXATTRIB1DVPROC = void (GL_APIENTRYP)(Uint index, const Double* v);
using PFNVERTEXATTRIB1FPROC = void (GL_APIENTRYP)(Uint index, Float x);
using PFNVERTEXATTRIB1FVPROC = void (GL_APIENTRYP)(Uint index, const Float* v);
using PFNVERTEXATTRIB1SPROC = void (GL_APIENTRYP)(Uint index, Short x);
using PFNVERTEXATTRIB1SVPROC = void (GL_APIENTRYP)(Uint index, const Short* v);
using PFNVERTEXATTRIB2DPROC = void (GL_APIENTRYP)(Uint index, Double x, Double y);
using PFNVERTEXATTRIB2DVPROC = void (GL_APIENTRYP)(Uint index, const Double* v);
using PFNVERTEXATTRIB2FPROC = void (GL_APIENTRYP)(Uint index, Float x, Float y);
using PFNVERTEXATTRIB2FVPROC = void (GL_APIENTRYP)(Uint index, const Float* v);
using PFNVERTEXATTRIB2SPROC = void (GL_APIENTRYP)(Uint index, Short x, Short y);
using PFNVERTEXATTRIB2SVPROC = void (GL_APIENTRYP)(Uint index, const Short* v);
using PFNVERTEXATTRIB3DPROC = void (GL_APIENTRYP)(Uint index, Double x, Double y, Double z);
using PFNVERTEXATTRIB3DVPROC = void (GL_APIENTRYP)(Uint index, const Double* v);
using PFNVERTEXATTRIB3FPROC = void (GL_APIENTRYP)(Uint index, Float x, Float y, Float z);
using PFNVERTEXATTRIB3FVPROC = void (GL_APIENTRYP)(Uint index, const Float* v);
using PFNVERTEXATTRIB3SPROC = void (GL_APIENTRYP)(Uint index, Short x, Short y, Short z);
using PFNVERTEXATTRIB3SVPROC = void (GL_APIENTRYP)(Uint index, const Short* v);
using PFNVERTEXATTRIB4NBVPROC = void (GL_APIENTRYP)(Uint index, const Byte* v);
using PFNVERTEXATTRIB4NIVPROC = void (GL_APIENTRYP)(Uint index, const Int* v);
using PFNVERTEXATTRIB4NSVPROC = void (GL_APIENTRYP)(Uint index, const Short* v);
using PFNVERTEXATTRIB4NUBPROC = void (GL_APIENTRYP)(Uint index, Ubyte x, Ubyte y, Ubyte z, Ubyte w);
using PFNVERTEXATTRIB4NUBVPROC = void (GL_APIENTRYP)(Uint index, const Ubyte* v);
using PFNVERTEXATTRIB4NUIVPROC = void (GL_APIENTRYP)(Uint index, const Uint* v);
using PFNVERTEXATTRIB4NUSVPROC = void (GL_APIENTRYP)(Uint index, const Ushort* v);
using PFNVERTEXATTRIB4BVPROC = void (GL_APIENTRYP)(Uint index, const Byte* v);
using PFNVERTEXATTRIB4DPROC = void (GL_APIENTRYP)(Uint index, Double x, Double y, Double z, Double w);
using PFNVERTEXATTRIB4DVPROC = void (GL_APIENTRYP)(Uint index, const Double* v);
using PFNVERTEXATTRIB4FPROC = void (GL_APIENTRYP)(Uint index, Float x, Float y, Float z, Float w);
using PFNVERTEXATTRIB4FVPROC = void (GL_APIENTRYP)(Uint index, const Float* v);
using PFNVERTEXATTRIB4IVPROC = void (GL_APIENTRYP)(Uint index, const Int* v);
using PFNVERTEXATTRIB4SPROC = void (GL_APIENTRYP)(Uint index, Short x, Short y, Short z, Short w);
using PFNVERTEXATTRIB4SVPROC = void (GL_APIENTRYP)(Uint index, const Short* v);
using PFNVERTEXATTRIB4UBVPROC = void (GL_APIENTRYP)(Uint index, const Ubyte* v);
using PFNVERTEXATTRIB4UIVPROC = void (GL_APIENTRYP)(Uint index, const Uint* v);
using PFNVERTEXATTRIB4USVPROC = void (GL_APIENTRYP)(Uint index, const Ushort* v);
using PFNVERTEXATTRIBBINDINGPROC = void (GL_APIENTRYP)(Uint attribindex, Uint bindingindex);
using PFNVERTEXATTRIBDIVISORPROC = void (GL_APIENTRYP)(Uint index, Uint divisor);
using PFNVERTEXATTRIBFORMATPROC = void (GL_APIENTRYP)(Uint attribindex, Int size, Enum type, Boolean normalized, Uint relativeoffset);
using PFNVERTEXATTRIBI1IPROC = void (GL_APIENTRYP)(Uint index, Int x);
using PFNVERTEXATTRIBI1IVPROC = void (GL_APIENTRYP)(Uint index, const Int* v);
using PFNVERTEXATTRIBI1UIPROC = void (GL_APIENTRYP)(Uint index, Uint x);
using PFNVERTEXATTRIBI1UIVPROC = void (GL_APIENTRYP)(Uint index, const Uint* v);
using PFNVERTEXATTRIBI2IPROC = void (GL_APIENTRYP)(Uint index, Int x, Int y);
using PFNVERTEXATTRIBI2IVPROC = void (GL_APIENTRYP)(Uint index, const Int* v);
using PFNVERTEXATTRIBI2UIPROC = void (GL_APIENTRYP)(Uint index, Uint x, Uint y);
using PFNVERTEXATTRIBI2UIVPROC = void (GL_APIENTRYP)(Uint index, const Uint* v);
using PFNVERTEXATTRIBI3IPROC = void (GL_APIENTRYP)(Uint index, Int x, Int y, Int z);
using PFNVERTEXATTRIBI3IVPROC = void (GL_APIENTRYP)(Uint index, const Int* v);
using PFNVERTEXATTRIBI3UIPROC = void (GL_APIENTRYP)(Uint index, Uint x, Uint y, Uint z);
using PFNVERTEXATTRIBI3UIVPROC = void (GL_APIENTRYP)(Uint index, const Uint* v);
using PFNVERTEXATTRIBI4BVPROC = void (GL_APIENTRYP)(Uint index, const Byte* v);
using PFNVERTEXATTRIBI4IPROC = void (GL_APIENTRYP)(Uint index, Int x, Int y, Int z, Int w);
using PFNVERTEXATTRIBI4IVPROC = void (GL_APIENTRYP)(Uint index, const Int* v);
using PFNVERTEXATTRIBI4SVPROC = void (GL_APIENTRYP)(Uint index, const Short* v);
using PFNVERTEXATTRIBI4UBVPROC = void (GL_APIENTRYP)(Uint index, const Ubyte* v);
using PFNVERTEXATTRIBI4UIPROC = void (GL_APIENTRYP)(Uint index, Uint x, Uint y, Uint z, Uint w);
using PFNVERTEXATTRIBI4UIVPROC = void (GL_APIENTRYP)(Uint index, const Uint* v);
using PFNVERTEXATTRIBI4USVPROC = void (GL_APIENTRYP)(Uint index, const Ushort* v);
using PFNVERTEXATTRIBIFORMATPROC = void (GL_APIENTRYP)(Uint attribindex, Int size, Enum type, Uint relativeoffset);
using PFNVERTEXATTRIBIPOINTERPROC = void (GL_APIENTRYP)(Uint index, Int size, Enum type, Sizei stride, const void* pointer);
using PFNVERTEXATTRIBL1DPROC = void (GL_APIENTRYP)(Uint index, Double x);
using PFNVERTEXATTRIBL1DVPROC = void (GL_APIENTRYP)(Uint index, const Double* v);
using PFNVERTEXATTRIBL2DPROC = void (GL_APIENTRYP)(Uint index, Double x, Double y);
using PFNVERTEXATTRIBL2DVPROC = void (GL_APIENTRYP)(Uint index, const Double* v);
using PFNVERTEXATTRIBL3DPROC = void (GL_APIENTRYP)(Uint index, Double x, Double y, Double z);
using PFNVERTEXATTRIBL3DVPROC = void (GL_APIENTRYP)(Uint index, const Double* v);
using PFNVERTEXATTRIBL4DPROC = void (GL_APIENTRYP)(Uint index, Double x, Double y, Double z, Double w);
using PFNVERTEXATTRIBL4DVPROC = void (GL_APIENTRYP)(Uint index, const Double* v);
using PFNVERTEXATTRIBLFORMATPROC = void (GL_APIENTRYP)(Uint attribindex, Int size, Enum type, Uint relativeoffset);
using PFNVERTEXATTRIBLPOINTERPROC = void (GL_APIENTRYP)(Uint index, Int size, Enum type, Sizei stride, const void* pointer);
using PFNVERTEXATTRIBP1UIPROC = void (GL_APIENTRYP)(Uint index, Enum type, Boolean normalized, Uint value);
using PFNVERTEXATTRIBP1UIVPROC = void (GL_APIENTRYP)(Uint index, Enum type, Boolean normalized, const Uint* value);
using PFNVERTEXATTRIBP2UIPROC = void (GL_APIENTRYP)(Uint index, Enum type, Boolean normalized, Uint value);
using PFNVERTEXATTRIBP2UIVPROC = void (GL_APIENTRYP)(Uint index, Enum type, Boolean normalized, const Uint* value);
using PFNVERTEXATTRIBP3UIPROC = void (GL_APIENTRYP)(Uint index, Enum type, Boolean normalized, Uint value);
using PFNVERTEXATTRIBP3UIVPROC = void (GL_APIENTRYP)(Uint index, Enum type, Boolean normalized, const Uint* value);
using PFNVERTEXATTRIBP4UIPROC = void (GL_APIENTRYP)(Uint index, Enum type, Boolean normalized, Uint value);
using PFNVERTEXATTRIBP4UIVPROC = void (GL_APIENTRYP)(Uint index, Enum type, Boolean normalized, const Uint* value);
using PFNVERTEXATTRIBPOINTERPROC = void (GL_APIENTRYP)(Uint index, Int size, Enum type, Boolean normalized, Sizei stride, const void* pointer);
using PFNVERTEXBINDINGDIVISORPROC = void (GL_APIENTRYP)(Uint bindingindex, Uint divisor);
using PFNVIEWPORTPROC = void (GL_APIENTRYP)(Int x, Int y, Sizei width, Sizei height);
using PFNVIEWPORTARRAYVPROC = void (GL_APIENTRYP)(Uint first, Sizei count, const Float* v);
using PFNVIEWPORTINDEXEDFPROC = void (GL_APIENTRYP)(Uint index, Float x, Float y, Float w, Float h);
using PFNVIEWPORTINDEXEDFVPROC = void (GL_APIENTRYP)(Uint index, const Float* v);
using PFNWAITSYNCPROC = void (GL_APIENTRYP)(Sync sync, Bitfield flags, Uint64 timeout);

} // namespace detail
} // namespace gl


namespace gl::detail {

inline PFNACTIVESHADERPROGRAMPROC ptrActiveShaderProgram = nullptr;
inline PFNACTIVETEXTUREPROC ptrActiveTexture = nullptr;
inline PFNATTACHSHADERPROC ptrAttachShader = nullptr;
inline PFNBEGINCONDITIONALRENDERPROC ptrBeginConditionalRender = nullptr;
inline PFNBEGINQUERYPROC ptrBeginQuery = nullptr;
inline PFNBEGINQUERYINDEXEDPROC ptrBeginQueryIndexed = nullptr;
inline PFNBEGINTRANSFORMFEEDBACKPROC ptrBeginTransformFeedback = nullptr;
inline PFNBINDATTRIBLOCATIONPROC ptrBindAttribLocation = nullptr;
inline PFNBINDBUFFERPROC ptrBindBuffer = nullptr;
inline PFNBINDBUFFERBASEPROC ptrBindBufferBase = nullptr;
inline PFNBINDBUFFERRANGEPROC ptrBindBufferRange = nullptr;
inline PFNBINDBUFFERSBASEPROC ptrBindBuffersBase = nullptr;
inline PFNBINDBUFFERSRANGEPROC ptrBindBuffersRange = nullptr;
inline PFNBINDFRAGDATALOCATIONPROC ptrBindFragDataLocation = nullptr;
inline PFNBINDFRAGDATALOCATIONINDEXEDPROC ptrBindFragDataLocationIndexed = nullptr;
inline PFNBINDFRAMEBUFFERPROC ptrBindFramebuffer = nullptr;
inline PFNBINDIMAGETEXTUREPROC ptrBindImageTexture = nullptr;
inline PFNBINDIMAGETEXTURESPROC ptrBindImageTextures = nullptr;
inline PFNBINDPROGRAMPIPELINEPROC ptrBindProgramPipeline = nullptr;
inline PFNBINDRENDERBUFFERPROC ptrBindRenderbuffer = nullptr;
inline PFNBINDSAMPLERPROC ptrBindSampler = nullptr;
inline PFNBINDSAMPLERSPROC ptrBindSamplers = nullptr;
inline PFNBINDTEXTUREPROC ptrBindTexture = nullptr;
inline PFNBINDTEXTUREUNITPROC ptrBindTextureUnit = nullptr;
inline PFNBINDTEXTURESPROC ptrBindTextures = nullptr;
inline PFNBINDTRANSFORMFEEDBACKPROC ptrBindTransformFeedback = nullptr;
inline PFNBINDVERTEXARRAYPROC ptrBindVertexArray = nullptr;
inline PFNBINDVERTEXBUFFERPROC ptrBindVertexBuffer = nullptr;
inline PFNBINDVERTEXBUFFERSPROC ptrBindVertexBuffers = nullptr;
inline PFNBLENDCOLORPROC ptrBlendColor = nullptr;
inline PFNBLENDEQUATIONPROC ptrBlendEquation = nullptr;
inline PFNBLENDEQUATIONSEPARATEPROC ptrBlendEquationSeparate = nullptr;
inline PFNBLENDEQUATIONSEPARATEIPROC ptrBlendEquationSeparatei = nullptr;
inline PFNBLENDEQUATIONIPROC ptrBlendEquationi = nullptr;
inline PFNBLENDFUNCPROC ptrBlendFunc = nullptr;
inline PFNBLENDFUNCSEPARATEPROC ptrBlendFuncSeparate = nullptr;
inline PFNBLENDFUNCSEPARATEIPROC ptrBlendFuncSeparatei = nullptr;
inline PFNBLENDFUNCIPROC ptrBlendFunci = nullptr;
inline PFNBLITFRAMEBUFFERPROC ptrBlitFramebuffer = nullptr;
inline PFNBLITNAMEDFRAMEBUFFERPROC ptrBlitNamedFramebuffer = nullptr;
inline PFNBUFFERDATAPROC ptrBufferData = nullptr;
inline PFNBUFFERSTORAGEPROC ptrBufferStorage = nullptr;
inline PFNBUFFERSUBDATAPROC ptrBufferSubData = nullptr;
inline PFNCHECKFRAMEBUFFERSTATUSPROC ptrCheckFramebufferStatus = nullptr;
inline PFNCHECKNAMEDFRAMEBUFFERSTATUSPROC ptrCheckNamedFramebufferStatus = nullptr;
inline PFNCLAMPCOLORPROC ptrClampColor = nullptr;
inline PFNCLEARPROC ptrClear = nullptr;
inline PFNCLEARBUFFERDATAPROC ptrClearBufferData = nullptr;
inline PFNCLEARBUFFERSUBDATAPROC ptrClearBufferSubData = nullptr;
inline PFNCLEARBUFFERFIPROC ptrClearBufferfi = nullptr;
inline PFNCLEARBUFFERFVPROC ptrClearBufferfv = nullptr;
inline PFNCLEARBUFFERIVPROC ptrClearBufferiv = nullptr;
inline PFNCLEARBUFFERUIVPROC ptrClearBufferuiv = nullptr;
inline PFNCLEARCOLORPROC ptrClearColor = nullptr;
inline PFNCLEARDEPTHPROC ptrClearDepth = nullptr;
inline PFNCLEARDEPTHFPROC ptrClearDepthf = nullptr;
inline PFNCLEARNAMEDBUFFERDATAPROC ptrClearNamedBufferData = nullptr;
inline PFNCLEARNAMEDBUFFERSUBDATAPROC ptrClearNamedBufferSubData = nullptr;
inline PFNCLEARNAMEDFRAMEBUFFERFIPROC ptrClearNamedFramebufferfi = nullptr;
inline PFNCLEARNAMEDFRAMEBUFFERFVPROC ptrClearNamedFramebufferfv = nullptr;
inline PFNCLEARNAMEDFRAMEBUFFERIVPROC ptrClearNamedFramebufferiv = nullptr;
inline PFNCLEARNAMEDFRAMEBUFFERUIVPROC ptrClearNamedFramebufferuiv = nullptr;
inline PFNCLEARSTENCILPROC ptrClearStencil = nullptr;
inline PFNCLEARTEXIMAGEPROC ptrClearTexImage = nullptr;
inline PFNCLEARTEXSUBIMAGEPROC ptrClearTexSubImage = nullptr;
inline PFNCLIENTWAITSYNCPROC ptrClientWaitSync = nullptr;
inline PFNCLIPCONTROLPROC ptrClipControl = nullptr;
inline PFNCOLORMASKPROC ptrColorMask = nullptr;
inline PFNCOLORMASKIPROC ptrColorMaski = nullptr;
inline PFNCOMPILESHADERPROC ptrCompileShader = nullptr;
inline PFNCOMPRESSEDTEXIMAGE1DPROC ptrCompressedTexImage1D = nullptr;
inline PFNCOMPRESSEDTEXIMAGE2DPROC ptrCompressedTexImage2D = nullptr;
inline PFNCOMPRESSEDTEXIMAGE3DPROC ptrCompressedTexImage3D = nullptr;
inline PFNCOMPRESSEDTEXSUBIMAGE1DPROC ptrCompressedTexSubImage1D = nullptr;
inline PFNCOMPRESSEDTEXSUBIMAGE2DPROC ptrCompressedTexSubImage2D = nullptr;
inline PFNCOMPRESSEDTEXSUBIMAGE3DPROC ptrCompressedTexSubImage3D = nullptr;
inline PFNCOMPRESSEDTEXTURESUBIMAGE1DPROC ptrCompressedTextureSubImage1D = nullptr;
inline PFNCOMPRESSEDTEXTURESUBIMAGE2DPROC ptrCompressedTextureSubImage2D = nullptr;
inline PFNCOMPRESSEDTEXTURESUBIMAGE3DPROC ptrCompressedTextureSubImage3D = nullptr;
inline PFNCOPYBUFFERSUBDATAPROC ptrCopyBufferSubData = nullptr;
inline PFNCOPYIMAGESUBDATAPROC ptrCopyImageSubData = nullptr;
inline PFNCOPYNAMEDBUFFERSUBDATAPROC ptrCopyNamedBufferSubData = nullptr;
inline PFNCOPYTEXIMAGE1DPROC ptrCopyTexImage1D = nullptr;
inline PFNCOPYTEXIMAGE2DPROC ptrCopyTexImage2D = nullptr;
inline PFNCOPYTEXSUBIMAGE1DPROC ptrCopyTexSubImage1D = nullptr;
inline PFNCOPYTEXSUBIMAGE2DPROC ptrCopyTexSubImage2D = nullptr;
inline PFNCOPYTEXSUBIMAGE3DPROC ptrCopyTexSubImage3D = nullptr;
inline PFNCOPYTEXTURESUBIMAGE1DPROC ptrCopyTextureSubImage1D = nullptr;
inline PFNCOPYTEXTURESUBIMAGE2DPROC ptrCopyTextureSubImage2D = nullptr;
inline PFNCOPYTEXTURESUBIMAGE3DPROC ptrCopyTextureSubImage3D = nullptr;
inline PFNCREATEBUFFERSPROC ptrCreateBuffers = nullptr;
inline PFNCREATEFRAMEBUFFERSPROC ptrCreateFramebuffers = nullptr;
inline PFNCREATEPROGRAMPROC ptrCreateProgram = nullptr;
inline PFNCREATEPROGRAMPIPELINESPROC ptrCreateProgramPipelines = nullptr;
inline PFNCREATEQUERIESPROC ptrCreateQueries = nullptr;
inline PFNCREATERENDERBUFFERSPROC ptrCreateRenderbuffers = nullptr;
inline PFNCREATESAMPLERSPROC ptrCreateSamplers = nullptr;
inline PFNCREATESHADERPROC ptrCreateShader = nullptr;
inline PFNCREATESHADERPROGRAMVPROC ptrCreateShaderProgramv = nullptr;
inline PFNCREATETEXTURESPROC ptrCreateTextures = nullptr;
inline PFNCREATETRANSFORMFEEDBACKSPROC ptrCreateTransformFeedbacks = nullptr;
inline PFNCREATEVERTEXARRAYSPROC ptrCreateVertexArrays = nullptr;
inline PFNCULLFACEPROC ptrCullFace = nullptr;
inline PFNDEBUGMESSAGECALLBACKPROC ptrDebugMessageCallback = nullptr;
inline PFNDEBUGMESSAGECONTROLPROC ptrDebugMessageControl = nullptr;
inline PFNDEBUGMESSAGEINSERTPROC ptrDebugMessageInsert = nullptr;
inline PFNDELETEBUFFERSPROC ptrDeleteBuffers = nullptr;
inline PFNDELETEFRAMEBUFFERSPROC ptrDeleteFramebuffers = nullptr;
inline PFNDELETEPROGRAMPROC ptrDeleteProgram = nullptr;
inline PFNDELETEPROGRAMPIPELINESPROC ptrDeleteProgramPipelines = nullptr;
inline PFNDELETEQUERIESPROC ptrDeleteQueries = nullptr;
inline PFNDELETERENDERBUFFERSPROC ptrDeleteRenderbuffers = nullptr;
inline PFNDELETESAMPLERSPROC ptrDeleteSamplers = nullptr;
inline PFNDELETESHADERPROC ptrDeleteShader = nullptr;
inline PFNDELETESYNCPROC ptrDeleteSync = nullptr;
inline PFNDELETETEXTURESPROC ptrDeleteTextures = nullptr;
inline PFNDELETETRANSFORMFEEDBACKSPROC ptrDeleteTransformFeedbacks = nullptr;
inline PFNDELETEVERTEXARRAYSPROC ptrDeleteVertexArrays = nullptr;
inline PFNDEPTHFUNCPROC ptrDepthFunc = nullptr;
inline PFNDEPTHMASKPROC ptrDepthMask = nullptr;
inline PFNDEPTHRANGEPROC ptrDepthRange = nullptr;
inline PFNDEPTHRANGEARRAYVPROC ptrDepthRangeArrayv = nullptr;
inline PFNDEPTHRANGEINDEXEDPROC ptrDepthRangeIndexed = nullptr;
inline PFNDEPTHRANGEFPROC ptrDepthRangef = nullptr;
inline PFNDETACHSHADERPROC ptrDetachShader = nullptr;
inline PFNDISABLEPROC ptrDisable = nullptr;
inline PFNDISABLEVERTEXARRAYATTRIBPROC ptrDisableVertexArrayAttrib = nullptr;
inline PFNDISABLEVERTEXATTRIBARRAYPROC ptrDisableVertexAttribArray = nullptr;
inline PFNDISABLEIPROC ptrDisablei = nullptr;
inline PFNDISPATCHCOMPUTEPROC ptrDispatchCompute = nullptr;
inline PFNDISPATCHCOMPUTEINDIRECTPROC ptrDispatchComputeIndirect = nullptr;
inline PFNDRAWARRAYSPROC ptrDrawArrays = nullptr;
inline PFNDRAWARRAYSINDIRECTPROC ptrDrawArraysIndirect = nullptr;
inline PFNDRAWARRAYSINSTANCEDPROC ptrDrawArraysInstanced = nullptr;
inline PFNDRAWARRAYSINSTANCEDBASEINSTANCEPROC ptrDrawArraysInstancedBaseInstance = nullptr;
inline PFNDRAWBUFFERPROC ptrDrawBuffer = nullptr;
inline PFNDRAWBUFFERSPROC ptrDrawBuffers = nullptr;
inline PFNDRAWELEMENTSPROC ptrDrawElements = nullptr;
inline PFNDRAWELEMENTSBASEVERTEXPROC ptrDrawElementsBaseVertex = nullptr;
inline PFNDRAWELEMENTSINDIRECTPROC ptrDrawElementsIndirect = nullptr;
inline PFNDRAWELEMENTSINSTANCEDPROC ptrDrawElementsInstanced = nullptr;
inline PFNDRAWELEMENTSINSTANCEDBASEINSTANCEPROC ptrDrawElementsInstancedBaseInstance = nullptr;
inline PFNDRAWELEMENTSINSTANCEDBASEVERTEXPROC ptrDrawElementsInstancedBaseVertex = nullptr;
inline PFNDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC ptrDrawElementsInstancedBaseVertexBaseInstance = nullptr;
inline PFNDRAWRANGEELEMENTSPROC ptrDrawRangeElements = nullptr;
inline PFNDRAWRANGEELEMENTSBASEVERTEXPROC ptrDrawRangeElementsBaseVertex = nullptr;
inline PFNDRAWTRANSFORMFEEDBACKPROC ptrDrawTransformFeedback = nullptr;
inline PFNDRAWTRANSFORMFEEDBACKINSTANCEDPROC ptrDrawTransformFeedbackInstanced = nullptr;
inline PFNDRAWTRANSFORMFEEDBACKSTREAMPROC ptrDrawTransformFeedbackStream = nullptr;
inline PFNDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC ptrDrawTransformFeedbackStreamInstanced = nullptr;
inline PFNENABLEPROC ptrEnable = nullptr;
inline PFNENABLEVERTEXARRAYATTRIBPROC ptrEnableVertexArrayAttrib = nullptr;
inline PFNENABLEVERTEXATTRIBARRAYPROC ptrEnableVertexAttribArray = nullptr;
inline PFNENABLEIPROC ptrEnablei = nullptr;
inline PFNENDCONDITIONALRENDERPROC ptrEndConditionalRender = nullptr;
inline PFNENDQUERYPROC ptrEndQuery = nullptr;
inline PFNENDQUERYINDEXEDPROC ptrEndQueryIndexed = nullptr;
inline PFNENDTRANSFORMFEEDBACKPROC ptrEndTransformFeedback = nullptr;
inline PFNFENCESYNCPROC ptrFenceSync = nullptr;
inline PFNFINISHPROC ptrFinish = nullptr;
inline PFNFLUSHPROC ptrFlush = nullptr;
inline PFNFLUSHMAPPEDBUFFERRANGEPROC ptrFlushMappedBufferRange = nullptr;
inline PFNFLUSHMAPPEDNAMEDBUFFERRANGEPROC ptrFlushMappedNamedBufferRange = nullptr;
inline PFNFRAMEBUFFERPARAMETERIPROC ptrFramebufferParameteri = nullptr;
inline PFNFRAMEBUFFERRENDERBUFFERPROC ptrFramebufferRenderbuffer = nullptr;
inline PFNFRAMEBUFFERTEXTUREPROC ptrFramebufferTexture = nullptr;
inline PFNFRAMEBUFFERTEXTURE1DPROC ptrFramebufferTexture1D = nullptr;
inline PFNFRAMEBUFFERTEXTURE2DPROC ptrFramebufferTexture2D = nullptr;
inline PFNFRAMEBUFFERTEXTURE3DPROC ptrFramebufferTexture3D = nullptr;
inline PFNFRAMEBUFFERTEXTURELAYERPROC ptrFramebufferTextureLayer = nullptr;
inline PFNFRONTFACEPROC ptrFrontFace = nullptr;
inline PFNGENBUFFERSPROC ptrGenBuffers = nullptr;
inline PFNGENFRAMEBUFFERSPROC ptrGenFramebuffers = nullptr;
inline PFNGENPROGRAMPIPELINESPROC ptrGenProgramPipelines = nullptr;
inline PFNGENQUERIESPROC ptrGenQueries = nullptr;
inline PFNGENRENDERBUFFERSPROC ptrGenRenderbuffers = nullptr;
inline PFNGENSAMPLERSPROC ptrGenSamplers = nullptr;
inline PFNGENTEXTURESPROC ptrGenTextures = nullptr;
inline PFNGENTRANSFORMFEEDBACKSPROC ptrGenTransformFeedbacks = nullptr;
inline PFNGENVERTEXARRAYSPROC ptrGenVertexArrays = nullptr;
inline PFNGENERATEMIPMAPPROC ptrGenerateMipmap = nullptr;
inline PFNGENERATETEXTUREMIPMAPPROC ptrGenerateTextureMipmap = nullptr;
inline PFNGETACTIVEATOMICCOUNTERBUFFERIVPROC ptrGetActiveAtomicCounterBufferiv = nullptr;
inline PFNGETACTIVEATTRIBPROC ptrGetActiveAttrib = nullptr;
inline PFNGETACTIVESUBROUTINENAMEPROC ptrGetActiveSubroutineName = nullptr;
inline PFNGETACTIVESUBROUTINEUNIFORMNAMEPROC ptrGetActiveSubroutineUniformName = nullptr;
inline PFNGETACTIVESUBROUTINEUNIFORMIVPROC ptrGetActiveSubroutineUniformiv = nullptr;
inline PFNGETACTIVEUNIFORMPROC ptrGetActiveUniform = nullptr;
inline PFNGETACTIVEUNIFORMBLOCKNAMEPROC ptrGetActiveUniformBlockName = nullptr;
inline PFNGETACTIVEUNIFORMBLOCKIVPROC ptrGetActiveUniformBlockiv = nullptr;
inline PFNGETACTIVEUNIFORMNAMEPROC ptrGetActiveUniformName = nullptr;
inline PFNGETACTIVEUNIFORMSIVPROC ptrGetActiveUniformsiv = nullptr;
inline PFNGETATTACHEDSHADERSPROC ptrGetAttachedShaders = nullptr;
inline PFNGETATTRIBLOCATIONPROC ptrGetAttribLocation = nullptr;
inline PFNGETBOOLEANI_VPROC ptrGetBooleani_v = nullptr;
inline PFNGETBOOLEANVPROC ptrGetBooleanv = nullptr;
inline PFNGETBUFFERPARAMETERI64VPROC ptrGetBufferParameteri64v = nullptr;
inline PFNGETBUFFERPARAMETERIVPROC ptrGetBufferParameteriv = nullptr;
inline PFNGETBUFFERPOINTERVPROC ptrGetBufferPointerv = nullptr;
inline PFNGETBUFFERSUBDATAPROC ptrGetBufferSubData = nullptr;
inline PFNGETCOMPRESSEDTEXIMAGEPROC ptrGetCompressedTexImage = nullptr;
inline PFNGETCOMPRESSEDTEXTUREIMAGEPROC ptrGetCompressedTextureImage = nullptr;
inline PFNGETCOMPRESSEDTEXTURESUBIMAGEPROC ptrGetCompressedTextureSubImage = nullptr;
inline PFNGETDEBUGMESSAGELOGPROC ptrGetDebugMessageLog = nullptr;
inline PFNGETDOUBLEI_VPROC ptrGetDoublei_v = nullptr;
inline PFNGETDOUBLEVPROC ptrGetDoublev = nullptr;
inline PFNGETERRORPROC ptrGetError = nullptr;
inline PFNGETFLOATI_VPROC ptrGetFloati_v = nullptr;
inline PFNGETFLOATVPROC ptrGetFloatv = nullptr;
inline PFNGETFRAGDATAINDEXPROC ptrGetFragDataIndex = nullptr;
inline PFNGETFRAGDATALOCATIONPROC ptrGetFragDataLocation = nullptr;
inline PFNGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC ptrGetFramebufferAttachmentParameteriv = nullptr;
inline PFNGETFRAMEBUFFERPARAMETERIVPROC ptrGetFramebufferParameteriv = nullptr;
inline PFNGETGRAPHICSRESETSTATUSPROC ptrGetGraphicsResetStatus = nullptr;
inline PFNGETINTEGER64I_VPROC ptrGetInteger64i_v = nullptr;
inline PFNGETINTEGER64VPROC ptrGetInteger64v = nullptr;
inline PFNGETINTEGERI_VPROC ptrGetIntegeri_v = nullptr;
inline PFNGETINTEGERVPROC ptrGetIntegerv = nullptr;
inline PFNGETINTERNALFORMATI64VPROC ptrGetInternalformati64v = nullptr;
inline PFNGETINTERNALFORMATIVPROC ptrGetInternalformativ = nullptr;
inline PFNGETMULTISAMPLEFVPROC ptrGetMultisamplefv = nullptr;
inline PFNGETNAMEDBUFFERPARAMETERI64VPROC ptrGetNamedBufferParameteri64v = nullptr;
inline PFNGETNAMEDBUFFERPARAMETERIVPROC ptrGetNamedBufferParameteriv = nullptr;
inline PFNGETNAMEDBUFFERPOINTERVPROC ptrGetNamedBufferPointerv = nullptr;
inline PFNGETNAMEDBUFFERSUBDATAPROC ptrGetNamedBufferSubData = nullptr;
inline PFNGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC ptrGetNamedFramebufferAttachmentParameteriv = nullptr;
inline PFNGETNAMEDFRAMEBUFFERPARAMETERIVPROC ptrGetNamedFramebufferParameteriv = nullptr;
inline PFNGETNAMEDRENDERBUFFERPARAMETERIVPROC ptrGetNamedRenderbufferParameteriv = nullptr;
inline PFNGETOBJECTLABELPROC ptrGetObjectLabel = nullptr;
inline PFNGETOBJECTPTRLABELPROC ptrGetObjectPtrLabel = nullptr;
inline PFNGETPROGRAMBINARYPROC ptrGetProgramBinary = nullptr;
inline PFNGETPROGRAMINFOLOGPROC ptrGetProgramInfoLog = nullptr;
inline PFNGETPROGRAMINTERFACEIVPROC ptrGetProgramInterfaceiv = nullptr;
inline PFNGETPROGRAMPIPELINEINFOLOGPROC ptrGetProgramPipelineInfoLog = nullptr;
inline PFNGETPROGRAMPIPELINEIVPROC ptrGetProgramPipelineiv = nullptr;
inline PFNGETPROGRAMRESOURCEINDEXPROC ptrGetProgramResourceIndex = nullptr;
inline PFNGETPROGRAMRESOURCELOCATIONPROC ptrGetProgramResourceLocation = nullptr;
inline PFNGETPROGRAMRESOURCELOCATIONINDEXPROC ptrGetProgramResourceLocationIndex = nullptr;
inline PFNGETPROGRAMRESOURCENAMEPROC ptrGetProgramResourceName = nullptr;
inline PFNGETPROGRAMRESOURCEIVPROC ptrGetProgramResourceiv = nullptr;
inline PFNGETPROGRAMSTAGEIVPROC ptrGetProgramStageiv = nullptr;
inline PFNGETPROGRAMIVPROC ptrGetProgramiv = nullptr;
inline PFNGETQUERYBUFFEROBJECTI64VPROC ptrGetQueryBufferObjecti64v = nullptr;
inline PFNGETQUERYBUFFEROBJECTIVPROC ptrGetQueryBufferObjectiv = nullptr;
inline PFNGETQUERYBUFFEROBJECTUI64VPROC ptrGetQueryBufferObjectui64v = nullptr;
inline PFNGETQUERYBUFFEROBJECTUIVPROC ptrGetQueryBufferObjectuiv = nullptr;
inline PFNGETQUERYINDEXEDIVPROC ptrGetQueryIndexediv = nullptr;
inline PFNGETQUERYOBJECTI64VPROC ptrGetQueryObjecti64v = nullptr;
inline PFNGETQUERYOBJECTIVPROC ptrGetQueryObjectiv = nullptr;
inline PFNGETQUERYOBJECTUI64VPROC ptrGetQueryObjectui64v = nullptr;
inline PFNGETQUERYOBJECTUIVPROC ptrGetQueryObjectuiv = nullptr;
inline PFNGETQUERYIVPROC ptrGetQueryiv = nullptr;
inline PFNGETRENDERBUFFERPARAMETERIVPROC ptrGetRenderbufferParameteriv = nullptr;
inline PFNGETSAMPLERPARAMETERIIVPROC ptrGetSamplerParameterIiv = nullptr;
inline PFNGETSAMPLERPARAMETERIUIVPROC ptrGetSamplerParameterIuiv = nullptr;
inline PFNGETSAMPLERPARAMETERFVPROC ptrGetSamplerParameterfv = nullptr;
inline PFNGETSAMPLERPARAMETERIVPROC ptrGetSamplerParameteriv = nullptr;
inline PFNGETSHADERINFOLOGPROC ptrGetShaderInfoLog = nullptr;
inline PFNGETSHADERPRECISIONFORMATPROC ptrGetShaderPrecisionFormat = nullptr;
inline PFNGETSHADERSOURCEPROC ptrGetShaderSource = nullptr;
inline PFNGETSHADERIVPROC ptrGetShaderiv = nullptr;
inline PFNGETSTRINGPROC ptrGetString = nullptr;
inline PFNGETSTRINGIPROC ptrGetStringi = nullptr;
inline PFNGETSUBROUTINEINDEXPROC ptrGetSubroutineIndex = nullptr;
inline PFNGETSUBROUTINEUNIFORMLOCATIONPROC ptrGetSubroutineUniformLocation = nullptr;
inline PFNGETSYNCIVPROC ptrGetSynciv = nullptr;
inline PFNGETTEXIMAGEPROC ptrGetTexImage = nullptr;
inline PFNGETTEXLEVELPARAMETERFVPROC ptrGetTexLevelParameterfv = nullptr;
inline PFNGETTEXLEVELPARAMETERIVPROC ptrGetTexLevelParameteriv = nullptr;
inline PFNGETTEXPARAMETERIIVPROC ptrGetTexParameterIiv = nullptr;
inline PFNGETTEXPARAMETERIUIVPROC ptrGetTexParameterIuiv = nullptr;
inline PFNGETTEXPARAMETERFVPROC ptrGetTexParameterfv = nullptr;
inline PFNGETTEXPARAMETERIVPROC ptrGetTexParameteriv = nullptr;
inline PFNGETTEXTUREIMAGEPROC ptrGetTextureImage = nullptr;
inline PFNGETTEXTURELEVELPARAMETERFVPROC ptrGetTextureLevelParameterfv = nullptr;
inline PFNGETTEXTURELEVELPARAMETERIVPROC ptrGetTextureLevelParameteriv = nullptr;
inline PFNGETTEXTUREPARAMETERIIVPROC ptrGetTextureParameterIiv = nullptr;
inline PFNGETTEXTUREPARAMETERIUIVPROC ptrGetTextureParameterIuiv = nullptr;
inline PFNGETTEXTUREPARAMETERFVPROC ptrGetTextureParameterfv = nullptr;
inline PFNGETTEXTUREPARAMETERIVPROC ptrGetTextureParameteriv = nullptr;
inline PFNGETTEXTURESUBIMAGEPROC ptrGetTextureSubImage = nullptr;
inline PFNGETTRANSFORMFEEDBACKVARYINGPROC ptrGetTransformFeedbackVarying = nullptr;
inline PFNGETTRANSFORMFEEDBACKI64_VPROC ptrGetTransformFeedbacki64_v = nullptr;
inline PFNGETTRANSFORMFEEDBACKI_VPROC ptrGetTransformFeedbacki_v = nullptr;
inline PFNGETTRANSFORMFEEDBACKIVPROC ptrGetTransformFeedbackiv = nullptr;
inline PFNGETUNIFORMBLOCKINDEXPROC ptrGetUniformBlockIndex = nullptr;
inline PFNGETUNIFORMINDICESPROC ptrGetUniformIndices = nullptr;
inline PFNGETUNIFORMLOCATIONPROC ptrGetUniformLocation = nullptr;
inline PFNGETUNIFORMSUBROUTINEUIVPROC ptrGetUniformSubroutineuiv = nullptr;
inline PFNGETUNIFORMDVPROC ptrGetUniformdv = nullptr;
inline PFNGETUNIFORMFVPROC ptrGetUniformfv = nullptr;
inline PFNGETUNIFORMIVPROC ptrGetUniformiv = nullptr;
inline PFNGETUNIFORMUIVPROC ptrGetUniformuiv = nullptr;
inline PFNGETVERTEXARRAYINDEXED64IVPROC ptrGetVertexArrayIndexed64iv = nullptr;
inline PFNGETVERTEXARRAYINDEXEDIVPROC ptrGetVertexArrayIndexediv = nullptr;
inline PFNGETVERTEXARRAYIVPROC ptrGetVertexArrayiv = nullptr;
inline PFNGETVERTEXATTRIBIIVPROC ptrGetVertexAttribIiv = nullptr;
inline PFNGETVERTEXATTRIBIUIVPROC ptrGetVertexAttribIuiv = nullptr;
inline PFNGETVERTEXATTRIBLDVPROC ptrGetVertexAttribLdv = nullptr;
inline PFNGETVERTEXATTRIBPOINTERVPROC ptrGetVertexAttribPointerv = nullptr;
inline PFNGETVERTEXATTRIBDVPROC ptrGetVertexAttribdv = nullptr;
inline PFNGETVERTEXATTRIBFVPROC ptrGetVertexAttribfv = nullptr;
inline PFNGETVERTEXATTRIBIVPROC ptrGetVertexAttribiv = nullptr;
inline PFNGETNCOMPRESSEDTEXIMAGEPROC ptrGetnCompressedTexImage = nullptr;
inline PFNGETNTEXIMAGEPROC ptrGetnTexImage = nullptr;
inline PFNGETNUNIFORMDVPROC ptrGetnUniformdv = nullptr;
inline PFNGETNUNIFORMFVPROC ptrGetnUniformfv = nullptr;
inline PFNGETNUNIFORMIVPROC ptrGetnUniformiv = nullptr;
inline PFNGETNUNIFORMUIVPROC ptrGetnUniformuiv = nullptr;
inline PFNHINTPROC ptrHint = nullptr;
inline PFNINVALIDATEBUFFERDATAPROC ptrInvalidateBufferData = nullptr;
inline PFNINVALIDATEBUFFERSUBDATAPROC ptrInvalidateBufferSubData = nullptr;
inline PFNINVALIDATEFRAMEBUFFERPROC ptrInvalidateFramebuffer = nullptr;
inline PFNINVALIDATENAMEDFRAMEBUFFERDATAPROC ptrInvalidateNamedFramebufferData = nullptr;
inline PFNINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC ptrInvalidateNamedFramebufferSubData = nullptr;
inline PFNINVALIDATESUBFRAMEBUFFERPROC ptrInvalidateSubFramebuffer = nullptr;
inline PFNINVALIDATETEXIMAGEPROC ptrInvalidateTexImage = nullptr;
inline PFNINVALIDATETEXSUBIMAGEPROC ptrInvalidateTexSubImage = nullptr;
inline PFNISBUFFERPROC ptrIsBuffer = nullptr;
inline PFNISENABLEDPROC ptrIsEnabled = nullptr;
inline PFNISENABLEDIPROC ptrIsEnabledi = nullptr;
inline PFNISFRAMEBUFFERPROC ptrIsFramebuffer = nullptr;
inline PFNISPROGRAMPROC ptrIsProgram = nullptr;
inline PFNISPROGRAMPIPELINEPROC ptrIsProgramPipeline = nullptr;
inline PFNISQUERYPROC ptrIsQuery = nullptr;
inline PFNISRENDERBUFFERPROC ptrIsRenderbuffer = nullptr;
inline PFNISSAMPLERPROC ptrIsSampler = nullptr;
inline PFNISSHADERPROC ptrIsShader = nullptr;
inline PFNISSYNCPROC ptrIsSync = nullptr;
inline PFNISTEXTUREPROC ptrIsTexture = nullptr;
inline PFNISTRANSFORMFEEDBACKPROC ptrIsTransformFeedback = nullptr;
inline PFNISVERTEXARRAYPROC ptrIsVertexArray = nullptr;
inline PFNLINEWIDTHPROC ptrLineWidth = nullptr;
inline PFNLINKPROGRAMPROC ptrLinkProgram = nullptr;
inline PFNLOGICOPPROC ptrLogicOp = nullptr;
inline PFNMAPBUFFERPROC ptrMapBuffer = nullptr;
inline PFNMAPBUFFERRANGEPROC ptrMapBufferRange = nullptr;
inline PFNMAPNAMEDBUFFERPROC ptrMapNamedBuffer = nullptr;
inline PFNMAPNAMEDBUFFERRANGEPROC ptrMapNamedBufferRange = nullptr;
inline PFNMEMORYBARRIERPROC ptrMemoryBarrier = nullptr;
inline PFNMEMORYBARRIERBYREGIONPROC ptrMemoryBarrierByRegion = nullptr;
inline PFNMINSAMPLESHADINGPROC ptrMinSampleShading = nullptr;
inline PFNMULTIDRAWARRAYSPROC ptrMultiDrawArrays = nullptr;
inline PFNMULTIDRAWARRAYSINDIRECTPROC ptrMultiDrawArraysIndirect = nullptr;
inline PFNMULTIDRAWARRAYSINDIRECTCOUNTPROC ptrMultiDrawArraysIndirectCount = nullptr;
inline PFNMULTIDRAWELEMENTSPROC ptrMultiDrawElements = nullptr;
inline PFNMULTIDRAWELEMENTSBASEVERTEXPROC ptrMultiDrawElementsBaseVertex = nullptr;
inline PFNMULTIDRAWELEMENTSINDIRECTPROC ptrMultiDrawElementsIndirect = nullptr;
inline PFNMULTIDRAWELEMENTSINDIRECTCOUNTPROC ptrMultiDrawElementsIndirectCount = nullptr;
inline PFNNAMEDBUFFERDATAPROC ptrNamedBufferData = nullptr;
inline PFNNAMEDBUFFERSTORAGEPROC ptrNamedBufferStorage = nullptr;
inline PFNNAMEDBUFFERSUBDATAPROC ptrNamedBufferSubData = nullptr;
inline PFNNAMEDFRAMEBUFFERDRAWBUFFERPROC ptrNamedFramebufferDrawBuffer = nullptr;
inline PFNNAMEDFRAMEBUFFERDRAWBUFFERSPROC ptrNamedFramebufferDrawBuffers = nullptr;
inline PFNNAMEDFRAMEBUFFERPARAMETERIPROC ptrNamedFramebufferParameteri = nullptr;
inline PFNNAMEDFRAMEBUFFERREADBUFFERPROC ptrNamedFramebufferReadBuffer = nullptr;
inline PFNNAMEDFRAMEBUFFERRENDERBUFFERPROC ptrNamedFramebufferRenderbuffer = nullptr;
inline PFNNAMEDFRAMEBUFFERTEXTUREPROC ptrNamedFramebufferTexture = nullptr;
inline PFNNAMEDFRAMEBUFFERTEXTURELAYERPROC ptrNamedFramebufferTextureLayer = nullptr;
inline PFNNAMEDRENDERBUFFERSTORAGEPROC ptrNamedRenderbufferStorage = nullptr;
inline PFNNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC ptrNamedRenderbufferStorageMultisample = nullptr;
inline PFNOBJECTLABELPROC ptrObjectLabel = nullptr;
inline PFNOBJECTPTRLABELPROC ptrObjectPtrLabel = nullptr;
inline PFNPATCHPARAMETERFVPROC ptrPatchParameterfv = nullptr;
inline PFNPATCHPARAMETERIPROC ptrPatchParameteri = nullptr;
inline PFNPAUSETRANSFORMFEEDBACKPROC ptrPauseTransformFeedback = nullptr;
inline PFNPIXELSTOREFPROC ptrPixelStoref = nullptr;
inline PFNPIXELSTOREIPROC ptrPixelStorei = nullptr;
inline PFNPOINTPARAMETERFPROC ptrPointParameterf = nullptr;
inline PFNPOINTPARAMETERFVPROC ptrPointParameterfv = nullptr;
inline PFNPOINTPARAMETERIPROC ptrPointParameteri = nullptr;
inline PFNPOINTPARAMETERIVPROC ptrPointParameteriv = nullptr;
inline PFNPOINTSIZEPROC ptrPointSize = nullptr;
inline PFNPOLYGONMODEPROC ptrPolygonMode = nullptr;
inline PFNPOLYGONOFFSETPROC ptrPolygonOffset = nullptr;
inline PFNPOLYGONOFFSETCLAMPPROC ptrPolygonOffsetClamp = nullptr;
inline PFNPOPDEBUGGROUPPROC ptrPopDebugGroup = nullptr;
inline PFNPRIMITIVERESTARTINDEXPROC ptrPrimitiveRestartIndex = nullptr;
inline PFNPROGRAMBINARYPROC ptrProgramBinary = nullptr;
inline PFNPROGRAMPARAMETERIPROC ptrProgramParameteri = nullptr;
inline PFNPROGRAMUNIFORM1DPROC ptrProgramUniform1d = nullptr;
inline PFNPROGRAMUNIFORM1DVPROC ptrProgramUniform1dv = nullptr;
inline PFNPROGRAMUNIFORM1FPROC ptrProgramUniform1f = nullptr;
inline PFNPROGRAMUNIFORM1FVPROC ptrProgramUniform1fv = nullptr;
inline PFNPROGRAMUNIFORM1IPROC ptrProgramUniform1i = nullptr;
inline PFNPROGRAMUNIFORM1IVPROC ptrProgramUniform1iv = nullptr;
inline PFNPROGRAMUNIFORM1UIPROC ptrProgramUniform1ui = nullptr;
inline PFNPROGRAMUNIFORM1UIVPROC ptrProgramUniform1uiv = nullptr;
inline PFNPROGRAMUNIFORM2DPROC ptrProgramUniform2d = nullptr;
inline PFNPROGRAMUNIFORM2DVPROC ptrProgramUniform2dv = nullptr;
inline PFNPROGRAMUNIFORM2FPROC ptrProgramUniform2f = nullptr;
inline PFNPROGRAMUNIFORM2FVPROC ptrProgramUniform2fv = nullptr;
inline PFNPROGRAMUNIFORM2IPROC ptrProgramUniform2i = nullptr;
inline PFNPROGRAMUNIFORM2IVPROC ptrProgramUniform2iv = nullptr;
inline PFNPROGRAMUNIFORM2UIPROC ptrProgramUniform2ui = nullptr;
inline PFNPROGRAMUNIFORM2UIVPROC ptrProgramUniform2uiv = nullptr;
inline PFNPROGRAMUNIFORM3DPROC ptrProgramUniform3d = nullptr;
inline PFNPROGRAMUNIFORM3DVPROC ptrProgramUniform3dv = nullptr;
inline PFNPROGRAMUNIFORM3FPROC ptrProgramUniform3f = nullptr;
inline PFNPROGRAMUNIFORM3FVPROC ptrProgramUniform3fv = nullptr;
inline PFNPROGRAMUNIFORM3IPROC ptrProgramUniform3i = nullptr;
inline PFNPROGRAMUNIFORM3IVPROC ptrProgramUniform3iv = nullptr;
inline PFNPROGRAMUNIFORM3UIPROC ptrProgramUniform3ui = nullptr;
inline PFNPROGRAMUNIFORM3UIVPROC ptrProgramUniform3uiv = nullptr;
inline PFNPROGRAMUNIFORM4DPROC ptrProgramUniform4d = nullptr;
inline PFNPROGRAMUNIFORM4DVPROC ptrProgramUniform4dv = nullptr;
inline PFNPROGRAMUNIFORM4FPROC ptrProgramUniform4f = nullptr;
inline PFNPROGRAMUNIFORM4FVPROC ptrProgramUniform4fv = nullptr;
inline PFNPROGRAMUNIFORM4IPROC ptrProgramUniform4i = nullptr;
inline PFNPROGRAMUNIFORM4IVPROC ptrProgramUniform4iv = nullptr;
inline PFNPROGRAMUNIFORM4UIPROC ptrProgramUniform4ui = nullptr;
inline PFNPROGRAMUNIFORM4UIVPROC ptrProgramUniform4uiv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX2DVPROC ptrProgramUniformMatrix2dv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX2FVPROC ptrProgramUniformMatrix2fv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX2X3DVPROC ptrProgramUniformMatrix2x3dv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX2X3FVPROC ptrProgramUniformMatrix2x3fv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX2X4DVPROC ptrProgramUniformMatrix2x4dv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX2X4FVPROC ptrProgramUniformMatrix2x4fv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX3DVPROC ptrProgramUniformMatrix3dv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX3FVPROC ptrProgramUniformMatrix3fv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX3X2DVPROC ptrProgramUniformMatrix3x2dv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX3X2FVPROC ptrProgramUniformMatrix3x2fv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX3X4DVPROC ptrProgramUniformMatrix3x4dv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX3X4FVPROC ptrProgramUniformMatrix3x4fv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX4DVPROC ptrProgramUniformMatrix4dv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX4FVPROC ptrProgramUniformMatrix4fv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX4X2DVPROC ptrProgramUniformMatrix4x2dv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX4X2FVPROC ptrProgramUniformMatrix4x2fv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX4X3DVPROC ptrProgramUniformMatrix4x3dv = nullptr;
inline PFNPROGRAMUNIFORMMATRIX4X3FVPROC ptrProgramUniformMatrix4x3fv = nullptr;
inline PFNPROVOKINGVERTEXPROC ptrProvokingVertex = nullptr;
inline PFNPUSHDEBUGGROUPPROC ptrPushDebugGroup = nullptr;
inline PFNQUERYCOUNTERPROC ptrQueryCounter = nullptr;
inline PFNREADBUFFERPROC ptrReadBuffer = nullptr;
inline PFNREADPIXELSPROC ptrReadPixels = nullptr;
inline PFNREADNPIXELSPROC ptrReadnPixels = nullptr;
inline PFNRELEASESHADERCOMPILERPROC ptrReleaseShaderCompiler = nullptr;
inline PFNRENDERBUFFERSTORAGEPROC ptrRenderbufferStorage = nullptr;
inline PFNRENDERBUFFERSTORAGEMULTISAMPLEPROC ptrRenderbufferStorageMultisample = nullptr;
inline PFNRESUMETRANSFORMFEEDBACKPROC ptrResumeTransformFeedback = nullptr;
inline PFNSAMPLECOVERAGEPROC ptrSampleCoverage = nullptr;
inline PFNSAMPLEMASKIPROC ptrSampleMaski = nullptr;
inline PFNSAMPLERPARAMETERIIVPROC ptrSamplerParameterIiv = nullptr;
inline PFNSAMPLERPARAMETERIUIVPROC ptrSamplerParameterIuiv = nullptr;
inline PFNSAMPLERPARAMETERFPROC ptrSamplerParameterf = nullptr;
inline PFNSAMPLERPARAMETERFVPROC ptrSamplerParameterfv = nullptr;
inline PFNSAMPLERPARAMETERIPROC ptrSamplerParameteri = nullptr;
inline PFNSAMPLERPARAMETERIVPROC ptrSamplerParameteriv = nullptr;
inline PFNSCISSORPROC ptrScissor = nullptr;
inline PFNSCISSORARRAYVPROC ptrScissorArrayv = nullptr;
inline PFNSCISSORINDEXEDPROC ptrScissorIndexed = nullptr;
inline PFNSCISSORINDEXEDVPROC ptrScissorIndexedv = nullptr;
inline PFNSHADERBINARYPROC ptrShaderBinary = nullptr;
inline PFNSHADERSOURCEPROC ptrShaderSource = nullptr;
inline PFNSHADERSTORAGEBLOCKBINDINGPROC ptrShaderStorageBlockBinding = nullptr;
inline PFNSPECIALIZESHADERPROC ptrSpecializeShader = nullptr;
inline PFNSTENCILFUNCPROC ptrStencilFunc = nullptr;
inline PFNSTENCILFUNCSEPARATEPROC ptrStencilFuncSeparate = nullptr;
inline PFNSTENCILMASKPROC ptrStencilMask = nullptr;
inline PFNSTENCILMASKSEPARATEPROC ptrStencilMaskSeparate = nullptr;
inline PFNSTENCILOPPROC ptrStencilOp = nullptr;
inline PFNSTENCILOPSEPARATEPROC ptrStencilOpSeparate = nullptr;
inline PFNTEXBUFFERPROC ptrTexBuffer = nullptr;
inline PFNTEXBUFFERRANGEPROC ptrTexBufferRange = nullptr;
inline PFNTEXIMAGE1DPROC ptrTexImage1D = nullptr;
inline PFNTEXIMAGE2DPROC ptrTexImage2D = nullptr;
inline PFNTEXIMAGE2DMULTISAMPLEPROC ptrTexImage2DMultisample = nullptr;
inline PFNTEXIMAGE3DPROC ptrTexImage3D = nullptr;
inline PFNTEXIMAGE3DMULTISAMPLEPROC ptrTexImage3DMultisample = nullptr;
inline PFNTEXPARAMETERIIVPROC ptrTexParameterIiv = nullptr;
inline PFNTEXPARAMETERIUIVPROC ptrTexParameterIuiv = nullptr;
inline PFNTEXPARAMETERFPROC ptrTexParameterf = nullptr;
inline PFNTEXPARAMETERFVPROC ptrTexParameterfv = nullptr;
inline PFNTEXPARAMETERIPROC ptrTexParameteri = nullptr;
inline PFNTEXPARAMETERIVPROC ptrTexParameteriv = nullptr;
inline PFNTEXSTORAGE1DPROC ptrTexStorage1D = nullptr;
inline PFNTEXSTORAGE2DPROC ptrTexStorage2D = nullptr;
inline PFNTEXSTORAGE2DMULTISAMPLEPROC ptrTexStorage2DMultisample = nullptr;
inline PFNTEXSTORAGE3DPROC ptrTexStorage3D = nullptr;
inline PFNTEXSTORAGE3DMULTISAMPLEPROC ptrTexStorage3DMultisample = nullptr;
inline PFNTEXSUBIMAGE1DPROC ptrTexSubImage1D = nullptr;
inline PFNTEXSUBIMAGE2DPROC ptrTexSubImage2D = nullptr;
inline PFNTEXSUBIMAGE3DPROC ptrTexSubImage3D = nullptr;
inline PFNTEXTUREBARRIERPROC ptrTextureBarrier = nullptr;
inline PFNTEXTUREBUFFERPROC ptrTextureBuffer = nullptr;
inline PFNTEXTUREBUFFERRANGEPROC ptrTextureBufferRange = nullptr;
inline PFNTEXTUREPARAMETERIIVPROC ptrTextureParameterIiv = nullptr;
inline PFNTEXTUREPARAMETERIUIVPROC ptrTextureParameterIuiv = nullptr;
inline PFNTEXTUREPARAMETERFPROC ptrTextureParameterf = nullptr;
inline PFNTEXTUREPARAMETERFVPROC ptrTextureParameterfv = nullptr;
inline PFNTEXTUREPARAMETERIPROC ptrTextureParameteri = nullptr;
inline PFNTEXTUREPARAMETERIVPROC ptrTextureParameteriv = nullptr;
inline PFNTEXTURESTORAGE1DPROC ptrTextureStorage1D = nullptr;
inline PFNTEXTURESTORAGE2DPROC ptrTextureStorage2D = nullptr;
inline PFNTEXTURESTORAGE2DMULTISAMPLEPROC ptrTextureStorage2DMultisample = nullptr;
inline PFNTEXTURESTORAGE3DPROC ptrTextureStorage3D = nullptr;
inline PFNTEXTURESTORAGE3DMULTISAMPLEPROC ptrTextureStorage3DMultisample = nullptr;
inline PFNTEXTURESUBIMAGE1DPROC ptrTextureSubImage1D = nullptr;
inline PFNTEXTURESUBIMAGE2DPROC ptrTextureSubImage2D = nullptr;
inline PFNTEXTURESUBIMAGE3DPROC ptrTextureSubImage3D = nullptr;
inline PFNTEXTUREVIEWPROC ptrTextureView = nullptr;
inline PFNTRANSFORMFEEDBACKBUFFERBASEPROC ptrTransformFeedbackBufferBase = nullptr;
inline PFNTRANSFORMFEEDBACKBUFFERRANGEPROC ptrTransformFeedbackBufferRange = nullptr;
inline PFNTRANSFORMFEEDBACKVARYINGSPROC ptrTransformFeedbackVaryings = nullptr;
inline PFNUNIFORM1DPROC ptrUniform1d = nullptr;
inline PFNUNIFORM1DVPROC ptrUniform1dv = nullptr;
inline PFNUNIFORM1FPROC ptrUniform1f = nullptr;
inline PFNUNIFORM1FVPROC ptrUniform1fv = nullptr;
inline PFNUNIFORM1IPROC ptrUniform1i = nullptr;
inline PFNUNIFORM1IVPROC ptrUniform1iv = nullptr;
inline PFNUNIFORM1UIPROC ptrUniform1ui = nullptr;
inline PFNUNIFORM1UIVPROC ptrUniform1uiv = nullptr;
inline PFNUNIFORM2DPROC ptrUniform2d = nullptr;
inline PFNUNIFORM2DVPROC ptrUniform2dv = nullptr;
inline PFNUNIFORM2FPROC ptrUniform2f = nullptr;
inline PFNUNIFORM2FVPROC ptrUniform2fv = nullptr;
inline PFNUNIFORM2IPROC ptrUniform2i = nullptr;
inline PFNUNIFORM2IVPROC ptrUniform2iv = nullptr;
inline PFNUNIFORM2UIPROC ptrUniform2ui = nullptr;
inline PFNUNIFORM2UIVPROC ptrUniform2uiv = nullptr;
inline PFNUNIFORM3DPROC ptrUniform3d = nullptr;
inline PFNUNIFORM3DVPROC ptrUniform3dv = nullptr;
inline PFNUNIFORM3FPROC ptrUniform3f = nullptr;
inline PFNUNIFORM3FVPROC ptrUniform3fv = nullptr;
inline PFNUNIFORM3IPROC ptrUniform3i = nullptr;
inline PFNUNIFORM3IVPROC ptrUniform3iv = nullptr;
inline PFNUNIFORM3UIPROC ptrUniform3ui = nullptr;
inline PFNUNIFORM3UIVPROC ptrUniform3uiv = nullptr;
inline PFNUNIFORM4DPROC ptrUniform4d = nullptr;
inline PFNUNIFORM4DVPROC ptrUniform4dv = nullptr;
inline PFNUNIFORM4FPROC ptrUniform4f = nullptr;
inline PFNUNIFORM4FVPROC ptrUniform4fv = nullptr;
inline PFNUNIFORM4IPROC ptrUniform4i = nullptr;
inline PFNUNIFORM4IVPROC ptrUniform4iv = nullptr;
inline PFNUNIFORM4UIPROC ptrUniform4ui = nullptr;
inline PFNUNIFORM4UIVPROC ptrUniform4uiv = nullptr;
inline PFNUNIFORMBLOCKBINDINGPROC ptrUniformBlockBinding = nullptr;
inline PFNUNIFORMMATRIX2DVPROC ptrUniformMatrix2dv = nullptr;
inline PFNUNIFORMMATRIX2FVPROC ptrUniformMatrix2fv = nullptr;
inline PFNUNIFORMMATRIX2X3DVPROC ptrUniformMatrix2x3dv = nullptr;
inline PFNUNIFORMMATRIX2X3FVPROC ptrUniformMatrix2x3fv = nullptr;
inline PFNUNIFORMMATRIX2X4DVPROC ptrUniformMatrix2x4dv = nullptr;
inline PFNUNIFORMMATRIX2X4FVPROC ptrUniformMatrix2x4fv = nullptr;
inline PFNUNIFORMMATRIX3DVPROC ptrUniformMatrix3dv = nullptr;
inline PFNUNIFORMMATRIX3FVPROC ptrUniformMatrix3fv = nullptr;
inline PFNUNIFORMMATRIX3X2DVPROC ptrUniformMatrix3x2dv = nullptr;
inline PFNUNIFORMMATRIX3X2FVPROC ptrUniformMatrix3x2fv = nullptr;
inline PFNUNIFORMMATRIX3X4DVPROC ptrUniformMatrix3x4dv = nullptr;
inline PFNUNIFORMMATRIX3X4FVPROC ptrUniformMatrix3x4fv = nullptr;
inline PFNUNIFORMMATRIX4DVPROC ptrUniformMatrix4dv = nullptr;
inline PFNUNIFORMMATRIX4FVPROC ptrUniformMatrix4fv = nullptr;
inline PFNUNIFORMMATRIX4X2DVPROC ptrUniformMatrix4x2dv = nullptr;
inline PFNUNIFORMMATRIX4X2FVPROC ptrUniformMatrix4x2fv = nullptr;
inline PFNUNIFORMMATRIX4X3DVPROC ptrUniformMatrix4x3dv = nullptr;
inline PFNUNIFORMMATRIX4X3FVPROC ptrUniformMatrix4x3fv = nullptr;
inline PFNUNIFORMSUBROUTINESUIVPROC ptrUniformSubroutinesuiv = nullptr;
inline PFNUNMAPBUFFERPROC ptrUnmapBuffer = nullptr;
inline PFNUNMAPNAMEDBUFFERPROC ptrUnmapNamedBuffer = nullptr;
inline PFNUSEPROGRAMPROC ptrUseProgram = nullptr;
inline PFNUSEPROGRAMSTAGESPROC ptrUseProgramStages = nullptr;
inline PFNVALIDATEPROGRAMPROC ptrValidateProgram = nullptr;
inline PFNVALIDATEPROGRAMPIPELINEPROC ptrValidateProgramPipeline = nullptr;
inline PFNVERTEXARRAYATTRIBBINDINGPROC ptrVertexArrayAttribBinding = nullptr;
inline PFNVERTEXARRAYATTRIBFORMATPROC ptrVertexArrayAttribFormat = nullptr;
inline PFNVERTEXARRAYATTRIBIFORMATPROC ptrVertexArrayAttribIFormat = nullptr;
inline PFNVERTEXARRAYATTRIBLFORMATPROC ptrVertexArrayAttribLFormat = nullptr;
inline PFNVERTEXARRAYBINDINGDIVISORPROC ptrVertexArrayBindingDivisor = nullptr;
inline PFNVERTEXARRAYELEMENTBUFFERPROC ptrVertexArrayElementBuffer = nullptr;
inline PFNVERTEXARRAYVERTEXBUFFERPROC ptrVertexArrayVertexBuffer = nullptr;
inline PFNVERTEXARRAYVERTEXBUFFERSPROC ptrVertexArrayVertexBuffers = nullptr;
inline PFNVERTEXATTRIB1DPROC ptrVertexAttrib1d = nullptr;
inline PFNVERTEXATTRIB1DVPROC ptrVertexAttrib1dv = nullptr;
inline PFNVERTEXATTRIB1FPROC ptrVertexAttrib1f = nullptr;
inline PFNVERTEXATTRIB1FVPROC ptrVertexAttrib1fv = nullptr;
inline PFNVERTEXATTRIB1SPROC ptrVertexAttrib1s = nullptr;
inline PFNVERTEXATTRIB1SVPROC ptrVertexAttrib1sv = nullptr;
inline PFNVERTEXATTRIB2DPROC ptrVertexAttrib2d = nullptr;
inline PFNVERTEXATTRIB2DVPROC ptrVertexAttrib2dv = nullptr;
inline PFNVERTEXATTRIB2FPROC ptrVertexAttrib2f = nullptr;
inline PFNVERTEXATTRIB2FVPROC ptrVertexAttrib2fv = nullptr;
inline PFNVERTEXATTRIB2SPROC ptrVertexAttrib2s = nullptr;
inline PFNVERTEXATTRIB2SVPROC ptrVertexAttrib2sv = nullptr;
inline PFNVERTEXATTRIB3DPROC ptrVertexAttrib3d = nullptr;
inline PFNVERTEXATTRIB3DVPROC ptrVertexAttrib3dv = nullptr;
inline PFNVERTEXATTRIB3FPROC ptrVertexAttrib3f = nullptr;
inline PFNVERTEXATTRIB3FVPROC ptrVertexAttrib3fv = nullptr;
inline PFNVERTEXATTRIB3SPROC ptrVertexAttrib3s = nullptr;
inline PFNVERTEXATTRIB3SVPROC ptrVertexAttrib3sv = nullptr;
inline PFNVERTEXATTRIB4NBVPROC ptrVertexAttrib4Nbv = nullptr;
inline PFNVERTEXATTRIB4NIVPROC ptrVertexAttrib4Niv = nullptr;
inline PFNVERTEXATTRIB4NSVPROC ptrVertexAttrib4Nsv = nullptr;
inline PFNVERTEXATTRIB4NUBPROC ptrVertexAttrib4Nub = nullptr;
inline PFNVERTEXATTRIB4NUBVPROC ptrVertexAttrib4Nubv = nullptr;
inline PFNVERTEXATTRIB4NUIVPROC ptrVertexAttrib4Nuiv = nullptr;
inline PFNVERTEXATTRIB4NUSVPROC ptrVertexAttrib4Nusv = nullptr;
inline PFNVERTEXATTRIB4BVPROC ptrVertexAttrib4bv = nullptr;
inline PFNVERTEXATTRIB4DPROC ptrVertexAttrib4d = nullptr;
inline PFNVERTEXATTRIB4DVPROC ptrVertexAttrib4dv = nullptr;
inline PFNVERTEXATTRIB4FPROC ptrVertexAttrib4f = nullptr;
inline PFNVERTEXATTRIB4FVPROC ptrVertexAttrib4fv = nullptr;
inline PFNVERTEXATTRIB4IVPROC ptrVertexAttrib4iv = nullptr;
inline PFNVERTEXATTRIB4SPROC ptrVertexAttrib4s = nullptr;
inline PFNVERTEXATTRIB4SVPROC ptrVertexAttrib4sv = nullptr;
inline PFNVERTEXATTRIB4UBVPROC ptrVertexAttrib4ubv = nullptr;
inline PFNVERTEXATTRIB4UIVPROC ptrVertexAttrib4uiv = nullptr;
inline PFNVERTEXATTRIB4USVPROC ptrVertexAttrib4usv = nullptr;
inline PFNVERTEXATTRIBBINDINGPROC ptrVertexAttribBinding = nullptr;
inline PFNVERTEXATTRIBDIVISORPROC ptrVertexAttribDivisor = nullptr;
inline PFNVERTEXATTRIBFORMATPROC ptrVertexAttribFormat = nullptr;
inline PFNVERTEXATTRIBI1IPROC ptrVertexAttribI1i = nullptr;
inline PFNVERTEXATTRIBI1IVPROC ptrVertexAttribI1iv = nullptr;
inline PFNVERTEXATTRIBI1UIPROC ptrVertexAttribI1ui = nullptr;
inline PFNVERTEXATTRIBI1UIVPROC ptrVertexAttribI1uiv = nullptr;
inline PFNVERTEXATTRIBI2IPROC ptrVertexAttribI2i = nullptr;
inline PFNVERTEXATTRIBI2IVPROC ptrVertexAttribI2iv = nullptr;
inline PFNVERTEXATTRIBI2UIPROC ptrVertexAttribI2ui = nullptr;
inline PFNVERTEXATTRIBI2UIVPROC ptrVertexAttribI2uiv = nullptr;
inline PFNVERTEXATTRIBI3IPROC ptrVertexAttribI3i = nullptr;
inline PFNVERTEXATTRIBI3IVPROC ptrVertexAttribI3iv = nullptr;
inline PFNVERTEXATTRIBI3UIPROC ptrVertexAttribI3ui = nullptr;
inline PFNVERTEXATTRIBI3UIVPROC ptrVertexAttribI3uiv = nullptr;
inline PFNVERTEXATTRIBI4BVPROC ptrVertexAttribI4bv = nullptr;
inline PFNVERTEXATTRIBI4IPROC ptrVertexAttribI4i = nullptr;
inline PFNVERTEXATTRIBI4IVPROC ptrVertexAttribI4iv = nullptr;
inline PFNVERTEXATTRIBI4SVPROC ptrVertexAttribI4sv = nullptr;
inline PFNVERTEXATTRIBI4UBVPROC ptrVertexAttribI4ubv = nullptr;
inline PFNVERTEXATTRIBI4UIPROC ptrVertexAttribI4ui = nullptr;
inline PFNVERTEXATTRIBI4UIVPROC ptrVertexAttribI4uiv = nullptr;
inline PFNVERTEXATTRIBI4USVPROC ptrVertexAttribI4usv = nullptr;
inline PFNVERTEXATTRIBIFORMATPROC ptrVertexAttribIFormat = nullptr;
inline PFNVERTEXATTRIBIPOINTERPROC ptrVertexAttribIPointer = nullptr;
inline PFNVERTEXATTRIBL1DPROC ptrVertexAttribL1d = nullptr;
inline PFNVERTEXATTRIBL1DVPROC ptrVertexAttribL1dv = nullptr;
inline PFNVERTEXATTRIBL2DPROC ptrVertexAttribL2d = nullptr;
inline PFNVERTEXATTRIBL2DVPROC ptrVertexAttribL2dv = nullptr;
inline PFNVERTEXATTRIBL3DPROC ptrVertexAttribL3d = nullptr;
inline PFNVERTEXATTRIBL3DVPROC ptrVertexAttribL3dv = nullptr;
inline PFNVERTEXATTRIBL4DPROC ptrVertexAttribL4d = nullptr;
inline PFNVERTEXATTRIBL4DVPROC ptrVertexAttribL4dv = nullptr;
inline PFNVERTEXATTRIBLFORMATPROC ptrVertexAttribLFormat = nullptr;
inline PFNVERTEXATTRIBLPOINTERPROC ptrVertexAttribLPointer = nullptr;
inline PFNVERTEXATTRIBP1UIPROC ptrVertexAttribP1ui = nullptr;
inline PFNVERTEXATTRIBP1UIVPROC ptrVertexAttribP1uiv = nullptr;
inline PFNVERTEXATTRIBP2UIPROC ptrVertexAttribP2ui = nullptr;
inline PFNVERTEXATTRIBP2UIVPROC ptrVertexAttribP2uiv = nullptr;
inline PFNVERTEXATTRIBP3UIPROC ptrVertexAttribP3ui = nullptr;
inline PFNVERTEXATTRIBP3UIVPROC ptrVertexAttribP3uiv = nullptr;
inline PFNVERTEXATTRIBP4UIPROC ptrVertexAttribP4ui = nullptr;
inline PFNVERTEXATTRIBP4UIVPROC ptrVertexAttribP4uiv = nullptr;
inline PFNVERTEXATTRIBPOINTERPROC ptrVertexAttribPointer = nullptr;
inline PFNVERTEXBINDINGDIVISORPROC ptrVertexBindingDivisor = nullptr;
inline PFNVIEWPORTPROC ptrViewport = nullptr;
inline PFNVIEWPORTARRAYVPROC ptrViewportArrayv = nullptr;
inline PFNVIEWPORTINDEXEDFPROC ptrViewportIndexedf = nullptr;
inline PFNVIEWPORTINDEXEDFVPROC ptrViewportIndexedfv = nullptr;
inline PFNWAITSYNCPROC ptrWaitSync = nullptr;

} // namespace gl::detail


export namespace gl {

inline void ActiveShaderProgram(Uint pipeline, Uint program) { detail::ptrActiveShaderProgram(pipeline, program); }
inline void ActiveTexture(Enum texture) { detail::ptrActiveTexture(texture); }
inline void AttachShader(Uint program, Uint shader) { detail::ptrAttachShader(program, shader); }
inline void BeginConditionalRender(Uint id, Enum mode) { detail::ptrBeginConditionalRender(id, mode); }
inline void BeginQuery(Enum target, Uint id) { detail::ptrBeginQuery(target, id); }
inline void BeginQueryIndexed(Enum target, Uint index, Uint id) { detail::ptrBeginQueryIndexed(target, index, id); }
inline void BeginTransformFeedback(Enum primitiveMode) { detail::ptrBeginTransformFeedback(primitiveMode); }
inline void BindAttribLocation(Uint program, Uint index, const Char* name) { detail::ptrBindAttribLocation(program, index, name); }
inline void BindBuffer(Enum target, Uint buffer) { detail::ptrBindBuffer(target, buffer); }
inline void BindBufferBase(Enum target, Uint index, Uint buffer) { detail::ptrBindBufferBase(target, index, buffer); }
inline void BindBufferRange(Enum target, Uint index, Uint buffer, Intptr offset, Sizeiptr size) { detail::ptrBindBufferRange(target, index, buffer, offset, size); }
inline void BindBuffersBase(Enum target, Uint first, Sizei count, const Uint* buffers) { detail::ptrBindBuffersBase(target, first, count, buffers); }
inline void BindBuffersRange(Enum target, Uint first, Sizei count, const Uint* buffers, const Intptr* offsets, const Sizeiptr* sizes) { detail::ptrBindBuffersRange(target, first, count, buffers, offsets, sizes); }
inline void BindFragDataLocation(Uint program, Uint color, const Char* name) { detail::ptrBindFragDataLocation(program, color, name); }
inline void BindFragDataLocationIndexed(Uint program, Uint colorNumber, Uint index, const Char* name) { detail::ptrBindFragDataLocationIndexed(program, colorNumber, index, name); }
inline void BindFramebuffer(Enum target, Uint framebuffer) { detail::ptrBindFramebuffer(target, framebuffer); }
inline void BindImageTexture(Uint unit, Uint texture, Int level, Boolean layered, Int layer, Enum access, Enum format) { detail::ptrBindImageTexture(unit, texture, level, layered, layer, access, format); }
inline void BindImageTextures(Uint first, Sizei count, const Uint* textures) { detail::ptrBindImageTextures(first, count, textures); }
inline void BindProgramPipeline(Uint pipeline) { detail::ptrBindProgramPipeline(pipeline); }
inline void BindRenderbuffer(Enum target, Uint renderbuffer) { detail::ptrBindRenderbuffer(target, renderbuffer); }
inline void BindSampler(Uint unit, Uint sampler) { detail::ptrBindSampler(unit, sampler); }
inline void BindSamplers(Uint first, Sizei count, const Uint* samplers) { detail::ptrBindSamplers(first, count, samplers); }
inline void BindTexture(Enum target, Uint texture) { detail::ptrBindTexture(target, texture); }
inline void BindTextureUnit(Uint unit, Uint texture) { detail::ptrBindTextureUnit(unit, texture); }
inline void BindTextures(Uint first, Sizei count, const Uint* textures) { detail::ptrBindTextures(first, count, textures); }
inline void BindTransformFeedback(Enum target, Uint id) { detail::ptrBindTransformFeedback(target, id); }
inline void BindVertexArray(Uint array) { detail::ptrBindVertexArray(array); }
inline void BindVertexBuffer(Uint bindingindex, Uint buffer, Intptr offset, Sizei stride) { detail::ptrBindVertexBuffer(bindingindex, buffer, offset, stride); }
inline void BindVertexBuffers(Uint first, Sizei count, const Uint* buffers, const Intptr* offsets, const Sizei* strides) { detail::ptrBindVertexBuffers(first, count, buffers, offsets, strides); }
inline void BlendColor(Float red, Float green, Float blue, Float alpha) { detail::ptrBlendColor(red, green, blue, alpha); }
inline void BlendEquation(Enum mode) { detail::ptrBlendEquation(mode); }
inline void BlendEquationSeparate(Enum modeRGB, Enum modeAlpha) { detail::ptrBlendEquationSeparate(modeRGB, modeAlpha); }
inline void BlendEquationSeparatei(Uint buf, Enum modeRGB, Enum modeAlpha) { detail::ptrBlendEquationSeparatei(buf, modeRGB, modeAlpha); }
inline void BlendEquationi(Uint buf, Enum mode) { detail::ptrBlendEquationi(buf, mode); }
inline void BlendFunc(Enum sfactor, Enum dfactor) { detail::ptrBlendFunc(sfactor, dfactor); }
inline void BlendFuncSeparate(Enum sfactorRGB, Enum dfactorRGB, Enum sfactorAlpha, Enum dfactorAlpha) { detail::ptrBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha); }
inline void BlendFuncSeparatei(Uint buf, Enum srcRGB, Enum dstRGB, Enum srcAlpha, Enum dstAlpha) { detail::ptrBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha); }
inline void BlendFunci(Uint buf, Enum src, Enum dst) { detail::ptrBlendFunci(buf, src, dst); }
inline void BlitFramebuffer(Int srcX0, Int srcY0, Int srcX1, Int srcY1, Int dstX0, Int dstY0, Int dstX1, Int dstY1, Bitfield mask, Enum filter) { detail::ptrBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter); }
inline void BlitNamedFramebuffer(Uint readFramebuffer, Uint drawFramebuffer, Int srcX0, Int srcY0, Int srcX1, Int srcY1, Int dstX0, Int dstY0, Int dstX1, Int dstY1, Bitfield mask, Enum filter) { detail::ptrBlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter); }
inline void BufferData(Enum target, Sizeiptr size, const void* data, Enum usage) { detail::ptrBufferData(target, size, data, usage); }
inline void BufferStorage(Enum target, Sizeiptr size, const void* data, Bitfield flags) { detail::ptrBufferStorage(target, size, data, flags); }
inline void BufferSubData(Enum target, Intptr offset, Sizeiptr size, const void* data) { detail::ptrBufferSubData(target, offset, size, data); }
inline Enum CheckFramebufferStatus(Enum target) { return detail::ptrCheckFramebufferStatus(target); }
inline Enum CheckNamedFramebufferStatus(Uint framebuffer, Enum target) { return detail::ptrCheckNamedFramebufferStatus(framebuffer, target); }
inline void ClampColor(Enum target, Enum clamp) { detail::ptrClampColor(target, clamp); }
inline void Clear(Bitfield mask) { detail::ptrClear(mask); }
inline void ClearBufferData(Enum target, Enum internalformat, Enum format, Enum type, const void* data) { detail::ptrClearBufferData(target, internalformat, format, type, data); }
inline void ClearBufferSubData(Enum target, Enum internalformat, Intptr offset, Sizeiptr size, Enum format, Enum type, const void* data) { detail::ptrClearBufferSubData(target, internalformat, offset, size, format, type, data); }
inline void ClearBufferfi(Enum buffer, Int drawbuffer, Float depth, Int stencil) { detail::ptrClearBufferfi(buffer, drawbuffer, depth, stencil); }
inline void ClearBufferfv(Enum buffer, Int drawbuffer, const Float* value) { detail::ptrClearBufferfv(buffer, drawbuffer, value); }
inline void ClearBufferiv(Enum buffer, Int drawbuffer, const Int* value) { detail::ptrClearBufferiv(buffer, drawbuffer, value); }
inline void ClearBufferuiv(Enum buffer, Int drawbuffer, const Uint* value) { detail::ptrClearBufferuiv(buffer, drawbuffer, value); }
inline void ClearColor(Float red, Float green, Float blue, Float alpha) { detail::ptrClearColor(red, green, blue, alpha); }
inline void ClearDepth(Double depth) { detail::ptrClearDepth(depth); }
inline void ClearDepthf(Float d) { detail::ptrClearDepthf(d); }
inline void ClearNamedBufferData(Uint buffer, Enum internalformat, Enum format, Enum type, const void* data) { detail::ptrClearNamedBufferData(buffer, internalformat, format, type, data); }
inline void ClearNamedBufferSubData(Uint buffer, Enum internalformat, Intptr offset, Sizeiptr size, Enum format, Enum type, const void* data) { detail::ptrClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data); }
inline void ClearNamedFramebufferfi(Uint framebuffer, Enum buffer, Int drawbuffer, Float depth, Int stencil) { detail::ptrClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth, stencil); }
inline void ClearNamedFramebufferfv(Uint framebuffer, Enum buffer, Int drawbuffer, const Float* value) { detail::ptrClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value); }
inline void ClearNamedFramebufferiv(Uint framebuffer, Enum buffer, Int drawbuffer, const Int* value) { detail::ptrClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value); }
inline void ClearNamedFramebufferuiv(Uint framebuffer, Enum buffer, Int drawbuffer, const Uint* value) { detail::ptrClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value); }
inline void ClearStencil(Int s) { detail::ptrClearStencil(s); }
inline void ClearTexImage(Uint texture, Int level, Enum format, Enum type, const void* data) { detail::ptrClearTexImage(texture, level, format, type, data); }
inline void ClearTexSubImage(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Enum type, const void* data) { detail::ptrClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data); }
inline Enum ClientWaitSync(Sync sync, Bitfield flags, Uint64 timeout) { return detail::ptrClientWaitSync(sync, flags, timeout); }
inline void ClipControl(Enum origin, Enum depth) { detail::ptrClipControl(origin, depth); }
inline void ColorMask(Boolean red, Boolean green, Boolean blue, Boolean alpha) { detail::ptrColorMask(red, green, blue, alpha); }
inline void ColorMaski(Uint index, Boolean r, Boolean g, Boolean b, Boolean a) { detail::ptrColorMaski(index, r, g, b, a); }
inline void CompileShader(Uint shader) { detail::ptrCompileShader(shader); }
inline void CompressedTexImage1D(Enum target, Int level, Enum internalformat, Sizei width, Int border, Sizei imageSize, const void* data) { detail::ptrCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data); }
inline void CompressedTexImage2D(Enum target, Int level, Enum internalformat, Sizei width, Sizei height, Int border, Sizei imageSize, const void* data) { detail::ptrCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data); }
inline void CompressedTexImage3D(Enum target, Int level, Enum internalformat, Sizei width, Sizei height, Sizei depth, Int border, Sizei imageSize, const void* data) { detail::ptrCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data); }
inline void CompressedTexSubImage1D(Enum target, Int level, Int xoffset, Sizei width, Enum format, Sizei imageSize, const void* data) { detail::ptrCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data); }
inline void CompressedTexSubImage2D(Enum target, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, Enum format, Sizei imageSize, const void* data) { detail::ptrCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data); }
inline void CompressedTexSubImage3D(Enum target, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Sizei imageSize, const void* data) { detail::ptrCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data); }
inline void CompressedTextureSubImage1D(Uint texture, Int level, Int xoffset, Sizei width, Enum format, Sizei imageSize, const void* data) { detail::ptrCompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data); }
inline void CompressedTextureSubImage2D(Uint texture, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, Enum format, Sizei imageSize, const void* data) { detail::ptrCompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data); }
inline void CompressedTextureSubImage3D(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Sizei imageSize, const void* data) { detail::ptrCompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data); }
inline void CopyBufferSubData(Enum readTarget, Enum writeTarget, Intptr readOffset, Intptr writeOffset, Sizeiptr size) { detail::ptrCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size); }
inline void CopyImageSubData(Uint srcName, Enum srcTarget, Int srcLevel, Int srcX, Int srcY, Int srcZ, Uint dstName, Enum dstTarget, Int dstLevel, Int dstX, Int dstY, Int dstZ, Sizei srcWidth, Sizei srcHeight, Sizei srcDepth) { detail::ptrCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth); }
inline void CopyNamedBufferSubData(Uint readBuffer, Uint writeBuffer, Intptr readOffset, Intptr writeOffset, Sizeiptr size) { detail::ptrCopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size); }
inline void CopyTexImage1D(Enum target, Int level, Enum internalformat, Int x, Int y, Sizei width, Int border) { detail::ptrCopyTexImage1D(target, level, internalformat, x, y, width, border); }
inline void CopyTexImage2D(Enum target, Int level, Enum internalformat, Int x, Int y, Sizei width, Sizei height, Int border) { detail::ptrCopyTexImage2D(target, level, internalformat, x, y, width, height, border); }
inline void CopyTexSubImage1D(Enum target, Int level, Int xoffset, Int x, Int y, Sizei width) { detail::ptrCopyTexSubImage1D(target, level, xoffset, x, y, width); }
inline void CopyTexSubImage2D(Enum target, Int level, Int xoffset, Int yoffset, Int x, Int y, Sizei width, Sizei height) { detail::ptrCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); }
inline void CopyTexSubImage3D(Enum target, Int level, Int xoffset, Int yoffset, Int zoffset, Int x, Int y, Sizei width, Sizei height) { detail::ptrCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height); }
inline void CopyTextureSubImage1D(Uint texture, Int level, Int xoffset, Int x, Int y, Sizei width) { detail::ptrCopyTextureSubImage1D(texture, level, xoffset, x, y, width); }
inline void CopyTextureSubImage2D(Uint texture, Int level, Int xoffset, Int yoffset, Int x, Int y, Sizei width, Sizei height) { detail::ptrCopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height); }
inline void CopyTextureSubImage3D(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Int x, Int y, Sizei width, Sizei height) { detail::ptrCopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height); }
inline void CreateBuffers(Sizei n, Uint* buffers) { detail::ptrCreateBuffers(n, buffers); }
inline void CreateFramebuffers(Sizei n, Uint* framebuffers) { detail::ptrCreateFramebuffers(n, framebuffers); }
inline Uint CreateProgram() { return detail::ptrCreateProgram(); }
inline void CreateProgramPipelines(Sizei n, Uint* pipelines) { detail::ptrCreateProgramPipelines(n, pipelines); }
inline void CreateQueries(Enum target, Sizei n, Uint* ids) { detail::ptrCreateQueries(target, n, ids); }
inline void CreateRenderbuffers(Sizei n, Uint* renderbuffers) { detail::ptrCreateRenderbuffers(n, renderbuffers); }
inline void CreateSamplers(Sizei n, Uint* samplers) { detail::ptrCreateSamplers(n, samplers); }
inline Uint CreateShader(Enum type) { return detail::ptrCreateShader(type); }
inline Uint CreateShaderProgramv(Enum type, Sizei count, const Char** strings) { return detail::ptrCreateShaderProgramv(type, count, strings); }
inline void CreateTextures(Enum target, Sizei n, Uint* textures) { detail::ptrCreateTextures(target, n, textures); }
inline void CreateTransformFeedbacks(Sizei n, Uint* ids) { detail::ptrCreateTransformFeedbacks(n, ids); }
inline void CreateVertexArrays(Sizei n, Uint* arrays) { detail::ptrCreateVertexArrays(n, arrays); }
inline void CullFace(Enum mode) { detail::ptrCullFace(mode); }
inline void DebugMessageCallback(DebugProc callback, const void* userParam) { detail::ptrDebugMessageCallback(callback, userParam); }
inline void DebugMessageControl(Enum source, Enum type, Enum severity, Sizei count, const Uint* ids, Boolean enabled) { detail::ptrDebugMessageControl(source, type, severity, count, ids, enabled); }
inline void DebugMessageInsert(Enum source, Enum type, Uint id, Enum severity, Sizei length, const Char* buf) { detail::ptrDebugMessageInsert(source, type, id, severity, length, buf); }
inline void DeleteBuffers(Sizei n, const Uint* buffers) { detail::ptrDeleteBuffers(n, buffers); }
inline void DeleteFramebuffers(Sizei n, const Uint* framebuffers) { detail::ptrDeleteFramebuffers(n, framebuffers); }
inline void DeleteProgram(Uint program) { detail::ptrDeleteProgram(program); }
inline void DeleteProgramPipelines(Sizei n, const Uint* pipelines) { detail::ptrDeleteProgramPipelines(n, pipelines); }
inline void DeleteQueries(Sizei n, const Uint* ids) { detail::ptrDeleteQueries(n, ids); }
inline void DeleteRenderbuffers(Sizei n, const Uint* renderbuffers) { detail::ptrDeleteRenderbuffers(n, renderbuffers); }
inline void DeleteSamplers(Sizei count, const Uint* samplers) { detail::ptrDeleteSamplers(count, samplers); }
inline void DeleteShader(Uint shader) { detail::ptrDeleteShader(shader); }
inline void DeleteSync(Sync sync) { detail::ptrDeleteSync(sync); }
inline void DeleteTextures(Sizei n, const Uint* textures) { detail::ptrDeleteTextures(n, textures); }
inline void DeleteTransformFeedbacks(Sizei n, const Uint* ids) { detail::ptrDeleteTransformFeedbacks(n, ids); }
inline void DeleteVertexArrays(Sizei n, const Uint* arrays) { detail::ptrDeleteVertexArrays(n, arrays); }
inline void DepthFunc(Enum func) { detail::ptrDepthFunc(func); }
inline void DepthMask(Boolean flag) { detail::ptrDepthMask(flag); }
inline void DepthRange(Double n, Double f) { detail::ptrDepthRange(n, f); }
inline void DepthRangeArrayv(Uint first, Sizei count, const Double* v) { detail::ptrDepthRangeArrayv(first, count, v); }
inline void DepthRangeIndexed(Uint index, Double n, Double f) { detail::ptrDepthRangeIndexed(index, n, f); }
inline void DepthRangef(Float n, Float f) { detail::ptrDepthRangef(n, f); }
inline void DetachShader(Uint program, Uint shader) { detail::ptrDetachShader(program, shader); }
inline void Disable(Enum cap) { detail::ptrDisable(cap); }
inline void DisableVertexArrayAttrib(Uint vaobj, Uint index) { detail::ptrDisableVertexArrayAttrib(vaobj, index); }
inline void DisableVertexAttribArray(Uint index) { detail::ptrDisableVertexAttribArray(index); }
inline void Disablei(Enum target, Uint index) { detail::ptrDisablei(target, index); }
inline void DispatchCompute(Uint num_groups_x, Uint num_groups_y, Uint num_groups_z) { detail::ptrDispatchCompute(num_groups_x, num_groups_y, num_groups_z); }
inline void DispatchComputeIndirect(Intptr indirect) { detail::ptrDispatchComputeIndirect(indirect); }
inline void DrawArrays(Enum mode, Int first, Sizei count) { detail::ptrDrawArrays(mode, first, count); }
inline void DrawArraysIndirect(Enum mode, const void* indirect) { detail::ptrDrawArraysIndirect(mode, indirect); }
inline void DrawArraysInstanced(Enum mode, Int first, Sizei count, Sizei instancecount) { detail::ptrDrawArraysInstanced(mode, first, count, instancecount); }
inline void DrawArraysInstancedBaseInstance(Enum mode, Int first, Sizei count, Sizei instancecount, Uint baseinstance) { detail::ptrDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance); }
inline void DrawBuffer(Enum buf) { detail::ptrDrawBuffer(buf); }
inline void DrawBuffers(Sizei n, const Enum* bufs) { detail::ptrDrawBuffers(n, bufs); }
inline void DrawElements(Enum mode, Sizei count, Enum type, const void* indices) { detail::ptrDrawElements(mode, count, type, indices); }
inline void DrawElementsBaseVertex(Enum mode, Sizei count, Enum type, const void* indices, Int basevertex) { detail::ptrDrawElementsBaseVertex(mode, count, type, indices, basevertex); }
inline void DrawElementsIndirect(Enum mode, Enum type, const void* indirect) { detail::ptrDrawElementsIndirect(mode, type, indirect); }
inline void DrawElementsInstanced(Enum mode, Sizei count, Enum type, const void* indices, Sizei instancecount) { detail::ptrDrawElementsInstanced(mode, count, type, indices, instancecount); }
inline void DrawElementsInstancedBaseInstance(Enum mode, Sizei count, Enum type, const void* indices, Sizei instancecount, Uint baseinstance) { detail::ptrDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance); }
inline void DrawElementsInstancedBaseVertex(Enum mode, Sizei count, Enum type, const void* indices, Sizei instancecount, Int basevertex) { detail::ptrDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex); }
inline void DrawElementsInstancedBaseVertexBaseInstance(Enum mode, Sizei count, Enum type, const void* indices, Sizei instancecount, Int basevertex, Uint baseinstance) { detail::ptrDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance); }
inline void DrawRangeElements(Enum mode, Uint start, Uint end, Sizei count, Enum type, const void* indices) { detail::ptrDrawRangeElements(mode, start, end, count, type, indices); }
inline void DrawRangeElementsBaseVertex(Enum mode, Uint start, Uint end, Sizei count, Enum type, const void* indices, Int basevertex) { detail::ptrDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex); }
inline void DrawTransformFeedback(Enum mode, Uint id) { detail::ptrDrawTransformFeedback(mode, id); }
inline void DrawTransformFeedbackInstanced(Enum mode, Uint id, Sizei instancecount) { detail::ptrDrawTransformFeedbackInstanced(mode, id, instancecount); }
inline void DrawTransformFeedbackStream(Enum mode, Uint id, Uint stream) { detail::ptrDrawTransformFeedbackStream(mode, id, stream); }
inline void DrawTransformFeedbackStreamInstanced(Enum mode, Uint id, Uint stream, Sizei instancecount) { detail::ptrDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount); }
inline void Enable(Enum cap) { detail::ptrEnable(cap); }
inline void EnableVertexArrayAttrib(Uint vaobj, Uint index) { detail::ptrEnableVertexArrayAttrib(vaobj, index); }
inline void EnableVertexAttribArray(Uint index) { detail::ptrEnableVertexAttribArray(index); }
inline void Enablei(Enum target, Uint index) { detail::ptrEnablei(target, index); }
inline void EndConditionalRender() { detail::ptrEndConditionalRender(); }
inline void EndQuery(Enum target) { detail::ptrEndQuery(target); }
inline void EndQueryIndexed(Enum target, Uint index) { detail::ptrEndQueryIndexed(target, index); }
inline void EndTransformFeedback() { detail::ptrEndTransformFeedback(); }
inline Sync FenceSync(Enum condition, Bitfield flags) { return detail::ptrFenceSync(condition, flags); }
inline void Finish() { detail::ptrFinish(); }
inline void Flush() { detail::ptrFlush(); }
inline void FlushMappedBufferRange(Enum target, Intptr offset, Sizeiptr length) { detail::ptrFlushMappedBufferRange(target, offset, length); }
inline void FlushMappedNamedBufferRange(Uint buffer, Intptr offset, Sizeiptr length) { detail::ptrFlushMappedNamedBufferRange(buffer, offset, length); }
inline void FramebufferParameteri(Enum target, Enum pname, Int param) { detail::ptrFramebufferParameteri(target, pname, param); }
inline void FramebufferRenderbuffer(Enum target, Enum attachment, Enum renderbuffertarget, Uint renderbuffer) { detail::ptrFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer); }
inline void FramebufferTexture(Enum target, Enum attachment, Uint texture, Int level) { detail::ptrFramebufferTexture(target, attachment, texture, level); }
inline void FramebufferTexture1D(Enum target, Enum attachment, Enum textarget, Uint texture, Int level) { detail::ptrFramebufferTexture1D(target, attachment, textarget, texture, level); }
inline void FramebufferTexture2D(Enum target, Enum attachment, Enum textarget, Uint texture, Int level) { detail::ptrFramebufferTexture2D(target, attachment, textarget, texture, level); }
inline void FramebufferTexture3D(Enum target, Enum attachment, Enum textarget, Uint texture, Int level, Int zoffset) { detail::ptrFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset); }
inline void FramebufferTextureLayer(Enum target, Enum attachment, Uint texture, Int level, Int layer) { detail::ptrFramebufferTextureLayer(target, attachment, texture, level, layer); }
inline void FrontFace(Enum mode) { detail::ptrFrontFace(mode); }
inline void GenBuffers(Sizei n, Uint* buffers) { detail::ptrGenBuffers(n, buffers); }
inline void GenFramebuffers(Sizei n, Uint* framebuffers) { detail::ptrGenFramebuffers(n, framebuffers); }
inline void GenProgramPipelines(Sizei n, Uint* pipelines) { detail::ptrGenProgramPipelines(n, pipelines); }
inline void GenQueries(Sizei n, Uint* ids) { detail::ptrGenQueries(n, ids); }
inline void GenRenderbuffers(Sizei n, Uint* renderbuffers) { detail::ptrGenRenderbuffers(n, renderbuffers); }
inline void GenSamplers(Sizei count, Uint* samplers) { detail::ptrGenSamplers(count, samplers); }
inline void GenTextures(Sizei n, Uint* textures) { detail::ptrGenTextures(n, textures); }
inline void GenTransformFeedbacks(Sizei n, Uint* ids) { detail::ptrGenTransformFeedbacks(n, ids); }
inline void GenVertexArrays(Sizei n, Uint* arrays) { detail::ptrGenVertexArrays(n, arrays); }
inline void GenerateMipmap(Enum target) { detail::ptrGenerateMipmap(target); }
inline void GenerateTextureMipmap(Uint texture) { detail::ptrGenerateTextureMipmap(texture); }
inline void GetActiveAtomicCounterBufferiv(Uint program, Uint bufferIndex, Enum pname, Int* params) { detail::ptrGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params); }
inline void GetActiveAttrib(Uint program, Uint index, Sizei bufSize, Sizei* length, Int* size, Enum* type, Char* name) { detail::ptrGetActiveAttrib(program, index, bufSize, length, size, type, name); }
inline void GetActiveSubroutineName(Uint program, Enum shadertype, Uint index, Sizei bufSize, Sizei* length, Char* name) { detail::ptrGetActiveSubroutineName(program, shadertype, index, bufSize, length, name); }
inline void GetActiveSubroutineUniformName(Uint program, Enum shadertype, Uint index, Sizei bufSize, Sizei* length, Char* name) { detail::ptrGetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name); }
inline void GetActiveSubroutineUniformiv(Uint program, Enum shadertype, Uint index, Enum pname, Int* values) { detail::ptrGetActiveSubroutineUniformiv(program, shadertype, index, pname, values); }
inline void GetActiveUniform(Uint program, Uint index, Sizei bufSize, Sizei* length, Int* size, Enum* type, Char* name) { detail::ptrGetActiveUniform(program, index, bufSize, length, size, type, name); }
inline void GetActiveUniformBlockName(Uint program, Uint uniformBlockIndex, Sizei bufSize, Sizei* length, Char* uniformBlockName) { detail::ptrGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName); }
inline void GetActiveUniformBlockiv(Uint program, Uint uniformBlockIndex, Enum pname, Int* params) { detail::ptrGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params); }
inline void GetActiveUniformName(Uint program, Uint uniformIndex, Sizei bufSize, Sizei* length, Char* uniformName) { detail::ptrGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName); }
inline void GetActiveUniformsiv(Uint program, Sizei uniformCount, const Uint* uniformIndices, Enum pname, Int* params) { detail::ptrGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params); }
inline void GetAttachedShaders(Uint program, Sizei maxCount, Sizei* count, Uint* shaders) { detail::ptrGetAttachedShaders(program, maxCount, count, shaders); }
inline Int GetAttribLocation(Uint program, const Char* name) { return detail::ptrGetAttribLocation(program, name); }
inline void GetBooleani_v(Enum target, Uint index, Boolean* data) { detail::ptrGetBooleani_v(target, index, data); }
inline void GetBooleanv(Enum pname, Boolean* data) { detail::ptrGetBooleanv(pname, data); }
inline void GetBufferParameteri64v(Enum target, Enum pname, Int64* params) { detail::ptrGetBufferParameteri64v(target, pname, params); }
inline void GetBufferParameteriv(Enum target, Enum pname, Int* params) { detail::ptrGetBufferParameteriv(target, pname, params); }
inline void GetBufferPointerv(Enum target, Enum pname, void** params) { detail::ptrGetBufferPointerv(target, pname, params); }
inline void GetBufferSubData(Enum target, Intptr offset, Sizeiptr size, void* data) { detail::ptrGetBufferSubData(target, offset, size, data); }
inline void GetCompressedTexImage(Enum target, Int level, void* img) { detail::ptrGetCompressedTexImage(target, level, img); }
inline void GetCompressedTextureImage(Uint texture, Int level, Sizei bufSize, void* pixels) { detail::ptrGetCompressedTextureImage(texture, level, bufSize, pixels); }
inline void GetCompressedTextureSubImage(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Sizei bufSize, void* pixels) { detail::ptrGetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels); }
inline Uint GetDebugMessageLog(Uint count, Sizei bufSize, Enum* sources, Enum* types, Uint* ids, Enum* severities, Sizei* lengths, Char* messageLog) { return detail::ptrGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog); }
inline void GetDoublei_v(Enum target, Uint index, Double* data) { detail::ptrGetDoublei_v(target, index, data); }
inline void GetDoublev(Enum pname, Double* data) { detail::ptrGetDoublev(pname, data); }
inline Enum GetError() { return detail::ptrGetError(); }
inline void GetFloati_v(Enum target, Uint index, Float* data) { detail::ptrGetFloati_v(target, index, data); }
inline void GetFloatv(Enum pname, Float* data) { detail::ptrGetFloatv(pname, data); }
inline Int GetFragDataIndex(Uint program, const Char* name) { return detail::ptrGetFragDataIndex(program, name); }
inline Int GetFragDataLocation(Uint program, const Char* name) { return detail::ptrGetFragDataLocation(program, name); }
inline void GetFramebufferAttachmentParameteriv(Enum target, Enum attachment, Enum pname, Int* params) { detail::ptrGetFramebufferAttachmentParameteriv(target, attachment, pname, params); }
inline void GetFramebufferParameteriv(Enum target, Enum pname, Int* params) { detail::ptrGetFramebufferParameteriv(target, pname, params); }
inline Enum GetGraphicsResetStatus() { return detail::ptrGetGraphicsResetStatus(); }
inline void GetInteger64i_v(Enum target, Uint index, Int64* data) { detail::ptrGetInteger64i_v(target, index, data); }
inline void GetInteger64v(Enum pname, Int64* data) { detail::ptrGetInteger64v(pname, data); }
inline void GetIntegeri_v(Enum target, Uint index, Int* data) { detail::ptrGetIntegeri_v(target, index, data); }
inline void GetIntegerv(Enum pname, Int* data) { detail::ptrGetIntegerv(pname, data); }
inline void GetInternalformati64v(Enum target, Enum internalformat, Enum pname, Sizei count, Int64* params) { detail::ptrGetInternalformati64v(target, internalformat, pname, count, params); }
inline void GetInternalformativ(Enum target, Enum internalformat, Enum pname, Sizei count, Int* params) { detail::ptrGetInternalformativ(target, internalformat, pname, count, params); }
inline void GetMultisamplefv(Enum pname, Uint index, Float* val) { detail::ptrGetMultisamplefv(pname, index, val); }
inline void GetNamedBufferParameteri64v(Uint buffer, Enum pname, Int64* params) { detail::ptrGetNamedBufferParameteri64v(buffer, pname, params); }
inline void GetNamedBufferParameteriv(Uint buffer, Enum pname, Int* params) { detail::ptrGetNamedBufferParameteriv(buffer, pname, params); }
inline void GetNamedBufferPointerv(Uint buffer, Enum pname, void** params) { detail::ptrGetNamedBufferPointerv(buffer, pname, params); }
inline void GetNamedBufferSubData(Uint buffer, Intptr offset, Sizeiptr size, void* data) { detail::ptrGetNamedBufferSubData(buffer, offset, size, data); }
inline void GetNamedFramebufferAttachmentParameteriv(Uint framebuffer, Enum attachment, Enum pname, Int* params) { detail::ptrGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params); }
inline void GetNamedFramebufferParameteriv(Uint framebuffer, Enum pname, Int* param) { detail::ptrGetNamedFramebufferParameteriv(framebuffer, pname, param); }
inline void GetNamedRenderbufferParameteriv(Uint renderbuffer, Enum pname, Int* params) { detail::ptrGetNamedRenderbufferParameteriv(renderbuffer, pname, params); }
inline void GetObjectLabel(Enum identifier, Uint name, Sizei bufSize, Sizei* length, Char* label) { detail::ptrGetObjectLabel(identifier, name, bufSize, length, label); }
inline void GetObjectPtrLabel(const void* ptr, Sizei bufSize, Sizei* length, Char* label) { detail::ptrGetObjectPtrLabel(ptr, bufSize, length, label); }
inline void GetProgramBinary(Uint program, Sizei bufSize, Sizei* length, Enum* binaryFormat, void* binary) { detail::ptrGetProgramBinary(program, bufSize, length, binaryFormat, binary); }
inline void GetProgramInfoLog(Uint program, Sizei bufSize, Sizei* length, Char* infoLog) { detail::ptrGetProgramInfoLog(program, bufSize, length, infoLog); }
inline void GetProgramInterfaceiv(Uint program, Enum programInterface, Enum pname, Int* params) { detail::ptrGetProgramInterfaceiv(program, programInterface, pname, params); }
inline void GetProgramPipelineInfoLog(Uint pipeline, Sizei bufSize, Sizei* length, Char* infoLog) { detail::ptrGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog); }
inline void GetProgramPipelineiv(Uint pipeline, Enum pname, Int* params) { detail::ptrGetProgramPipelineiv(pipeline, pname, params); }
inline Uint GetProgramResourceIndex(Uint program, Enum programInterface, const Char* name) { return detail::ptrGetProgramResourceIndex(program, programInterface, name); }
inline Int GetProgramResourceLocation(Uint program, Enum programInterface, const Char* name) { return detail::ptrGetProgramResourceLocation(program, programInterface, name); }
inline Int GetProgramResourceLocationIndex(Uint program, Enum programInterface, const Char* name) { return detail::ptrGetProgramResourceLocationIndex(program, programInterface, name); }
inline void GetProgramResourceName(Uint program, Enum programInterface, Uint index, Sizei bufSize, Sizei* length, Char* name) { detail::ptrGetProgramResourceName(program, programInterface, index, bufSize, length, name); }
inline void GetProgramResourceiv(Uint program, Enum programInterface, Uint index, Sizei propCount, const Enum* props, Sizei count, Sizei* length, Int* params) { detail::ptrGetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params); }
inline void GetProgramStageiv(Uint program, Enum shadertype, Enum pname, Int* values) { detail::ptrGetProgramStageiv(program, shadertype, pname, values); }
inline void GetProgramiv(Uint program, Enum pname, Int* params) { detail::ptrGetProgramiv(program, pname, params); }
inline void GetQueryBufferObjecti64v(Uint id, Uint buffer, Enum pname, Intptr offset) { detail::ptrGetQueryBufferObjecti64v(id, buffer, pname, offset); }
inline void GetQueryBufferObjectiv(Uint id, Uint buffer, Enum pname, Intptr offset) { detail::ptrGetQueryBufferObjectiv(id, buffer, pname, offset); }
inline void GetQueryBufferObjectui64v(Uint id, Uint buffer, Enum pname, Intptr offset) { detail::ptrGetQueryBufferObjectui64v(id, buffer, pname, offset); }
inline void GetQueryBufferObjectuiv(Uint id, Uint buffer, Enum pname, Intptr offset) { detail::ptrGetQueryBufferObjectuiv(id, buffer, pname, offset); }
inline void GetQueryIndexediv(Enum target, Uint index, Enum pname, Int* params) { detail::ptrGetQueryIndexediv(target, index, pname, params); }
inline void GetQueryObjecti64v(Uint id, Enum pname, Int64* params) { detail::ptrGetQueryObjecti64v(id, pname, params); }
inline void GetQueryObjectiv(Uint id, Enum pname, Int* params) { detail::ptrGetQueryObjectiv(id, pname, params); }
inline void GetQueryObjectui64v(Uint id, Enum pname, Uint64* params) { detail::ptrGetQueryObjectui64v(id, pname, params); }
inline void GetQueryObjectuiv(Uint id, Enum pname, Uint* params) { detail::ptrGetQueryObjectuiv(id, pname, params); }
inline void GetQueryiv(Enum target, Enum pname, Int* params) { detail::ptrGetQueryiv(target, pname, params); }
inline void GetRenderbufferParameteriv(Enum target, Enum pname, Int* params) { detail::ptrGetRenderbufferParameteriv(target, pname, params); }
inline void GetSamplerParameterIiv(Uint sampler, Enum pname, Int* params) { detail::ptrGetSamplerParameterIiv(sampler, pname, params); }
inline void GetSamplerParameterIuiv(Uint sampler, Enum pname, Uint* params) { detail::ptrGetSamplerParameterIuiv(sampler, pname, params); }
inline void GetSamplerParameterfv(Uint sampler, Enum pname, Float* params) { detail::ptrGetSamplerParameterfv(sampler, pname, params); }
inline void GetSamplerParameteriv(Uint sampler, Enum pname, Int* params) { detail::ptrGetSamplerParameteriv(sampler, pname, params); }
inline void GetShaderInfoLog(Uint shader, Sizei bufSize, Sizei* length, Char* infoLog) { detail::ptrGetShaderInfoLog(shader, bufSize, length, infoLog); }
inline void GetShaderPrecisionFormat(Enum shadertype, Enum precisiontype, Int* range, Int* precision) { detail::ptrGetShaderPrecisionFormat(shadertype, precisiontype, range, precision); }
inline void GetShaderSource(Uint shader, Sizei bufSize, Sizei* length, Char* source) { detail::ptrGetShaderSource(shader, bufSize, length, source); }
inline void GetShaderiv(Uint shader, Enum pname, Int* params) { detail::ptrGetShaderiv(shader, pname, params); }
inline const Ubyte* GetString(Enum name) { return detail::ptrGetString(name); }
inline const Ubyte* GetStringi(Enum name, Uint index) { return detail::ptrGetStringi(name, index); }
inline Uint GetSubroutineIndex(Uint program, Enum shadertype, const Char* name) { return detail::ptrGetSubroutineIndex(program, shadertype, name); }
inline Int GetSubroutineUniformLocation(Uint program, Enum shadertype, const Char* name) { return detail::ptrGetSubroutineUniformLocation(program, shadertype, name); }
inline void GetSynciv(Sync sync, Enum pname, Sizei count, Sizei* length, Int* values) { detail::ptrGetSynciv(sync, pname, count, length, values); }
inline void GetTexImage(Enum target, Int level, Enum format, Enum type, void* pixels) { detail::ptrGetTexImage(target, level, format, type, pixels); }
inline void GetTexLevelParameterfv(Enum target, Int level, Enum pname, Float* params) { detail::ptrGetTexLevelParameterfv(target, level, pname, params); }
inline void GetTexLevelParameteriv(Enum target, Int level, Enum pname, Int* params) { detail::ptrGetTexLevelParameteriv(target, level, pname, params); }
inline void GetTexParameterIiv(Enum target, Enum pname, Int* params) { detail::ptrGetTexParameterIiv(target, pname, params); }
inline void GetTexParameterIuiv(Enum target, Enum pname, Uint* params) { detail::ptrGetTexParameterIuiv(target, pname, params); }
inline void GetTexParameterfv(Enum target, Enum pname, Float* params) { detail::ptrGetTexParameterfv(target, pname, params); }
inline void GetTexParameteriv(Enum target, Enum pname, Int* params) { detail::ptrGetTexParameteriv(target, pname, params); }
inline void GetTextureImage(Uint texture, Int level, Enum format, Enum type, Sizei bufSize, void* pixels) { detail::ptrGetTextureImage(texture, level, format, type, bufSize, pixels); }
inline void GetTextureLevelParameterfv(Uint texture, Int level, Enum pname, Float* params) { detail::ptrGetTextureLevelParameterfv(texture, level, pname, params); }
inline void GetTextureLevelParameteriv(Uint texture, Int level, Enum pname, Int* params) { detail::ptrGetTextureLevelParameteriv(texture, level, pname, params); }
inline void GetTextureParameterIiv(Uint texture, Enum pname, Int* params) { detail::ptrGetTextureParameterIiv(texture, pname, params); }
inline void GetTextureParameterIuiv(Uint texture, Enum pname, Uint* params) { detail::ptrGetTextureParameterIuiv(texture, pname, params); }
inline void GetTextureParameterfv(Uint texture, Enum pname, Float* params) { detail::ptrGetTextureParameterfv(texture, pname, params); }
inline void GetTextureParameteriv(Uint texture, Enum pname, Int* params) { detail::ptrGetTextureParameteriv(texture, pname, params); }
inline void GetTextureSubImage(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Enum type, Sizei bufSize, void* pixels) { detail::ptrGetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels); }
inline void GetTransformFeedbackVarying(Uint program, Uint index, Sizei bufSize, Sizei* length, Sizei* size, Enum* type, Char* name) { detail::ptrGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name); }
inline void GetTransformFeedbacki64_v(Uint xfb, Enum pname, Uint index, Int64* param) { detail::ptrGetTransformFeedbacki64_v(xfb, pname, index, param); }
inline void GetTransformFeedbacki_v(Uint xfb, Enum pname, Uint index, Int* param) { detail::ptrGetTransformFeedbacki_v(xfb, pname, index, param); }
inline void GetTransformFeedbackiv(Uint xfb, Enum pname, Int* param) { detail::ptrGetTransformFeedbackiv(xfb, pname, param); }
inline Uint GetUniformBlockIndex(Uint program, const Char* uniformBlockName) { return detail::ptrGetUniformBlockIndex(program, uniformBlockName); }
inline void GetUniformIndices(Uint program, Sizei uniformCount, const Char** uniformNames, Uint* uniformIndices) { detail::ptrGetUniformIndices(program, uniformCount, uniformNames, uniformIndices); }
inline Int GetUniformLocation(Uint program, const Char* name) { return detail::ptrGetUniformLocation(program, name); }
inline void GetUniformSubroutineuiv(Enum shadertype, Int location, Uint* params) { detail::ptrGetUniformSubroutineuiv(shadertype, location, params); }
inline void GetUniformdv(Uint program, Int location, Double* params) { detail::ptrGetUniformdv(program, location, params); }
inline void GetUniformfv(Uint program, Int location, Float* params) { detail::ptrGetUniformfv(program, location, params); }
inline void GetUniformiv(Uint program, Int location, Int* params) { detail::ptrGetUniformiv(program, location, params); }
inline void GetUniformuiv(Uint program, Int location, Uint* params) { detail::ptrGetUniformuiv(program, location, params); }
inline void GetVertexArrayIndexed64iv(Uint vaobj, Uint index, Enum pname, Int64* param) { detail::ptrGetVertexArrayIndexed64iv(vaobj, index, pname, param); }
inline void GetVertexArrayIndexediv(Uint vaobj, Uint index, Enum pname, Int* param) { detail::ptrGetVertexArrayIndexediv(vaobj, index, pname, param); }
inline void GetVertexArrayiv(Uint vaobj, Enum pname, Int* param) { detail::ptrGetVertexArrayiv(vaobj, pname, param); }
inline void GetVertexAttribIiv(Uint index, Enum pname, Int* params) { detail::ptrGetVertexAttribIiv(index, pname, params); }
inline void GetVertexAttribIuiv(Uint index, Enum pname, Uint* params) { detail::ptrGetVertexAttribIuiv(index, pname, params); }
inline void GetVertexAttribLdv(Uint index, Enum pname, Double* params) { detail::ptrGetVertexAttribLdv(index, pname, params); }
inline void GetVertexAttribPointerv(Uint index, Enum pname, void** pointer) { detail::ptrGetVertexAttribPointerv(index, pname, pointer); }
inline void GetVertexAttribdv(Uint index, Enum pname, Double* params) { detail::ptrGetVertexAttribdv(index, pname, params); }
inline void GetVertexAttribfv(Uint index, Enum pname, Float* params) { detail::ptrGetVertexAttribfv(index, pname, params); }
inline void GetVertexAttribiv(Uint index, Enum pname, Int* params) { detail::ptrGetVertexAttribiv(index, pname, params); }
inline void GetnCompressedTexImage(Enum target, Int lod, Sizei bufSize, void* pixels) { detail::ptrGetnCompressedTexImage(target, lod, bufSize, pixels); }
inline void GetnTexImage(Enum target, Int level, Enum format, Enum type, Sizei bufSize, void* pixels) { detail::ptrGetnTexImage(target, level, format, type, bufSize, pixels); }
inline void GetnUniformdv(Uint program, Int location, Sizei bufSize, Double* params) { detail::ptrGetnUniformdv(program, location, bufSize, params); }
inline void GetnUniformfv(Uint program, Int location, Sizei bufSize, Float* params) { detail::ptrGetnUniformfv(program, location, bufSize, params); }
inline void GetnUniformiv(Uint program, Int location, Sizei bufSize, Int* params) { detail::ptrGetnUniformiv(program, location, bufSize, params); }
inline void GetnUniformuiv(Uint program, Int location, Sizei bufSize, Uint* params) { detail::ptrGetnUniformuiv(program, location, bufSize, params); }
inline void Hint(Enum target, Enum mode) { detail::ptrHint(target, mode); }
inline void InvalidateBufferData(Uint buffer) { detail::ptrInvalidateBufferData(buffer); }
inline void InvalidateBufferSubData(Uint buffer, Intptr offset, Sizeiptr length) { detail::ptrInvalidateBufferSubData(buffer, offset, length); }
inline void InvalidateFramebuffer(Enum target, Sizei numAttachments, const Enum* attachments) { detail::ptrInvalidateFramebuffer(target, numAttachments, attachments); }
inline void InvalidateNamedFramebufferData(Uint framebuffer, Sizei numAttachments, const Enum* attachments) { detail::ptrInvalidateNamedFramebufferData(framebuffer, numAttachments, attachments); }
inline void InvalidateNamedFramebufferSubData(Uint framebuffer, Sizei numAttachments, const Enum* attachments, Int x, Int y, Sizei width, Sizei height) { detail::ptrInvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height); }
inline void InvalidateSubFramebuffer(Enum target, Sizei numAttachments, const Enum* attachments, Int x, Int y, Sizei width, Sizei height) { detail::ptrInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height); }
inline void InvalidateTexImage(Uint texture, Int level) { detail::ptrInvalidateTexImage(texture, level); }
inline void InvalidateTexSubImage(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth) { detail::ptrInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth); }
inline Boolean IsBuffer(Uint buffer) { return detail::ptrIsBuffer(buffer); }
inline Boolean IsEnabled(Enum cap) { return detail::ptrIsEnabled(cap); }
inline Boolean IsEnabledi(Enum target, Uint index) { return detail::ptrIsEnabledi(target, index); }
inline Boolean IsFramebuffer(Uint framebuffer) { return detail::ptrIsFramebuffer(framebuffer); }
inline Boolean IsProgram(Uint program) { return detail::ptrIsProgram(program); }
inline Boolean IsProgramPipeline(Uint pipeline) { return detail::ptrIsProgramPipeline(pipeline); }
inline Boolean IsQuery(Uint id) { return detail::ptrIsQuery(id); }
inline Boolean IsRenderbuffer(Uint renderbuffer) { return detail::ptrIsRenderbuffer(renderbuffer); }
inline Boolean IsSampler(Uint sampler) { return detail::ptrIsSampler(sampler); }
inline Boolean IsShader(Uint shader) { return detail::ptrIsShader(shader); }
inline Boolean IsSync(Sync sync) { return detail::ptrIsSync(sync); }
inline Boolean IsTexture(Uint texture) { return detail::ptrIsTexture(texture); }
inline Boolean IsTransformFeedback(Uint id) { return detail::ptrIsTransformFeedback(id); }
inline Boolean IsVertexArray(Uint array) { return detail::ptrIsVertexArray(array); }
inline void LineWidth(Float width) { detail::ptrLineWidth(width); }
inline void LinkProgram(Uint program) { detail::ptrLinkProgram(program); }
inline void LogicOp(Enum opcode) { detail::ptrLogicOp(opcode); }
inline void* MapBuffer(Enum target, Enum access) { return detail::ptrMapBuffer(target, access); }
inline void* MapBufferRange(Enum target, Intptr offset, Sizeiptr length, Bitfield access) { return detail::ptrMapBufferRange(target, offset, length, access); }
inline void* MapNamedBuffer(Uint buffer, Enum access) { return detail::ptrMapNamedBuffer(buffer, access); }
inline void* MapNamedBufferRange(Uint buffer, Intptr offset, Sizeiptr length, Bitfield access) { return detail::ptrMapNamedBufferRange(buffer, offset, length, access); }
inline void MemoryBarrier(Bitfield barriers) { detail::ptrMemoryBarrier(barriers); }
inline void MemoryBarrierByRegion(Bitfield barriers) { detail::ptrMemoryBarrierByRegion(barriers); }
inline void MinSampleShading(Float value) { detail::ptrMinSampleShading(value); }
inline void MultiDrawArrays(Enum mode, const Int* first, const Sizei* count, Sizei drawcount) { detail::ptrMultiDrawArrays(mode, first, count, drawcount); }
inline void MultiDrawArraysIndirect(Enum mode, const void* indirect, Sizei drawcount, Sizei stride) { detail::ptrMultiDrawArraysIndirect(mode, indirect, drawcount, stride); }
inline void MultiDrawArraysIndirectCount(Enum mode, const void* indirect, Intptr drawcount, Sizei maxdrawcount, Sizei stride) { detail::ptrMultiDrawArraysIndirectCount(mode, indirect, drawcount, maxdrawcount, stride); }
inline void MultiDrawElements(Enum mode, const Sizei* count, Enum type, const void** indices, Sizei drawcount) { detail::ptrMultiDrawElements(mode, count, type, indices, drawcount); }
inline void MultiDrawElementsBaseVertex(Enum mode, const Sizei* count, Enum type, const void** indices, Sizei drawcount, const Int* basevertex) { detail::ptrMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex); }
inline void MultiDrawElementsIndirect(Enum mode, Enum type, const void* indirect, Sizei drawcount, Sizei stride) { detail::ptrMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride); }
inline void MultiDrawElementsIndirectCount(Enum mode, Enum type, const void* indirect, Intptr drawcount, Sizei maxdrawcount, Sizei stride) { detail::ptrMultiDrawElementsIndirectCount(mode, type, indirect, drawcount, maxdrawcount, stride); }
inline void NamedBufferData(Uint buffer, Sizeiptr size, const void* data, Enum usage) { detail::ptrNamedBufferData(buffer, size, data, usage); }
inline void NamedBufferStorage(Uint buffer, Sizeiptr size, const void* data, Bitfield flags) { detail::ptrNamedBufferStorage(buffer, size, data, flags); }
inline void NamedBufferSubData(Uint buffer, Intptr offset, Sizeiptr size, const void* data) { detail::ptrNamedBufferSubData(buffer, offset, size, data); }
inline void NamedFramebufferDrawBuffer(Uint framebuffer, Enum buf) { detail::ptrNamedFramebufferDrawBuffer(framebuffer, buf); }
inline void NamedFramebufferDrawBuffers(Uint framebuffer, Sizei n, const Enum* bufs) { detail::ptrNamedFramebufferDrawBuffers(framebuffer, n, bufs); }
inline void NamedFramebufferParameteri(Uint framebuffer, Enum pname, Int param) { detail::ptrNamedFramebufferParameteri(framebuffer, pname, param); }
inline void NamedFramebufferReadBuffer(Uint framebuffer, Enum src) { detail::ptrNamedFramebufferReadBuffer(framebuffer, src); }
inline void NamedFramebufferRenderbuffer(Uint framebuffer, Enum attachment, Enum renderbuffertarget, Uint renderbuffer) { detail::ptrNamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer); }
inline void NamedFramebufferTexture(Uint framebuffer, Enum attachment, Uint texture, Int level) { detail::ptrNamedFramebufferTexture(framebuffer, attachment, texture, level); }
inline void NamedFramebufferTextureLayer(Uint framebuffer, Enum attachment, Uint texture, Int level, Int layer) { detail::ptrNamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer); }
inline void NamedRenderbufferStorage(Uint renderbuffer, Enum internalformat, Sizei width, Sizei height) { detail::ptrNamedRenderbufferStorage(renderbuffer, internalformat, width, height); }
inline void NamedRenderbufferStorageMultisample(Uint renderbuffer, Sizei samples, Enum internalformat, Sizei width, Sizei height) { detail::ptrNamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height); }
inline void ObjectLabel(Enum identifier, Uint name, Sizei length, const Char* label) { detail::ptrObjectLabel(identifier, name, length, label); }
inline void ObjectPtrLabel(const void* ptr, Sizei length, const Char* label) { detail::ptrObjectPtrLabel(ptr, length, label); }
inline void PatchParameterfv(Enum pname, const Float* values) { detail::ptrPatchParameterfv(pname, values); }
inline void PatchParameteri(Enum pname, Int value) { detail::ptrPatchParameteri(pname, value); }
inline void PauseTransformFeedback() { detail::ptrPauseTransformFeedback(); }
inline void PixelStoref(Enum pname, Float param) { detail::ptrPixelStoref(pname, param); }
inline void PixelStorei(Enum pname, Int param) { detail::ptrPixelStorei(pname, param); }
inline void PointParameterf(Enum pname, Float param) { detail::ptrPointParameterf(pname, param); }
inline void PointParameterfv(Enum pname, const Float* params) { detail::ptrPointParameterfv(pname, params); }
inline void PointParameteri(Enum pname, Int param) { detail::ptrPointParameteri(pname, param); }
inline void PointParameteriv(Enum pname, const Int* params) { detail::ptrPointParameteriv(pname, params); }
inline void PointSize(Float size) { detail::ptrPointSize(size); }
inline void PolygonMode(Enum face, Enum mode) { detail::ptrPolygonMode(face, mode); }
inline void PolygonOffset(Float factor, Float units) { detail::ptrPolygonOffset(factor, units); }
inline void PolygonOffsetClamp(Float factor, Float units, Float clamp) { detail::ptrPolygonOffsetClamp(factor, units, clamp); }
inline void PopDebugGroup() { detail::ptrPopDebugGroup(); }
inline void PrimitiveRestartIndex(Uint index) { detail::ptrPrimitiveRestartIndex(index); }
inline void ProgramBinary(Uint program, Enum binaryFormat, const void* binary, Sizei length) { detail::ptrProgramBinary(program, binaryFormat, binary, length); }
inline void ProgramParameteri(Uint program, Enum pname, Int value) { detail::ptrProgramParameteri(program, pname, value); }
inline void ProgramUniform1d(Uint program, Int location, Double v0) { detail::ptrProgramUniform1d(program, location, v0); }
inline void ProgramUniform1dv(Uint program, Int location, Sizei count, const Double* value) { detail::ptrProgramUniform1dv(program, location, count, value); }
inline void ProgramUniform1f(Uint program, Int location, Float v0) { detail::ptrProgramUniform1f(program, location, v0); }
inline void ProgramUniform1fv(Uint program, Int location, Sizei count, const Float* value) { detail::ptrProgramUniform1fv(program, location, count, value); }
inline void ProgramUniform1i(Uint program, Int location, Int v0) { detail::ptrProgramUniform1i(program, location, v0); }
inline void ProgramUniform1iv(Uint program, Int location, Sizei count, const Int* value) { detail::ptrProgramUniform1iv(program, location, count, value); }
inline void ProgramUniform1ui(Uint program, Int location, Uint v0) { detail::ptrProgramUniform1ui(program, location, v0); }
inline void ProgramUniform1uiv(Uint program, Int location, Sizei count, const Uint* value) { detail::ptrProgramUniform1uiv(program, location, count, value); }
inline void ProgramUniform2d(Uint program, Int location, Double v0, Double v1) { detail::ptrProgramUniform2d(program, location, v0, v1); }
inline void ProgramUniform2dv(Uint program, Int location, Sizei count, const Double* value) { detail::ptrProgramUniform2dv(program, location, count, value); }
inline void ProgramUniform2f(Uint program, Int location, Float v0, Float v1) { detail::ptrProgramUniform2f(program, location, v0, v1); }
inline void ProgramUniform2fv(Uint program, Int location, Sizei count, const Float* value) { detail::ptrProgramUniform2fv(program, location, count, value); }
inline void ProgramUniform2i(Uint program, Int location, Int v0, Int v1) { detail::ptrProgramUniform2i(program, location, v0, v1); }
inline void ProgramUniform2iv(Uint program, Int location, Sizei count, const Int* value) { detail::ptrProgramUniform2iv(program, location, count, value); }
inline void ProgramUniform2ui(Uint program, Int location, Uint v0, Uint v1) { detail::ptrProgramUniform2ui(program, location, v0, v1); }
inline void ProgramUniform2uiv(Uint program, Int location, Sizei count, const Uint* value) { detail::ptrProgramUniform2uiv(program, location, count, value); }
inline void ProgramUniform3d(Uint program, Int location, Double v0, Double v1, Double v2) { detail::ptrProgramUniform3d(program, location, v0, v1, v2); }
inline void ProgramUniform3dv(Uint program, Int location, Sizei count, const Double* value) { detail::ptrProgramUniform3dv(program, location, count, value); }
inline void ProgramUniform3f(Uint program, Int location, Float v0, Float v1, Float v2) { detail::ptrProgramUniform3f(program, location, v0, v1, v2); }
inline void ProgramUniform3fv(Uint program, Int location, Sizei count, const Float* value) { detail::ptrProgramUniform3fv(program, location, count, value); }
inline void ProgramUniform3i(Uint program, Int location, Int v0, Int v1, Int v2) { detail::ptrProgramUniform3i(program, location, v0, v1, v2); }
inline void ProgramUniform3iv(Uint program, Int location, Sizei count, const Int* value) { detail::ptrProgramUniform3iv(program, location, count, value); }
inline void ProgramUniform3ui(Uint program, Int location, Uint v0, Uint v1, Uint v2) { detail::ptrProgramUniform3ui(program, location, v0, v1, v2); }
inline void ProgramUniform3uiv(Uint program, Int location, Sizei count, const Uint* value) { detail::ptrProgramUniform3uiv(program, location, count, value); }
inline void ProgramUniform4d(Uint program, Int location, Double v0, Double v1, Double v2, Double v3) { detail::ptrProgramUniform4d(program, location, v0, v1, v2, v3); }
inline void ProgramUniform4dv(Uint program, Int location, Sizei count, const Double* value) { detail::ptrProgramUniform4dv(program, location, count, value); }
inline void ProgramUniform4f(Uint program, Int location, Float v0, Float v1, Float v2, Float v3) { detail::ptrProgramUniform4f(program, location, v0, v1, v2, v3); }
inline void ProgramUniform4fv(Uint program, Int location, Sizei count, const Float* value) { detail::ptrProgramUniform4fv(program, location, count, value); }
inline void ProgramUniform4i(Uint program, Int location, Int v0, Int v1, Int v2, Int v3) { detail::ptrProgramUniform4i(program, location, v0, v1, v2, v3); }
inline void ProgramUniform4iv(Uint program, Int location, Sizei count, const Int* value) { detail::ptrProgramUniform4iv(program, location, count, value); }
inline void ProgramUniform4ui(Uint program, Int location, Uint v0, Uint v1, Uint v2, Uint v3) { detail::ptrProgramUniform4ui(program, location, v0, v1, v2, v3); }
inline void ProgramUniform4uiv(Uint program, Int location, Sizei count, const Uint* value) { detail::ptrProgramUniform4uiv(program, location, count, value); }
inline void ProgramUniformMatrix2dv(Uint program, Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrProgramUniformMatrix2dv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix2fv(Uint program, Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrProgramUniformMatrix2fv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix2x3dv(Uint program, Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrProgramUniformMatrix2x3dv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix2x3fv(Uint program, Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrProgramUniformMatrix2x3fv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix2x4dv(Uint program, Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrProgramUniformMatrix2x4dv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix2x4fv(Uint program, Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrProgramUniformMatrix2x4fv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix3dv(Uint program, Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrProgramUniformMatrix3dv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix3fv(Uint program, Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrProgramUniformMatrix3fv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix3x2dv(Uint program, Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrProgramUniformMatrix3x2dv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix3x2fv(Uint program, Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrProgramUniformMatrix3x2fv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix3x4dv(Uint program, Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrProgramUniformMatrix3x4dv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix3x4fv(Uint program, Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrProgramUniformMatrix3x4fv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix4dv(Uint program, Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrProgramUniformMatrix4dv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix4fv(Uint program, Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrProgramUniformMatrix4fv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix4x2dv(Uint program, Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrProgramUniformMatrix4x2dv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix4x2fv(Uint program, Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrProgramUniformMatrix4x2fv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix4x3dv(Uint program, Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrProgramUniformMatrix4x3dv(program, location, count, transpose, value); }
inline void ProgramUniformMatrix4x3fv(Uint program, Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrProgramUniformMatrix4x3fv(program, location, count, transpose, value); }
inline void ProvokingVertex(Enum mode) { detail::ptrProvokingVertex(mode); }
inline void PushDebugGroup(Enum source, Uint id, Sizei length, const Char* message) { detail::ptrPushDebugGroup(source, id, length, message); }
inline void QueryCounter(Uint id, Enum target) { detail::ptrQueryCounter(id, target); }
inline void ReadBuffer(Enum src) { detail::ptrReadBuffer(src); }
inline void ReadPixels(Int x, Int y, Sizei width, Sizei height, Enum format, Enum type, void* pixels) { detail::ptrReadPixels(x, y, width, height, format, type, pixels); }
inline void ReadnPixels(Int x, Int y, Sizei width, Sizei height, Enum format, Enum type, Sizei bufSize, void* data) { detail::ptrReadnPixels(x, y, width, height, format, type, bufSize, data); }
inline void ReleaseShaderCompiler() { detail::ptrReleaseShaderCompiler(); }
inline void RenderbufferStorage(Enum target, Enum internalformat, Sizei width, Sizei height) { detail::ptrRenderbufferStorage(target, internalformat, width, height); }
inline void RenderbufferStorageMultisample(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height) { detail::ptrRenderbufferStorageMultisample(target, samples, internalformat, width, height); }
inline void ResumeTransformFeedback() { detail::ptrResumeTransformFeedback(); }
inline void SampleCoverage(Float value, Boolean invert) { detail::ptrSampleCoverage(value, invert); }
inline void SampleMaski(Uint maskNumber, Bitfield mask) { detail::ptrSampleMaski(maskNumber, mask); }
inline void SamplerParameterIiv(Uint sampler, Enum pname, const Int* param) { detail::ptrSamplerParameterIiv(sampler, pname, param); }
inline void SamplerParameterIuiv(Uint sampler, Enum pname, const Uint* param) { detail::ptrSamplerParameterIuiv(sampler, pname, param); }
inline void SamplerParameterf(Uint sampler, Enum pname, Float param) { detail::ptrSamplerParameterf(sampler, pname, param); }
inline void SamplerParameterfv(Uint sampler, Enum pname, const Float* param) { detail::ptrSamplerParameterfv(sampler, pname, param); }
inline void SamplerParameteri(Uint sampler, Enum pname, Int param) { detail::ptrSamplerParameteri(sampler, pname, param); }
inline void SamplerParameteriv(Uint sampler, Enum pname, const Int* param) { detail::ptrSamplerParameteriv(sampler, pname, param); }
inline void Scissor(Int x, Int y, Sizei width, Sizei height) { detail::ptrScissor(x, y, width, height); }
inline void ScissorArrayv(Uint first, Sizei count, const Int* v) { detail::ptrScissorArrayv(first, count, v); }
inline void ScissorIndexed(Uint index, Int left, Int bottom, Sizei width, Sizei height) { detail::ptrScissorIndexed(index, left, bottom, width, height); }
inline void ScissorIndexedv(Uint index, const Int* v) { detail::ptrScissorIndexedv(index, v); }
inline void ShaderBinary(Sizei count, const Uint* shaders, Enum binaryFormat, const void* binary, Sizei length) { detail::ptrShaderBinary(count, shaders, binaryFormat, binary, length); }
inline void ShaderSource(Uint shader, Sizei count, const Char** string, const Int* length) { detail::ptrShaderSource(shader, count, string, length); }
inline void ShaderStorageBlockBinding(Uint program, Uint storageBlockIndex, Uint storageBlockBinding) { detail::ptrShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding); }
inline void SpecializeShader(Uint shader, const Char* pEntryPoint, Uint numSpecializationConstants, const Uint* pConstantIndex, const Uint* pConstantValue) { detail::ptrSpecializeShader(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue); }
inline void StencilFunc(Enum func, Int ref, Uint mask) { detail::ptrStencilFunc(func, ref, mask); }
inline void StencilFuncSeparate(Enum face, Enum func, Int ref, Uint mask) { detail::ptrStencilFuncSeparate(face, func, ref, mask); }
inline void StencilMask(Uint mask) { detail::ptrStencilMask(mask); }
inline void StencilMaskSeparate(Enum face, Uint mask) { detail::ptrStencilMaskSeparate(face, mask); }
inline void StencilOp(Enum fail, Enum zfail, Enum zpass) { detail::ptrStencilOp(fail, zfail, zpass); }
inline void StencilOpSeparate(Enum face, Enum sfail, Enum dpfail, Enum dppass) { detail::ptrStencilOpSeparate(face, sfail, dpfail, dppass); }
inline void TexBuffer(Enum target, Enum internalformat, Uint buffer) { detail::ptrTexBuffer(target, internalformat, buffer); }
inline void TexBufferRange(Enum target, Enum internalformat, Uint buffer, Intptr offset, Sizeiptr size) { detail::ptrTexBufferRange(target, internalformat, buffer, offset, size); }
inline void TexImage1D(Enum target, Int level, Int internalformat, Sizei width, Int border, Enum format, Enum type, const void* pixels) { detail::ptrTexImage1D(target, level, internalformat, width, border, format, type, pixels); }
inline void TexImage2D(Enum target, Int level, Int internalformat, Sizei width, Sizei height, Int border, Enum format, Enum type, const void* pixels) { detail::ptrTexImage2D(target, level, internalformat, width, height, border, format, type, pixels); }
inline void TexImage2DMultisample(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height, Boolean fixedsamplelocations) { detail::ptrTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations); }
inline void TexImage3D(Enum target, Int level, Int internalformat, Sizei width, Sizei height, Sizei depth, Int border, Enum format, Enum type, const void* pixels) { detail::ptrTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels); }
inline void TexImage3DMultisample(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height, Sizei depth, Boolean fixedsamplelocations) { detail::ptrTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations); }
inline void TexParameterIiv(Enum target, Enum pname, const Int* params) { detail::ptrTexParameterIiv(target, pname, params); }
inline void TexParameterIuiv(Enum target, Enum pname, const Uint* params) { detail::ptrTexParameterIuiv(target, pname, params); }
inline void TexParameterf(Enum target, Enum pname, Float param) { detail::ptrTexParameterf(target, pname, param); }
inline void TexParameterfv(Enum target, Enum pname, const Float* params) { detail::ptrTexParameterfv(target, pname, params); }
inline void TexParameteri(Enum target, Enum pname, Int param) { detail::ptrTexParameteri(target, pname, param); }
inline void TexParameteriv(Enum target, Enum pname, const Int* params) { detail::ptrTexParameteriv(target, pname, params); }
inline void TexStorage1D(Enum target, Sizei levels, Enum internalformat, Sizei width) { detail::ptrTexStorage1D(target, levels, internalformat, width); }
inline void TexStorage2D(Enum target, Sizei levels, Enum internalformat, Sizei width, Sizei height) { detail::ptrTexStorage2D(target, levels, internalformat, width, height); }
inline void TexStorage2DMultisample(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height, Boolean fixedsamplelocations) { detail::ptrTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations); }
inline void TexStorage3D(Enum target, Sizei levels, Enum internalformat, Sizei width, Sizei height, Sizei depth) { detail::ptrTexStorage3D(target, levels, internalformat, width, height, depth); }
inline void TexStorage3DMultisample(Enum target, Sizei samples, Enum internalformat, Sizei width, Sizei height, Sizei depth, Boolean fixedsamplelocations) { detail::ptrTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations); }
inline void TexSubImage1D(Enum target, Int level, Int xoffset, Sizei width, Enum format, Enum type, const void* pixels) { detail::ptrTexSubImage1D(target, level, xoffset, width, format, type, pixels); }
inline void TexSubImage2D(Enum target, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, Enum format, Enum type, const void* pixels) { detail::ptrTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels); }
inline void TexSubImage3D(Enum target, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Enum type, const void* pixels) { detail::ptrTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
inline void TextureBarrier() { detail::ptrTextureBarrier(); }
inline void TextureBuffer(Uint texture, Enum internalformat, Uint buffer) { detail::ptrTextureBuffer(texture, internalformat, buffer); }
inline void TextureBufferRange(Uint texture, Enum internalformat, Uint buffer, Intptr offset, Sizeiptr size) { detail::ptrTextureBufferRange(texture, internalformat, buffer, offset, size); }
inline void TextureParameterIiv(Uint texture, Enum pname, const Int* params) { detail::ptrTextureParameterIiv(texture, pname, params); }
inline void TextureParameterIuiv(Uint texture, Enum pname, const Uint* params) { detail::ptrTextureParameterIuiv(texture, pname, params); }
inline void TextureParameterf(Uint texture, Enum pname, Float param) { detail::ptrTextureParameterf(texture, pname, param); }
inline void TextureParameterfv(Uint texture, Enum pname, const Float* param) { detail::ptrTextureParameterfv(texture, pname, param); }
inline void TextureParameteri(Uint texture, Enum pname, Int param) { detail::ptrTextureParameteri(texture, pname, param); }
inline void TextureParameteriv(Uint texture, Enum pname, const Int* param) { detail::ptrTextureParameteriv(texture, pname, param); }
inline void TextureStorage1D(Uint texture, Sizei levels, Enum internalformat, Sizei width) { detail::ptrTextureStorage1D(texture, levels, internalformat, width); }
inline void TextureStorage2D(Uint texture, Sizei levels, Enum internalformat, Sizei width, Sizei height) { detail::ptrTextureStorage2D(texture, levels, internalformat, width, height); }
inline void TextureStorage2DMultisample(Uint texture, Sizei samples, Enum internalformat, Sizei width, Sizei height, Boolean fixedsamplelocations) { detail::ptrTextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations); }
inline void TextureStorage3D(Uint texture, Sizei levels, Enum internalformat, Sizei width, Sizei height, Sizei depth) { detail::ptrTextureStorage3D(texture, levels, internalformat, width, height, depth); }
inline void TextureStorage3DMultisample(Uint texture, Sizei samples, Enum internalformat, Sizei width, Sizei height, Sizei depth, Boolean fixedsamplelocations) { detail::ptrTextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations); }
inline void TextureSubImage1D(Uint texture, Int level, Int xoffset, Sizei width, Enum format, Enum type, const void* pixels) { detail::ptrTextureSubImage1D(texture, level, xoffset, width, format, type, pixels); }
inline void TextureSubImage2D(Uint texture, Int level, Int xoffset, Int yoffset, Sizei width, Sizei height, Enum format, Enum type, const void* pixels) { detail::ptrTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels); }
inline void TextureSubImage3D(Uint texture, Int level, Int xoffset, Int yoffset, Int zoffset, Sizei width, Sizei height, Sizei depth, Enum format, Enum type, const void* pixels) { detail::ptrTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
inline void TextureView(Uint texture, Enum target, Uint origtexture, Enum internalformat, Uint minlevel, Uint numlevels, Uint minlayer, Uint numlayers) { detail::ptrTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers); }
inline void TransformFeedbackBufferBase(Uint xfb, Uint index, Uint buffer) { detail::ptrTransformFeedbackBufferBase(xfb, index, buffer); }
inline void TransformFeedbackBufferRange(Uint xfb, Uint index, Uint buffer, Intptr offset, Sizeiptr size) { detail::ptrTransformFeedbackBufferRange(xfb, index, buffer, offset, size); }
inline void TransformFeedbackVaryings(Uint program, Sizei count, const Char** varyings, Enum bufferMode) { detail::ptrTransformFeedbackVaryings(program, count, varyings, bufferMode); }
inline void Uniform1d(Int location, Double x) { detail::ptrUniform1d(location, x); }
inline void Uniform1dv(Int location, Sizei count, const Double* value) { detail::ptrUniform1dv(location, count, value); }
inline void Uniform1f(Int location, Float v0) { detail::ptrUniform1f(location, v0); }
inline void Uniform1fv(Int location, Sizei count, const Float* value) { detail::ptrUniform1fv(location, count, value); }
inline void Uniform1i(Int location, Int v0) { detail::ptrUniform1i(location, v0); }
inline void Uniform1iv(Int location, Sizei count, const Int* value) { detail::ptrUniform1iv(location, count, value); }
inline void Uniform1ui(Int location, Uint v0) { detail::ptrUniform1ui(location, v0); }
inline void Uniform1uiv(Int location, Sizei count, const Uint* value) { detail::ptrUniform1uiv(location, count, value); }
inline void Uniform2d(Int location, Double x, Double y) { detail::ptrUniform2d(location, x, y); }
inline void Uniform2dv(Int location, Sizei count, const Double* value) { detail::ptrUniform2dv(location, count, value); }
inline void Uniform2f(Int location, Float v0, Float v1) { detail::ptrUniform2f(location, v0, v1); }
inline void Uniform2fv(Int location, Sizei count, const Float* value) { detail::ptrUniform2fv(location, count, value); }
inline void Uniform2i(Int location, Int v0, Int v1) { detail::ptrUniform2i(location, v0, v1); }
inline void Uniform2iv(Int location, Sizei count, const Int* value) { detail::ptrUniform2iv(location, count, value); }
inline void Uniform2ui(Int location, Uint v0, Uint v1) { detail::ptrUniform2ui(location, v0, v1); }
inline void Uniform2uiv(Int location, Sizei count, const Uint* value) { detail::ptrUniform2uiv(location, count, value); }
inline void Uniform3d(Int location, Double x, Double y, Double z) { detail::ptrUniform3d(location, x, y, z); }
inline void Uniform3dv(Int location, Sizei count, const Double* value) { detail::ptrUniform3dv(location, count, value); }
inline void Uniform3f(Int location, Float v0, Float v1, Float v2) { detail::ptrUniform3f(location, v0, v1, v2); }
inline void Uniform3fv(Int location, Sizei count, const Float* value) { detail::ptrUniform3fv(location, count, value); }
inline void Uniform3i(Int location, Int v0, Int v1, Int v2) { detail::ptrUniform3i(location, v0, v1, v2); }
inline void Uniform3iv(Int location, Sizei count, const Int* value) { detail::ptrUniform3iv(location, count, value); }
inline void Uniform3ui(Int location, Uint v0, Uint v1, Uint v2) { detail::ptrUniform3ui(location, v0, v1, v2); }
inline void Uniform3uiv(Int location, Sizei count, const Uint* value) { detail::ptrUniform3uiv(location, count, value); }
inline void Uniform4d(Int location, Double x, Double y, Double z, Double w) { detail::ptrUniform4d(location, x, y, z, w); }
inline void Uniform4dv(Int location, Sizei count, const Double* value) { detail::ptrUniform4dv(location, count, value); }
inline void Uniform4f(Int location, Float v0, Float v1, Float v2, Float v3) { detail::ptrUniform4f(location, v0, v1, v2, v3); }
inline void Uniform4fv(Int location, Sizei count, const Float* value) { detail::ptrUniform4fv(location, count, value); }
inline void Uniform4i(Int location, Int v0, Int v1, Int v2, Int v3) { detail::ptrUniform4i(location, v0, v1, v2, v3); }
inline void Uniform4iv(Int location, Sizei count, const Int* value) { detail::ptrUniform4iv(location, count, value); }
inline void Uniform4ui(Int location, Uint v0, Uint v1, Uint v2, Uint v3) { detail::ptrUniform4ui(location, v0, v1, v2, v3); }
inline void Uniform4uiv(Int location, Sizei count, const Uint* value) { detail::ptrUniform4uiv(location, count, value); }
inline void UniformBlockBinding(Uint program, Uint uniformBlockIndex, Uint uniformBlockBinding) { detail::ptrUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding); }
inline void UniformMatrix2dv(Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrUniformMatrix2dv(location, count, transpose, value); }
inline void UniformMatrix2fv(Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrUniformMatrix2fv(location, count, transpose, value); }
inline void UniformMatrix2x3dv(Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrUniformMatrix2x3dv(location, count, transpose, value); }
inline void UniformMatrix2x3fv(Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrUniformMatrix2x3fv(location, count, transpose, value); }
inline void UniformMatrix2x4dv(Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrUniformMatrix2x4dv(location, count, transpose, value); }
inline void UniformMatrix2x4fv(Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrUniformMatrix2x4fv(location, count, transpose, value); }
inline void UniformMatrix3dv(Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrUniformMatrix3dv(location, count, transpose, value); }
inline void UniformMatrix3fv(Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrUniformMatrix3fv(location, count, transpose, value); }
inline void UniformMatrix3x2dv(Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrUniformMatrix3x2dv(location, count, transpose, value); }
inline void UniformMatrix3x2fv(Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrUniformMatrix3x2fv(location, count, transpose, value); }
inline void UniformMatrix3x4dv(Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrUniformMatrix3x4dv(location, count, transpose, value); }
inline void UniformMatrix3x4fv(Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrUniformMatrix3x4fv(location, count, transpose, value); }
inline void UniformMatrix4dv(Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrUniformMatrix4dv(location, count, transpose, value); }
inline void UniformMatrix4fv(Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrUniformMatrix4fv(location, count, transpose, value); }
inline void UniformMatrix4x2dv(Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrUniformMatrix4x2dv(location, count, transpose, value); }
inline void UniformMatrix4x2fv(Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrUniformMatrix4x2fv(location, count, transpose, value); }
inline void UniformMatrix4x3dv(Int location, Sizei count, Boolean transpose, const Double* value) { detail::ptrUniformMatrix4x3dv(location, count, transpose, value); }
inline void UniformMatrix4x3fv(Int location, Sizei count, Boolean transpose, const Float* value) { detail::ptrUniformMatrix4x3fv(location, count, transpose, value); }
inline void UniformSubroutinesuiv(Enum shadertype, Sizei count, const Uint* indices) { detail::ptrUniformSubroutinesuiv(shadertype, count, indices); }
inline Boolean UnmapBuffer(Enum target) { return detail::ptrUnmapBuffer(target); }
inline Boolean UnmapNamedBuffer(Uint buffer) { return detail::ptrUnmapNamedBuffer(buffer); }
inline void UseProgram(Uint program) { detail::ptrUseProgram(program); }
inline void UseProgramStages(Uint pipeline, Bitfield stages, Uint program) { detail::ptrUseProgramStages(pipeline, stages, program); }
inline void ValidateProgram(Uint program) { detail::ptrValidateProgram(program); }
inline void ValidateProgramPipeline(Uint pipeline) { detail::ptrValidateProgramPipeline(pipeline); }
inline void VertexArrayAttribBinding(Uint vaobj, Uint attribindex, Uint bindingindex) { detail::ptrVertexArrayAttribBinding(vaobj, attribindex, bindingindex); }
inline void VertexArrayAttribFormat(Uint vaobj, Uint attribindex, Int size, Enum type, Boolean normalized, Uint relativeoffset) { detail::ptrVertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset); }
inline void VertexArrayAttribIFormat(Uint vaobj, Uint attribindex, Int size, Enum type, Uint relativeoffset) { detail::ptrVertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset); }
inline void VertexArrayAttribLFormat(Uint vaobj, Uint attribindex, Int size, Enum type, Uint relativeoffset) { detail::ptrVertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset); }
inline void VertexArrayBindingDivisor(Uint vaobj, Uint bindingindex, Uint divisor) { detail::ptrVertexArrayBindingDivisor(vaobj, bindingindex, divisor); }
inline void VertexArrayElementBuffer(Uint vaobj, Uint buffer) { detail::ptrVertexArrayElementBuffer(vaobj, buffer); }
inline void VertexArrayVertexBuffer(Uint vaobj, Uint bindingindex, Uint buffer, Intptr offset, Sizei stride) { detail::ptrVertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride); }
inline void VertexArrayVertexBuffers(Uint vaobj, Uint first, Sizei count, const Uint* buffers, const Intptr* offsets, const Sizei* strides) { detail::ptrVertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides); }
inline void VertexAttrib1d(Uint index, Double x) { detail::ptrVertexAttrib1d(index, x); }
inline void VertexAttrib1dv(Uint index, const Double* v) { detail::ptrVertexAttrib1dv(index, v); }
inline void VertexAttrib1f(Uint index, Float x) { detail::ptrVertexAttrib1f(index, x); }
inline void VertexAttrib1fv(Uint index, const Float* v) { detail::ptrVertexAttrib1fv(index, v); }
inline void VertexAttrib1s(Uint index, Short x) { detail::ptrVertexAttrib1s(index, x); }
inline void VertexAttrib1sv(Uint index, const Short* v) { detail::ptrVertexAttrib1sv(index, v); }
inline void VertexAttrib2d(Uint index, Double x, Double y) { detail::ptrVertexAttrib2d(index, x, y); }
inline void VertexAttrib2dv(Uint index, const Double* v) { detail::ptrVertexAttrib2dv(index, v); }
inline void VertexAttrib2f(Uint index, Float x, Float y) { detail::ptrVertexAttrib2f(index, x, y); }
inline void VertexAttrib2fv(Uint index, const Float* v) { detail::ptrVertexAttrib2fv(index, v); }
inline void VertexAttrib2s(Uint index, Short x, Short y) { detail::ptrVertexAttrib2s(index, x, y); }
inline void VertexAttrib2sv(Uint index, const Short* v) { detail::ptrVertexAttrib2sv(index, v); }
inline void VertexAttrib3d(Uint index, Double x, Double y, Double z) { detail::ptrVertexAttrib3d(index, x, y, z); }
inline void VertexAttrib3dv(Uint index, const Double* v) { detail::ptrVertexAttrib3dv(index, v); }
inline void VertexAttrib3f(Uint index, Float x, Float y, Float z) { detail::ptrVertexAttrib3f(index, x, y, z); }
inline void VertexAttrib3fv(Uint index, const Float* v) { detail::ptrVertexAttrib3fv(index, v); }
inline void VertexAttrib3s(Uint index, Short x, Short y, Short z) { detail::ptrVertexAttrib3s(index, x, y, z); }
inline void VertexAttrib3sv(Uint index, const Short* v) { detail::ptrVertexAttrib3sv(index, v); }
inline void VertexAttrib4Nbv(Uint index, const Byte* v) { detail::ptrVertexAttrib4Nbv(index, v); }
inline void VertexAttrib4Niv(Uint index, const Int* v) { detail::ptrVertexAttrib4Niv(index, v); }
inline void VertexAttrib4Nsv(Uint index, const Short* v) { detail::ptrVertexAttrib4Nsv(index, v); }
inline void VertexAttrib4Nub(Uint index, Ubyte x, Ubyte y, Ubyte z, Ubyte w) { detail::ptrVertexAttrib4Nub(index, x, y, z, w); }
inline void VertexAttrib4Nubv(Uint index, const Ubyte* v) { detail::ptrVertexAttrib4Nubv(index, v); }
inline void VertexAttrib4Nuiv(Uint index, const Uint* v) { detail::ptrVertexAttrib4Nuiv(index, v); }
inline void VertexAttrib4Nusv(Uint index, const Ushort* v) { detail::ptrVertexAttrib4Nusv(index, v); }
inline void VertexAttrib4bv(Uint index, const Byte* v) { detail::ptrVertexAttrib4bv(index, v); }
inline void VertexAttrib4d(Uint index, Double x, Double y, Double z, Double w) { detail::ptrVertexAttrib4d(index, x, y, z, w); }
inline void VertexAttrib4dv(Uint index, const Double* v) { detail::ptrVertexAttrib4dv(index, v); }
inline void VertexAttrib4f(Uint index, Float x, Float y, Float z, Float w) { detail::ptrVertexAttrib4f(index, x, y, z, w); }
inline void VertexAttrib4fv(Uint index, const Float* v) { detail::ptrVertexAttrib4fv(index, v); }
inline void VertexAttrib4iv(Uint index, const Int* v) { detail::ptrVertexAttrib4iv(index, v); }
inline void VertexAttrib4s(Uint index, Short x, Short y, Short z, Short w) { detail::ptrVertexAttrib4s(index, x, y, z, w); }
inline void VertexAttrib4sv(Uint index, const Short* v) { detail::ptrVertexAttrib4sv(index, v); }
inline void VertexAttrib4ubv(Uint index, const Ubyte* v) { detail::ptrVertexAttrib4ubv(index, v); }
inline void VertexAttrib4uiv(Uint index, const Uint* v) { detail::ptrVertexAttrib4uiv(index, v); }
inline void VertexAttrib4usv(Uint index, const Ushort* v) { detail::ptrVertexAttrib4usv(index, v); }
inline void VertexAttribBinding(Uint attribindex, Uint bindingindex) { detail::ptrVertexAttribBinding(attribindex, bindingindex); }
inline void VertexAttribDivisor(Uint index, Uint divisor) { detail::ptrVertexAttribDivisor(index, divisor); }
inline void VertexAttribFormat(Uint attribindex, Int size, Enum type, Boolean normalized, Uint relativeoffset) { detail::ptrVertexAttribFormat(attribindex, size, type, normalized, relativeoffset); }
inline void VertexAttribI1i(Uint index, Int x) { detail::ptrVertexAttribI1i(index, x); }
inline void VertexAttribI1iv(Uint index, const Int* v) { detail::ptrVertexAttribI1iv(index, v); }
inline void VertexAttribI1ui(Uint index, Uint x) { detail::ptrVertexAttribI1ui(index, x); }
inline void VertexAttribI1uiv(Uint index, const Uint* v) { detail::ptrVertexAttribI1uiv(index, v); }
inline void VertexAttribI2i(Uint index, Int x, Int y) { detail::ptrVertexAttribI2i(index, x, y); }
inline void VertexAttribI2iv(Uint index, const Int* v) { detail::ptrVertexAttribI2iv(index, v); }
inline void VertexAttribI2ui(Uint index, Uint x, Uint y) { detail::ptrVertexAttribI2ui(index, x, y); }
inline void VertexAttribI2uiv(Uint index, const Uint* v) { detail::ptrVertexAttribI2uiv(index, v); }
inline void VertexAttribI3i(Uint index, Int x, Int y, Int z) { detail::ptrVertexAttribI3i(index, x, y, z); }
inline void VertexAttribI3iv(Uint index, const Int* v) { detail::ptrVertexAttribI3iv(index, v); }
inline void VertexAttribI3ui(Uint index, Uint x, Uint y, Uint z) { detail::ptrVertexAttribI3ui(index, x, y, z); }
inline void VertexAttribI3uiv(Uint index, const Uint* v) { detail::ptrVertexAttribI3uiv(index, v); }
inline void VertexAttribI4bv(Uint index, const Byte* v) { detail::ptrVertexAttribI4bv(index, v); }
inline void VertexAttribI4i(Uint index, Int x, Int y, Int z, Int w) { detail::ptrVertexAttribI4i(index, x, y, z, w); }
inline void VertexAttribI4iv(Uint index, const Int* v) { detail::ptrVertexAttribI4iv(index, v); }
inline void VertexAttribI4sv(Uint index, const Short* v) { detail::ptrVertexAttribI4sv(index, v); }
inline void VertexAttribI4ubv(Uint index, const Ubyte* v) { detail::ptrVertexAttribI4ubv(index, v); }
inline void VertexAttribI4ui(Uint index, Uint x, Uint y, Uint z, Uint w) { detail::ptrVertexAttribI4ui(index, x, y, z, w); }
inline void VertexAttribI4uiv(Uint index, const Uint* v) { detail::ptrVertexAttribI4uiv(index, v); }
inline void VertexAttribI4usv(Uint index, const Ushort* v) { detail::ptrVertexAttribI4usv(index, v); }
inline void VertexAttribIFormat(Uint attribindex, Int size, Enum type, Uint relativeoffset) { detail::ptrVertexAttribIFormat(attribindex, size, type, relativeoffset); }
inline void VertexAttribIPointer(Uint index, Int size, Enum type, Sizei stride, const void* pointer) { detail::ptrVertexAttribIPointer(index, size, type, stride, pointer); }
inline void VertexAttribL1d(Uint index, Double x) { detail::ptrVertexAttribL1d(index, x); }
inline void VertexAttribL1dv(Uint index, const Double* v) { detail::ptrVertexAttribL1dv(index, v); }
inline void VertexAttribL2d(Uint index, Double x, Double y) { detail::ptrVertexAttribL2d(index, x, y); }
inline void VertexAttribL2dv(Uint index, const Double* v) { detail::ptrVertexAttribL2dv(index, v); }
inline void VertexAttribL3d(Uint index, Double x, Double y, Double z) { detail::ptrVertexAttribL3d(index, x, y, z); }
inline void VertexAttribL3dv(Uint index, const Double* v) { detail::ptrVertexAttribL3dv(index, v); }
inline void VertexAttribL4d(Uint index, Double x, Double y, Double z, Double w) { detail::ptrVertexAttribL4d(index, x, y, z, w); }
inline void VertexAttribL4dv(Uint index, const Double* v) { detail::ptrVertexAttribL4dv(index, v); }
inline void VertexAttribLFormat(Uint attribindex, Int size, Enum type, Uint relativeoffset) { detail::ptrVertexAttribLFormat(attribindex, size, type, relativeoffset); }
inline void VertexAttribLPointer(Uint index, Int size, Enum type, Sizei stride, const void* pointer) { detail::ptrVertexAttribLPointer(index, size, type, stride, pointer); }
inline void VertexAttribP1ui(Uint index, Enum type, Boolean normalized, Uint value) { detail::ptrVertexAttribP1ui(index, type, normalized, value); }
inline void VertexAttribP1uiv(Uint index, Enum type, Boolean normalized, const Uint* value) { detail::ptrVertexAttribP1uiv(index, type, normalized, value); }
inline void VertexAttribP2ui(Uint index, Enum type, Boolean normalized, Uint value) { detail::ptrVertexAttribP2ui(index, type, normalized, value); }
inline void VertexAttribP2uiv(Uint index, Enum type, Boolean normalized, const Uint* value) { detail::ptrVertexAttribP2uiv(index, type, normalized, value); }
inline void VertexAttribP3ui(Uint index, Enum type, Boolean normalized, Uint value) { detail::ptrVertexAttribP3ui(index, type, normalized, value); }
inline void VertexAttribP3uiv(Uint index, Enum type, Boolean normalized, const Uint* value) { detail::ptrVertexAttribP3uiv(index, type, normalized, value); }
inline void VertexAttribP4ui(Uint index, Enum type, Boolean normalized, Uint value) { detail::ptrVertexAttribP4ui(index, type, normalized, value); }
inline void VertexAttribP4uiv(Uint index, Enum type, Boolean normalized, const Uint* value) { detail::ptrVertexAttribP4uiv(index, type, normalized, value); }
inline void VertexAttribPointer(Uint index, Int size, Enum type, Boolean normalized, Sizei stride, const void* pointer) { detail::ptrVertexAttribPointer(index, size, type, normalized, stride, pointer); }
inline void VertexBindingDivisor(Uint bindingindex, Uint divisor) { detail::ptrVertexBindingDivisor(bindingindex, divisor); }
inline void Viewport(Int x, Int y, Sizei width, Sizei height) { detail::ptrViewport(x, y, width, height); }
inline void ViewportArrayv(Uint first, Sizei count, const Float* v) { detail::ptrViewportArrayv(first, count, v); }
inline void ViewportIndexedf(Uint index, Float x, Float y, Float w, Float h) { detail::ptrViewportIndexedf(index, x, y, w, h); }
inline void ViewportIndexedfv(Uint index, const Float* v) { detail::ptrViewportIndexedfv(index, v); }
inline void WaitSync(Sync sync, Bitfield flags, Uint64 timeout) { detail::ptrWaitSync(sync, flags, timeout); }

} // namespace gl


export namespace gl {

using LoadProc = void* (*)(const char*);

inline int load(LoadProc loadProc) {
    int loaded = 0;
    detail::ptrActiveShaderProgram = reinterpret_cast<detail::PFNACTIVESHADERPROGRAMPROC>(loadProc("glActiveShaderProgram"));
    if (detail::ptrActiveShaderProgram) ++loaded;
    detail::ptrActiveTexture = reinterpret_cast<detail::PFNACTIVETEXTUREPROC>(loadProc("glActiveTexture"));
    if (detail::ptrActiveTexture) ++loaded;
    detail::ptrAttachShader = reinterpret_cast<detail::PFNATTACHSHADERPROC>(loadProc("glAttachShader"));
    if (detail::ptrAttachShader) ++loaded;
    detail::ptrBeginConditionalRender = reinterpret_cast<detail::PFNBEGINCONDITIONALRENDERPROC>(loadProc("glBeginConditionalRender"));
    if (detail::ptrBeginConditionalRender) ++loaded;
    detail::ptrBeginQuery = reinterpret_cast<detail::PFNBEGINQUERYPROC>(loadProc("glBeginQuery"));
    if (detail::ptrBeginQuery) ++loaded;
    detail::ptrBeginQueryIndexed = reinterpret_cast<detail::PFNBEGINQUERYINDEXEDPROC>(loadProc("glBeginQueryIndexed"));
    if (detail::ptrBeginQueryIndexed) ++loaded;
    detail::ptrBeginTransformFeedback = reinterpret_cast<detail::PFNBEGINTRANSFORMFEEDBACKPROC>(loadProc("glBeginTransformFeedback"));
    if (detail::ptrBeginTransformFeedback) ++loaded;
    detail::ptrBindAttribLocation = reinterpret_cast<detail::PFNBINDATTRIBLOCATIONPROC>(loadProc("glBindAttribLocation"));
    if (detail::ptrBindAttribLocation) ++loaded;
    detail::ptrBindBuffer = reinterpret_cast<detail::PFNBINDBUFFERPROC>(loadProc("glBindBuffer"));
    if (detail::ptrBindBuffer) ++loaded;
    detail::ptrBindBufferBase = reinterpret_cast<detail::PFNBINDBUFFERBASEPROC>(loadProc("glBindBufferBase"));
    if (detail::ptrBindBufferBase) ++loaded;
    detail::ptrBindBufferRange = reinterpret_cast<detail::PFNBINDBUFFERRANGEPROC>(loadProc("glBindBufferRange"));
    if (detail::ptrBindBufferRange) ++loaded;
    detail::ptrBindBuffersBase = reinterpret_cast<detail::PFNBINDBUFFERSBASEPROC>(loadProc("glBindBuffersBase"));
    if (detail::ptrBindBuffersBase) ++loaded;
    detail::ptrBindBuffersRange = reinterpret_cast<detail::PFNBINDBUFFERSRANGEPROC>(loadProc("glBindBuffersRange"));
    if (detail::ptrBindBuffersRange) ++loaded;
    detail::ptrBindFragDataLocation = reinterpret_cast<detail::PFNBINDFRAGDATALOCATIONPROC>(loadProc("glBindFragDataLocation"));
    if (detail::ptrBindFragDataLocation) ++loaded;
    detail::ptrBindFragDataLocationIndexed = reinterpret_cast<detail::PFNBINDFRAGDATALOCATIONINDEXEDPROC>(loadProc("glBindFragDataLocationIndexed"));
    if (detail::ptrBindFragDataLocationIndexed) ++loaded;
    detail::ptrBindFramebuffer = reinterpret_cast<detail::PFNBINDFRAMEBUFFERPROC>(loadProc("glBindFramebuffer"));
    if (detail::ptrBindFramebuffer) ++loaded;
    detail::ptrBindImageTexture = reinterpret_cast<detail::PFNBINDIMAGETEXTUREPROC>(loadProc("glBindImageTexture"));
    if (detail::ptrBindImageTexture) ++loaded;
    detail::ptrBindImageTextures = reinterpret_cast<detail::PFNBINDIMAGETEXTURESPROC>(loadProc("glBindImageTextures"));
    if (detail::ptrBindImageTextures) ++loaded;
    detail::ptrBindProgramPipeline = reinterpret_cast<detail::PFNBINDPROGRAMPIPELINEPROC>(loadProc("glBindProgramPipeline"));
    if (detail::ptrBindProgramPipeline) ++loaded;
    detail::ptrBindRenderbuffer = reinterpret_cast<detail::PFNBINDRENDERBUFFERPROC>(loadProc("glBindRenderbuffer"));
    if (detail::ptrBindRenderbuffer) ++loaded;
    detail::ptrBindSampler = reinterpret_cast<detail::PFNBINDSAMPLERPROC>(loadProc("glBindSampler"));
    if (detail::ptrBindSampler) ++loaded;
    detail::ptrBindSamplers = reinterpret_cast<detail::PFNBINDSAMPLERSPROC>(loadProc("glBindSamplers"));
    if (detail::ptrBindSamplers) ++loaded;
    detail::ptrBindTexture = reinterpret_cast<detail::PFNBINDTEXTUREPROC>(loadProc("glBindTexture"));
    if (detail::ptrBindTexture) ++loaded;
    detail::ptrBindTextureUnit = reinterpret_cast<detail::PFNBINDTEXTUREUNITPROC>(loadProc("glBindTextureUnit"));
    if (detail::ptrBindTextureUnit) ++loaded;
    detail::ptrBindTextures = reinterpret_cast<detail::PFNBINDTEXTURESPROC>(loadProc("glBindTextures"));
    if (detail::ptrBindTextures) ++loaded;
    detail::ptrBindTransformFeedback = reinterpret_cast<detail::PFNBINDTRANSFORMFEEDBACKPROC>(loadProc("glBindTransformFeedback"));
    if (detail::ptrBindTransformFeedback) ++loaded;
    detail::ptrBindVertexArray = reinterpret_cast<detail::PFNBINDVERTEXARRAYPROC>(loadProc("glBindVertexArray"));
    if (detail::ptrBindVertexArray) ++loaded;
    detail::ptrBindVertexBuffer = reinterpret_cast<detail::PFNBINDVERTEXBUFFERPROC>(loadProc("glBindVertexBuffer"));
    if (detail::ptrBindVertexBuffer) ++loaded;
    detail::ptrBindVertexBuffers = reinterpret_cast<detail::PFNBINDVERTEXBUFFERSPROC>(loadProc("glBindVertexBuffers"));
    if (detail::ptrBindVertexBuffers) ++loaded;
    detail::ptrBlendColor = reinterpret_cast<detail::PFNBLENDCOLORPROC>(loadProc("glBlendColor"));
    if (detail::ptrBlendColor) ++loaded;
    detail::ptrBlendEquation = reinterpret_cast<detail::PFNBLENDEQUATIONPROC>(loadProc("glBlendEquation"));
    if (detail::ptrBlendEquation) ++loaded;
    detail::ptrBlendEquationSeparate = reinterpret_cast<detail::PFNBLENDEQUATIONSEPARATEPROC>(loadProc("glBlendEquationSeparate"));
    if (detail::ptrBlendEquationSeparate) ++loaded;
    detail::ptrBlendEquationSeparatei = reinterpret_cast<detail::PFNBLENDEQUATIONSEPARATEIPROC>(loadProc("glBlendEquationSeparatei"));
    if (detail::ptrBlendEquationSeparatei) ++loaded;
    detail::ptrBlendEquationi = reinterpret_cast<detail::PFNBLENDEQUATIONIPROC>(loadProc("glBlendEquationi"));
    if (detail::ptrBlendEquationi) ++loaded;
    detail::ptrBlendFunc = reinterpret_cast<detail::PFNBLENDFUNCPROC>(loadProc("glBlendFunc"));
    if (detail::ptrBlendFunc) ++loaded;
    detail::ptrBlendFuncSeparate = reinterpret_cast<detail::PFNBLENDFUNCSEPARATEPROC>(loadProc("glBlendFuncSeparate"));
    if (detail::ptrBlendFuncSeparate) ++loaded;
    detail::ptrBlendFuncSeparatei = reinterpret_cast<detail::PFNBLENDFUNCSEPARATEIPROC>(loadProc("glBlendFuncSeparatei"));
    if (detail::ptrBlendFuncSeparatei) ++loaded;
    detail::ptrBlendFunci = reinterpret_cast<detail::PFNBLENDFUNCIPROC>(loadProc("glBlendFunci"));
    if (detail::ptrBlendFunci) ++loaded;
    detail::ptrBlitFramebuffer = reinterpret_cast<detail::PFNBLITFRAMEBUFFERPROC>(loadProc("glBlitFramebuffer"));
    if (detail::ptrBlitFramebuffer) ++loaded;
    detail::ptrBlitNamedFramebuffer = reinterpret_cast<detail::PFNBLITNAMEDFRAMEBUFFERPROC>(loadProc("glBlitNamedFramebuffer"));
    if (detail::ptrBlitNamedFramebuffer) ++loaded;
    detail::ptrBufferData = reinterpret_cast<detail::PFNBUFFERDATAPROC>(loadProc("glBufferData"));
    if (detail::ptrBufferData) ++loaded;
    detail::ptrBufferStorage = reinterpret_cast<detail::PFNBUFFERSTORAGEPROC>(loadProc("glBufferStorage"));
    if (detail::ptrBufferStorage) ++loaded;
    detail::ptrBufferSubData = reinterpret_cast<detail::PFNBUFFERSUBDATAPROC>(loadProc("glBufferSubData"));
    if (detail::ptrBufferSubData) ++loaded;
    detail::ptrCheckFramebufferStatus = reinterpret_cast<detail::PFNCHECKFRAMEBUFFERSTATUSPROC>(loadProc("glCheckFramebufferStatus"));
    if (detail::ptrCheckFramebufferStatus) ++loaded;
    detail::ptrCheckNamedFramebufferStatus = reinterpret_cast<detail::PFNCHECKNAMEDFRAMEBUFFERSTATUSPROC>(loadProc("glCheckNamedFramebufferStatus"));
    if (detail::ptrCheckNamedFramebufferStatus) ++loaded;
    detail::ptrClampColor = reinterpret_cast<detail::PFNCLAMPCOLORPROC>(loadProc("glClampColor"));
    if (detail::ptrClampColor) ++loaded;
    detail::ptrClear = reinterpret_cast<detail::PFNCLEARPROC>(loadProc("glClear"));
    if (detail::ptrClear) ++loaded;
    detail::ptrClearBufferData = reinterpret_cast<detail::PFNCLEARBUFFERDATAPROC>(loadProc("glClearBufferData"));
    if (detail::ptrClearBufferData) ++loaded;
    detail::ptrClearBufferSubData = reinterpret_cast<detail::PFNCLEARBUFFERSUBDATAPROC>(loadProc("glClearBufferSubData"));
    if (detail::ptrClearBufferSubData) ++loaded;
    detail::ptrClearBufferfi = reinterpret_cast<detail::PFNCLEARBUFFERFIPROC>(loadProc("glClearBufferfi"));
    if (detail::ptrClearBufferfi) ++loaded;
    detail::ptrClearBufferfv = reinterpret_cast<detail::PFNCLEARBUFFERFVPROC>(loadProc("glClearBufferfv"));
    if (detail::ptrClearBufferfv) ++loaded;
    detail::ptrClearBufferiv = reinterpret_cast<detail::PFNCLEARBUFFERIVPROC>(loadProc("glClearBufferiv"));
    if (detail::ptrClearBufferiv) ++loaded;
    detail::ptrClearBufferuiv = reinterpret_cast<detail::PFNCLEARBUFFERUIVPROC>(loadProc("glClearBufferuiv"));
    if (detail::ptrClearBufferuiv) ++loaded;
    detail::ptrClearColor = reinterpret_cast<detail::PFNCLEARCOLORPROC>(loadProc("glClearColor"));
    if (detail::ptrClearColor) ++loaded;
    detail::ptrClearDepth = reinterpret_cast<detail::PFNCLEARDEPTHPROC>(loadProc("glClearDepth"));
    if (detail::ptrClearDepth) ++loaded;
    detail::ptrClearDepthf = reinterpret_cast<detail::PFNCLEARDEPTHFPROC>(loadProc("glClearDepthf"));
    if (detail::ptrClearDepthf) ++loaded;
    detail::ptrClearNamedBufferData = reinterpret_cast<detail::PFNCLEARNAMEDBUFFERDATAPROC>(loadProc("glClearNamedBufferData"));
    if (detail::ptrClearNamedBufferData) ++loaded;
    detail::ptrClearNamedBufferSubData = reinterpret_cast<detail::PFNCLEARNAMEDBUFFERSUBDATAPROC>(loadProc("glClearNamedBufferSubData"));
    if (detail::ptrClearNamedBufferSubData) ++loaded;
    detail::ptrClearNamedFramebufferfi = reinterpret_cast<detail::PFNCLEARNAMEDFRAMEBUFFERFIPROC>(loadProc("glClearNamedFramebufferfi"));
    if (detail::ptrClearNamedFramebufferfi) ++loaded;
    detail::ptrClearNamedFramebufferfv = reinterpret_cast<detail::PFNCLEARNAMEDFRAMEBUFFERFVPROC>(loadProc("glClearNamedFramebufferfv"));
    if (detail::ptrClearNamedFramebufferfv) ++loaded;
    detail::ptrClearNamedFramebufferiv = reinterpret_cast<detail::PFNCLEARNAMEDFRAMEBUFFERIVPROC>(loadProc("glClearNamedFramebufferiv"));
    if (detail::ptrClearNamedFramebufferiv) ++loaded;
    detail::ptrClearNamedFramebufferuiv = reinterpret_cast<detail::PFNCLEARNAMEDFRAMEBUFFERUIVPROC>(loadProc("glClearNamedFramebufferuiv"));
    if (detail::ptrClearNamedFramebufferuiv) ++loaded;
    detail::ptrClearStencil = reinterpret_cast<detail::PFNCLEARSTENCILPROC>(loadProc("glClearStencil"));
    if (detail::ptrClearStencil) ++loaded;
    detail::ptrClearTexImage = reinterpret_cast<detail::PFNCLEARTEXIMAGEPROC>(loadProc("glClearTexImage"));
    if (detail::ptrClearTexImage) ++loaded;
    detail::ptrClearTexSubImage = reinterpret_cast<detail::PFNCLEARTEXSUBIMAGEPROC>(loadProc("glClearTexSubImage"));
    if (detail::ptrClearTexSubImage) ++loaded;
    detail::ptrClientWaitSync = reinterpret_cast<detail::PFNCLIENTWAITSYNCPROC>(loadProc("glClientWaitSync"));
    if (detail::ptrClientWaitSync) ++loaded;
    detail::ptrClipControl = reinterpret_cast<detail::PFNCLIPCONTROLPROC>(loadProc("glClipControl"));
    if (detail::ptrClipControl) ++loaded;
    detail::ptrColorMask = reinterpret_cast<detail::PFNCOLORMASKPROC>(loadProc("glColorMask"));
    if (detail::ptrColorMask) ++loaded;
    detail::ptrColorMaski = reinterpret_cast<detail::PFNCOLORMASKIPROC>(loadProc("glColorMaski"));
    if (detail::ptrColorMaski) ++loaded;
    detail::ptrCompileShader = reinterpret_cast<detail::PFNCOMPILESHADERPROC>(loadProc("glCompileShader"));
    if (detail::ptrCompileShader) ++loaded;
    detail::ptrCompressedTexImage1D = reinterpret_cast<detail::PFNCOMPRESSEDTEXIMAGE1DPROC>(loadProc("glCompressedTexImage1D"));
    if (detail::ptrCompressedTexImage1D) ++loaded;
    detail::ptrCompressedTexImage2D = reinterpret_cast<detail::PFNCOMPRESSEDTEXIMAGE2DPROC>(loadProc("glCompressedTexImage2D"));
    if (detail::ptrCompressedTexImage2D) ++loaded;
    detail::ptrCompressedTexImage3D = reinterpret_cast<detail::PFNCOMPRESSEDTEXIMAGE3DPROC>(loadProc("glCompressedTexImage3D"));
    if (detail::ptrCompressedTexImage3D) ++loaded;
    detail::ptrCompressedTexSubImage1D = reinterpret_cast<detail::PFNCOMPRESSEDTEXSUBIMAGE1DPROC>(loadProc("glCompressedTexSubImage1D"));
    if (detail::ptrCompressedTexSubImage1D) ++loaded;
    detail::ptrCompressedTexSubImage2D = reinterpret_cast<detail::PFNCOMPRESSEDTEXSUBIMAGE2DPROC>(loadProc("glCompressedTexSubImage2D"));
    if (detail::ptrCompressedTexSubImage2D) ++loaded;
    detail::ptrCompressedTexSubImage3D = reinterpret_cast<detail::PFNCOMPRESSEDTEXSUBIMAGE3DPROC>(loadProc("glCompressedTexSubImage3D"));
    if (detail::ptrCompressedTexSubImage3D) ++loaded;
    detail::ptrCompressedTextureSubImage1D = reinterpret_cast<detail::PFNCOMPRESSEDTEXTURESUBIMAGE1DPROC>(loadProc("glCompressedTextureSubImage1D"));
    if (detail::ptrCompressedTextureSubImage1D) ++loaded;
    detail::ptrCompressedTextureSubImage2D = reinterpret_cast<detail::PFNCOMPRESSEDTEXTURESUBIMAGE2DPROC>(loadProc("glCompressedTextureSubImage2D"));
    if (detail::ptrCompressedTextureSubImage2D) ++loaded;
    detail::ptrCompressedTextureSubImage3D = reinterpret_cast<detail::PFNCOMPRESSEDTEXTURESUBIMAGE3DPROC>(loadProc("glCompressedTextureSubImage3D"));
    if (detail::ptrCompressedTextureSubImage3D) ++loaded;
    detail::ptrCopyBufferSubData = reinterpret_cast<detail::PFNCOPYBUFFERSUBDATAPROC>(loadProc("glCopyBufferSubData"));
    if (detail::ptrCopyBufferSubData) ++loaded;
    detail::ptrCopyImageSubData = reinterpret_cast<detail::PFNCOPYIMAGESUBDATAPROC>(loadProc("glCopyImageSubData"));
    if (detail::ptrCopyImageSubData) ++loaded;
    detail::ptrCopyNamedBufferSubData = reinterpret_cast<detail::PFNCOPYNAMEDBUFFERSUBDATAPROC>(loadProc("glCopyNamedBufferSubData"));
    if (detail::ptrCopyNamedBufferSubData) ++loaded;
    detail::ptrCopyTexImage1D = reinterpret_cast<detail::PFNCOPYTEXIMAGE1DPROC>(loadProc("glCopyTexImage1D"));
    if (detail::ptrCopyTexImage1D) ++loaded;
    detail::ptrCopyTexImage2D = reinterpret_cast<detail::PFNCOPYTEXIMAGE2DPROC>(loadProc("glCopyTexImage2D"));
    if (detail::ptrCopyTexImage2D) ++loaded;
    detail::ptrCopyTexSubImage1D = reinterpret_cast<detail::PFNCOPYTEXSUBIMAGE1DPROC>(loadProc("glCopyTexSubImage1D"));
    if (detail::ptrCopyTexSubImage1D) ++loaded;
    detail::ptrCopyTexSubImage2D = reinterpret_cast<detail::PFNCOPYTEXSUBIMAGE2DPROC>(loadProc("glCopyTexSubImage2D"));
    if (detail::ptrCopyTexSubImage2D) ++loaded;
    detail::ptrCopyTexSubImage3D = reinterpret_cast<detail::PFNCOPYTEXSUBIMAGE3DPROC>(loadProc("glCopyTexSubImage3D"));
    if (detail::ptrCopyTexSubImage3D) ++loaded;
    detail::ptrCopyTextureSubImage1D = reinterpret_cast<detail::PFNCOPYTEXTURESUBIMAGE1DPROC>(loadProc("glCopyTextureSubImage1D"));
    if (detail::ptrCopyTextureSubImage1D) ++loaded;
    detail::ptrCopyTextureSubImage2D = reinterpret_cast<detail::PFNCOPYTEXTURESUBIMAGE2DPROC>(loadProc("glCopyTextureSubImage2D"));
    if (detail::ptrCopyTextureSubImage2D) ++loaded;
    detail::ptrCopyTextureSubImage3D = reinterpret_cast<detail::PFNCOPYTEXTURESUBIMAGE3DPROC>(loadProc("glCopyTextureSubImage3D"));
    if (detail::ptrCopyTextureSubImage3D) ++loaded;
    detail::ptrCreateBuffers = reinterpret_cast<detail::PFNCREATEBUFFERSPROC>(loadProc("glCreateBuffers"));
    if (detail::ptrCreateBuffers) ++loaded;
    detail::ptrCreateFramebuffers = reinterpret_cast<detail::PFNCREATEFRAMEBUFFERSPROC>(loadProc("glCreateFramebuffers"));
    if (detail::ptrCreateFramebuffers) ++loaded;
    detail::ptrCreateProgram = reinterpret_cast<detail::PFNCREATEPROGRAMPROC>(loadProc("glCreateProgram"));
    if (detail::ptrCreateProgram) ++loaded;
    detail::ptrCreateProgramPipelines = reinterpret_cast<detail::PFNCREATEPROGRAMPIPELINESPROC>(loadProc("glCreateProgramPipelines"));
    if (detail::ptrCreateProgramPipelines) ++loaded;
    detail::ptrCreateQueries = reinterpret_cast<detail::PFNCREATEQUERIESPROC>(loadProc("glCreateQueries"));
    if (detail::ptrCreateQueries) ++loaded;
    detail::ptrCreateRenderbuffers = reinterpret_cast<detail::PFNCREATERENDERBUFFERSPROC>(loadProc("glCreateRenderbuffers"));
    if (detail::ptrCreateRenderbuffers) ++loaded;
    detail::ptrCreateSamplers = reinterpret_cast<detail::PFNCREATESAMPLERSPROC>(loadProc("glCreateSamplers"));
    if (detail::ptrCreateSamplers) ++loaded;
    detail::ptrCreateShader = reinterpret_cast<detail::PFNCREATESHADERPROC>(loadProc("glCreateShader"));
    if (detail::ptrCreateShader) ++loaded;
    detail::ptrCreateShaderProgramv = reinterpret_cast<detail::PFNCREATESHADERPROGRAMVPROC>(loadProc("glCreateShaderProgramv"));
    if (detail::ptrCreateShaderProgramv) ++loaded;
    detail::ptrCreateTextures = reinterpret_cast<detail::PFNCREATETEXTURESPROC>(loadProc("glCreateTextures"));
    if (detail::ptrCreateTextures) ++loaded;
    detail::ptrCreateTransformFeedbacks = reinterpret_cast<detail::PFNCREATETRANSFORMFEEDBACKSPROC>(loadProc("glCreateTransformFeedbacks"));
    if (detail::ptrCreateTransformFeedbacks) ++loaded;
    detail::ptrCreateVertexArrays = reinterpret_cast<detail::PFNCREATEVERTEXARRAYSPROC>(loadProc("glCreateVertexArrays"));
    if (detail::ptrCreateVertexArrays) ++loaded;
    detail::ptrCullFace = reinterpret_cast<detail::PFNCULLFACEPROC>(loadProc("glCullFace"));
    if (detail::ptrCullFace) ++loaded;
    detail::ptrDebugMessageCallback = reinterpret_cast<detail::PFNDEBUGMESSAGECALLBACKPROC>(loadProc("glDebugMessageCallback"));
    if (detail::ptrDebugMessageCallback) ++loaded;
    detail::ptrDebugMessageControl = reinterpret_cast<detail::PFNDEBUGMESSAGECONTROLPROC>(loadProc("glDebugMessageControl"));
    if (detail::ptrDebugMessageControl) ++loaded;
    detail::ptrDebugMessageInsert = reinterpret_cast<detail::PFNDEBUGMESSAGEINSERTPROC>(loadProc("glDebugMessageInsert"));
    if (detail::ptrDebugMessageInsert) ++loaded;
    detail::ptrDeleteBuffers = reinterpret_cast<detail::PFNDELETEBUFFERSPROC>(loadProc("glDeleteBuffers"));
    if (detail::ptrDeleteBuffers) ++loaded;
    detail::ptrDeleteFramebuffers = reinterpret_cast<detail::PFNDELETEFRAMEBUFFERSPROC>(loadProc("glDeleteFramebuffers"));
    if (detail::ptrDeleteFramebuffers) ++loaded;
    detail::ptrDeleteProgram = reinterpret_cast<detail::PFNDELETEPROGRAMPROC>(loadProc("glDeleteProgram"));
    if (detail::ptrDeleteProgram) ++loaded;
    detail::ptrDeleteProgramPipelines = reinterpret_cast<detail::PFNDELETEPROGRAMPIPELINESPROC>(loadProc("glDeleteProgramPipelines"));
    if (detail::ptrDeleteProgramPipelines) ++loaded;
    detail::ptrDeleteQueries = reinterpret_cast<detail::PFNDELETEQUERIESPROC>(loadProc("glDeleteQueries"));
    if (detail::ptrDeleteQueries) ++loaded;
    detail::ptrDeleteRenderbuffers = reinterpret_cast<detail::PFNDELETERENDERBUFFERSPROC>(loadProc("glDeleteRenderbuffers"));
    if (detail::ptrDeleteRenderbuffers) ++loaded;
    detail::ptrDeleteSamplers = reinterpret_cast<detail::PFNDELETESAMPLERSPROC>(loadProc("glDeleteSamplers"));
    if (detail::ptrDeleteSamplers) ++loaded;
    detail::ptrDeleteShader = reinterpret_cast<detail::PFNDELETESHADERPROC>(loadProc("glDeleteShader"));
    if (detail::ptrDeleteShader) ++loaded;
    detail::ptrDeleteSync = reinterpret_cast<detail::PFNDELETESYNCPROC>(loadProc("glDeleteSync"));
    if (detail::ptrDeleteSync) ++loaded;
    detail::ptrDeleteTextures = reinterpret_cast<detail::PFNDELETETEXTURESPROC>(loadProc("glDeleteTextures"));
    if (detail::ptrDeleteTextures) ++loaded;
    detail::ptrDeleteTransformFeedbacks = reinterpret_cast<detail::PFNDELETETRANSFORMFEEDBACKSPROC>(loadProc("glDeleteTransformFeedbacks"));
    if (detail::ptrDeleteTransformFeedbacks) ++loaded;
    detail::ptrDeleteVertexArrays = reinterpret_cast<detail::PFNDELETEVERTEXARRAYSPROC>(loadProc("glDeleteVertexArrays"));
    if (detail::ptrDeleteVertexArrays) ++loaded;
    detail::ptrDepthFunc = reinterpret_cast<detail::PFNDEPTHFUNCPROC>(loadProc("glDepthFunc"));
    if (detail::ptrDepthFunc) ++loaded;
    detail::ptrDepthMask = reinterpret_cast<detail::PFNDEPTHMASKPROC>(loadProc("glDepthMask"));
    if (detail::ptrDepthMask) ++loaded;
    detail::ptrDepthRange = reinterpret_cast<detail::PFNDEPTHRANGEPROC>(loadProc("glDepthRange"));
    if (detail::ptrDepthRange) ++loaded;
    detail::ptrDepthRangeArrayv = reinterpret_cast<detail::PFNDEPTHRANGEARRAYVPROC>(loadProc("glDepthRangeArrayv"));
    if (detail::ptrDepthRangeArrayv) ++loaded;
    detail::ptrDepthRangeIndexed = reinterpret_cast<detail::PFNDEPTHRANGEINDEXEDPROC>(loadProc("glDepthRangeIndexed"));
    if (detail::ptrDepthRangeIndexed) ++loaded;
    detail::ptrDepthRangef = reinterpret_cast<detail::PFNDEPTHRANGEFPROC>(loadProc("glDepthRangef"));
    if (detail::ptrDepthRangef) ++loaded;
    detail::ptrDetachShader = reinterpret_cast<detail::PFNDETACHSHADERPROC>(loadProc("glDetachShader"));
    if (detail::ptrDetachShader) ++loaded;
    detail::ptrDisable = reinterpret_cast<detail::PFNDISABLEPROC>(loadProc("glDisable"));
    if (detail::ptrDisable) ++loaded;
    detail::ptrDisableVertexArrayAttrib = reinterpret_cast<detail::PFNDISABLEVERTEXARRAYATTRIBPROC>(loadProc("glDisableVertexArrayAttrib"));
    if (detail::ptrDisableVertexArrayAttrib) ++loaded;
    detail::ptrDisableVertexAttribArray = reinterpret_cast<detail::PFNDISABLEVERTEXATTRIBARRAYPROC>(loadProc("glDisableVertexAttribArray"));
    if (detail::ptrDisableVertexAttribArray) ++loaded;
    detail::ptrDisablei = reinterpret_cast<detail::PFNDISABLEIPROC>(loadProc("glDisablei"));
    if (detail::ptrDisablei) ++loaded;
    detail::ptrDispatchCompute = reinterpret_cast<detail::PFNDISPATCHCOMPUTEPROC>(loadProc("glDispatchCompute"));
    if (detail::ptrDispatchCompute) ++loaded;
    detail::ptrDispatchComputeIndirect = reinterpret_cast<detail::PFNDISPATCHCOMPUTEINDIRECTPROC>(loadProc("glDispatchComputeIndirect"));
    if (detail::ptrDispatchComputeIndirect) ++loaded;
    detail::ptrDrawArrays = reinterpret_cast<detail::PFNDRAWARRAYSPROC>(loadProc("glDrawArrays"));
    if (detail::ptrDrawArrays) ++loaded;
    detail::ptrDrawArraysIndirect = reinterpret_cast<detail::PFNDRAWARRAYSINDIRECTPROC>(loadProc("glDrawArraysIndirect"));
    if (detail::ptrDrawArraysIndirect) ++loaded;
    detail::ptrDrawArraysInstanced = reinterpret_cast<detail::PFNDRAWARRAYSINSTANCEDPROC>(loadProc("glDrawArraysInstanced"));
    if (detail::ptrDrawArraysInstanced) ++loaded;
    detail::ptrDrawArraysInstancedBaseInstance = reinterpret_cast<detail::PFNDRAWARRAYSINSTANCEDBASEINSTANCEPROC>(loadProc("glDrawArraysInstancedBaseInstance"));
    if (detail::ptrDrawArraysInstancedBaseInstance) ++loaded;
    detail::ptrDrawBuffer = reinterpret_cast<detail::PFNDRAWBUFFERPROC>(loadProc("glDrawBuffer"));
    if (detail::ptrDrawBuffer) ++loaded;
    detail::ptrDrawBuffers = reinterpret_cast<detail::PFNDRAWBUFFERSPROC>(loadProc("glDrawBuffers"));
    if (detail::ptrDrawBuffers) ++loaded;
    detail::ptrDrawElements = reinterpret_cast<detail::PFNDRAWELEMENTSPROC>(loadProc("glDrawElements"));
    if (detail::ptrDrawElements) ++loaded;
    detail::ptrDrawElementsBaseVertex = reinterpret_cast<detail::PFNDRAWELEMENTSBASEVERTEXPROC>(loadProc("glDrawElementsBaseVertex"));
    if (detail::ptrDrawElementsBaseVertex) ++loaded;
    detail::ptrDrawElementsIndirect = reinterpret_cast<detail::PFNDRAWELEMENTSINDIRECTPROC>(loadProc("glDrawElementsIndirect"));
    if (detail::ptrDrawElementsIndirect) ++loaded;
    detail::ptrDrawElementsInstanced = reinterpret_cast<detail::PFNDRAWELEMENTSINSTANCEDPROC>(loadProc("glDrawElementsInstanced"));
    if (detail::ptrDrawElementsInstanced) ++loaded;
    detail::ptrDrawElementsInstancedBaseInstance = reinterpret_cast<detail::PFNDRAWELEMENTSINSTANCEDBASEINSTANCEPROC>(loadProc("glDrawElementsInstancedBaseInstance"));
    if (detail::ptrDrawElementsInstancedBaseInstance) ++loaded;
    detail::ptrDrawElementsInstancedBaseVertex = reinterpret_cast<detail::PFNDRAWELEMENTSINSTANCEDBASEVERTEXPROC>(loadProc("glDrawElementsInstancedBaseVertex"));
    if (detail::ptrDrawElementsInstancedBaseVertex) ++loaded;
    detail::ptrDrawElementsInstancedBaseVertexBaseInstance = reinterpret_cast<detail::PFNDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC>(loadProc("glDrawElementsInstancedBaseVertexBaseInstance"));
    if (detail::ptrDrawElementsInstancedBaseVertexBaseInstance) ++loaded;
    detail::ptrDrawRangeElements = reinterpret_cast<detail::PFNDRAWRANGEELEMENTSPROC>(loadProc("glDrawRangeElements"));
    if (detail::ptrDrawRangeElements) ++loaded;
    detail::ptrDrawRangeElementsBaseVertex = reinterpret_cast<detail::PFNDRAWRANGEELEMENTSBASEVERTEXPROC>(loadProc("glDrawRangeElementsBaseVertex"));
    if (detail::ptrDrawRangeElementsBaseVertex) ++loaded;
    detail::ptrDrawTransformFeedback = reinterpret_cast<detail::PFNDRAWTRANSFORMFEEDBACKPROC>(loadProc("glDrawTransformFeedback"));
    if (detail::ptrDrawTransformFeedback) ++loaded;
    detail::ptrDrawTransformFeedbackInstanced = reinterpret_cast<detail::PFNDRAWTRANSFORMFEEDBACKINSTANCEDPROC>(loadProc("glDrawTransformFeedbackInstanced"));
    if (detail::ptrDrawTransformFeedbackInstanced) ++loaded;
    detail::ptrDrawTransformFeedbackStream = reinterpret_cast<detail::PFNDRAWTRANSFORMFEEDBACKSTREAMPROC>(loadProc("glDrawTransformFeedbackStream"));
    if (detail::ptrDrawTransformFeedbackStream) ++loaded;
    detail::ptrDrawTransformFeedbackStreamInstanced = reinterpret_cast<detail::PFNDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC>(loadProc("glDrawTransformFeedbackStreamInstanced"));
    if (detail::ptrDrawTransformFeedbackStreamInstanced) ++loaded;
    detail::ptrEnable = reinterpret_cast<detail::PFNENABLEPROC>(loadProc("glEnable"));
    if (detail::ptrEnable) ++loaded;
    detail::ptrEnableVertexArrayAttrib = reinterpret_cast<detail::PFNENABLEVERTEXARRAYATTRIBPROC>(loadProc("glEnableVertexArrayAttrib"));
    if (detail::ptrEnableVertexArrayAttrib) ++loaded;
    detail::ptrEnableVertexAttribArray = reinterpret_cast<detail::PFNENABLEVERTEXATTRIBARRAYPROC>(loadProc("glEnableVertexAttribArray"));
    if (detail::ptrEnableVertexAttribArray) ++loaded;
    detail::ptrEnablei = reinterpret_cast<detail::PFNENABLEIPROC>(loadProc("glEnablei"));
    if (detail::ptrEnablei) ++loaded;
    detail::ptrEndConditionalRender = reinterpret_cast<detail::PFNENDCONDITIONALRENDERPROC>(loadProc("glEndConditionalRender"));
    if (detail::ptrEndConditionalRender) ++loaded;
    detail::ptrEndQuery = reinterpret_cast<detail::PFNENDQUERYPROC>(loadProc("glEndQuery"));
    if (detail::ptrEndQuery) ++loaded;
    detail::ptrEndQueryIndexed = reinterpret_cast<detail::PFNENDQUERYINDEXEDPROC>(loadProc("glEndQueryIndexed"));
    if (detail::ptrEndQueryIndexed) ++loaded;
    detail::ptrEndTransformFeedback = reinterpret_cast<detail::PFNENDTRANSFORMFEEDBACKPROC>(loadProc("glEndTransformFeedback"));
    if (detail::ptrEndTransformFeedback) ++loaded;
    detail::ptrFenceSync = reinterpret_cast<detail::PFNFENCESYNCPROC>(loadProc("glFenceSync"));
    if (detail::ptrFenceSync) ++loaded;
    detail::ptrFinish = reinterpret_cast<detail::PFNFINISHPROC>(loadProc("glFinish"));
    if (detail::ptrFinish) ++loaded;
    detail::ptrFlush = reinterpret_cast<detail::PFNFLUSHPROC>(loadProc("glFlush"));
    if (detail::ptrFlush) ++loaded;
    detail::ptrFlushMappedBufferRange = reinterpret_cast<detail::PFNFLUSHMAPPEDBUFFERRANGEPROC>(loadProc("glFlushMappedBufferRange"));
    if (detail::ptrFlushMappedBufferRange) ++loaded;
    detail::ptrFlushMappedNamedBufferRange = reinterpret_cast<detail::PFNFLUSHMAPPEDNAMEDBUFFERRANGEPROC>(loadProc("glFlushMappedNamedBufferRange"));
    if (detail::ptrFlushMappedNamedBufferRange) ++loaded;
    detail::ptrFramebufferParameteri = reinterpret_cast<detail::PFNFRAMEBUFFERPARAMETERIPROC>(loadProc("glFramebufferParameteri"));
    if (detail::ptrFramebufferParameteri) ++loaded;
    detail::ptrFramebufferRenderbuffer = reinterpret_cast<detail::PFNFRAMEBUFFERRENDERBUFFERPROC>(loadProc("glFramebufferRenderbuffer"));
    if (detail::ptrFramebufferRenderbuffer) ++loaded;
    detail::ptrFramebufferTexture = reinterpret_cast<detail::PFNFRAMEBUFFERTEXTUREPROC>(loadProc("glFramebufferTexture"));
    if (detail::ptrFramebufferTexture) ++loaded;
    detail::ptrFramebufferTexture1D = reinterpret_cast<detail::PFNFRAMEBUFFERTEXTURE1DPROC>(loadProc("glFramebufferTexture1D"));
    if (detail::ptrFramebufferTexture1D) ++loaded;
    detail::ptrFramebufferTexture2D = reinterpret_cast<detail::PFNFRAMEBUFFERTEXTURE2DPROC>(loadProc("glFramebufferTexture2D"));
    if (detail::ptrFramebufferTexture2D) ++loaded;
    detail::ptrFramebufferTexture3D = reinterpret_cast<detail::PFNFRAMEBUFFERTEXTURE3DPROC>(loadProc("glFramebufferTexture3D"));
    if (detail::ptrFramebufferTexture3D) ++loaded;
    detail::ptrFramebufferTextureLayer = reinterpret_cast<detail::PFNFRAMEBUFFERTEXTURELAYERPROC>(loadProc("glFramebufferTextureLayer"));
    if (detail::ptrFramebufferTextureLayer) ++loaded;
    detail::ptrFrontFace = reinterpret_cast<detail::PFNFRONTFACEPROC>(loadProc("glFrontFace"));
    if (detail::ptrFrontFace) ++loaded;
    detail::ptrGenBuffers = reinterpret_cast<detail::PFNGENBUFFERSPROC>(loadProc("glGenBuffers"));
    if (detail::ptrGenBuffers) ++loaded;
    detail::ptrGenFramebuffers = reinterpret_cast<detail::PFNGENFRAMEBUFFERSPROC>(loadProc("glGenFramebuffers"));
    if (detail::ptrGenFramebuffers) ++loaded;
    detail::ptrGenProgramPipelines = reinterpret_cast<detail::PFNGENPROGRAMPIPELINESPROC>(loadProc("glGenProgramPipelines"));
    if (detail::ptrGenProgramPipelines) ++loaded;
    detail::ptrGenQueries = reinterpret_cast<detail::PFNGENQUERIESPROC>(loadProc("glGenQueries"));
    if (detail::ptrGenQueries) ++loaded;
    detail::ptrGenRenderbuffers = reinterpret_cast<detail::PFNGENRENDERBUFFERSPROC>(loadProc("glGenRenderbuffers"));
    if (detail::ptrGenRenderbuffers) ++loaded;
    detail::ptrGenSamplers = reinterpret_cast<detail::PFNGENSAMPLERSPROC>(loadProc("glGenSamplers"));
    if (detail::ptrGenSamplers) ++loaded;
    detail::ptrGenTextures = reinterpret_cast<detail::PFNGENTEXTURESPROC>(loadProc("glGenTextures"));
    if (detail::ptrGenTextures) ++loaded;
    detail::ptrGenTransformFeedbacks = reinterpret_cast<detail::PFNGENTRANSFORMFEEDBACKSPROC>(loadProc("glGenTransformFeedbacks"));
    if (detail::ptrGenTransformFeedbacks) ++loaded;
    detail::ptrGenVertexArrays = reinterpret_cast<detail::PFNGENVERTEXARRAYSPROC>(loadProc("glGenVertexArrays"));
    if (detail::ptrGenVertexArrays) ++loaded;
    detail::ptrGenerateMipmap = reinterpret_cast<detail::PFNGENERATEMIPMAPPROC>(loadProc("glGenerateMipmap"));
    if (detail::ptrGenerateMipmap) ++loaded;
    detail::ptrGenerateTextureMipmap = reinterpret_cast<detail::PFNGENERATETEXTUREMIPMAPPROC>(loadProc("glGenerateTextureMipmap"));
    if (detail::ptrGenerateTextureMipmap) ++loaded;
    detail::ptrGetActiveAtomicCounterBufferiv = reinterpret_cast<detail::PFNGETACTIVEATOMICCOUNTERBUFFERIVPROC>(loadProc("glGetActiveAtomicCounterBufferiv"));
    if (detail::ptrGetActiveAtomicCounterBufferiv) ++loaded;
    detail::ptrGetActiveAttrib = reinterpret_cast<detail::PFNGETACTIVEATTRIBPROC>(loadProc("glGetActiveAttrib"));
    if (detail::ptrGetActiveAttrib) ++loaded;
    detail::ptrGetActiveSubroutineName = reinterpret_cast<detail::PFNGETACTIVESUBROUTINENAMEPROC>(loadProc("glGetActiveSubroutineName"));
    if (detail::ptrGetActiveSubroutineName) ++loaded;
    detail::ptrGetActiveSubroutineUniformName = reinterpret_cast<detail::PFNGETACTIVESUBROUTINEUNIFORMNAMEPROC>(loadProc("glGetActiveSubroutineUniformName"));
    if (detail::ptrGetActiveSubroutineUniformName) ++loaded;
    detail::ptrGetActiveSubroutineUniformiv = reinterpret_cast<detail::PFNGETACTIVESUBROUTINEUNIFORMIVPROC>(loadProc("glGetActiveSubroutineUniformiv"));
    if (detail::ptrGetActiveSubroutineUniformiv) ++loaded;
    detail::ptrGetActiveUniform = reinterpret_cast<detail::PFNGETACTIVEUNIFORMPROC>(loadProc("glGetActiveUniform"));
    if (detail::ptrGetActiveUniform) ++loaded;
    detail::ptrGetActiveUniformBlockName = reinterpret_cast<detail::PFNGETACTIVEUNIFORMBLOCKNAMEPROC>(loadProc("glGetActiveUniformBlockName"));
    if (detail::ptrGetActiveUniformBlockName) ++loaded;
    detail::ptrGetActiveUniformBlockiv = reinterpret_cast<detail::PFNGETACTIVEUNIFORMBLOCKIVPROC>(loadProc("glGetActiveUniformBlockiv"));
    if (detail::ptrGetActiveUniformBlockiv) ++loaded;
    detail::ptrGetActiveUniformName = reinterpret_cast<detail::PFNGETACTIVEUNIFORMNAMEPROC>(loadProc("glGetActiveUniformName"));
    if (detail::ptrGetActiveUniformName) ++loaded;
    detail::ptrGetActiveUniformsiv = reinterpret_cast<detail::PFNGETACTIVEUNIFORMSIVPROC>(loadProc("glGetActiveUniformsiv"));
    if (detail::ptrGetActiveUniformsiv) ++loaded;
    detail::ptrGetAttachedShaders = reinterpret_cast<detail::PFNGETATTACHEDSHADERSPROC>(loadProc("glGetAttachedShaders"));
    if (detail::ptrGetAttachedShaders) ++loaded;
    detail::ptrGetAttribLocation = reinterpret_cast<detail::PFNGETATTRIBLOCATIONPROC>(loadProc("glGetAttribLocation"));
    if (detail::ptrGetAttribLocation) ++loaded;
    detail::ptrGetBooleani_v = reinterpret_cast<detail::PFNGETBOOLEANI_VPROC>(loadProc("glGetBooleani_v"));
    if (detail::ptrGetBooleani_v) ++loaded;
    detail::ptrGetBooleanv = reinterpret_cast<detail::PFNGETBOOLEANVPROC>(loadProc("glGetBooleanv"));
    if (detail::ptrGetBooleanv) ++loaded;
    detail::ptrGetBufferParameteri64v = reinterpret_cast<detail::PFNGETBUFFERPARAMETERI64VPROC>(loadProc("glGetBufferParameteri64v"));
    if (detail::ptrGetBufferParameteri64v) ++loaded;
    detail::ptrGetBufferParameteriv = reinterpret_cast<detail::PFNGETBUFFERPARAMETERIVPROC>(loadProc("glGetBufferParameteriv"));
    if (detail::ptrGetBufferParameteriv) ++loaded;
    detail::ptrGetBufferPointerv = reinterpret_cast<detail::PFNGETBUFFERPOINTERVPROC>(loadProc("glGetBufferPointerv"));
    if (detail::ptrGetBufferPointerv) ++loaded;
    detail::ptrGetBufferSubData = reinterpret_cast<detail::PFNGETBUFFERSUBDATAPROC>(loadProc("glGetBufferSubData"));
    if (detail::ptrGetBufferSubData) ++loaded;
    detail::ptrGetCompressedTexImage = reinterpret_cast<detail::PFNGETCOMPRESSEDTEXIMAGEPROC>(loadProc("glGetCompressedTexImage"));
    if (detail::ptrGetCompressedTexImage) ++loaded;
    detail::ptrGetCompressedTextureImage = reinterpret_cast<detail::PFNGETCOMPRESSEDTEXTUREIMAGEPROC>(loadProc("glGetCompressedTextureImage"));
    if (detail::ptrGetCompressedTextureImage) ++loaded;
    detail::ptrGetCompressedTextureSubImage = reinterpret_cast<detail::PFNGETCOMPRESSEDTEXTURESUBIMAGEPROC>(loadProc("glGetCompressedTextureSubImage"));
    if (detail::ptrGetCompressedTextureSubImage) ++loaded;
    detail::ptrGetDebugMessageLog = reinterpret_cast<detail::PFNGETDEBUGMESSAGELOGPROC>(loadProc("glGetDebugMessageLog"));
    if (detail::ptrGetDebugMessageLog) ++loaded;
    detail::ptrGetDoublei_v = reinterpret_cast<detail::PFNGETDOUBLEI_VPROC>(loadProc("glGetDoublei_v"));
    if (detail::ptrGetDoublei_v) ++loaded;
    detail::ptrGetDoublev = reinterpret_cast<detail::PFNGETDOUBLEVPROC>(loadProc("glGetDoublev"));
    if (detail::ptrGetDoublev) ++loaded;
    detail::ptrGetError = reinterpret_cast<detail::PFNGETERRORPROC>(loadProc("glGetError"));
    if (detail::ptrGetError) ++loaded;
    detail::ptrGetFloati_v = reinterpret_cast<detail::PFNGETFLOATI_VPROC>(loadProc("glGetFloati_v"));
    if (detail::ptrGetFloati_v) ++loaded;
    detail::ptrGetFloatv = reinterpret_cast<detail::PFNGETFLOATVPROC>(loadProc("glGetFloatv"));
    if (detail::ptrGetFloatv) ++loaded;
    detail::ptrGetFragDataIndex = reinterpret_cast<detail::PFNGETFRAGDATAINDEXPROC>(loadProc("glGetFragDataIndex"));
    if (detail::ptrGetFragDataIndex) ++loaded;
    detail::ptrGetFragDataLocation = reinterpret_cast<detail::PFNGETFRAGDATALOCATIONPROC>(loadProc("glGetFragDataLocation"));
    if (detail::ptrGetFragDataLocation) ++loaded;
    detail::ptrGetFramebufferAttachmentParameteriv = reinterpret_cast<detail::PFNGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(loadProc("glGetFramebufferAttachmentParameteriv"));
    if (detail::ptrGetFramebufferAttachmentParameteriv) ++loaded;
    detail::ptrGetFramebufferParameteriv = reinterpret_cast<detail::PFNGETFRAMEBUFFERPARAMETERIVPROC>(loadProc("glGetFramebufferParameteriv"));
    if (detail::ptrGetFramebufferParameteriv) ++loaded;
    detail::ptrGetGraphicsResetStatus = reinterpret_cast<detail::PFNGETGRAPHICSRESETSTATUSPROC>(loadProc("glGetGraphicsResetStatus"));
    if (detail::ptrGetGraphicsResetStatus) ++loaded;
    detail::ptrGetInteger64i_v = reinterpret_cast<detail::PFNGETINTEGER64I_VPROC>(loadProc("glGetInteger64i_v"));
    if (detail::ptrGetInteger64i_v) ++loaded;
    detail::ptrGetInteger64v = reinterpret_cast<detail::PFNGETINTEGER64VPROC>(loadProc("glGetInteger64v"));
    if (detail::ptrGetInteger64v) ++loaded;
    detail::ptrGetIntegeri_v = reinterpret_cast<detail::PFNGETINTEGERI_VPROC>(loadProc("glGetIntegeri_v"));
    if (detail::ptrGetIntegeri_v) ++loaded;
    detail::ptrGetIntegerv = reinterpret_cast<detail::PFNGETINTEGERVPROC>(loadProc("glGetIntegerv"));
    if (detail::ptrGetIntegerv) ++loaded;
    detail::ptrGetInternalformati64v = reinterpret_cast<detail::PFNGETINTERNALFORMATI64VPROC>(loadProc("glGetInternalformati64v"));
    if (detail::ptrGetInternalformati64v) ++loaded;
    detail::ptrGetInternalformativ = reinterpret_cast<detail::PFNGETINTERNALFORMATIVPROC>(loadProc("glGetInternalformativ"));
    if (detail::ptrGetInternalformativ) ++loaded;
    detail::ptrGetMultisamplefv = reinterpret_cast<detail::PFNGETMULTISAMPLEFVPROC>(loadProc("glGetMultisamplefv"));
    if (detail::ptrGetMultisamplefv) ++loaded;
    detail::ptrGetNamedBufferParameteri64v = reinterpret_cast<detail::PFNGETNAMEDBUFFERPARAMETERI64VPROC>(loadProc("glGetNamedBufferParameteri64v"));
    if (detail::ptrGetNamedBufferParameteri64v) ++loaded;
    detail::ptrGetNamedBufferParameteriv = reinterpret_cast<detail::PFNGETNAMEDBUFFERPARAMETERIVPROC>(loadProc("glGetNamedBufferParameteriv"));
    if (detail::ptrGetNamedBufferParameteriv) ++loaded;
    detail::ptrGetNamedBufferPointerv = reinterpret_cast<detail::PFNGETNAMEDBUFFERPOINTERVPROC>(loadProc("glGetNamedBufferPointerv"));
    if (detail::ptrGetNamedBufferPointerv) ++loaded;
    detail::ptrGetNamedBufferSubData = reinterpret_cast<detail::PFNGETNAMEDBUFFERSUBDATAPROC>(loadProc("glGetNamedBufferSubData"));
    if (detail::ptrGetNamedBufferSubData) ++loaded;
    detail::ptrGetNamedFramebufferAttachmentParameteriv = reinterpret_cast<detail::PFNGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(loadProc("glGetNamedFramebufferAttachmentParameteriv"));
    if (detail::ptrGetNamedFramebufferAttachmentParameteriv) ++loaded;
    detail::ptrGetNamedFramebufferParameteriv = reinterpret_cast<detail::PFNGETNAMEDFRAMEBUFFERPARAMETERIVPROC>(loadProc("glGetNamedFramebufferParameteriv"));
    if (detail::ptrGetNamedFramebufferParameteriv) ++loaded;
    detail::ptrGetNamedRenderbufferParameteriv = reinterpret_cast<detail::PFNGETNAMEDRENDERBUFFERPARAMETERIVPROC>(loadProc("glGetNamedRenderbufferParameteriv"));
    if (detail::ptrGetNamedRenderbufferParameteriv) ++loaded;
    detail::ptrGetObjectLabel = reinterpret_cast<detail::PFNGETOBJECTLABELPROC>(loadProc("glGetObjectLabel"));
    if (detail::ptrGetObjectLabel) ++loaded;
    detail::ptrGetObjectPtrLabel = reinterpret_cast<detail::PFNGETOBJECTPTRLABELPROC>(loadProc("glGetObjectPtrLabel"));
    if (detail::ptrGetObjectPtrLabel) ++loaded;
    detail::ptrGetProgramBinary = reinterpret_cast<detail::PFNGETPROGRAMBINARYPROC>(loadProc("glGetProgramBinary"));
    if (detail::ptrGetProgramBinary) ++loaded;
    detail::ptrGetProgramInfoLog = reinterpret_cast<detail::PFNGETPROGRAMINFOLOGPROC>(loadProc("glGetProgramInfoLog"));
    if (detail::ptrGetProgramInfoLog) ++loaded;
    detail::ptrGetProgramInterfaceiv = reinterpret_cast<detail::PFNGETPROGRAMINTERFACEIVPROC>(loadProc("glGetProgramInterfaceiv"));
    if (detail::ptrGetProgramInterfaceiv) ++loaded;
    detail::ptrGetProgramPipelineInfoLog = reinterpret_cast<detail::PFNGETPROGRAMPIPELINEINFOLOGPROC>(loadProc("glGetProgramPipelineInfoLog"));
    if (detail::ptrGetProgramPipelineInfoLog) ++loaded;
    detail::ptrGetProgramPipelineiv = reinterpret_cast<detail::PFNGETPROGRAMPIPELINEIVPROC>(loadProc("glGetProgramPipelineiv"));
    if (detail::ptrGetProgramPipelineiv) ++loaded;
    detail::ptrGetProgramResourceIndex = reinterpret_cast<detail::PFNGETPROGRAMRESOURCEINDEXPROC>(loadProc("glGetProgramResourceIndex"));
    if (detail::ptrGetProgramResourceIndex) ++loaded;
    detail::ptrGetProgramResourceLocation = reinterpret_cast<detail::PFNGETPROGRAMRESOURCELOCATIONPROC>(loadProc("glGetProgramResourceLocation"));
    if (detail::ptrGetProgramResourceLocation) ++loaded;
    detail::ptrGetProgramResourceLocationIndex = reinterpret_cast<detail::PFNGETPROGRAMRESOURCELOCATIONINDEXPROC>(loadProc("glGetProgramResourceLocationIndex"));
    if (detail::ptrGetProgramResourceLocationIndex) ++loaded;
    detail::ptrGetProgramResourceName = reinterpret_cast<detail::PFNGETPROGRAMRESOURCENAMEPROC>(loadProc("glGetProgramResourceName"));
    if (detail::ptrGetProgramResourceName) ++loaded;
    detail::ptrGetProgramResourceiv = reinterpret_cast<detail::PFNGETPROGRAMRESOURCEIVPROC>(loadProc("glGetProgramResourceiv"));
    if (detail::ptrGetProgramResourceiv) ++loaded;
    detail::ptrGetProgramStageiv = reinterpret_cast<detail::PFNGETPROGRAMSTAGEIVPROC>(loadProc("glGetProgramStageiv"));
    if (detail::ptrGetProgramStageiv) ++loaded;
    detail::ptrGetProgramiv = reinterpret_cast<detail::PFNGETPROGRAMIVPROC>(loadProc("glGetProgramiv"));
    if (detail::ptrGetProgramiv) ++loaded;
    detail::ptrGetQueryBufferObjecti64v = reinterpret_cast<detail::PFNGETQUERYBUFFEROBJECTI64VPROC>(loadProc("glGetQueryBufferObjecti64v"));
    if (detail::ptrGetQueryBufferObjecti64v) ++loaded;
    detail::ptrGetQueryBufferObjectiv = reinterpret_cast<detail::PFNGETQUERYBUFFEROBJECTIVPROC>(loadProc("glGetQueryBufferObjectiv"));
    if (detail::ptrGetQueryBufferObjectiv) ++loaded;
    detail::ptrGetQueryBufferObjectui64v = reinterpret_cast<detail::PFNGETQUERYBUFFEROBJECTUI64VPROC>(loadProc("glGetQueryBufferObjectui64v"));
    if (detail::ptrGetQueryBufferObjectui64v) ++loaded;
    detail::ptrGetQueryBufferObjectuiv = reinterpret_cast<detail::PFNGETQUERYBUFFEROBJECTUIVPROC>(loadProc("glGetQueryBufferObjectuiv"));
    if (detail::ptrGetQueryBufferObjectuiv) ++loaded;
    detail::ptrGetQueryIndexediv = reinterpret_cast<detail::PFNGETQUERYINDEXEDIVPROC>(loadProc("glGetQueryIndexediv"));
    if (detail::ptrGetQueryIndexediv) ++loaded;
    detail::ptrGetQueryObjecti64v = reinterpret_cast<detail::PFNGETQUERYOBJECTI64VPROC>(loadProc("glGetQueryObjecti64v"));
    if (detail::ptrGetQueryObjecti64v) ++loaded;
    detail::ptrGetQueryObjectiv = reinterpret_cast<detail::PFNGETQUERYOBJECTIVPROC>(loadProc("glGetQueryObjectiv"));
    if (detail::ptrGetQueryObjectiv) ++loaded;
    detail::ptrGetQueryObjectui64v = reinterpret_cast<detail::PFNGETQUERYOBJECTUI64VPROC>(loadProc("glGetQueryObjectui64v"));
    if (detail::ptrGetQueryObjectui64v) ++loaded;
    detail::ptrGetQueryObjectuiv = reinterpret_cast<detail::PFNGETQUERYOBJECTUIVPROC>(loadProc("glGetQueryObjectuiv"));
    if (detail::ptrGetQueryObjectuiv) ++loaded;
    detail::ptrGetQueryiv = reinterpret_cast<detail::PFNGETQUERYIVPROC>(loadProc("glGetQueryiv"));
    if (detail::ptrGetQueryiv) ++loaded;
    detail::ptrGetRenderbufferParameteriv = reinterpret_cast<detail::PFNGETRENDERBUFFERPARAMETERIVPROC>(loadProc("glGetRenderbufferParameteriv"));
    if (detail::ptrGetRenderbufferParameteriv) ++loaded;
    detail::ptrGetSamplerParameterIiv = reinterpret_cast<detail::PFNGETSAMPLERPARAMETERIIVPROC>(loadProc("glGetSamplerParameterIiv"));
    if (detail::ptrGetSamplerParameterIiv) ++loaded;
    detail::ptrGetSamplerParameterIuiv = reinterpret_cast<detail::PFNGETSAMPLERPARAMETERIUIVPROC>(loadProc("glGetSamplerParameterIuiv"));
    if (detail::ptrGetSamplerParameterIuiv) ++loaded;
    detail::ptrGetSamplerParameterfv = reinterpret_cast<detail::PFNGETSAMPLERPARAMETERFVPROC>(loadProc("glGetSamplerParameterfv"));
    if (detail::ptrGetSamplerParameterfv) ++loaded;
    detail::ptrGetSamplerParameteriv = reinterpret_cast<detail::PFNGETSAMPLERPARAMETERIVPROC>(loadProc("glGetSamplerParameteriv"));
    if (detail::ptrGetSamplerParameteriv) ++loaded;
    detail::ptrGetShaderInfoLog = reinterpret_cast<detail::PFNGETSHADERINFOLOGPROC>(loadProc("glGetShaderInfoLog"));
    if (detail::ptrGetShaderInfoLog) ++loaded;
    detail::ptrGetShaderPrecisionFormat = reinterpret_cast<detail::PFNGETSHADERPRECISIONFORMATPROC>(loadProc("glGetShaderPrecisionFormat"));
    if (detail::ptrGetShaderPrecisionFormat) ++loaded;
    detail::ptrGetShaderSource = reinterpret_cast<detail::PFNGETSHADERSOURCEPROC>(loadProc("glGetShaderSource"));
    if (detail::ptrGetShaderSource) ++loaded;
    detail::ptrGetShaderiv = reinterpret_cast<detail::PFNGETSHADERIVPROC>(loadProc("glGetShaderiv"));
    if (detail::ptrGetShaderiv) ++loaded;
    detail::ptrGetString = reinterpret_cast<detail::PFNGETSTRINGPROC>(loadProc("glGetString"));
    if (detail::ptrGetString) ++loaded;
    detail::ptrGetStringi = reinterpret_cast<detail::PFNGETSTRINGIPROC>(loadProc("glGetStringi"));
    if (detail::ptrGetStringi) ++loaded;
    detail::ptrGetSubroutineIndex = reinterpret_cast<detail::PFNGETSUBROUTINEINDEXPROC>(loadProc("glGetSubroutineIndex"));
    if (detail::ptrGetSubroutineIndex) ++loaded;
    detail::ptrGetSubroutineUniformLocation = reinterpret_cast<detail::PFNGETSUBROUTINEUNIFORMLOCATIONPROC>(loadProc("glGetSubroutineUniformLocation"));
    if (detail::ptrGetSubroutineUniformLocation) ++loaded;
    detail::ptrGetSynciv = reinterpret_cast<detail::PFNGETSYNCIVPROC>(loadProc("glGetSynciv"));
    if (detail::ptrGetSynciv) ++loaded;
    detail::ptrGetTexImage = reinterpret_cast<detail::PFNGETTEXIMAGEPROC>(loadProc("glGetTexImage"));
    if (detail::ptrGetTexImage) ++loaded;
    detail::ptrGetTexLevelParameterfv = reinterpret_cast<detail::PFNGETTEXLEVELPARAMETERFVPROC>(loadProc("glGetTexLevelParameterfv"));
    if (detail::ptrGetTexLevelParameterfv) ++loaded;
    detail::ptrGetTexLevelParameteriv = reinterpret_cast<detail::PFNGETTEXLEVELPARAMETERIVPROC>(loadProc("glGetTexLevelParameteriv"));
    if (detail::ptrGetTexLevelParameteriv) ++loaded;
    detail::ptrGetTexParameterIiv = reinterpret_cast<detail::PFNGETTEXPARAMETERIIVPROC>(loadProc("glGetTexParameterIiv"));
    if (detail::ptrGetTexParameterIiv) ++loaded;
    detail::ptrGetTexParameterIuiv = reinterpret_cast<detail::PFNGETTEXPARAMETERIUIVPROC>(loadProc("glGetTexParameterIuiv"));
    if (detail::ptrGetTexParameterIuiv) ++loaded;
    detail::ptrGetTexParameterfv = reinterpret_cast<detail::PFNGETTEXPARAMETERFVPROC>(loadProc("glGetTexParameterfv"));
    if (detail::ptrGetTexParameterfv) ++loaded;
    detail::ptrGetTexParameteriv = reinterpret_cast<detail::PFNGETTEXPARAMETERIVPROC>(loadProc("glGetTexParameteriv"));
    if (detail::ptrGetTexParameteriv) ++loaded;
    detail::ptrGetTextureImage = reinterpret_cast<detail::PFNGETTEXTUREIMAGEPROC>(loadProc("glGetTextureImage"));
    if (detail::ptrGetTextureImage) ++loaded;
    detail::ptrGetTextureLevelParameterfv = reinterpret_cast<detail::PFNGETTEXTURELEVELPARAMETERFVPROC>(loadProc("glGetTextureLevelParameterfv"));
    if (detail::ptrGetTextureLevelParameterfv) ++loaded;
    detail::ptrGetTextureLevelParameteriv = reinterpret_cast<detail::PFNGETTEXTURELEVELPARAMETERIVPROC>(loadProc("glGetTextureLevelParameteriv"));
    if (detail::ptrGetTextureLevelParameteriv) ++loaded;
    detail::ptrGetTextureParameterIiv = reinterpret_cast<detail::PFNGETTEXTUREPARAMETERIIVPROC>(loadProc("glGetTextureParameterIiv"));
    if (detail::ptrGetTextureParameterIiv) ++loaded;
    detail::ptrGetTextureParameterIuiv = reinterpret_cast<detail::PFNGETTEXTUREPARAMETERIUIVPROC>(loadProc("glGetTextureParameterIuiv"));
    if (detail::ptrGetTextureParameterIuiv) ++loaded;
    detail::ptrGetTextureParameterfv = reinterpret_cast<detail::PFNGETTEXTUREPARAMETERFVPROC>(loadProc("glGetTextureParameterfv"));
    if (detail::ptrGetTextureParameterfv) ++loaded;
    detail::ptrGetTextureParameteriv = reinterpret_cast<detail::PFNGETTEXTUREPARAMETERIVPROC>(loadProc("glGetTextureParameteriv"));
    if (detail::ptrGetTextureParameteriv) ++loaded;
    detail::ptrGetTextureSubImage = reinterpret_cast<detail::PFNGETTEXTURESUBIMAGEPROC>(loadProc("glGetTextureSubImage"));
    if (detail::ptrGetTextureSubImage) ++loaded;
    detail::ptrGetTransformFeedbackVarying = reinterpret_cast<detail::PFNGETTRANSFORMFEEDBACKVARYINGPROC>(loadProc("glGetTransformFeedbackVarying"));
    if (detail::ptrGetTransformFeedbackVarying) ++loaded;
    detail::ptrGetTransformFeedbacki64_v = reinterpret_cast<detail::PFNGETTRANSFORMFEEDBACKI64_VPROC>(loadProc("glGetTransformFeedbacki64_v"));
    if (detail::ptrGetTransformFeedbacki64_v) ++loaded;
    detail::ptrGetTransformFeedbacki_v = reinterpret_cast<detail::PFNGETTRANSFORMFEEDBACKI_VPROC>(loadProc("glGetTransformFeedbacki_v"));
    if (detail::ptrGetTransformFeedbacki_v) ++loaded;
    detail::ptrGetTransformFeedbackiv = reinterpret_cast<detail::PFNGETTRANSFORMFEEDBACKIVPROC>(loadProc("glGetTransformFeedbackiv"));
    if (detail::ptrGetTransformFeedbackiv) ++loaded;
    detail::ptrGetUniformBlockIndex = reinterpret_cast<detail::PFNGETUNIFORMBLOCKINDEXPROC>(loadProc("glGetUniformBlockIndex"));
    if (detail::ptrGetUniformBlockIndex) ++loaded;
    detail::ptrGetUniformIndices = reinterpret_cast<detail::PFNGETUNIFORMINDICESPROC>(loadProc("glGetUniformIndices"));
    if (detail::ptrGetUniformIndices) ++loaded;
    detail::ptrGetUniformLocation = reinterpret_cast<detail::PFNGETUNIFORMLOCATIONPROC>(loadProc("glGetUniformLocation"));
    if (detail::ptrGetUniformLocation) ++loaded;
    detail::ptrGetUniformSubroutineuiv = reinterpret_cast<detail::PFNGETUNIFORMSUBROUTINEUIVPROC>(loadProc("glGetUniformSubroutineuiv"));
    if (detail::ptrGetUniformSubroutineuiv) ++loaded;
    detail::ptrGetUniformdv = reinterpret_cast<detail::PFNGETUNIFORMDVPROC>(loadProc("glGetUniformdv"));
    if (detail::ptrGetUniformdv) ++loaded;
    detail::ptrGetUniformfv = reinterpret_cast<detail::PFNGETUNIFORMFVPROC>(loadProc("glGetUniformfv"));
    if (detail::ptrGetUniformfv) ++loaded;
    detail::ptrGetUniformiv = reinterpret_cast<detail::PFNGETUNIFORMIVPROC>(loadProc("glGetUniformiv"));
    if (detail::ptrGetUniformiv) ++loaded;
    detail::ptrGetUniformuiv = reinterpret_cast<detail::PFNGETUNIFORMUIVPROC>(loadProc("glGetUniformuiv"));
    if (detail::ptrGetUniformuiv) ++loaded;
    detail::ptrGetVertexArrayIndexed64iv = reinterpret_cast<detail::PFNGETVERTEXARRAYINDEXED64IVPROC>(loadProc("glGetVertexArrayIndexed64iv"));
    if (detail::ptrGetVertexArrayIndexed64iv) ++loaded;
    detail::ptrGetVertexArrayIndexediv = reinterpret_cast<detail::PFNGETVERTEXARRAYINDEXEDIVPROC>(loadProc("glGetVertexArrayIndexediv"));
    if (detail::ptrGetVertexArrayIndexediv) ++loaded;
    detail::ptrGetVertexArrayiv = reinterpret_cast<detail::PFNGETVERTEXARRAYIVPROC>(loadProc("glGetVertexArrayiv"));
    if (detail::ptrGetVertexArrayiv) ++loaded;
    detail::ptrGetVertexAttribIiv = reinterpret_cast<detail::PFNGETVERTEXATTRIBIIVPROC>(loadProc("glGetVertexAttribIiv"));
    if (detail::ptrGetVertexAttribIiv) ++loaded;
    detail::ptrGetVertexAttribIuiv = reinterpret_cast<detail::PFNGETVERTEXATTRIBIUIVPROC>(loadProc("glGetVertexAttribIuiv"));
    if (detail::ptrGetVertexAttribIuiv) ++loaded;
    detail::ptrGetVertexAttribLdv = reinterpret_cast<detail::PFNGETVERTEXATTRIBLDVPROC>(loadProc("glGetVertexAttribLdv"));
    if (detail::ptrGetVertexAttribLdv) ++loaded;
    detail::ptrGetVertexAttribPointerv = reinterpret_cast<detail::PFNGETVERTEXATTRIBPOINTERVPROC>(loadProc("glGetVertexAttribPointerv"));
    if (detail::ptrGetVertexAttribPointerv) ++loaded;
    detail::ptrGetVertexAttribdv = reinterpret_cast<detail::PFNGETVERTEXATTRIBDVPROC>(loadProc("glGetVertexAttribdv"));
    if (detail::ptrGetVertexAttribdv) ++loaded;
    detail::ptrGetVertexAttribfv = reinterpret_cast<detail::PFNGETVERTEXATTRIBFVPROC>(loadProc("glGetVertexAttribfv"));
    if (detail::ptrGetVertexAttribfv) ++loaded;
    detail::ptrGetVertexAttribiv = reinterpret_cast<detail::PFNGETVERTEXATTRIBIVPROC>(loadProc("glGetVertexAttribiv"));
    if (detail::ptrGetVertexAttribiv) ++loaded;
    detail::ptrGetnCompressedTexImage = reinterpret_cast<detail::PFNGETNCOMPRESSEDTEXIMAGEPROC>(loadProc("glGetnCompressedTexImage"));
    if (detail::ptrGetnCompressedTexImage) ++loaded;
    detail::ptrGetnTexImage = reinterpret_cast<detail::PFNGETNTEXIMAGEPROC>(loadProc("glGetnTexImage"));
    if (detail::ptrGetnTexImage) ++loaded;
    detail::ptrGetnUniformdv = reinterpret_cast<detail::PFNGETNUNIFORMDVPROC>(loadProc("glGetnUniformdv"));
    if (detail::ptrGetnUniformdv) ++loaded;
    detail::ptrGetnUniformfv = reinterpret_cast<detail::PFNGETNUNIFORMFVPROC>(loadProc("glGetnUniformfv"));
    if (detail::ptrGetnUniformfv) ++loaded;
    detail::ptrGetnUniformiv = reinterpret_cast<detail::PFNGETNUNIFORMIVPROC>(loadProc("glGetnUniformiv"));
    if (detail::ptrGetnUniformiv) ++loaded;
    detail::ptrGetnUniformuiv = reinterpret_cast<detail::PFNGETNUNIFORMUIVPROC>(loadProc("glGetnUniformuiv"));
    if (detail::ptrGetnUniformuiv) ++loaded;
    detail::ptrHint = reinterpret_cast<detail::PFNHINTPROC>(loadProc("glHint"));
    if (detail::ptrHint) ++loaded;
    detail::ptrInvalidateBufferData = reinterpret_cast<detail::PFNINVALIDATEBUFFERDATAPROC>(loadProc("glInvalidateBufferData"));
    if (detail::ptrInvalidateBufferData) ++loaded;
    detail::ptrInvalidateBufferSubData = reinterpret_cast<detail::PFNINVALIDATEBUFFERSUBDATAPROC>(loadProc("glInvalidateBufferSubData"));
    if (detail::ptrInvalidateBufferSubData) ++loaded;
    detail::ptrInvalidateFramebuffer = reinterpret_cast<detail::PFNINVALIDATEFRAMEBUFFERPROC>(loadProc("glInvalidateFramebuffer"));
    if (detail::ptrInvalidateFramebuffer) ++loaded;
    detail::ptrInvalidateNamedFramebufferData = reinterpret_cast<detail::PFNINVALIDATENAMEDFRAMEBUFFERDATAPROC>(loadProc("glInvalidateNamedFramebufferData"));
    if (detail::ptrInvalidateNamedFramebufferData) ++loaded;
    detail::ptrInvalidateNamedFramebufferSubData = reinterpret_cast<detail::PFNINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC>(loadProc("glInvalidateNamedFramebufferSubData"));
    if (detail::ptrInvalidateNamedFramebufferSubData) ++loaded;
    detail::ptrInvalidateSubFramebuffer = reinterpret_cast<detail::PFNINVALIDATESUBFRAMEBUFFERPROC>(loadProc("glInvalidateSubFramebuffer"));
    if (detail::ptrInvalidateSubFramebuffer) ++loaded;
    detail::ptrInvalidateTexImage = reinterpret_cast<detail::PFNINVALIDATETEXIMAGEPROC>(loadProc("glInvalidateTexImage"));
    if (detail::ptrInvalidateTexImage) ++loaded;
    detail::ptrInvalidateTexSubImage = reinterpret_cast<detail::PFNINVALIDATETEXSUBIMAGEPROC>(loadProc("glInvalidateTexSubImage"));
    if (detail::ptrInvalidateTexSubImage) ++loaded;
    detail::ptrIsBuffer = reinterpret_cast<detail::PFNISBUFFERPROC>(loadProc("glIsBuffer"));
    if (detail::ptrIsBuffer) ++loaded;
    detail::ptrIsEnabled = reinterpret_cast<detail::PFNISENABLEDPROC>(loadProc("glIsEnabled"));
    if (detail::ptrIsEnabled) ++loaded;
    detail::ptrIsEnabledi = reinterpret_cast<detail::PFNISENABLEDIPROC>(loadProc("glIsEnabledi"));
    if (detail::ptrIsEnabledi) ++loaded;
    detail::ptrIsFramebuffer = reinterpret_cast<detail::PFNISFRAMEBUFFERPROC>(loadProc("glIsFramebuffer"));
    if (detail::ptrIsFramebuffer) ++loaded;
    detail::ptrIsProgram = reinterpret_cast<detail::PFNISPROGRAMPROC>(loadProc("glIsProgram"));
    if (detail::ptrIsProgram) ++loaded;
    detail::ptrIsProgramPipeline = reinterpret_cast<detail::PFNISPROGRAMPIPELINEPROC>(loadProc("glIsProgramPipeline"));
    if (detail::ptrIsProgramPipeline) ++loaded;
    detail::ptrIsQuery = reinterpret_cast<detail::PFNISQUERYPROC>(loadProc("glIsQuery"));
    if (detail::ptrIsQuery) ++loaded;
    detail::ptrIsRenderbuffer = reinterpret_cast<detail::PFNISRENDERBUFFERPROC>(loadProc("glIsRenderbuffer"));
    if (detail::ptrIsRenderbuffer) ++loaded;
    detail::ptrIsSampler = reinterpret_cast<detail::PFNISSAMPLERPROC>(loadProc("glIsSampler"));
    if (detail::ptrIsSampler) ++loaded;
    detail::ptrIsShader = reinterpret_cast<detail::PFNISSHADERPROC>(loadProc("glIsShader"));
    if (detail::ptrIsShader) ++loaded;
    detail::ptrIsSync = reinterpret_cast<detail::PFNISSYNCPROC>(loadProc("glIsSync"));
    if (detail::ptrIsSync) ++loaded;
    detail::ptrIsTexture = reinterpret_cast<detail::PFNISTEXTUREPROC>(loadProc("glIsTexture"));
    if (detail::ptrIsTexture) ++loaded;
    detail::ptrIsTransformFeedback = reinterpret_cast<detail::PFNISTRANSFORMFEEDBACKPROC>(loadProc("glIsTransformFeedback"));
    if (detail::ptrIsTransformFeedback) ++loaded;
    detail::ptrIsVertexArray = reinterpret_cast<detail::PFNISVERTEXARRAYPROC>(loadProc("glIsVertexArray"));
    if (detail::ptrIsVertexArray) ++loaded;
    detail::ptrLineWidth = reinterpret_cast<detail::PFNLINEWIDTHPROC>(loadProc("glLineWidth"));
    if (detail::ptrLineWidth) ++loaded;
    detail::ptrLinkProgram = reinterpret_cast<detail::PFNLINKPROGRAMPROC>(loadProc("glLinkProgram"));
    if (detail::ptrLinkProgram) ++loaded;
    detail::ptrLogicOp = reinterpret_cast<detail::PFNLOGICOPPROC>(loadProc("glLogicOp"));
    if (detail::ptrLogicOp) ++loaded;
    detail::ptrMapBuffer = reinterpret_cast<detail::PFNMAPBUFFERPROC>(loadProc("glMapBuffer"));
    if (detail::ptrMapBuffer) ++loaded;
    detail::ptrMapBufferRange = reinterpret_cast<detail::PFNMAPBUFFERRANGEPROC>(loadProc("glMapBufferRange"));
    if (detail::ptrMapBufferRange) ++loaded;
    detail::ptrMapNamedBuffer = reinterpret_cast<detail::PFNMAPNAMEDBUFFERPROC>(loadProc("glMapNamedBuffer"));
    if (detail::ptrMapNamedBuffer) ++loaded;
    detail::ptrMapNamedBufferRange = reinterpret_cast<detail::PFNMAPNAMEDBUFFERRANGEPROC>(loadProc("glMapNamedBufferRange"));
    if (detail::ptrMapNamedBufferRange) ++loaded;
    detail::ptrMemoryBarrier = reinterpret_cast<detail::PFNMEMORYBARRIERPROC>(loadProc("glMemoryBarrier"));
    if (detail::ptrMemoryBarrier) ++loaded;
    detail::ptrMemoryBarrierByRegion = reinterpret_cast<detail::PFNMEMORYBARRIERBYREGIONPROC>(loadProc("glMemoryBarrierByRegion"));
    if (detail::ptrMemoryBarrierByRegion) ++loaded;
    detail::ptrMinSampleShading = reinterpret_cast<detail::PFNMINSAMPLESHADINGPROC>(loadProc("glMinSampleShading"));
    if (detail::ptrMinSampleShading) ++loaded;
    detail::ptrMultiDrawArrays = reinterpret_cast<detail::PFNMULTIDRAWARRAYSPROC>(loadProc("glMultiDrawArrays"));
    if (detail::ptrMultiDrawArrays) ++loaded;
    detail::ptrMultiDrawArraysIndirect = reinterpret_cast<detail::PFNMULTIDRAWARRAYSINDIRECTPROC>(loadProc("glMultiDrawArraysIndirect"));
    if (detail::ptrMultiDrawArraysIndirect) ++loaded;
    detail::ptrMultiDrawArraysIndirectCount = reinterpret_cast<detail::PFNMULTIDRAWARRAYSINDIRECTCOUNTPROC>(loadProc("glMultiDrawArraysIndirectCount"));
    if (detail::ptrMultiDrawArraysIndirectCount) ++loaded;
    detail::ptrMultiDrawElements = reinterpret_cast<detail::PFNMULTIDRAWELEMENTSPROC>(loadProc("glMultiDrawElements"));
    if (detail::ptrMultiDrawElements) ++loaded;
    detail::ptrMultiDrawElementsBaseVertex = reinterpret_cast<detail::PFNMULTIDRAWELEMENTSBASEVERTEXPROC>(loadProc("glMultiDrawElementsBaseVertex"));
    if (detail::ptrMultiDrawElementsBaseVertex) ++loaded;
    detail::ptrMultiDrawElementsIndirect = reinterpret_cast<detail::PFNMULTIDRAWELEMENTSINDIRECTPROC>(loadProc("glMultiDrawElementsIndirect"));
    if (detail::ptrMultiDrawElementsIndirect) ++loaded;
    detail::ptrMultiDrawElementsIndirectCount = reinterpret_cast<detail::PFNMULTIDRAWELEMENTSINDIRECTCOUNTPROC>(loadProc("glMultiDrawElementsIndirectCount"));
    if (detail::ptrMultiDrawElementsIndirectCount) ++loaded;
    detail::ptrNamedBufferData = reinterpret_cast<detail::PFNNAMEDBUFFERDATAPROC>(loadProc("glNamedBufferData"));
    if (detail::ptrNamedBufferData) ++loaded;
    detail::ptrNamedBufferStorage = reinterpret_cast<detail::PFNNAMEDBUFFERSTORAGEPROC>(loadProc("glNamedBufferStorage"));
    if (detail::ptrNamedBufferStorage) ++loaded;
    detail::ptrNamedBufferSubData = reinterpret_cast<detail::PFNNAMEDBUFFERSUBDATAPROC>(loadProc("glNamedBufferSubData"));
    if (detail::ptrNamedBufferSubData) ++loaded;
    detail::ptrNamedFramebufferDrawBuffer = reinterpret_cast<detail::PFNNAMEDFRAMEBUFFERDRAWBUFFERPROC>(loadProc("glNamedFramebufferDrawBuffer"));
    if (detail::ptrNamedFramebufferDrawBuffer) ++loaded;
    detail::ptrNamedFramebufferDrawBuffers = reinterpret_cast<detail::PFNNAMEDFRAMEBUFFERDRAWBUFFERSPROC>(loadProc("glNamedFramebufferDrawBuffers"));
    if (detail::ptrNamedFramebufferDrawBuffers) ++loaded;
    detail::ptrNamedFramebufferParameteri = reinterpret_cast<detail::PFNNAMEDFRAMEBUFFERPARAMETERIPROC>(loadProc("glNamedFramebufferParameteri"));
    if (detail::ptrNamedFramebufferParameteri) ++loaded;
    detail::ptrNamedFramebufferReadBuffer = reinterpret_cast<detail::PFNNAMEDFRAMEBUFFERREADBUFFERPROC>(loadProc("glNamedFramebufferReadBuffer"));
    if (detail::ptrNamedFramebufferReadBuffer) ++loaded;
    detail::ptrNamedFramebufferRenderbuffer = reinterpret_cast<detail::PFNNAMEDFRAMEBUFFERRENDERBUFFERPROC>(loadProc("glNamedFramebufferRenderbuffer"));
    if (detail::ptrNamedFramebufferRenderbuffer) ++loaded;
    detail::ptrNamedFramebufferTexture = reinterpret_cast<detail::PFNNAMEDFRAMEBUFFERTEXTUREPROC>(loadProc("glNamedFramebufferTexture"));
    if (detail::ptrNamedFramebufferTexture) ++loaded;
    detail::ptrNamedFramebufferTextureLayer = reinterpret_cast<detail::PFNNAMEDFRAMEBUFFERTEXTURELAYERPROC>(loadProc("glNamedFramebufferTextureLayer"));
    if (detail::ptrNamedFramebufferTextureLayer) ++loaded;
    detail::ptrNamedRenderbufferStorage = reinterpret_cast<detail::PFNNAMEDRENDERBUFFERSTORAGEPROC>(loadProc("glNamedRenderbufferStorage"));
    if (detail::ptrNamedRenderbufferStorage) ++loaded;
    detail::ptrNamedRenderbufferStorageMultisample = reinterpret_cast<detail::PFNNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC>(loadProc("glNamedRenderbufferStorageMultisample"));
    if (detail::ptrNamedRenderbufferStorageMultisample) ++loaded;
    detail::ptrObjectLabel = reinterpret_cast<detail::PFNOBJECTLABELPROC>(loadProc("glObjectLabel"));
    if (detail::ptrObjectLabel) ++loaded;
    detail::ptrObjectPtrLabel = reinterpret_cast<detail::PFNOBJECTPTRLABELPROC>(loadProc("glObjectPtrLabel"));
    if (detail::ptrObjectPtrLabel) ++loaded;
    detail::ptrPatchParameterfv = reinterpret_cast<detail::PFNPATCHPARAMETERFVPROC>(loadProc("glPatchParameterfv"));
    if (detail::ptrPatchParameterfv) ++loaded;
    detail::ptrPatchParameteri = reinterpret_cast<detail::PFNPATCHPARAMETERIPROC>(loadProc("glPatchParameteri"));
    if (detail::ptrPatchParameteri) ++loaded;
    detail::ptrPauseTransformFeedback = reinterpret_cast<detail::PFNPAUSETRANSFORMFEEDBACKPROC>(loadProc("glPauseTransformFeedback"));
    if (detail::ptrPauseTransformFeedback) ++loaded;
    detail::ptrPixelStoref = reinterpret_cast<detail::PFNPIXELSTOREFPROC>(loadProc("glPixelStoref"));
    if (detail::ptrPixelStoref) ++loaded;
    detail::ptrPixelStorei = reinterpret_cast<detail::PFNPIXELSTOREIPROC>(loadProc("glPixelStorei"));
    if (detail::ptrPixelStorei) ++loaded;
    detail::ptrPointParameterf = reinterpret_cast<detail::PFNPOINTPARAMETERFPROC>(loadProc("glPointParameterf"));
    if (detail::ptrPointParameterf) ++loaded;
    detail::ptrPointParameterfv = reinterpret_cast<detail::PFNPOINTPARAMETERFVPROC>(loadProc("glPointParameterfv"));
    if (detail::ptrPointParameterfv) ++loaded;
    detail::ptrPointParameteri = reinterpret_cast<detail::PFNPOINTPARAMETERIPROC>(loadProc("glPointParameteri"));
    if (detail::ptrPointParameteri) ++loaded;
    detail::ptrPointParameteriv = reinterpret_cast<detail::PFNPOINTPARAMETERIVPROC>(loadProc("glPointParameteriv"));
    if (detail::ptrPointParameteriv) ++loaded;
    detail::ptrPointSize = reinterpret_cast<detail::PFNPOINTSIZEPROC>(loadProc("glPointSize"));
    if (detail::ptrPointSize) ++loaded;
    detail::ptrPolygonMode = reinterpret_cast<detail::PFNPOLYGONMODEPROC>(loadProc("glPolygonMode"));
    if (detail::ptrPolygonMode) ++loaded;
    detail::ptrPolygonOffset = reinterpret_cast<detail::PFNPOLYGONOFFSETPROC>(loadProc("glPolygonOffset"));
    if (detail::ptrPolygonOffset) ++loaded;
    detail::ptrPolygonOffsetClamp = reinterpret_cast<detail::PFNPOLYGONOFFSETCLAMPPROC>(loadProc("glPolygonOffsetClamp"));
    if (detail::ptrPolygonOffsetClamp) ++loaded;
    detail::ptrPopDebugGroup = reinterpret_cast<detail::PFNPOPDEBUGGROUPPROC>(loadProc("glPopDebugGroup"));
    if (detail::ptrPopDebugGroup) ++loaded;
    detail::ptrPrimitiveRestartIndex = reinterpret_cast<detail::PFNPRIMITIVERESTARTINDEXPROC>(loadProc("glPrimitiveRestartIndex"));
    if (detail::ptrPrimitiveRestartIndex) ++loaded;
    detail::ptrProgramBinary = reinterpret_cast<detail::PFNPROGRAMBINARYPROC>(loadProc("glProgramBinary"));
    if (detail::ptrProgramBinary) ++loaded;
    detail::ptrProgramParameteri = reinterpret_cast<detail::PFNPROGRAMPARAMETERIPROC>(loadProc("glProgramParameteri"));
    if (detail::ptrProgramParameteri) ++loaded;
    detail::ptrProgramUniform1d = reinterpret_cast<detail::PFNPROGRAMUNIFORM1DPROC>(loadProc("glProgramUniform1d"));
    if (detail::ptrProgramUniform1d) ++loaded;
    detail::ptrProgramUniform1dv = reinterpret_cast<detail::PFNPROGRAMUNIFORM1DVPROC>(loadProc("glProgramUniform1dv"));
    if (detail::ptrProgramUniform1dv) ++loaded;
    detail::ptrProgramUniform1f = reinterpret_cast<detail::PFNPROGRAMUNIFORM1FPROC>(loadProc("glProgramUniform1f"));
    if (detail::ptrProgramUniform1f) ++loaded;
    detail::ptrProgramUniform1fv = reinterpret_cast<detail::PFNPROGRAMUNIFORM1FVPROC>(loadProc("glProgramUniform1fv"));
    if (detail::ptrProgramUniform1fv) ++loaded;
    detail::ptrProgramUniform1i = reinterpret_cast<detail::PFNPROGRAMUNIFORM1IPROC>(loadProc("glProgramUniform1i"));
    if (detail::ptrProgramUniform1i) ++loaded;
    detail::ptrProgramUniform1iv = reinterpret_cast<detail::PFNPROGRAMUNIFORM1IVPROC>(loadProc("glProgramUniform1iv"));
    if (detail::ptrProgramUniform1iv) ++loaded;
    detail::ptrProgramUniform1ui = reinterpret_cast<detail::PFNPROGRAMUNIFORM1UIPROC>(loadProc("glProgramUniform1ui"));
    if (detail::ptrProgramUniform1ui) ++loaded;
    detail::ptrProgramUniform1uiv = reinterpret_cast<detail::PFNPROGRAMUNIFORM1UIVPROC>(loadProc("glProgramUniform1uiv"));
    if (detail::ptrProgramUniform1uiv) ++loaded;
    detail::ptrProgramUniform2d = reinterpret_cast<detail::PFNPROGRAMUNIFORM2DPROC>(loadProc("glProgramUniform2d"));
    if (detail::ptrProgramUniform2d) ++loaded;
    detail::ptrProgramUniform2dv = reinterpret_cast<detail::PFNPROGRAMUNIFORM2DVPROC>(loadProc("glProgramUniform2dv"));
    if (detail::ptrProgramUniform2dv) ++loaded;
    detail::ptrProgramUniform2f = reinterpret_cast<detail::PFNPROGRAMUNIFORM2FPROC>(loadProc("glProgramUniform2f"));
    if (detail::ptrProgramUniform2f) ++loaded;
    detail::ptrProgramUniform2fv = reinterpret_cast<detail::PFNPROGRAMUNIFORM2FVPROC>(loadProc("glProgramUniform2fv"));
    if (detail::ptrProgramUniform2fv) ++loaded;
    detail::ptrProgramUniform2i = reinterpret_cast<detail::PFNPROGRAMUNIFORM2IPROC>(loadProc("glProgramUniform2i"));
    if (detail::ptrProgramUniform2i) ++loaded;
    detail::ptrProgramUniform2iv = reinterpret_cast<detail::PFNPROGRAMUNIFORM2IVPROC>(loadProc("glProgramUniform2iv"));
    if (detail::ptrProgramUniform2iv) ++loaded;
    detail::ptrProgramUniform2ui = reinterpret_cast<detail::PFNPROGRAMUNIFORM2UIPROC>(loadProc("glProgramUniform2ui"));
    if (detail::ptrProgramUniform2ui) ++loaded;
    detail::ptrProgramUniform2uiv = reinterpret_cast<detail::PFNPROGRAMUNIFORM2UIVPROC>(loadProc("glProgramUniform2uiv"));
    if (detail::ptrProgramUniform2uiv) ++loaded;
    detail::ptrProgramUniform3d = reinterpret_cast<detail::PFNPROGRAMUNIFORM3DPROC>(loadProc("glProgramUniform3d"));
    if (detail::ptrProgramUniform3d) ++loaded;
    detail::ptrProgramUniform3dv = reinterpret_cast<detail::PFNPROGRAMUNIFORM3DVPROC>(loadProc("glProgramUniform3dv"));
    if (detail::ptrProgramUniform3dv) ++loaded;
    detail::ptrProgramUniform3f = reinterpret_cast<detail::PFNPROGRAMUNIFORM3FPROC>(loadProc("glProgramUniform3f"));
    if (detail::ptrProgramUniform3f) ++loaded;
    detail::ptrProgramUniform3fv = reinterpret_cast<detail::PFNPROGRAMUNIFORM3FVPROC>(loadProc("glProgramUniform3fv"));
    if (detail::ptrProgramUniform3fv) ++loaded;
    detail::ptrProgramUniform3i = reinterpret_cast<detail::PFNPROGRAMUNIFORM3IPROC>(loadProc("glProgramUniform3i"));
    if (detail::ptrProgramUniform3i) ++loaded;
    detail::ptrProgramUniform3iv = reinterpret_cast<detail::PFNPROGRAMUNIFORM3IVPROC>(loadProc("glProgramUniform3iv"));
    if (detail::ptrProgramUniform3iv) ++loaded;
    detail::ptrProgramUniform3ui = reinterpret_cast<detail::PFNPROGRAMUNIFORM3UIPROC>(loadProc("glProgramUniform3ui"));
    if (detail::ptrProgramUniform3ui) ++loaded;
    detail::ptrProgramUniform3uiv = reinterpret_cast<detail::PFNPROGRAMUNIFORM3UIVPROC>(loadProc("glProgramUniform3uiv"));
    if (detail::ptrProgramUniform3uiv) ++loaded;
    detail::ptrProgramUniform4d = reinterpret_cast<detail::PFNPROGRAMUNIFORM4DPROC>(loadProc("glProgramUniform4d"));
    if (detail::ptrProgramUniform4d) ++loaded;
    detail::ptrProgramUniform4dv = reinterpret_cast<detail::PFNPROGRAMUNIFORM4DVPROC>(loadProc("glProgramUniform4dv"));
    if (detail::ptrProgramUniform4dv) ++loaded;
    detail::ptrProgramUniform4f = reinterpret_cast<detail::PFNPROGRAMUNIFORM4FPROC>(loadProc("glProgramUniform4f"));
    if (detail::ptrProgramUniform4f) ++loaded;
    detail::ptrProgramUniform4fv = reinterpret_cast<detail::PFNPROGRAMUNIFORM4FVPROC>(loadProc("glProgramUniform4fv"));
    if (detail::ptrProgramUniform4fv) ++loaded;
    detail::ptrProgramUniform4i = reinterpret_cast<detail::PFNPROGRAMUNIFORM4IPROC>(loadProc("glProgramUniform4i"));
    if (detail::ptrProgramUniform4i) ++loaded;
    detail::ptrProgramUniform4iv = reinterpret_cast<detail::PFNPROGRAMUNIFORM4IVPROC>(loadProc("glProgramUniform4iv"));
    if (detail::ptrProgramUniform4iv) ++loaded;
    detail::ptrProgramUniform4ui = reinterpret_cast<detail::PFNPROGRAMUNIFORM4UIPROC>(loadProc("glProgramUniform4ui"));
    if (detail::ptrProgramUniform4ui) ++loaded;
    detail::ptrProgramUniform4uiv = reinterpret_cast<detail::PFNPROGRAMUNIFORM4UIVPROC>(loadProc("glProgramUniform4uiv"));
    if (detail::ptrProgramUniform4uiv) ++loaded;
    detail::ptrProgramUniformMatrix2dv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX2DVPROC>(loadProc("glProgramUniformMatrix2dv"));
    if (detail::ptrProgramUniformMatrix2dv) ++loaded;
    detail::ptrProgramUniformMatrix2fv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX2FVPROC>(loadProc("glProgramUniformMatrix2fv"));
    if (detail::ptrProgramUniformMatrix2fv) ++loaded;
    detail::ptrProgramUniformMatrix2x3dv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX2X3DVPROC>(loadProc("glProgramUniformMatrix2x3dv"));
    if (detail::ptrProgramUniformMatrix2x3dv) ++loaded;
    detail::ptrProgramUniformMatrix2x3fv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX2X3FVPROC>(loadProc("glProgramUniformMatrix2x3fv"));
    if (detail::ptrProgramUniformMatrix2x3fv) ++loaded;
    detail::ptrProgramUniformMatrix2x4dv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX2X4DVPROC>(loadProc("glProgramUniformMatrix2x4dv"));
    if (detail::ptrProgramUniformMatrix2x4dv) ++loaded;
    detail::ptrProgramUniformMatrix2x4fv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX2X4FVPROC>(loadProc("glProgramUniformMatrix2x4fv"));
    if (detail::ptrProgramUniformMatrix2x4fv) ++loaded;
    detail::ptrProgramUniformMatrix3dv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX3DVPROC>(loadProc("glProgramUniformMatrix3dv"));
    if (detail::ptrProgramUniformMatrix3dv) ++loaded;
    detail::ptrProgramUniformMatrix3fv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX3FVPROC>(loadProc("glProgramUniformMatrix3fv"));
    if (detail::ptrProgramUniformMatrix3fv) ++loaded;
    detail::ptrProgramUniformMatrix3x2dv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX3X2DVPROC>(loadProc("glProgramUniformMatrix3x2dv"));
    if (detail::ptrProgramUniformMatrix3x2dv) ++loaded;
    detail::ptrProgramUniformMatrix3x2fv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX3X2FVPROC>(loadProc("glProgramUniformMatrix3x2fv"));
    if (detail::ptrProgramUniformMatrix3x2fv) ++loaded;
    detail::ptrProgramUniformMatrix3x4dv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX3X4DVPROC>(loadProc("glProgramUniformMatrix3x4dv"));
    if (detail::ptrProgramUniformMatrix3x4dv) ++loaded;
    detail::ptrProgramUniformMatrix3x4fv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX3X4FVPROC>(loadProc("glProgramUniformMatrix3x4fv"));
    if (detail::ptrProgramUniformMatrix3x4fv) ++loaded;
    detail::ptrProgramUniformMatrix4dv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX4DVPROC>(loadProc("glProgramUniformMatrix4dv"));
    if (detail::ptrProgramUniformMatrix4dv) ++loaded;
    detail::ptrProgramUniformMatrix4fv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX4FVPROC>(loadProc("glProgramUniformMatrix4fv"));
    if (detail::ptrProgramUniformMatrix4fv) ++loaded;
    detail::ptrProgramUniformMatrix4x2dv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX4X2DVPROC>(loadProc("glProgramUniformMatrix4x2dv"));
    if (detail::ptrProgramUniformMatrix4x2dv) ++loaded;
    detail::ptrProgramUniformMatrix4x2fv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX4X2FVPROC>(loadProc("glProgramUniformMatrix4x2fv"));
    if (detail::ptrProgramUniformMatrix4x2fv) ++loaded;
    detail::ptrProgramUniformMatrix4x3dv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX4X3DVPROC>(loadProc("glProgramUniformMatrix4x3dv"));
    if (detail::ptrProgramUniformMatrix4x3dv) ++loaded;
    detail::ptrProgramUniformMatrix4x3fv = reinterpret_cast<detail::PFNPROGRAMUNIFORMMATRIX4X3FVPROC>(loadProc("glProgramUniformMatrix4x3fv"));
    if (detail::ptrProgramUniformMatrix4x3fv) ++loaded;
    detail::ptrProvokingVertex = reinterpret_cast<detail::PFNPROVOKINGVERTEXPROC>(loadProc("glProvokingVertex"));
    if (detail::ptrProvokingVertex) ++loaded;
    detail::ptrPushDebugGroup = reinterpret_cast<detail::PFNPUSHDEBUGGROUPPROC>(loadProc("glPushDebugGroup"));
    if (detail::ptrPushDebugGroup) ++loaded;
    detail::ptrQueryCounter = reinterpret_cast<detail::PFNQUERYCOUNTERPROC>(loadProc("glQueryCounter"));
    if (detail::ptrQueryCounter) ++loaded;
    detail::ptrReadBuffer = reinterpret_cast<detail::PFNREADBUFFERPROC>(loadProc("glReadBuffer"));
    if (detail::ptrReadBuffer) ++loaded;
    detail::ptrReadPixels = reinterpret_cast<detail::PFNREADPIXELSPROC>(loadProc("glReadPixels"));
    if (detail::ptrReadPixels) ++loaded;
    detail::ptrReadnPixels = reinterpret_cast<detail::PFNREADNPIXELSPROC>(loadProc("glReadnPixels"));
    if (detail::ptrReadnPixels) ++loaded;
    detail::ptrReleaseShaderCompiler = reinterpret_cast<detail::PFNRELEASESHADERCOMPILERPROC>(loadProc("glReleaseShaderCompiler"));
    if (detail::ptrReleaseShaderCompiler) ++loaded;
    detail::ptrRenderbufferStorage = reinterpret_cast<detail::PFNRENDERBUFFERSTORAGEPROC>(loadProc("glRenderbufferStorage"));
    if (detail::ptrRenderbufferStorage) ++loaded;
    detail::ptrRenderbufferStorageMultisample = reinterpret_cast<detail::PFNRENDERBUFFERSTORAGEMULTISAMPLEPROC>(loadProc("glRenderbufferStorageMultisample"));
    if (detail::ptrRenderbufferStorageMultisample) ++loaded;
    detail::ptrResumeTransformFeedback = reinterpret_cast<detail::PFNRESUMETRANSFORMFEEDBACKPROC>(loadProc("glResumeTransformFeedback"));
    if (detail::ptrResumeTransformFeedback) ++loaded;
    detail::ptrSampleCoverage = reinterpret_cast<detail::PFNSAMPLECOVERAGEPROC>(loadProc("glSampleCoverage"));
    if (detail::ptrSampleCoverage) ++loaded;
    detail::ptrSampleMaski = reinterpret_cast<detail::PFNSAMPLEMASKIPROC>(loadProc("glSampleMaski"));
    if (detail::ptrSampleMaski) ++loaded;
    detail::ptrSamplerParameterIiv = reinterpret_cast<detail::PFNSAMPLERPARAMETERIIVPROC>(loadProc("glSamplerParameterIiv"));
    if (detail::ptrSamplerParameterIiv) ++loaded;
    detail::ptrSamplerParameterIuiv = reinterpret_cast<detail::PFNSAMPLERPARAMETERIUIVPROC>(loadProc("glSamplerParameterIuiv"));
    if (detail::ptrSamplerParameterIuiv) ++loaded;
    detail::ptrSamplerParameterf = reinterpret_cast<detail::PFNSAMPLERPARAMETERFPROC>(loadProc("glSamplerParameterf"));
    if (detail::ptrSamplerParameterf) ++loaded;
    detail::ptrSamplerParameterfv = reinterpret_cast<detail::PFNSAMPLERPARAMETERFVPROC>(loadProc("glSamplerParameterfv"));
    if (detail::ptrSamplerParameterfv) ++loaded;
    detail::ptrSamplerParameteri = reinterpret_cast<detail::PFNSAMPLERPARAMETERIPROC>(loadProc("glSamplerParameteri"));
    if (detail::ptrSamplerParameteri) ++loaded;
    detail::ptrSamplerParameteriv = reinterpret_cast<detail::PFNSAMPLERPARAMETERIVPROC>(loadProc("glSamplerParameteriv"));
    if (detail::ptrSamplerParameteriv) ++loaded;
    detail::ptrScissor = reinterpret_cast<detail::PFNSCISSORPROC>(loadProc("glScissor"));
    if (detail::ptrScissor) ++loaded;
    detail::ptrScissorArrayv = reinterpret_cast<detail::PFNSCISSORARRAYVPROC>(loadProc("glScissorArrayv"));
    if (detail::ptrScissorArrayv) ++loaded;
    detail::ptrScissorIndexed = reinterpret_cast<detail::PFNSCISSORINDEXEDPROC>(loadProc("glScissorIndexed"));
    if (detail::ptrScissorIndexed) ++loaded;
    detail::ptrScissorIndexedv = reinterpret_cast<detail::PFNSCISSORINDEXEDVPROC>(loadProc("glScissorIndexedv"));
    if (detail::ptrScissorIndexedv) ++loaded;
    detail::ptrShaderBinary = reinterpret_cast<detail::PFNSHADERBINARYPROC>(loadProc("glShaderBinary"));
    if (detail::ptrShaderBinary) ++loaded;
    detail::ptrShaderSource = reinterpret_cast<detail::PFNSHADERSOURCEPROC>(loadProc("glShaderSource"));
    if (detail::ptrShaderSource) ++loaded;
    detail::ptrShaderStorageBlockBinding = reinterpret_cast<detail::PFNSHADERSTORAGEBLOCKBINDINGPROC>(loadProc("glShaderStorageBlockBinding"));
    if (detail::ptrShaderStorageBlockBinding) ++loaded;
    detail::ptrSpecializeShader = reinterpret_cast<detail::PFNSPECIALIZESHADERPROC>(loadProc("glSpecializeShader"));
    if (detail::ptrSpecializeShader) ++loaded;
    detail::ptrStencilFunc = reinterpret_cast<detail::PFNSTENCILFUNCPROC>(loadProc("glStencilFunc"));
    if (detail::ptrStencilFunc) ++loaded;
    detail::ptrStencilFuncSeparate = reinterpret_cast<detail::PFNSTENCILFUNCSEPARATEPROC>(loadProc("glStencilFuncSeparate"));
    if (detail::ptrStencilFuncSeparate) ++loaded;
    detail::ptrStencilMask = reinterpret_cast<detail::PFNSTENCILMASKPROC>(loadProc("glStencilMask"));
    if (detail::ptrStencilMask) ++loaded;
    detail::ptrStencilMaskSeparate = reinterpret_cast<detail::PFNSTENCILMASKSEPARATEPROC>(loadProc("glStencilMaskSeparate"));
    if (detail::ptrStencilMaskSeparate) ++loaded;
    detail::ptrStencilOp = reinterpret_cast<detail::PFNSTENCILOPPROC>(loadProc("glStencilOp"));
    if (detail::ptrStencilOp) ++loaded;
    detail::ptrStencilOpSeparate = reinterpret_cast<detail::PFNSTENCILOPSEPARATEPROC>(loadProc("glStencilOpSeparate"));
    if (detail::ptrStencilOpSeparate) ++loaded;
    detail::ptrTexBuffer = reinterpret_cast<detail::PFNTEXBUFFERPROC>(loadProc("glTexBuffer"));
    if (detail::ptrTexBuffer) ++loaded;
    detail::ptrTexBufferRange = reinterpret_cast<detail::PFNTEXBUFFERRANGEPROC>(loadProc("glTexBufferRange"));
    if (detail::ptrTexBufferRange) ++loaded;
    detail::ptrTexImage1D = reinterpret_cast<detail::PFNTEXIMAGE1DPROC>(loadProc("glTexImage1D"));
    if (detail::ptrTexImage1D) ++loaded;
    detail::ptrTexImage2D = reinterpret_cast<detail::PFNTEXIMAGE2DPROC>(loadProc("glTexImage2D"));
    if (detail::ptrTexImage2D) ++loaded;
    detail::ptrTexImage2DMultisample = reinterpret_cast<detail::PFNTEXIMAGE2DMULTISAMPLEPROC>(loadProc("glTexImage2DMultisample"));
    if (detail::ptrTexImage2DMultisample) ++loaded;
    detail::ptrTexImage3D = reinterpret_cast<detail::PFNTEXIMAGE3DPROC>(loadProc("glTexImage3D"));
    if (detail::ptrTexImage3D) ++loaded;
    detail::ptrTexImage3DMultisample = reinterpret_cast<detail::PFNTEXIMAGE3DMULTISAMPLEPROC>(loadProc("glTexImage3DMultisample"));
    if (detail::ptrTexImage3DMultisample) ++loaded;
    detail::ptrTexParameterIiv = reinterpret_cast<detail::PFNTEXPARAMETERIIVPROC>(loadProc("glTexParameterIiv"));
    if (detail::ptrTexParameterIiv) ++loaded;
    detail::ptrTexParameterIuiv = reinterpret_cast<detail::PFNTEXPARAMETERIUIVPROC>(loadProc("glTexParameterIuiv"));
    if (detail::ptrTexParameterIuiv) ++loaded;
    detail::ptrTexParameterf = reinterpret_cast<detail::PFNTEXPARAMETERFPROC>(loadProc("glTexParameterf"));
    if (detail::ptrTexParameterf) ++loaded;
    detail::ptrTexParameterfv = reinterpret_cast<detail::PFNTEXPARAMETERFVPROC>(loadProc("glTexParameterfv"));
    if (detail::ptrTexParameterfv) ++loaded;
    detail::ptrTexParameteri = reinterpret_cast<detail::PFNTEXPARAMETERIPROC>(loadProc("glTexParameteri"));
    if (detail::ptrTexParameteri) ++loaded;
    detail::ptrTexParameteriv = reinterpret_cast<detail::PFNTEXPARAMETERIVPROC>(loadProc("glTexParameteriv"));
    if (detail::ptrTexParameteriv) ++loaded;
    detail::ptrTexStorage1D = reinterpret_cast<detail::PFNTEXSTORAGE1DPROC>(loadProc("glTexStorage1D"));
    if (detail::ptrTexStorage1D) ++loaded;
    detail::ptrTexStorage2D = reinterpret_cast<detail::PFNTEXSTORAGE2DPROC>(loadProc("glTexStorage2D"));
    if (detail::ptrTexStorage2D) ++loaded;
    detail::ptrTexStorage2DMultisample = reinterpret_cast<detail::PFNTEXSTORAGE2DMULTISAMPLEPROC>(loadProc("glTexStorage2DMultisample"));
    if (detail::ptrTexStorage2DMultisample) ++loaded;
    detail::ptrTexStorage3D = reinterpret_cast<detail::PFNTEXSTORAGE3DPROC>(loadProc("glTexStorage3D"));
    if (detail::ptrTexStorage3D) ++loaded;
    detail::ptrTexStorage3DMultisample = reinterpret_cast<detail::PFNTEXSTORAGE3DMULTISAMPLEPROC>(loadProc("glTexStorage3DMultisample"));
    if (detail::ptrTexStorage3DMultisample) ++loaded;
    detail::ptrTexSubImage1D = reinterpret_cast<detail::PFNTEXSUBIMAGE1DPROC>(loadProc("glTexSubImage1D"));
    if (detail::ptrTexSubImage1D) ++loaded;
    detail::ptrTexSubImage2D = reinterpret_cast<detail::PFNTEXSUBIMAGE2DPROC>(loadProc("glTexSubImage2D"));
    if (detail::ptrTexSubImage2D) ++loaded;
    detail::ptrTexSubImage3D = reinterpret_cast<detail::PFNTEXSUBIMAGE3DPROC>(loadProc("glTexSubImage3D"));
    if (detail::ptrTexSubImage3D) ++loaded;
    detail::ptrTextureBarrier = reinterpret_cast<detail::PFNTEXTUREBARRIERPROC>(loadProc("glTextureBarrier"));
    if (detail::ptrTextureBarrier) ++loaded;
    detail::ptrTextureBuffer = reinterpret_cast<detail::PFNTEXTUREBUFFERPROC>(loadProc("glTextureBuffer"));
    if (detail::ptrTextureBuffer) ++loaded;
    detail::ptrTextureBufferRange = reinterpret_cast<detail::PFNTEXTUREBUFFERRANGEPROC>(loadProc("glTextureBufferRange"));
    if (detail::ptrTextureBufferRange) ++loaded;
    detail::ptrTextureParameterIiv = reinterpret_cast<detail::PFNTEXTUREPARAMETERIIVPROC>(loadProc("glTextureParameterIiv"));
    if (detail::ptrTextureParameterIiv) ++loaded;
    detail::ptrTextureParameterIuiv = reinterpret_cast<detail::PFNTEXTUREPARAMETERIUIVPROC>(loadProc("glTextureParameterIuiv"));
    if (detail::ptrTextureParameterIuiv) ++loaded;
    detail::ptrTextureParameterf = reinterpret_cast<detail::PFNTEXTUREPARAMETERFPROC>(loadProc("glTextureParameterf"));
    if (detail::ptrTextureParameterf) ++loaded;
    detail::ptrTextureParameterfv = reinterpret_cast<detail::PFNTEXTUREPARAMETERFVPROC>(loadProc("glTextureParameterfv"));
    if (detail::ptrTextureParameterfv) ++loaded;
    detail::ptrTextureParameteri = reinterpret_cast<detail::PFNTEXTUREPARAMETERIPROC>(loadProc("glTextureParameteri"));
    if (detail::ptrTextureParameteri) ++loaded;
    detail::ptrTextureParameteriv = reinterpret_cast<detail::PFNTEXTUREPARAMETERIVPROC>(loadProc("glTextureParameteriv"));
    if (detail::ptrTextureParameteriv) ++loaded;
    detail::ptrTextureStorage1D = reinterpret_cast<detail::PFNTEXTURESTORAGE1DPROC>(loadProc("glTextureStorage1D"));
    if (detail::ptrTextureStorage1D) ++loaded;
    detail::ptrTextureStorage2D = reinterpret_cast<detail::PFNTEXTURESTORAGE2DPROC>(loadProc("glTextureStorage2D"));
    if (detail::ptrTextureStorage2D) ++loaded;
    detail::ptrTextureStorage2DMultisample = reinterpret_cast<detail::PFNTEXTURESTORAGE2DMULTISAMPLEPROC>(loadProc("glTextureStorage2DMultisample"));
    if (detail::ptrTextureStorage2DMultisample) ++loaded;
    detail::ptrTextureStorage3D = reinterpret_cast<detail::PFNTEXTURESTORAGE3DPROC>(loadProc("glTextureStorage3D"));
    if (detail::ptrTextureStorage3D) ++loaded;
    detail::ptrTextureStorage3DMultisample = reinterpret_cast<detail::PFNTEXTURESTORAGE3DMULTISAMPLEPROC>(loadProc("glTextureStorage3DMultisample"));
    if (detail::ptrTextureStorage3DMultisample) ++loaded;
    detail::ptrTextureSubImage1D = reinterpret_cast<detail::PFNTEXTURESUBIMAGE1DPROC>(loadProc("glTextureSubImage1D"));
    if (detail::ptrTextureSubImage1D) ++loaded;
    detail::ptrTextureSubImage2D = reinterpret_cast<detail::PFNTEXTURESUBIMAGE2DPROC>(loadProc("glTextureSubImage2D"));
    if (detail::ptrTextureSubImage2D) ++loaded;
    detail::ptrTextureSubImage3D = reinterpret_cast<detail::PFNTEXTURESUBIMAGE3DPROC>(loadProc("glTextureSubImage3D"));
    if (detail::ptrTextureSubImage3D) ++loaded;
    detail::ptrTextureView = reinterpret_cast<detail::PFNTEXTUREVIEWPROC>(loadProc("glTextureView"));
    if (detail::ptrTextureView) ++loaded;
    detail::ptrTransformFeedbackBufferBase = reinterpret_cast<detail::PFNTRANSFORMFEEDBACKBUFFERBASEPROC>(loadProc("glTransformFeedbackBufferBase"));
    if (detail::ptrTransformFeedbackBufferBase) ++loaded;
    detail::ptrTransformFeedbackBufferRange = reinterpret_cast<detail::PFNTRANSFORMFEEDBACKBUFFERRANGEPROC>(loadProc("glTransformFeedbackBufferRange"));
    if (detail::ptrTransformFeedbackBufferRange) ++loaded;
    detail::ptrTransformFeedbackVaryings = reinterpret_cast<detail::PFNTRANSFORMFEEDBACKVARYINGSPROC>(loadProc("glTransformFeedbackVaryings"));
    if (detail::ptrTransformFeedbackVaryings) ++loaded;
    detail::ptrUniform1d = reinterpret_cast<detail::PFNUNIFORM1DPROC>(loadProc("glUniform1d"));
    if (detail::ptrUniform1d) ++loaded;
    detail::ptrUniform1dv = reinterpret_cast<detail::PFNUNIFORM1DVPROC>(loadProc("glUniform1dv"));
    if (detail::ptrUniform1dv) ++loaded;
    detail::ptrUniform1f = reinterpret_cast<detail::PFNUNIFORM1FPROC>(loadProc("glUniform1f"));
    if (detail::ptrUniform1f) ++loaded;
    detail::ptrUniform1fv = reinterpret_cast<detail::PFNUNIFORM1FVPROC>(loadProc("glUniform1fv"));
    if (detail::ptrUniform1fv) ++loaded;
    detail::ptrUniform1i = reinterpret_cast<detail::PFNUNIFORM1IPROC>(loadProc("glUniform1i"));
    if (detail::ptrUniform1i) ++loaded;
    detail::ptrUniform1iv = reinterpret_cast<detail::PFNUNIFORM1IVPROC>(loadProc("glUniform1iv"));
    if (detail::ptrUniform1iv) ++loaded;
    detail::ptrUniform1ui = reinterpret_cast<detail::PFNUNIFORM1UIPROC>(loadProc("glUniform1ui"));
    if (detail::ptrUniform1ui) ++loaded;
    detail::ptrUniform1uiv = reinterpret_cast<detail::PFNUNIFORM1UIVPROC>(loadProc("glUniform1uiv"));
    if (detail::ptrUniform1uiv) ++loaded;
    detail::ptrUniform2d = reinterpret_cast<detail::PFNUNIFORM2DPROC>(loadProc("glUniform2d"));
    if (detail::ptrUniform2d) ++loaded;
    detail::ptrUniform2dv = reinterpret_cast<detail::PFNUNIFORM2DVPROC>(loadProc("glUniform2dv"));
    if (detail::ptrUniform2dv) ++loaded;
    detail::ptrUniform2f = reinterpret_cast<detail::PFNUNIFORM2FPROC>(loadProc("glUniform2f"));
    if (detail::ptrUniform2f) ++loaded;
    detail::ptrUniform2fv = reinterpret_cast<detail::PFNUNIFORM2FVPROC>(loadProc("glUniform2fv"));
    if (detail::ptrUniform2fv) ++loaded;
    detail::ptrUniform2i = reinterpret_cast<detail::PFNUNIFORM2IPROC>(loadProc("glUniform2i"));
    if (detail::ptrUniform2i) ++loaded;
    detail::ptrUniform2iv = reinterpret_cast<detail::PFNUNIFORM2IVPROC>(loadProc("glUniform2iv"));
    if (detail::ptrUniform2iv) ++loaded;
    detail::ptrUniform2ui = reinterpret_cast<detail::PFNUNIFORM2UIPROC>(loadProc("glUniform2ui"));
    if (detail::ptrUniform2ui) ++loaded;
    detail::ptrUniform2uiv = reinterpret_cast<detail::PFNUNIFORM2UIVPROC>(loadProc("glUniform2uiv"));
    if (detail::ptrUniform2uiv) ++loaded;
    detail::ptrUniform3d = reinterpret_cast<detail::PFNUNIFORM3DPROC>(loadProc("glUniform3d"));
    if (detail::ptrUniform3d) ++loaded;
    detail::ptrUniform3dv = reinterpret_cast<detail::PFNUNIFORM3DVPROC>(loadProc("glUniform3dv"));
    if (detail::ptrUniform3dv) ++loaded;
    detail::ptrUniform3f = reinterpret_cast<detail::PFNUNIFORM3FPROC>(loadProc("glUniform3f"));
    if (detail::ptrUniform3f) ++loaded;
    detail::ptrUniform3fv = reinterpret_cast<detail::PFNUNIFORM3FVPROC>(loadProc("glUniform3fv"));
    if (detail::ptrUniform3fv) ++loaded;
    detail::ptrUniform3i = reinterpret_cast<detail::PFNUNIFORM3IPROC>(loadProc("glUniform3i"));
    if (detail::ptrUniform3i) ++loaded;
    detail::ptrUniform3iv = reinterpret_cast<detail::PFNUNIFORM3IVPROC>(loadProc("glUniform3iv"));
    if (detail::ptrUniform3iv) ++loaded;
    detail::ptrUniform3ui = reinterpret_cast<detail::PFNUNIFORM3UIPROC>(loadProc("glUniform3ui"));
    if (detail::ptrUniform3ui) ++loaded;
    detail::ptrUniform3uiv = reinterpret_cast<detail::PFNUNIFORM3UIVPROC>(loadProc("glUniform3uiv"));
    if (detail::ptrUniform3uiv) ++loaded;
    detail::ptrUniform4d = reinterpret_cast<detail::PFNUNIFORM4DPROC>(loadProc("glUniform4d"));
    if (detail::ptrUniform4d) ++loaded;
    detail::ptrUniform4dv = reinterpret_cast<detail::PFNUNIFORM4DVPROC>(loadProc("glUniform4dv"));
    if (detail::ptrUniform4dv) ++loaded;
    detail::ptrUniform4f = reinterpret_cast<detail::PFNUNIFORM4FPROC>(loadProc("glUniform4f"));
    if (detail::ptrUniform4f) ++loaded;
    detail::ptrUniform4fv = reinterpret_cast<detail::PFNUNIFORM4FVPROC>(loadProc("glUniform4fv"));
    if (detail::ptrUniform4fv) ++loaded;
    detail::ptrUniform4i = reinterpret_cast<detail::PFNUNIFORM4IPROC>(loadProc("glUniform4i"));
    if (detail::ptrUniform4i) ++loaded;
    detail::ptrUniform4iv = reinterpret_cast<detail::PFNUNIFORM4IVPROC>(loadProc("glUniform4iv"));
    if (detail::ptrUniform4iv) ++loaded;
    detail::ptrUniform4ui = reinterpret_cast<detail::PFNUNIFORM4UIPROC>(loadProc("glUniform4ui"));
    if (detail::ptrUniform4ui) ++loaded;
    detail::ptrUniform4uiv = reinterpret_cast<detail::PFNUNIFORM4UIVPROC>(loadProc("glUniform4uiv"));
    if (detail::ptrUniform4uiv) ++loaded;
    detail::ptrUniformBlockBinding = reinterpret_cast<detail::PFNUNIFORMBLOCKBINDINGPROC>(loadProc("glUniformBlockBinding"));
    if (detail::ptrUniformBlockBinding) ++loaded;
    detail::ptrUniformMatrix2dv = reinterpret_cast<detail::PFNUNIFORMMATRIX2DVPROC>(loadProc("glUniformMatrix2dv"));
    if (detail::ptrUniformMatrix2dv) ++loaded;
    detail::ptrUniformMatrix2fv = reinterpret_cast<detail::PFNUNIFORMMATRIX2FVPROC>(loadProc("glUniformMatrix2fv"));
    if (detail::ptrUniformMatrix2fv) ++loaded;
    detail::ptrUniformMatrix2x3dv = reinterpret_cast<detail::PFNUNIFORMMATRIX2X3DVPROC>(loadProc("glUniformMatrix2x3dv"));
    if (detail::ptrUniformMatrix2x3dv) ++loaded;
    detail::ptrUniformMatrix2x3fv = reinterpret_cast<detail::PFNUNIFORMMATRIX2X3FVPROC>(loadProc("glUniformMatrix2x3fv"));
    if (detail::ptrUniformMatrix2x3fv) ++loaded;
    detail::ptrUniformMatrix2x4dv = reinterpret_cast<detail::PFNUNIFORMMATRIX2X4DVPROC>(loadProc("glUniformMatrix2x4dv"));
    if (detail::ptrUniformMatrix2x4dv) ++loaded;
    detail::ptrUniformMatrix2x4fv = reinterpret_cast<detail::PFNUNIFORMMATRIX2X4FVPROC>(loadProc("glUniformMatrix2x4fv"));
    if (detail::ptrUniformMatrix2x4fv) ++loaded;
    detail::ptrUniformMatrix3dv = reinterpret_cast<detail::PFNUNIFORMMATRIX3DVPROC>(loadProc("glUniformMatrix3dv"));
    if (detail::ptrUniformMatrix3dv) ++loaded;
    detail::ptrUniformMatrix3fv = reinterpret_cast<detail::PFNUNIFORMMATRIX3FVPROC>(loadProc("glUniformMatrix3fv"));
    if (detail::ptrUniformMatrix3fv) ++loaded;
    detail::ptrUniformMatrix3x2dv = reinterpret_cast<detail::PFNUNIFORMMATRIX3X2DVPROC>(loadProc("glUniformMatrix3x2dv"));
    if (detail::ptrUniformMatrix3x2dv) ++loaded;
    detail::ptrUniformMatrix3x2fv = reinterpret_cast<detail::PFNUNIFORMMATRIX3X2FVPROC>(loadProc("glUniformMatrix3x2fv"));
    if (detail::ptrUniformMatrix3x2fv) ++loaded;
    detail::ptrUniformMatrix3x4dv = reinterpret_cast<detail::PFNUNIFORMMATRIX3X4DVPROC>(loadProc("glUniformMatrix3x4dv"));
    if (detail::ptrUniformMatrix3x4dv) ++loaded;
    detail::ptrUniformMatrix3x4fv = reinterpret_cast<detail::PFNUNIFORMMATRIX3X4FVPROC>(loadProc("glUniformMatrix3x4fv"));
    if (detail::ptrUniformMatrix3x4fv) ++loaded;
    detail::ptrUniformMatrix4dv = reinterpret_cast<detail::PFNUNIFORMMATRIX4DVPROC>(loadProc("glUniformMatrix4dv"));
    if (detail::ptrUniformMatrix4dv) ++loaded;
    detail::ptrUniformMatrix4fv = reinterpret_cast<detail::PFNUNIFORMMATRIX4FVPROC>(loadProc("glUniformMatrix4fv"));
    if (detail::ptrUniformMatrix4fv) ++loaded;
    detail::ptrUniformMatrix4x2dv = reinterpret_cast<detail::PFNUNIFORMMATRIX4X2DVPROC>(loadProc("glUniformMatrix4x2dv"));
    if (detail::ptrUniformMatrix4x2dv) ++loaded;
    detail::ptrUniformMatrix4x2fv = reinterpret_cast<detail::PFNUNIFORMMATRIX4X2FVPROC>(loadProc("glUniformMatrix4x2fv"));
    if (detail::ptrUniformMatrix4x2fv) ++loaded;
    detail::ptrUniformMatrix4x3dv = reinterpret_cast<detail::PFNUNIFORMMATRIX4X3DVPROC>(loadProc("glUniformMatrix4x3dv"));
    if (detail::ptrUniformMatrix4x3dv) ++loaded;
    detail::ptrUniformMatrix4x3fv = reinterpret_cast<detail::PFNUNIFORMMATRIX4X3FVPROC>(loadProc("glUniformMatrix4x3fv"));
    if (detail::ptrUniformMatrix4x3fv) ++loaded;
    detail::ptrUniformSubroutinesuiv = reinterpret_cast<detail::PFNUNIFORMSUBROUTINESUIVPROC>(loadProc("glUniformSubroutinesuiv"));
    if (detail::ptrUniformSubroutinesuiv) ++loaded;
    detail::ptrUnmapBuffer = reinterpret_cast<detail::PFNUNMAPBUFFERPROC>(loadProc("glUnmapBuffer"));
    if (detail::ptrUnmapBuffer) ++loaded;
    detail::ptrUnmapNamedBuffer = reinterpret_cast<detail::PFNUNMAPNAMEDBUFFERPROC>(loadProc("glUnmapNamedBuffer"));
    if (detail::ptrUnmapNamedBuffer) ++loaded;
    detail::ptrUseProgram = reinterpret_cast<detail::PFNUSEPROGRAMPROC>(loadProc("glUseProgram"));
    if (detail::ptrUseProgram) ++loaded;
    detail::ptrUseProgramStages = reinterpret_cast<detail::PFNUSEPROGRAMSTAGESPROC>(loadProc("glUseProgramStages"));
    if (detail::ptrUseProgramStages) ++loaded;
    detail::ptrValidateProgram = reinterpret_cast<detail::PFNVALIDATEPROGRAMPROC>(loadProc("glValidateProgram"));
    if (detail::ptrValidateProgram) ++loaded;
    detail::ptrValidateProgramPipeline = reinterpret_cast<detail::PFNVALIDATEPROGRAMPIPELINEPROC>(loadProc("glValidateProgramPipeline"));
    if (detail::ptrValidateProgramPipeline) ++loaded;
    detail::ptrVertexArrayAttribBinding = reinterpret_cast<detail::PFNVERTEXARRAYATTRIBBINDINGPROC>(loadProc("glVertexArrayAttribBinding"));
    if (detail::ptrVertexArrayAttribBinding) ++loaded;
    detail::ptrVertexArrayAttribFormat = reinterpret_cast<detail::PFNVERTEXARRAYATTRIBFORMATPROC>(loadProc("glVertexArrayAttribFormat"));
    if (detail::ptrVertexArrayAttribFormat) ++loaded;
    detail::ptrVertexArrayAttribIFormat = reinterpret_cast<detail::PFNVERTEXARRAYATTRIBIFORMATPROC>(loadProc("glVertexArrayAttribIFormat"));
    if (detail::ptrVertexArrayAttribIFormat) ++loaded;
    detail::ptrVertexArrayAttribLFormat = reinterpret_cast<detail::PFNVERTEXARRAYATTRIBLFORMATPROC>(loadProc("glVertexArrayAttribLFormat"));
    if (detail::ptrVertexArrayAttribLFormat) ++loaded;
    detail::ptrVertexArrayBindingDivisor = reinterpret_cast<detail::PFNVERTEXARRAYBINDINGDIVISORPROC>(loadProc("glVertexArrayBindingDivisor"));
    if (detail::ptrVertexArrayBindingDivisor) ++loaded;
    detail::ptrVertexArrayElementBuffer = reinterpret_cast<detail::PFNVERTEXARRAYELEMENTBUFFERPROC>(loadProc("glVertexArrayElementBuffer"));
    if (detail::ptrVertexArrayElementBuffer) ++loaded;
    detail::ptrVertexArrayVertexBuffer = reinterpret_cast<detail::PFNVERTEXARRAYVERTEXBUFFERPROC>(loadProc("glVertexArrayVertexBuffer"));
    if (detail::ptrVertexArrayVertexBuffer) ++loaded;
    detail::ptrVertexArrayVertexBuffers = reinterpret_cast<detail::PFNVERTEXARRAYVERTEXBUFFERSPROC>(loadProc("glVertexArrayVertexBuffers"));
    if (detail::ptrVertexArrayVertexBuffers) ++loaded;
    detail::ptrVertexAttrib1d = reinterpret_cast<detail::PFNVERTEXATTRIB1DPROC>(loadProc("glVertexAttrib1d"));
    if (detail::ptrVertexAttrib1d) ++loaded;
    detail::ptrVertexAttrib1dv = reinterpret_cast<detail::PFNVERTEXATTRIB1DVPROC>(loadProc("glVertexAttrib1dv"));
    if (detail::ptrVertexAttrib1dv) ++loaded;
    detail::ptrVertexAttrib1f = reinterpret_cast<detail::PFNVERTEXATTRIB1FPROC>(loadProc("glVertexAttrib1f"));
    if (detail::ptrVertexAttrib1f) ++loaded;
    detail::ptrVertexAttrib1fv = reinterpret_cast<detail::PFNVERTEXATTRIB1FVPROC>(loadProc("glVertexAttrib1fv"));
    if (detail::ptrVertexAttrib1fv) ++loaded;
    detail::ptrVertexAttrib1s = reinterpret_cast<detail::PFNVERTEXATTRIB1SPROC>(loadProc("glVertexAttrib1s"));
    if (detail::ptrVertexAttrib1s) ++loaded;
    detail::ptrVertexAttrib1sv = reinterpret_cast<detail::PFNVERTEXATTRIB1SVPROC>(loadProc("glVertexAttrib1sv"));
    if (detail::ptrVertexAttrib1sv) ++loaded;
    detail::ptrVertexAttrib2d = reinterpret_cast<detail::PFNVERTEXATTRIB2DPROC>(loadProc("glVertexAttrib2d"));
    if (detail::ptrVertexAttrib2d) ++loaded;
    detail::ptrVertexAttrib2dv = reinterpret_cast<detail::PFNVERTEXATTRIB2DVPROC>(loadProc("glVertexAttrib2dv"));
    if (detail::ptrVertexAttrib2dv) ++loaded;
    detail::ptrVertexAttrib2f = reinterpret_cast<detail::PFNVERTEXATTRIB2FPROC>(loadProc("glVertexAttrib2f"));
    if (detail::ptrVertexAttrib2f) ++loaded;
    detail::ptrVertexAttrib2fv = reinterpret_cast<detail::PFNVERTEXATTRIB2FVPROC>(loadProc("glVertexAttrib2fv"));
    if (detail::ptrVertexAttrib2fv) ++loaded;
    detail::ptrVertexAttrib2s = reinterpret_cast<detail::PFNVERTEXATTRIB2SPROC>(loadProc("glVertexAttrib2s"));
    if (detail::ptrVertexAttrib2s) ++loaded;
    detail::ptrVertexAttrib2sv = reinterpret_cast<detail::PFNVERTEXATTRIB2SVPROC>(loadProc("glVertexAttrib2sv"));
    if (detail::ptrVertexAttrib2sv) ++loaded;
    detail::ptrVertexAttrib3d = reinterpret_cast<detail::PFNVERTEXATTRIB3DPROC>(loadProc("glVertexAttrib3d"));
    if (detail::ptrVertexAttrib3d) ++loaded;
    detail::ptrVertexAttrib3dv = reinterpret_cast<detail::PFNVERTEXATTRIB3DVPROC>(loadProc("glVertexAttrib3dv"));
    if (detail::ptrVertexAttrib3dv) ++loaded;
    detail::ptrVertexAttrib3f = reinterpret_cast<detail::PFNVERTEXATTRIB3FPROC>(loadProc("glVertexAttrib3f"));
    if (detail::ptrVertexAttrib3f) ++loaded;
    detail::ptrVertexAttrib3fv = reinterpret_cast<detail::PFNVERTEXATTRIB3FVPROC>(loadProc("glVertexAttrib3fv"));
    if (detail::ptrVertexAttrib3fv) ++loaded;
    detail::ptrVertexAttrib3s = reinterpret_cast<detail::PFNVERTEXATTRIB3SPROC>(loadProc("glVertexAttrib3s"));
    if (detail::ptrVertexAttrib3s) ++loaded;
    detail::ptrVertexAttrib3sv = reinterpret_cast<detail::PFNVERTEXATTRIB3SVPROC>(loadProc("glVertexAttrib3sv"));
    if (detail::ptrVertexAttrib3sv) ++loaded;
    detail::ptrVertexAttrib4Nbv = reinterpret_cast<detail::PFNVERTEXATTRIB4NBVPROC>(loadProc("glVertexAttrib4Nbv"));
    if (detail::ptrVertexAttrib4Nbv) ++loaded;
    detail::ptrVertexAttrib4Niv = reinterpret_cast<detail::PFNVERTEXATTRIB4NIVPROC>(loadProc("glVertexAttrib4Niv"));
    if (detail::ptrVertexAttrib4Niv) ++loaded;
    detail::ptrVertexAttrib4Nsv = reinterpret_cast<detail::PFNVERTEXATTRIB4NSVPROC>(loadProc("glVertexAttrib4Nsv"));
    if (detail::ptrVertexAttrib4Nsv) ++loaded;
    detail::ptrVertexAttrib4Nub = reinterpret_cast<detail::PFNVERTEXATTRIB4NUBPROC>(loadProc("glVertexAttrib4Nub"));
    if (detail::ptrVertexAttrib4Nub) ++loaded;
    detail::ptrVertexAttrib4Nubv = reinterpret_cast<detail::PFNVERTEXATTRIB4NUBVPROC>(loadProc("glVertexAttrib4Nubv"));
    if (detail::ptrVertexAttrib4Nubv) ++loaded;
    detail::ptrVertexAttrib4Nuiv = reinterpret_cast<detail::PFNVERTEXATTRIB4NUIVPROC>(loadProc("glVertexAttrib4Nuiv"));
    if (detail::ptrVertexAttrib4Nuiv) ++loaded;
    detail::ptrVertexAttrib4Nusv = reinterpret_cast<detail::PFNVERTEXATTRIB4NUSVPROC>(loadProc("glVertexAttrib4Nusv"));
    if (detail::ptrVertexAttrib4Nusv) ++loaded;
    detail::ptrVertexAttrib4bv = reinterpret_cast<detail::PFNVERTEXATTRIB4BVPROC>(loadProc("glVertexAttrib4bv"));
    if (detail::ptrVertexAttrib4bv) ++loaded;
    detail::ptrVertexAttrib4d = reinterpret_cast<detail::PFNVERTEXATTRIB4DPROC>(loadProc("glVertexAttrib4d"));
    if (detail::ptrVertexAttrib4d) ++loaded;
    detail::ptrVertexAttrib4dv = reinterpret_cast<detail::PFNVERTEXATTRIB4DVPROC>(loadProc("glVertexAttrib4dv"));
    if (detail::ptrVertexAttrib4dv) ++loaded;
    detail::ptrVertexAttrib4f = reinterpret_cast<detail::PFNVERTEXATTRIB4FPROC>(loadProc("glVertexAttrib4f"));
    if (detail::ptrVertexAttrib4f) ++loaded;
    detail::ptrVertexAttrib4fv = reinterpret_cast<detail::PFNVERTEXATTRIB4FVPROC>(loadProc("glVertexAttrib4fv"));
    if (detail::ptrVertexAttrib4fv) ++loaded;
    detail::ptrVertexAttrib4iv = reinterpret_cast<detail::PFNVERTEXATTRIB4IVPROC>(loadProc("glVertexAttrib4iv"));
    if (detail::ptrVertexAttrib4iv) ++loaded;
    detail::ptrVertexAttrib4s = reinterpret_cast<detail::PFNVERTEXATTRIB4SPROC>(loadProc("glVertexAttrib4s"));
    if (detail::ptrVertexAttrib4s) ++loaded;
    detail::ptrVertexAttrib4sv = reinterpret_cast<detail::PFNVERTEXATTRIB4SVPROC>(loadProc("glVertexAttrib4sv"));
    if (detail::ptrVertexAttrib4sv) ++loaded;
    detail::ptrVertexAttrib4ubv = reinterpret_cast<detail::PFNVERTEXATTRIB4UBVPROC>(loadProc("glVertexAttrib4ubv"));
    if (detail::ptrVertexAttrib4ubv) ++loaded;
    detail::ptrVertexAttrib4uiv = reinterpret_cast<detail::PFNVERTEXATTRIB4UIVPROC>(loadProc("glVertexAttrib4uiv"));
    if (detail::ptrVertexAttrib4uiv) ++loaded;
    detail::ptrVertexAttrib4usv = reinterpret_cast<detail::PFNVERTEXATTRIB4USVPROC>(loadProc("glVertexAttrib4usv"));
    if (detail::ptrVertexAttrib4usv) ++loaded;
    detail::ptrVertexAttribBinding = reinterpret_cast<detail::PFNVERTEXATTRIBBINDINGPROC>(loadProc("glVertexAttribBinding"));
    if (detail::ptrVertexAttribBinding) ++loaded;
    detail::ptrVertexAttribDivisor = reinterpret_cast<detail::PFNVERTEXATTRIBDIVISORPROC>(loadProc("glVertexAttribDivisor"));
    if (detail::ptrVertexAttribDivisor) ++loaded;
    detail::ptrVertexAttribFormat = reinterpret_cast<detail::PFNVERTEXATTRIBFORMATPROC>(loadProc("glVertexAttribFormat"));
    if (detail::ptrVertexAttribFormat) ++loaded;
    detail::ptrVertexAttribI1i = reinterpret_cast<detail::PFNVERTEXATTRIBI1IPROC>(loadProc("glVertexAttribI1i"));
    if (detail::ptrVertexAttribI1i) ++loaded;
    detail::ptrVertexAttribI1iv = reinterpret_cast<detail::PFNVERTEXATTRIBI1IVPROC>(loadProc("glVertexAttribI1iv"));
    if (detail::ptrVertexAttribI1iv) ++loaded;
    detail::ptrVertexAttribI1ui = reinterpret_cast<detail::PFNVERTEXATTRIBI1UIPROC>(loadProc("glVertexAttribI1ui"));
    if (detail::ptrVertexAttribI1ui) ++loaded;
    detail::ptrVertexAttribI1uiv = reinterpret_cast<detail::PFNVERTEXATTRIBI1UIVPROC>(loadProc("glVertexAttribI1uiv"));
    if (detail::ptrVertexAttribI1uiv) ++loaded;
    detail::ptrVertexAttribI2i = reinterpret_cast<detail::PFNVERTEXATTRIBI2IPROC>(loadProc("glVertexAttribI2i"));
    if (detail::ptrVertexAttribI2i) ++loaded;
    detail::ptrVertexAttribI2iv = reinterpret_cast<detail::PFNVERTEXATTRIBI2IVPROC>(loadProc("glVertexAttribI2iv"));
    if (detail::ptrVertexAttribI2iv) ++loaded;
    detail::ptrVertexAttribI2ui = reinterpret_cast<detail::PFNVERTEXATTRIBI2UIPROC>(loadProc("glVertexAttribI2ui"));
    if (detail::ptrVertexAttribI2ui) ++loaded;
    detail::ptrVertexAttribI2uiv = reinterpret_cast<detail::PFNVERTEXATTRIBI2UIVPROC>(loadProc("glVertexAttribI2uiv"));
    if (detail::ptrVertexAttribI2uiv) ++loaded;
    detail::ptrVertexAttribI3i = reinterpret_cast<detail::PFNVERTEXATTRIBI3IPROC>(loadProc("glVertexAttribI3i"));
    if (detail::ptrVertexAttribI3i) ++loaded;
    detail::ptrVertexAttribI3iv = reinterpret_cast<detail::PFNVERTEXATTRIBI3IVPROC>(loadProc("glVertexAttribI3iv"));
    if (detail::ptrVertexAttribI3iv) ++loaded;
    detail::ptrVertexAttribI3ui = reinterpret_cast<detail::PFNVERTEXATTRIBI3UIPROC>(loadProc("glVertexAttribI3ui"));
    if (detail::ptrVertexAttribI3ui) ++loaded;
    detail::ptrVertexAttribI3uiv = reinterpret_cast<detail::PFNVERTEXATTRIBI3UIVPROC>(loadProc("glVertexAttribI3uiv"));
    if (detail::ptrVertexAttribI3uiv) ++loaded;
    detail::ptrVertexAttribI4bv = reinterpret_cast<detail::PFNVERTEXATTRIBI4BVPROC>(loadProc("glVertexAttribI4bv"));
    if (detail::ptrVertexAttribI4bv) ++loaded;
    detail::ptrVertexAttribI4i = reinterpret_cast<detail::PFNVERTEXATTRIBI4IPROC>(loadProc("glVertexAttribI4i"));
    if (detail::ptrVertexAttribI4i) ++loaded;
    detail::ptrVertexAttribI4iv = reinterpret_cast<detail::PFNVERTEXATTRIBI4IVPROC>(loadProc("glVertexAttribI4iv"));
    if (detail::ptrVertexAttribI4iv) ++loaded;
    detail::ptrVertexAttribI4sv = reinterpret_cast<detail::PFNVERTEXATTRIBI4SVPROC>(loadProc("glVertexAttribI4sv"));
    if (detail::ptrVertexAttribI4sv) ++loaded;
    detail::ptrVertexAttribI4ubv = reinterpret_cast<detail::PFNVERTEXATTRIBI4UBVPROC>(loadProc("glVertexAttribI4ubv"));
    if (detail::ptrVertexAttribI4ubv) ++loaded;
    detail::ptrVertexAttribI4ui = reinterpret_cast<detail::PFNVERTEXATTRIBI4UIPROC>(loadProc("glVertexAttribI4ui"));
    if (detail::ptrVertexAttribI4ui) ++loaded;
    detail::ptrVertexAttribI4uiv = reinterpret_cast<detail::PFNVERTEXATTRIBI4UIVPROC>(loadProc("glVertexAttribI4uiv"));
    if (detail::ptrVertexAttribI4uiv) ++loaded;
    detail::ptrVertexAttribI4usv = reinterpret_cast<detail::PFNVERTEXATTRIBI4USVPROC>(loadProc("glVertexAttribI4usv"));
    if (detail::ptrVertexAttribI4usv) ++loaded;
    detail::ptrVertexAttribIFormat = reinterpret_cast<detail::PFNVERTEXATTRIBIFORMATPROC>(loadProc("glVertexAttribIFormat"));
    if (detail::ptrVertexAttribIFormat) ++loaded;
    detail::ptrVertexAttribIPointer = reinterpret_cast<detail::PFNVERTEXATTRIBIPOINTERPROC>(loadProc("glVertexAttribIPointer"));
    if (detail::ptrVertexAttribIPointer) ++loaded;
    detail::ptrVertexAttribL1d = reinterpret_cast<detail::PFNVERTEXATTRIBL1DPROC>(loadProc("glVertexAttribL1d"));
    if (detail::ptrVertexAttribL1d) ++loaded;
    detail::ptrVertexAttribL1dv = reinterpret_cast<detail::PFNVERTEXATTRIBL1DVPROC>(loadProc("glVertexAttribL1dv"));
    if (detail::ptrVertexAttribL1dv) ++loaded;
    detail::ptrVertexAttribL2d = reinterpret_cast<detail::PFNVERTEXATTRIBL2DPROC>(loadProc("glVertexAttribL2d"));
    if (detail::ptrVertexAttribL2d) ++loaded;
    detail::ptrVertexAttribL2dv = reinterpret_cast<detail::PFNVERTEXATTRIBL2DVPROC>(loadProc("glVertexAttribL2dv"));
    if (detail::ptrVertexAttribL2dv) ++loaded;
    detail::ptrVertexAttribL3d = reinterpret_cast<detail::PFNVERTEXATTRIBL3DPROC>(loadProc("glVertexAttribL3d"));
    if (detail::ptrVertexAttribL3d) ++loaded;
    detail::ptrVertexAttribL3dv = reinterpret_cast<detail::PFNVERTEXATTRIBL3DVPROC>(loadProc("glVertexAttribL3dv"));
    if (detail::ptrVertexAttribL3dv) ++loaded;
    detail::ptrVertexAttribL4d = reinterpret_cast<detail::PFNVERTEXATTRIBL4DPROC>(loadProc("glVertexAttribL4d"));
    if (detail::ptrVertexAttribL4d) ++loaded;
    detail::ptrVertexAttribL4dv = reinterpret_cast<detail::PFNVERTEXATTRIBL4DVPROC>(loadProc("glVertexAttribL4dv"));
    if (detail::ptrVertexAttribL4dv) ++loaded;
    detail::ptrVertexAttribLFormat = reinterpret_cast<detail::PFNVERTEXATTRIBLFORMATPROC>(loadProc("glVertexAttribLFormat"));
    if (detail::ptrVertexAttribLFormat) ++loaded;
    detail::ptrVertexAttribLPointer = reinterpret_cast<detail::PFNVERTEXATTRIBLPOINTERPROC>(loadProc("glVertexAttribLPointer"));
    if (detail::ptrVertexAttribLPointer) ++loaded;
    detail::ptrVertexAttribP1ui = reinterpret_cast<detail::PFNVERTEXATTRIBP1UIPROC>(loadProc("glVertexAttribP1ui"));
    if (detail::ptrVertexAttribP1ui) ++loaded;
    detail::ptrVertexAttribP1uiv = reinterpret_cast<detail::PFNVERTEXATTRIBP1UIVPROC>(loadProc("glVertexAttribP1uiv"));
    if (detail::ptrVertexAttribP1uiv) ++loaded;
    detail::ptrVertexAttribP2ui = reinterpret_cast<detail::PFNVERTEXATTRIBP2UIPROC>(loadProc("glVertexAttribP2ui"));
    if (detail::ptrVertexAttribP2ui) ++loaded;
    detail::ptrVertexAttribP2uiv = reinterpret_cast<detail::PFNVERTEXATTRIBP2UIVPROC>(loadProc("glVertexAttribP2uiv"));
    if (detail::ptrVertexAttribP2uiv) ++loaded;
    detail::ptrVertexAttribP3ui = reinterpret_cast<detail::PFNVERTEXATTRIBP3UIPROC>(loadProc("glVertexAttribP3ui"));
    if (detail::ptrVertexAttribP3ui) ++loaded;
    detail::ptrVertexAttribP3uiv = reinterpret_cast<detail::PFNVERTEXATTRIBP3UIVPROC>(loadProc("glVertexAttribP3uiv"));
    if (detail::ptrVertexAttribP3uiv) ++loaded;
    detail::ptrVertexAttribP4ui = reinterpret_cast<detail::PFNVERTEXATTRIBP4UIPROC>(loadProc("glVertexAttribP4ui"));
    if (detail::ptrVertexAttribP4ui) ++loaded;
    detail::ptrVertexAttribP4uiv = reinterpret_cast<detail::PFNVERTEXATTRIBP4UIVPROC>(loadProc("glVertexAttribP4uiv"));
    if (detail::ptrVertexAttribP4uiv) ++loaded;
    detail::ptrVertexAttribPointer = reinterpret_cast<detail::PFNVERTEXATTRIBPOINTERPROC>(loadProc("glVertexAttribPointer"));
    if (detail::ptrVertexAttribPointer) ++loaded;
    detail::ptrVertexBindingDivisor = reinterpret_cast<detail::PFNVERTEXBINDINGDIVISORPROC>(loadProc("glVertexBindingDivisor"));
    if (detail::ptrVertexBindingDivisor) ++loaded;
    detail::ptrViewport = reinterpret_cast<detail::PFNVIEWPORTPROC>(loadProc("glViewport"));
    if (detail::ptrViewport) ++loaded;
    detail::ptrViewportArrayv = reinterpret_cast<detail::PFNVIEWPORTARRAYVPROC>(loadProc("glViewportArrayv"));
    if (detail::ptrViewportArrayv) ++loaded;
    detail::ptrViewportIndexedf = reinterpret_cast<detail::PFNVIEWPORTINDEXEDFPROC>(loadProc("glViewportIndexedf"));
    if (detail::ptrViewportIndexedf) ++loaded;
    detail::ptrViewportIndexedfv = reinterpret_cast<detail::PFNVIEWPORTINDEXEDFVPROC>(loadProc("glViewportIndexedfv"));
    if (detail::ptrViewportIndexedfv) ++loaded;
    detail::ptrWaitSync = reinterpret_cast<detail::PFNWAITSYNCPROC>(loadProc("glWaitSync"));
    if (detail::ptrWaitSync) ++loaded;
    return loaded;
}

inline constexpr int FUNCTION_COUNT = 656;

inline bool isComplete() {
    return detail::ptrActiveShaderProgram != nullptr
        && detail::ptrActiveTexture != nullptr
        && detail::ptrAttachShader != nullptr
        && detail::ptrBeginConditionalRender != nullptr
        && detail::ptrBeginQuery != nullptr
        && detail::ptrBeginQueryIndexed != nullptr
        && detail::ptrBeginTransformFeedback != nullptr
        && detail::ptrBindAttribLocation != nullptr
        && detail::ptrBindBuffer != nullptr
        && detail::ptrBindBufferBase != nullptr
        && detail::ptrBindBufferRange != nullptr
        && detail::ptrBindBuffersBase != nullptr
        && detail::ptrBindBuffersRange != nullptr
        && detail::ptrBindFragDataLocation != nullptr
        && detail::ptrBindFragDataLocationIndexed != nullptr
        && detail::ptrBindFramebuffer != nullptr
        && detail::ptrBindImageTexture != nullptr
        && detail::ptrBindImageTextures != nullptr
        && detail::ptrBindProgramPipeline != nullptr
        && detail::ptrBindRenderbuffer != nullptr
        && detail::ptrBindSampler != nullptr
        && detail::ptrBindSamplers != nullptr
        && detail::ptrBindTexture != nullptr
        && detail::ptrBindTextureUnit != nullptr
        && detail::ptrBindTextures != nullptr
        && detail::ptrBindTransformFeedback != nullptr
        && detail::ptrBindVertexArray != nullptr
        && detail::ptrBindVertexBuffer != nullptr
        && detail::ptrBindVertexBuffers != nullptr
        && detail::ptrBlendColor != nullptr
        && detail::ptrBlendEquation != nullptr
        && detail::ptrBlendEquationSeparate != nullptr
        && detail::ptrBlendEquationSeparatei != nullptr
        && detail::ptrBlendEquationi != nullptr
        && detail::ptrBlendFunc != nullptr
        && detail::ptrBlendFuncSeparate != nullptr
        && detail::ptrBlendFuncSeparatei != nullptr
        && detail::ptrBlendFunci != nullptr
        && detail::ptrBlitFramebuffer != nullptr
        && detail::ptrBlitNamedFramebuffer != nullptr
        && detail::ptrBufferData != nullptr
        && detail::ptrBufferStorage != nullptr
        && detail::ptrBufferSubData != nullptr
        && detail::ptrCheckFramebufferStatus != nullptr
        && detail::ptrCheckNamedFramebufferStatus != nullptr
        && detail::ptrClampColor != nullptr
        && detail::ptrClear != nullptr
        && detail::ptrClearBufferData != nullptr
        && detail::ptrClearBufferSubData != nullptr
        && detail::ptrClearBufferfi != nullptr
        && detail::ptrClearBufferfv != nullptr
        && detail::ptrClearBufferiv != nullptr
        && detail::ptrClearBufferuiv != nullptr
        && detail::ptrClearColor != nullptr
        && detail::ptrClearDepth != nullptr
        && detail::ptrClearDepthf != nullptr
        && detail::ptrClearNamedBufferData != nullptr
        && detail::ptrClearNamedBufferSubData != nullptr
        && detail::ptrClearNamedFramebufferfi != nullptr
        && detail::ptrClearNamedFramebufferfv != nullptr
        && detail::ptrClearNamedFramebufferiv != nullptr
        && detail::ptrClearNamedFramebufferuiv != nullptr
        && detail::ptrClearStencil != nullptr
        && detail::ptrClearTexImage != nullptr
        && detail::ptrClearTexSubImage != nullptr
        && detail::ptrClientWaitSync != nullptr
        && detail::ptrClipControl != nullptr
        && detail::ptrColorMask != nullptr
        && detail::ptrColorMaski != nullptr
        && detail::ptrCompileShader != nullptr
        && detail::ptrCompressedTexImage1D != nullptr
        && detail::ptrCompressedTexImage2D != nullptr
        && detail::ptrCompressedTexImage3D != nullptr
        && detail::ptrCompressedTexSubImage1D != nullptr
        && detail::ptrCompressedTexSubImage2D != nullptr
        && detail::ptrCompressedTexSubImage3D != nullptr
        && detail::ptrCompressedTextureSubImage1D != nullptr
        && detail::ptrCompressedTextureSubImage2D != nullptr
        && detail::ptrCompressedTextureSubImage3D != nullptr
        && detail::ptrCopyBufferSubData != nullptr
        && detail::ptrCopyImageSubData != nullptr
        && detail::ptrCopyNamedBufferSubData != nullptr
        && detail::ptrCopyTexImage1D != nullptr
        && detail::ptrCopyTexImage2D != nullptr
        && detail::ptrCopyTexSubImage1D != nullptr
        && detail::ptrCopyTexSubImage2D != nullptr
        && detail::ptrCopyTexSubImage3D != nullptr
        && detail::ptrCopyTextureSubImage1D != nullptr
        && detail::ptrCopyTextureSubImage2D != nullptr
        && detail::ptrCopyTextureSubImage3D != nullptr
        && detail::ptrCreateBuffers != nullptr
        && detail::ptrCreateFramebuffers != nullptr
        && detail::ptrCreateProgram != nullptr
        && detail::ptrCreateProgramPipelines != nullptr
        && detail::ptrCreateQueries != nullptr
        && detail::ptrCreateRenderbuffers != nullptr
        && detail::ptrCreateSamplers != nullptr
        && detail::ptrCreateShader != nullptr
        && detail::ptrCreateShaderProgramv != nullptr
        && detail::ptrCreateTextures != nullptr
        && detail::ptrCreateTransformFeedbacks != nullptr
        && detail::ptrCreateVertexArrays != nullptr
        && detail::ptrCullFace != nullptr
        && detail::ptrDebugMessageCallback != nullptr
        && detail::ptrDebugMessageControl != nullptr
        && detail::ptrDebugMessageInsert != nullptr
        && detail::ptrDeleteBuffers != nullptr
        && detail::ptrDeleteFramebuffers != nullptr
        && detail::ptrDeleteProgram != nullptr
        && detail::ptrDeleteProgramPipelines != nullptr
        && detail::ptrDeleteQueries != nullptr
        && detail::ptrDeleteRenderbuffers != nullptr
        && detail::ptrDeleteSamplers != nullptr
        && detail::ptrDeleteShader != nullptr
        && detail::ptrDeleteSync != nullptr
        && detail::ptrDeleteTextures != nullptr
        && detail::ptrDeleteTransformFeedbacks != nullptr
        && detail::ptrDeleteVertexArrays != nullptr
        && detail::ptrDepthFunc != nullptr
        && detail::ptrDepthMask != nullptr
        && detail::ptrDepthRange != nullptr
        && detail::ptrDepthRangeArrayv != nullptr
        && detail::ptrDepthRangeIndexed != nullptr
        && detail::ptrDepthRangef != nullptr
        && detail::ptrDetachShader != nullptr
        && detail::ptrDisable != nullptr
        && detail::ptrDisableVertexArrayAttrib != nullptr
        && detail::ptrDisableVertexAttribArray != nullptr
        && detail::ptrDisablei != nullptr
        && detail::ptrDispatchCompute != nullptr
        && detail::ptrDispatchComputeIndirect != nullptr
        && detail::ptrDrawArrays != nullptr
        && detail::ptrDrawArraysIndirect != nullptr
        && detail::ptrDrawArraysInstanced != nullptr
        && detail::ptrDrawArraysInstancedBaseInstance != nullptr
        && detail::ptrDrawBuffer != nullptr
        && detail::ptrDrawBuffers != nullptr
        && detail::ptrDrawElements != nullptr
        && detail::ptrDrawElementsBaseVertex != nullptr
        && detail::ptrDrawElementsIndirect != nullptr
        && detail::ptrDrawElementsInstanced != nullptr
        && detail::ptrDrawElementsInstancedBaseInstance != nullptr
        && detail::ptrDrawElementsInstancedBaseVertex != nullptr
        && detail::ptrDrawElementsInstancedBaseVertexBaseInstance != nullptr
        && detail::ptrDrawRangeElements != nullptr
        && detail::ptrDrawRangeElementsBaseVertex != nullptr
        && detail::ptrDrawTransformFeedback != nullptr
        && detail::ptrDrawTransformFeedbackInstanced != nullptr
        && detail::ptrDrawTransformFeedbackStream != nullptr
        && detail::ptrDrawTransformFeedbackStreamInstanced != nullptr
        && detail::ptrEnable != nullptr
        && detail::ptrEnableVertexArrayAttrib != nullptr
        && detail::ptrEnableVertexAttribArray != nullptr
        && detail::ptrEnablei != nullptr
        && detail::ptrEndConditionalRender != nullptr
        && detail::ptrEndQuery != nullptr
        && detail::ptrEndQueryIndexed != nullptr
        && detail::ptrEndTransformFeedback != nullptr
        && detail::ptrFenceSync != nullptr
        && detail::ptrFinish != nullptr
        && detail::ptrFlush != nullptr
        && detail::ptrFlushMappedBufferRange != nullptr
        && detail::ptrFlushMappedNamedBufferRange != nullptr
        && detail::ptrFramebufferParameteri != nullptr
        && detail::ptrFramebufferRenderbuffer != nullptr
        && detail::ptrFramebufferTexture != nullptr
        && detail::ptrFramebufferTexture1D != nullptr
        && detail::ptrFramebufferTexture2D != nullptr
        && detail::ptrFramebufferTexture3D != nullptr
        && detail::ptrFramebufferTextureLayer != nullptr
        && detail::ptrFrontFace != nullptr
        && detail::ptrGenBuffers != nullptr
        && detail::ptrGenFramebuffers != nullptr
        && detail::ptrGenProgramPipelines != nullptr
        && detail::ptrGenQueries != nullptr
        && detail::ptrGenRenderbuffers != nullptr
        && detail::ptrGenSamplers != nullptr
        && detail::ptrGenTextures != nullptr
        && detail::ptrGenTransformFeedbacks != nullptr
        && detail::ptrGenVertexArrays != nullptr
        && detail::ptrGenerateMipmap != nullptr
        && detail::ptrGenerateTextureMipmap != nullptr
        && detail::ptrGetActiveAtomicCounterBufferiv != nullptr
        && detail::ptrGetActiveAttrib != nullptr
        && detail::ptrGetActiveSubroutineName != nullptr
        && detail::ptrGetActiveSubroutineUniformName != nullptr
        && detail::ptrGetActiveSubroutineUniformiv != nullptr
        && detail::ptrGetActiveUniform != nullptr
        && detail::ptrGetActiveUniformBlockName != nullptr
        && detail::ptrGetActiveUniformBlockiv != nullptr
        && detail::ptrGetActiveUniformName != nullptr
        && detail::ptrGetActiveUniformsiv != nullptr
        && detail::ptrGetAttachedShaders != nullptr
        && detail::ptrGetAttribLocation != nullptr
        && detail::ptrGetBooleani_v != nullptr
        && detail::ptrGetBooleanv != nullptr
        && detail::ptrGetBufferParameteri64v != nullptr
        && detail::ptrGetBufferParameteriv != nullptr
        && detail::ptrGetBufferPointerv != nullptr
        && detail::ptrGetBufferSubData != nullptr
        && detail::ptrGetCompressedTexImage != nullptr
        && detail::ptrGetCompressedTextureImage != nullptr
        && detail::ptrGetCompressedTextureSubImage != nullptr
        && detail::ptrGetDebugMessageLog != nullptr
        && detail::ptrGetDoublei_v != nullptr
        && detail::ptrGetDoublev != nullptr
        && detail::ptrGetError != nullptr
        && detail::ptrGetFloati_v != nullptr
        && detail::ptrGetFloatv != nullptr
        && detail::ptrGetFragDataIndex != nullptr
        && detail::ptrGetFragDataLocation != nullptr
        && detail::ptrGetFramebufferAttachmentParameteriv != nullptr
        && detail::ptrGetFramebufferParameteriv != nullptr
        && detail::ptrGetGraphicsResetStatus != nullptr
        && detail::ptrGetInteger64i_v != nullptr
        && detail::ptrGetInteger64v != nullptr
        && detail::ptrGetIntegeri_v != nullptr
        && detail::ptrGetIntegerv != nullptr
        && detail::ptrGetInternalformati64v != nullptr
        && detail::ptrGetInternalformativ != nullptr
        && detail::ptrGetMultisamplefv != nullptr
        && detail::ptrGetNamedBufferParameteri64v != nullptr
        && detail::ptrGetNamedBufferParameteriv != nullptr
        && detail::ptrGetNamedBufferPointerv != nullptr
        && detail::ptrGetNamedBufferSubData != nullptr
        && detail::ptrGetNamedFramebufferAttachmentParameteriv != nullptr
        && detail::ptrGetNamedFramebufferParameteriv != nullptr
        && detail::ptrGetNamedRenderbufferParameteriv != nullptr
        && detail::ptrGetObjectLabel != nullptr
        && detail::ptrGetObjectPtrLabel != nullptr
        && detail::ptrGetProgramBinary != nullptr
        && detail::ptrGetProgramInfoLog != nullptr
        && detail::ptrGetProgramInterfaceiv != nullptr
        && detail::ptrGetProgramPipelineInfoLog != nullptr
        && detail::ptrGetProgramPipelineiv != nullptr
        && detail::ptrGetProgramResourceIndex != nullptr
        && detail::ptrGetProgramResourceLocation != nullptr
        && detail::ptrGetProgramResourceLocationIndex != nullptr
        && detail::ptrGetProgramResourceName != nullptr
        && detail::ptrGetProgramResourceiv != nullptr
        && detail::ptrGetProgramStageiv != nullptr
        && detail::ptrGetProgramiv != nullptr
        && detail::ptrGetQueryBufferObjecti64v != nullptr
        && detail::ptrGetQueryBufferObjectiv != nullptr
        && detail::ptrGetQueryBufferObjectui64v != nullptr
        && detail::ptrGetQueryBufferObjectuiv != nullptr
        && detail::ptrGetQueryIndexediv != nullptr
        && detail::ptrGetQueryObjecti64v != nullptr
        && detail::ptrGetQueryObjectiv != nullptr
        && detail::ptrGetQueryObjectui64v != nullptr
        && detail::ptrGetQueryObjectuiv != nullptr
        && detail::ptrGetQueryiv != nullptr
        && detail::ptrGetRenderbufferParameteriv != nullptr
        && detail::ptrGetSamplerParameterIiv != nullptr
        && detail::ptrGetSamplerParameterIuiv != nullptr
        && detail::ptrGetSamplerParameterfv != nullptr
        && detail::ptrGetSamplerParameteriv != nullptr
        && detail::ptrGetShaderInfoLog != nullptr
        && detail::ptrGetShaderPrecisionFormat != nullptr
        && detail::ptrGetShaderSource != nullptr
        && detail::ptrGetShaderiv != nullptr
        && detail::ptrGetString != nullptr
        && detail::ptrGetStringi != nullptr
        && detail::ptrGetSubroutineIndex != nullptr
        && detail::ptrGetSubroutineUniformLocation != nullptr
        && detail::ptrGetSynciv != nullptr
        && detail::ptrGetTexImage != nullptr
        && detail::ptrGetTexLevelParameterfv != nullptr
        && detail::ptrGetTexLevelParameteriv != nullptr
        && detail::ptrGetTexParameterIiv != nullptr
        && detail::ptrGetTexParameterIuiv != nullptr
        && detail::ptrGetTexParameterfv != nullptr
        && detail::ptrGetTexParameteriv != nullptr
        && detail::ptrGetTextureImage != nullptr
        && detail::ptrGetTextureLevelParameterfv != nullptr
        && detail::ptrGetTextureLevelParameteriv != nullptr
        && detail::ptrGetTextureParameterIiv != nullptr
        && detail::ptrGetTextureParameterIuiv != nullptr
        && detail::ptrGetTextureParameterfv != nullptr
        && detail::ptrGetTextureParameteriv != nullptr
        && detail::ptrGetTextureSubImage != nullptr
        && detail::ptrGetTransformFeedbackVarying != nullptr
        && detail::ptrGetTransformFeedbacki64_v != nullptr
        && detail::ptrGetTransformFeedbacki_v != nullptr
        && detail::ptrGetTransformFeedbackiv != nullptr
        && detail::ptrGetUniformBlockIndex != nullptr
        && detail::ptrGetUniformIndices != nullptr
        && detail::ptrGetUniformLocation != nullptr
        && detail::ptrGetUniformSubroutineuiv != nullptr
        && detail::ptrGetUniformdv != nullptr
        && detail::ptrGetUniformfv != nullptr
        && detail::ptrGetUniformiv != nullptr
        && detail::ptrGetUniformuiv != nullptr
        && detail::ptrGetVertexArrayIndexed64iv != nullptr
        && detail::ptrGetVertexArrayIndexediv != nullptr
        && detail::ptrGetVertexArrayiv != nullptr
        && detail::ptrGetVertexAttribIiv != nullptr
        && detail::ptrGetVertexAttribIuiv != nullptr
        && detail::ptrGetVertexAttribLdv != nullptr
        && detail::ptrGetVertexAttribPointerv != nullptr
        && detail::ptrGetVertexAttribdv != nullptr
        && detail::ptrGetVertexAttribfv != nullptr
        && detail::ptrGetVertexAttribiv != nullptr
        && detail::ptrGetnCompressedTexImage != nullptr
        && detail::ptrGetnTexImage != nullptr
        && detail::ptrGetnUniformdv != nullptr
        && detail::ptrGetnUniformfv != nullptr
        && detail::ptrGetnUniformiv != nullptr
        && detail::ptrGetnUniformuiv != nullptr
        && detail::ptrHint != nullptr
        && detail::ptrInvalidateBufferData != nullptr
        && detail::ptrInvalidateBufferSubData != nullptr
        && detail::ptrInvalidateFramebuffer != nullptr
        && detail::ptrInvalidateNamedFramebufferData != nullptr
        && detail::ptrInvalidateNamedFramebufferSubData != nullptr
        && detail::ptrInvalidateSubFramebuffer != nullptr
        && detail::ptrInvalidateTexImage != nullptr
        && detail::ptrInvalidateTexSubImage != nullptr
        && detail::ptrIsBuffer != nullptr
        && detail::ptrIsEnabled != nullptr
        && detail::ptrIsEnabledi != nullptr
        && detail::ptrIsFramebuffer != nullptr
        && detail::ptrIsProgram != nullptr
        && detail::ptrIsProgramPipeline != nullptr
        && detail::ptrIsQuery != nullptr
        && detail::ptrIsRenderbuffer != nullptr
        && detail::ptrIsSampler != nullptr
        && detail::ptrIsShader != nullptr
        && detail::ptrIsSync != nullptr
        && detail::ptrIsTexture != nullptr
        && detail::ptrIsTransformFeedback != nullptr
        && detail::ptrIsVertexArray != nullptr
        && detail::ptrLineWidth != nullptr
        && detail::ptrLinkProgram != nullptr
        && detail::ptrLogicOp != nullptr
        && detail::ptrMapBuffer != nullptr
        && detail::ptrMapBufferRange != nullptr
        && detail::ptrMapNamedBuffer != nullptr
        && detail::ptrMapNamedBufferRange != nullptr
        && detail::ptrMemoryBarrier != nullptr
        && detail::ptrMemoryBarrierByRegion != nullptr
        && detail::ptrMinSampleShading != nullptr
        && detail::ptrMultiDrawArrays != nullptr
        && detail::ptrMultiDrawArraysIndirect != nullptr
        && detail::ptrMultiDrawArraysIndirectCount != nullptr
        && detail::ptrMultiDrawElements != nullptr
        && detail::ptrMultiDrawElementsBaseVertex != nullptr
        && detail::ptrMultiDrawElementsIndirect != nullptr
        && detail::ptrMultiDrawElementsIndirectCount != nullptr
        && detail::ptrNamedBufferData != nullptr
        && detail::ptrNamedBufferStorage != nullptr
        && detail::ptrNamedBufferSubData != nullptr
        && detail::ptrNamedFramebufferDrawBuffer != nullptr
        && detail::ptrNamedFramebufferDrawBuffers != nullptr
        && detail::ptrNamedFramebufferParameteri != nullptr
        && detail::ptrNamedFramebufferReadBuffer != nullptr
        && detail::ptrNamedFramebufferRenderbuffer != nullptr
        && detail::ptrNamedFramebufferTexture != nullptr
        && detail::ptrNamedFramebufferTextureLayer != nullptr
        && detail::ptrNamedRenderbufferStorage != nullptr
        && detail::ptrNamedRenderbufferStorageMultisample != nullptr
        && detail::ptrObjectLabel != nullptr
        && detail::ptrObjectPtrLabel != nullptr
        && detail::ptrPatchParameterfv != nullptr
        && detail::ptrPatchParameteri != nullptr
        && detail::ptrPauseTransformFeedback != nullptr
        && detail::ptrPixelStoref != nullptr
        && detail::ptrPixelStorei != nullptr
        && detail::ptrPointParameterf != nullptr
        && detail::ptrPointParameterfv != nullptr
        && detail::ptrPointParameteri != nullptr
        && detail::ptrPointParameteriv != nullptr
        && detail::ptrPointSize != nullptr
        && detail::ptrPolygonMode != nullptr
        && detail::ptrPolygonOffset != nullptr
        && detail::ptrPolygonOffsetClamp != nullptr
        && detail::ptrPopDebugGroup != nullptr
        && detail::ptrPrimitiveRestartIndex != nullptr
        && detail::ptrProgramBinary != nullptr
        && detail::ptrProgramParameteri != nullptr
        && detail::ptrProgramUniform1d != nullptr
        && detail::ptrProgramUniform1dv != nullptr
        && detail::ptrProgramUniform1f != nullptr
        && detail::ptrProgramUniform1fv != nullptr
        && detail::ptrProgramUniform1i != nullptr
        && detail::ptrProgramUniform1iv != nullptr
        && detail::ptrProgramUniform1ui != nullptr
        && detail::ptrProgramUniform1uiv != nullptr
        && detail::ptrProgramUniform2d != nullptr
        && detail::ptrProgramUniform2dv != nullptr
        && detail::ptrProgramUniform2f != nullptr
        && detail::ptrProgramUniform2fv != nullptr
        && detail::ptrProgramUniform2i != nullptr
        && detail::ptrProgramUniform2iv != nullptr
        && detail::ptrProgramUniform2ui != nullptr
        && detail::ptrProgramUniform2uiv != nullptr
        && detail::ptrProgramUniform3d != nullptr
        && detail::ptrProgramUniform3dv != nullptr
        && detail::ptrProgramUniform3f != nullptr
        && detail::ptrProgramUniform3fv != nullptr
        && detail::ptrProgramUniform3i != nullptr
        && detail::ptrProgramUniform3iv != nullptr
        && detail::ptrProgramUniform3ui != nullptr
        && detail::ptrProgramUniform3uiv != nullptr
        && detail::ptrProgramUniform4d != nullptr
        && detail::ptrProgramUniform4dv != nullptr
        && detail::ptrProgramUniform4f != nullptr
        && detail::ptrProgramUniform4fv != nullptr
        && detail::ptrProgramUniform4i != nullptr
        && detail::ptrProgramUniform4iv != nullptr
        && detail::ptrProgramUniform4ui != nullptr
        && detail::ptrProgramUniform4uiv != nullptr
        && detail::ptrProgramUniformMatrix2dv != nullptr
        && detail::ptrProgramUniformMatrix2fv != nullptr
        && detail::ptrProgramUniformMatrix2x3dv != nullptr
        && detail::ptrProgramUniformMatrix2x3fv != nullptr
        && detail::ptrProgramUniformMatrix2x4dv != nullptr
        && detail::ptrProgramUniformMatrix2x4fv != nullptr
        && detail::ptrProgramUniformMatrix3dv != nullptr
        && detail::ptrProgramUniformMatrix3fv != nullptr
        && detail::ptrProgramUniformMatrix3x2dv != nullptr
        && detail::ptrProgramUniformMatrix3x2fv != nullptr
        && detail::ptrProgramUniformMatrix3x4dv != nullptr
        && detail::ptrProgramUniformMatrix3x4fv != nullptr
        && detail::ptrProgramUniformMatrix4dv != nullptr
        && detail::ptrProgramUniformMatrix4fv != nullptr
        && detail::ptrProgramUniformMatrix4x2dv != nullptr
        && detail::ptrProgramUniformMatrix4x2fv != nullptr
        && detail::ptrProgramUniformMatrix4x3dv != nullptr
        && detail::ptrProgramUniformMatrix4x3fv != nullptr
        && detail::ptrProvokingVertex != nullptr
        && detail::ptrPushDebugGroup != nullptr
        && detail::ptrQueryCounter != nullptr
        && detail::ptrReadBuffer != nullptr
        && detail::ptrReadPixels != nullptr
        && detail::ptrReadnPixels != nullptr
        && detail::ptrReleaseShaderCompiler != nullptr
        && detail::ptrRenderbufferStorage != nullptr
        && detail::ptrRenderbufferStorageMultisample != nullptr
        && detail::ptrResumeTransformFeedback != nullptr
        && detail::ptrSampleCoverage != nullptr
        && detail::ptrSampleMaski != nullptr
        && detail::ptrSamplerParameterIiv != nullptr
        && detail::ptrSamplerParameterIuiv != nullptr
        && detail::ptrSamplerParameterf != nullptr
        && detail::ptrSamplerParameterfv != nullptr
        && detail::ptrSamplerParameteri != nullptr
        && detail::ptrSamplerParameteriv != nullptr
        && detail::ptrScissor != nullptr
        && detail::ptrScissorArrayv != nullptr
        && detail::ptrScissorIndexed != nullptr
        && detail::ptrScissorIndexedv != nullptr
        && detail::ptrShaderBinary != nullptr
        && detail::ptrShaderSource != nullptr
        && detail::ptrShaderStorageBlockBinding != nullptr
        && detail::ptrSpecializeShader != nullptr
        && detail::ptrStencilFunc != nullptr
        && detail::ptrStencilFuncSeparate != nullptr
        && detail::ptrStencilMask != nullptr
        && detail::ptrStencilMaskSeparate != nullptr
        && detail::ptrStencilOp != nullptr
        && detail::ptrStencilOpSeparate != nullptr
        && detail::ptrTexBuffer != nullptr
        && detail::ptrTexBufferRange != nullptr
        && detail::ptrTexImage1D != nullptr
        && detail::ptrTexImage2D != nullptr
        && detail::ptrTexImage2DMultisample != nullptr
        && detail::ptrTexImage3D != nullptr
        && detail::ptrTexImage3DMultisample != nullptr
        && detail::ptrTexParameterIiv != nullptr
        && detail::ptrTexParameterIuiv != nullptr
        && detail::ptrTexParameterf != nullptr
        && detail::ptrTexParameterfv != nullptr
        && detail::ptrTexParameteri != nullptr
        && detail::ptrTexParameteriv != nullptr
        && detail::ptrTexStorage1D != nullptr
        && detail::ptrTexStorage2D != nullptr
        && detail::ptrTexStorage2DMultisample != nullptr
        && detail::ptrTexStorage3D != nullptr
        && detail::ptrTexStorage3DMultisample != nullptr
        && detail::ptrTexSubImage1D != nullptr
        && detail::ptrTexSubImage2D != nullptr
        && detail::ptrTexSubImage3D != nullptr
        && detail::ptrTextureBarrier != nullptr
        && detail::ptrTextureBuffer != nullptr
        && detail::ptrTextureBufferRange != nullptr
        && detail::ptrTextureParameterIiv != nullptr
        && detail::ptrTextureParameterIuiv != nullptr
        && detail::ptrTextureParameterf != nullptr
        && detail::ptrTextureParameterfv != nullptr
        && detail::ptrTextureParameteri != nullptr
        && detail::ptrTextureParameteriv != nullptr
        && detail::ptrTextureStorage1D != nullptr
        && detail::ptrTextureStorage2D != nullptr
        && detail::ptrTextureStorage2DMultisample != nullptr
        && detail::ptrTextureStorage3D != nullptr
        && detail::ptrTextureStorage3DMultisample != nullptr
        && detail::ptrTextureSubImage1D != nullptr
        && detail::ptrTextureSubImage2D != nullptr
        && detail::ptrTextureSubImage3D != nullptr
        && detail::ptrTextureView != nullptr
        && detail::ptrTransformFeedbackBufferBase != nullptr
        && detail::ptrTransformFeedbackBufferRange != nullptr
        && detail::ptrTransformFeedbackVaryings != nullptr
        && detail::ptrUniform1d != nullptr
        && detail::ptrUniform1dv != nullptr
        && detail::ptrUniform1f != nullptr
        && detail::ptrUniform1fv != nullptr
        && detail::ptrUniform1i != nullptr
        && detail::ptrUniform1iv != nullptr
        && detail::ptrUniform1ui != nullptr
        && detail::ptrUniform1uiv != nullptr
        && detail::ptrUniform2d != nullptr
        && detail::ptrUniform2dv != nullptr
        && detail::ptrUniform2f != nullptr
        && detail::ptrUniform2fv != nullptr
        && detail::ptrUniform2i != nullptr
        && detail::ptrUniform2iv != nullptr
        && detail::ptrUniform2ui != nullptr
        && detail::ptrUniform2uiv != nullptr
        && detail::ptrUniform3d != nullptr
        && detail::ptrUniform3dv != nullptr
        && detail::ptrUniform3f != nullptr
        && detail::ptrUniform3fv != nullptr
        && detail::ptrUniform3i != nullptr
        && detail::ptrUniform3iv != nullptr
        && detail::ptrUniform3ui != nullptr
        && detail::ptrUniform3uiv != nullptr
        && detail::ptrUniform4d != nullptr
        && detail::ptrUniform4dv != nullptr
        && detail::ptrUniform4f != nullptr
        && detail::ptrUniform4fv != nullptr
        && detail::ptrUniform4i != nullptr
        && detail::ptrUniform4iv != nullptr
        && detail::ptrUniform4ui != nullptr
        && detail::ptrUniform4uiv != nullptr
        && detail::ptrUniformBlockBinding != nullptr
        && detail::ptrUniformMatrix2dv != nullptr
        && detail::ptrUniformMatrix2fv != nullptr
        && detail::ptrUniformMatrix2x3dv != nullptr
        && detail::ptrUniformMatrix2x3fv != nullptr
        && detail::ptrUniformMatrix2x4dv != nullptr
        && detail::ptrUniformMatrix2x4fv != nullptr
        && detail::ptrUniformMatrix3dv != nullptr
        && detail::ptrUniformMatrix3fv != nullptr
        && detail::ptrUniformMatrix3x2dv != nullptr
        && detail::ptrUniformMatrix3x2fv != nullptr
        && detail::ptrUniformMatrix3x4dv != nullptr
        && detail::ptrUniformMatrix3x4fv != nullptr
        && detail::ptrUniformMatrix4dv != nullptr
        && detail::ptrUniformMatrix4fv != nullptr
        && detail::ptrUniformMatrix4x2dv != nullptr
        && detail::ptrUniformMatrix4x2fv != nullptr
        && detail::ptrUniformMatrix4x3dv != nullptr
        && detail::ptrUniformMatrix4x3fv != nullptr
        && detail::ptrUniformSubroutinesuiv != nullptr
        && detail::ptrUnmapBuffer != nullptr
        && detail::ptrUnmapNamedBuffer != nullptr
        && detail::ptrUseProgram != nullptr
        && detail::ptrUseProgramStages != nullptr
        && detail::ptrValidateProgram != nullptr
        && detail::ptrValidateProgramPipeline != nullptr
        && detail::ptrVertexArrayAttribBinding != nullptr
        && detail::ptrVertexArrayAttribFormat != nullptr
        && detail::ptrVertexArrayAttribIFormat != nullptr
        && detail::ptrVertexArrayAttribLFormat != nullptr
        && detail::ptrVertexArrayBindingDivisor != nullptr
        && detail::ptrVertexArrayElementBuffer != nullptr
        && detail::ptrVertexArrayVertexBuffer != nullptr
        && detail::ptrVertexArrayVertexBuffers != nullptr
        && detail::ptrVertexAttrib1d != nullptr
        && detail::ptrVertexAttrib1dv != nullptr
        && detail::ptrVertexAttrib1f != nullptr
        && detail::ptrVertexAttrib1fv != nullptr
        && detail::ptrVertexAttrib1s != nullptr
        && detail::ptrVertexAttrib1sv != nullptr
        && detail::ptrVertexAttrib2d != nullptr
        && detail::ptrVertexAttrib2dv != nullptr
        && detail::ptrVertexAttrib2f != nullptr
        && detail::ptrVertexAttrib2fv != nullptr
        && detail::ptrVertexAttrib2s != nullptr
        && detail::ptrVertexAttrib2sv != nullptr
        && detail::ptrVertexAttrib3d != nullptr
        && detail::ptrVertexAttrib3dv != nullptr
        && detail::ptrVertexAttrib3f != nullptr
        && detail::ptrVertexAttrib3fv != nullptr
        && detail::ptrVertexAttrib3s != nullptr
        && detail::ptrVertexAttrib3sv != nullptr
        && detail::ptrVertexAttrib4Nbv != nullptr
        && detail::ptrVertexAttrib4Niv != nullptr
        && detail::ptrVertexAttrib4Nsv != nullptr
        && detail::ptrVertexAttrib4Nub != nullptr
        && detail::ptrVertexAttrib4Nubv != nullptr
        && detail::ptrVertexAttrib4Nuiv != nullptr
        && detail::ptrVertexAttrib4Nusv != nullptr
        && detail::ptrVertexAttrib4bv != nullptr
        && detail::ptrVertexAttrib4d != nullptr
        && detail::ptrVertexAttrib4dv != nullptr
        && detail::ptrVertexAttrib4f != nullptr
        && detail::ptrVertexAttrib4fv != nullptr
        && detail::ptrVertexAttrib4iv != nullptr
        && detail::ptrVertexAttrib4s != nullptr
        && detail::ptrVertexAttrib4sv != nullptr
        && detail::ptrVertexAttrib4ubv != nullptr
        && detail::ptrVertexAttrib4uiv != nullptr
        && detail::ptrVertexAttrib4usv != nullptr
        && detail::ptrVertexAttribBinding != nullptr
        && detail::ptrVertexAttribDivisor != nullptr
        && detail::ptrVertexAttribFormat != nullptr
        && detail::ptrVertexAttribI1i != nullptr
        && detail::ptrVertexAttribI1iv != nullptr
        && detail::ptrVertexAttribI1ui != nullptr
        && detail::ptrVertexAttribI1uiv != nullptr
        && detail::ptrVertexAttribI2i != nullptr
        && detail::ptrVertexAttribI2iv != nullptr
        && detail::ptrVertexAttribI2ui != nullptr
        && detail::ptrVertexAttribI2uiv != nullptr
        && detail::ptrVertexAttribI3i != nullptr
        && detail::ptrVertexAttribI3iv != nullptr
        && detail::ptrVertexAttribI3ui != nullptr
        && detail::ptrVertexAttribI3uiv != nullptr
        && detail::ptrVertexAttribI4bv != nullptr
        && detail::ptrVertexAttribI4i != nullptr
        && detail::ptrVertexAttribI4iv != nullptr
        && detail::ptrVertexAttribI4sv != nullptr
        && detail::ptrVertexAttribI4ubv != nullptr
        && detail::ptrVertexAttribI4ui != nullptr
        && detail::ptrVertexAttribI4uiv != nullptr
        && detail::ptrVertexAttribI4usv != nullptr
        && detail::ptrVertexAttribIFormat != nullptr
        && detail::ptrVertexAttribIPointer != nullptr
        && detail::ptrVertexAttribL1d != nullptr
        && detail::ptrVertexAttribL1dv != nullptr
        && detail::ptrVertexAttribL2d != nullptr
        && detail::ptrVertexAttribL2dv != nullptr
        && detail::ptrVertexAttribL3d != nullptr
        && detail::ptrVertexAttribL3dv != nullptr
        && detail::ptrVertexAttribL4d != nullptr
        && detail::ptrVertexAttribL4dv != nullptr
        && detail::ptrVertexAttribLFormat != nullptr
        && detail::ptrVertexAttribLPointer != nullptr
        && detail::ptrVertexAttribP1ui != nullptr
        && detail::ptrVertexAttribP1uiv != nullptr
        && detail::ptrVertexAttribP2ui != nullptr
        && detail::ptrVertexAttribP2uiv != nullptr
        && detail::ptrVertexAttribP3ui != nullptr
        && detail::ptrVertexAttribP3uiv != nullptr
        && detail::ptrVertexAttribP4ui != nullptr
        && detail::ptrVertexAttribP4uiv != nullptr
        && detail::ptrVertexAttribPointer != nullptr
        && detail::ptrVertexBindingDivisor != nullptr
        && detail::ptrViewport != nullptr
        && detail::ptrViewportArrayv != nullptr
        && detail::ptrViewportIndexedf != nullptr
        && detail::ptrViewportIndexedfv != nullptr
        && detail::ptrWaitSync != nullptr
    ;
}

} // namespace gl