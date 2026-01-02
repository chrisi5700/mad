module;

// Auto-generated ergonomic OpenGL module - do not edit
// OpenGL 4.6 Core Profile
//
// This module provides STL-friendly wrappers around OpenGL functions.
// Functions marked with TODO need manual implementation using span/string_view.

#include <cassert>
export module gn;

import gm;
import std;

#ifndef NDEBUG
constexpr bool debug_mode = true;
#else
constexpr bool debug_mode = false;
#endif

// ============ Re-exported Types ============
export namespace gn
{

// Basic types
using gm::Bitfield;
using gm::Boolean;
using gm::Byte;
using gm::Char;
using gm::Clampd;
using gm::Clampf;
using gm::Double;
using gm::Fixed;
using gm::Float;
using gm::Half;
using gm::Int;
using gm::Int64;
using gm::Intptr;
using gm::Short;
using gm::Sizei;
using gm::Sizeiptr;
using gm::Ubyte;
using gm::Uint;
using gm::Uint64;
using gm::Ushort;

// Handle types
using gm::Buffer;
using gm::Framebuffer;
using gm::Program;
using gm::ProgramPipeline;
using gm::Query;
using gm::Renderbuffer;
using gm::Sampler;
using gm::Shader;
using gm::Sync;
using gm::Texture;
using gm::TransformFeedback;
using gm::VertexArray;

// Special wrappers
using gm::ProgramBinaryFormat;

// Special constants
using gm::FALSE;
using gm::INVALID_INDEX;
using gm::NO_ERROR;
using gm::NONE;
using gm::ONE;
using gm::TIMEOUT_IGNORED;
using gm::TRUE;
using gm::ZERO;

// Loader
using gm::FUNCTION_COUNT;
using gm::isComplete;
using gm::load;
using gm::LoadProc;

} // namespace gn

// ============ Re-exported Enum Classes ============
export namespace gn
{

using gm::AtomicCounterBufferPName;
using gm::AttributeType;
using gm::BindTransformFeedbackTarget;
using gm::BlendEquationModeEXT;
using gm::BlendingFactor;
using gm::BlitFramebufferFilter;
using gm::BufferAccessARB;
using gm::BufferPNameARB;
using gm::BufferPointerNameARB;
using gm::BufferStorageMask;
using gm::BufferStorageTarget;
using gm::BufferTargetARB;
using gm::BufferType;
using gm::BufferUsageARB;
using gm::ClampColorModeARB;
using gm::ClampColorTargetARB;
using gm::ClearBufferMask;
using gm::ClipControlDepth;
using gm::ClipControlOrigin;
using gm::ColorBuffer;
using gm::ConditionalRenderMode;
using gm::CopyBufferSubDataTarget;
using gm::CopyImageSubDataTarget;
using gm::DebugSeverity;
using gm::DebugSource;
using gm::DebugType;
using gm::DepthFunction;
using gm::DrawBufferMode;
using gm::DrawElementsType;
using gm::EnableCap;
using gm::ErrorCode;
using gm::FramebufferAttachment;
using gm::FramebufferAttachmentParameterName;
using gm::FramebufferParameterName;
using gm::FramebufferStatus;
using gm::FramebufferTarget;
using gm::FrontFaceDirection;
using gm::GetFramebufferParameter;
using gm::GetMultisamplePNameNV;
using gm::GetPName;
using gm::GetTextureParameter;
using gm::GraphicsResetStatus;
using gm::HintMode;
using gm::HintTarget;
using gm::InternalFormat;
using gm::InternalFormatPName;
using gm::InvalidateFramebufferAttachment;
using gm::LogicOp;
using gm::MapBufferAccessMask;
using gm::MemoryBarrierMask;
using gm::ObjectIdentifier;
using gm::PatchParameterName;
using gm::PipelineParameterName;
using gm::PixelFormat;
using gm::PixelStoreParameter;
using gm::PixelType;
using gm::PointParameterNameARB;
using gm::PolygonMode;
using gm::PrecisionType;
using gm::PrimitiveType;
using gm::ProgramInterface;
using gm::ProgramInterfacePName;
using gm::ProgramParameterPName;
using gm::ProgramPropertyARB;
using gm::ProgramResourceProperty;
using gm::ProgramStagePName;
using gm::QueryCounterTarget;
using gm::QueryObjectParameterName;
using gm::QueryParameterName;
using gm::QueryTarget;
using gm::ReadBufferMode;
using gm::RenderbufferParameterName;
using gm::RenderbufferTarget;
using gm::SamplerParameterF;
using gm::SamplerParameterI;
using gm::ShaderBinaryFormat;
using gm::ShaderParameterName;
using gm::ShaderType;
using gm::SizedInternalFormat;
using gm::StencilFunction;
using gm::StencilOpType;
using gm::StringName;
using gm::SubroutineParameterName;
using gm::SyncBehaviorFlags;
using gm::SyncCondition;
using gm::SyncObjectMask;
using gm::SyncParameterName;
using gm::SyncStatus;
using gm::TextureParameterName;
using gm::TextureTarget;
using gm::TextureUnit;
using gm::TransformFeedbackBufferMode;
using gm::TransformFeedbackPName;
using gm::TriangleFace;
using gm::UniformBlockPName;
using gm::UniformPName;
using gm::UniformType;
using gm::UseProgramStageMask;
using gm::VertexArrayPName;
using gm::VertexAttribEnum;
using gm::VertexAttribIType;
using gm::VertexAttribLType;
using gm::VertexAttribPointerPropertyARB;
using gm::VertexAttribPointerType;
using gm::VertexAttribPropertyARB;
using gm::VertexAttribType;
using gm::VertexProvokingMode;

} // namespace gn

// ============ Modernized Types ============
export namespace gn
{
using string_view = std::basic_string_view<Char>;
}

// ============ Functions ============
export namespace gn
{

// -------- Shaders --------

using gm::CompileShader;
using gm::CreateShader;

/**
 * Create a stand-alone program from an array of null-terminated source code strings
 * @param type Type of Shader Program to create
 * @param shader_sources Array to shader sources
 * @return Created Shader Program
 */
Program CreateShaderProgramv(ShaderType type, std::span<const Char*> shader_sources) // Id like std::span<string_view> here but alas
{
	return gm::CreateShaderProgramv(type, shader_sources.size(), shader_sources.data());
}
using gm::DeleteShader;

/**
 * Returns the information log for a shader object
 * @param shader Shader Handle
 * @param info_log_buffer Buffer to which the info log will be written
 * @return string_view into that buffer
 */
string_view GetShaderInfoLog(Shader shader, std::span<Char> info_log_buffer)
{
	Sizei length = 0;
	gm::GetShaderInfoLog(shader, info_log_buffer.size(), &length, info_log_buffer.data());
	return {info_log_buffer.data(), static_cast<std::size_t>(length)};
}
struct PrecisionFormatResult
{
	Int range_low;
	Int range_heigh;
	Int precision;
};

/**
 * Retrieve the range and precision for numeric formats supported by the shader compiler
 * @param shadertype Shader Type
 * @param precisiontype Data Type
 * @return struct containing named results
 */
PrecisionFormatResult GetShaderPrecisionFormat(ShaderType shadertype, PrecisionType precisiontype)
{
	PrecisionFormatResult out{};
	gm::GetShaderPrecisionFormat(shadertype, precisiontype, &out.range_low, &out.precision);
	return out;
}
/**
 * Returns the source code string from a shader object, use gn::GetShader with ShaderParameterName::ShaderSourceLength to query size needed for buffer.
 * @param shader Shader Handle
 * @param shader_source_buffer Buffer into which the source will be written
 * @return string_view into that buffer containing the source
 */
string_view GetShaderSource(Shader shader, std::span<Char> shader_source_buffer)
{
	Sizei length = 0;
	gm::GetShaderSource(shader, shader_source_buffer.size(), &length, shader_source_buffer.data());
	return string_view{shader_source_buffer.data(), static_cast<std::size_t>(length)};
}
/**
 *  Returns a parameter from a shader object
 * @param shader Shader Handle
 * @param pname Parameter name to query
 * @return Value returned for queried parameter. May be numerical or gn::True/gn::False
 */
Int GetShaderiv(Shader shader, ShaderParameterName pname)
{
	Int params;
	gm::GetShaderiv(shader, pname, &params);
	return params;
}
using gm::IsShader;
using gm::ReleaseShaderCompiler;

/**
 * Load pre-compiled shader binaries
 * @param shaders Shader Handles to write to
 * @param binaryFormat Format of the shader binaries in binary
 * @param binary Array of bytes containing the pre-compiled binary shader code
 */
void ShaderBinary(std::span<const Shader> shaders, ShaderBinaryFormat binaryFormat, std::span<const std::byte> binary)
{
	gm::ShaderBinary(shaders.size(), shaders.data(), binaryFormat, binary.data(), binary.size());
}
/**
 * Replaces the source code in a shader object
 * @param shader Shader Handle
 * @param strings Array to C-strings that may be null terminated
 * @param lengths Lengths of C-strings incase they arent null terminated
 */
void ShaderSource(Shader shader, std::span<const Char*> strings, std::span<const Int> lengths = {})
{
	gm::ShaderSource(shader, strings.size(), strings.data(), lengths.empty() ? nullptr : lengths.data());
}
using gm::ShaderStorageBlockBinding;

/**
 * Specialize a shader object from a SPIR-V module
 * @param shader Specifies the name of a shader object containing unspecialized SPIR-V as created from a successful call to glShaderBinary to which a SPIR-V module was passed.
 * @param entry_point Name to entry point
 * @param constant_idx Indices of constants
 * @param constant_val Values for constants
 */
void SpecializeShader(Shader shader, string_view entry_point, std::span<Uint> constant_idx, std::span<Uint> constant_val)
{
	gm::SpecializeShader(shader, entry_point.data(), constant_idx.size(), constant_idx.data(), constant_val.data());
}

// -------- Programs --------

using gm::AttachShader;
// TODO: Modernize (name: string_view)
void BindAttribLocation(Program program, Uint index, const Char* name)
{
	gm::BindAttribLocation(program, index, name);
}
// TODO: Modernize (name: string_view)
void BindFragDataLocation(Program program, Uint color, const Char* name)
{
	gm::BindFragDataLocation(program, color, name);
}
// TODO: Modernize (name: string_view)
void BindFragDataLocationIndexed(Program program, Uint colorNumber, Uint index, const Char* name)
{
	gm::BindFragDataLocationIndexed(program, colorNumber, index, name);
}
using gm::CreateProgram;
// TODO: Modernize (pipelines: span output)
void CreateProgramPipelines(Sizei n, ProgramPipeline* pipelines)
{
	gm::CreateProgramPipelines(n, pipelines);
}
using gm::DeleteProgram;
// TODO: Modernize (pipelines: span input)
void DeleteProgramPipelines(Sizei n, const ProgramPipeline* pipelines)
{
	gm::DeleteProgramPipelines(n, pipelines);
}
using gm::DetachShader;
// TODO: Modernize (length: span output, size: span output, type: span output, name: span output)
void GetActiveAttrib(Program program, Uint index, Sizei bufSize, Sizei* length, Int* size, AttributeType* type,
					 Char* name)
{
	gm::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}
// TODO: Modernize (length: span output, name: span output)
void GetActiveSubroutineName(Program program, ShaderType shadertype, Uint index, Sizei bufSize, Sizei* length,
							 Char* name)
{
	gm::GetActiveSubroutineName(program, shadertype, index, bufSize, length, name);
}
// TODO: Modernize (length: span output, name: span output)
void GetActiveSubroutineUniformName(Program program, ShaderType shadertype, Uint index, Sizei bufSize, Sizei* length,
									Char* name)
{
	gm::GetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name);
}
// TODO: Modernize (values: span output)
void GetActiveSubroutineUniformiv(Program program, ShaderType shadertype, Uint index, SubroutineParameterName pname,
								  Int* values)
{
	gm::GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}
// TODO: Modernize (count: span output, shaders: span output)
void GetAttachedShaders(Program program, Sizei maxCount, Sizei* count, Shader* shaders)
{
	gm::GetAttachedShaders(program, maxCount, count, shaders);
}
// TODO: Modernize (name: string_view)
Int GetAttribLocation(Program program, const Char* name)
{
	return gm::GetAttribLocation(program, name);
}
// TODO: Modernize (name: string_view)
Int GetFragDataIndex(Program program, const Char* name)
{
	return gm::GetFragDataIndex(program, name);
}
// TODO: Modernize (name: string_view)
Int GetFragDataLocation(Program program, const Char* name)
{
	return gm::GetFragDataLocation(program, name);
}
// TODO: Modernize (length: span output, binaryFormat: span output)
void GetProgramBinary(Program program, Sizei bufSize, Sizei* length, ProgramBinaryFormat* binaryFormat, void* binary)
{
	gm::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}
// TODO: Modernize (length: span output, infoLog: span output)
void GetProgramInfoLog(Program program, Sizei bufSize, Sizei* length, Char* infoLog)
{
	gm::GetProgramInfoLog(program, bufSize, length, infoLog);
}
// TODO: Modernize (params: span output)
void GetProgramInterfaceiv(Program program, ProgramInterface programInterface, ProgramInterfacePName pname, Int* params)
{
	gm::GetProgramInterfaceiv(program, programInterface, pname, params);
}
// TODO: Modernize (length: span output, infoLog: span output)
void GetProgramPipelineInfoLog(ProgramPipeline pipeline, Sizei bufSize, Sizei* length, Char* infoLog)
{
	gm::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}
// TODO: Modernize (params: span output)
void GetProgramPipelineiv(ProgramPipeline pipeline, PipelineParameterName pname, Int* params)
{
	gm::GetProgramPipelineiv(pipeline, pname, params);
}
// TODO: Modernize (name: string_view)
Uint GetProgramResourceIndex(Program program, ProgramInterface programInterface, const Char* name)
{
	return gm::GetProgramResourceIndex(program, programInterface, name);
}
// TODO: Modernize (name: string_view)
Int GetProgramResourceLocation(Program program, ProgramInterface programInterface, const Char* name)
{
	return gm::GetProgramResourceLocation(program, programInterface, name);
}
// TODO: Modernize (name: string_view)
Int GetProgramResourceLocationIndex(Program program, ProgramInterface programInterface, const Char* name)
{
	return gm::GetProgramResourceLocationIndex(program, programInterface, name);
}
// TODO: Modernize (length: span output, name: span output)
void GetProgramResourceName(Program program, ProgramInterface programInterface, Uint index, Sizei bufSize,
							Sizei* length, Char* name)
{
	gm::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}
// TODO: Modernize (props: span input, length: span output, params: span output)
void GetProgramResourceiv(Program program, ProgramInterface programInterface, Uint index, Sizei propCount,
						  const ProgramResourceProperty* props, Sizei count, Sizei* length, Int* params)
{
	gm::GetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params);
}
// TODO: Modernize (values: span output)
void GetProgramStageiv(Program program, ShaderType shadertype, ProgramStagePName pname, Int* values)
{
	gm::GetProgramStageiv(program, shadertype, pname, values);
}
// TODO: Modernize (params: span output)
void GetProgramiv(Program program, ProgramPropertyARB pname, Int* params)
{
	gm::GetProgramiv(program, pname, params);
}
// TODO: Modernize (name: string_view)
Uint GetSubroutineIndex(Program program, ShaderType shadertype, const Char* name)
{
	return gm::GetSubroutineIndex(program, shadertype, name);
}
// TODO: Modernize (name: string_view)
Int GetSubroutineUniformLocation(Program program, ShaderType shadertype, const Char* name)
{
	return gm::GetSubroutineUniformLocation(program, shadertype, name);
}
using gm::IsProgram;
using gm::IsProgramPipeline;
using gm::LinkProgram;
using gm::ProgramBinary;
using gm::ProgramParameteri;
using gm::ProgramUniform1d;
// TODO: Modernize (value: span input)
void ProgramUniform1dv(Program program, Int location, Sizei count, const Double* value)
{
	gm::ProgramUniform1dv(program, location, count, value);
}
using gm::ProgramUniform1f;
// TODO: Modernize (value: span input)
void ProgramUniform1fv(Program program, Int location, Sizei count, const Float* value)
{
	gm::ProgramUniform1fv(program, location, count, value);
}
using gm::ProgramUniform1i;
// TODO: Modernize (value: span input)
void ProgramUniform1iv(Program program, Int location, Sizei count, const Int* value)
{
	gm::ProgramUniform1iv(program, location, count, value);
}
using gm::ProgramUniform1ui;
// TODO: Modernize (value: span input)
void ProgramUniform1uiv(Program program, Int location, Sizei count, const Uint* value)
{
	gm::ProgramUniform1uiv(program, location, count, value);
}
using gm::ProgramUniform2d;
// TODO: Modernize (value: span input)
void ProgramUniform2dv(Program program, Int location, Sizei count, const Double* value)
{
	gm::ProgramUniform2dv(program, location, count, value);
}
using gm::ProgramUniform2f;
// TODO: Modernize (value: span input)
void ProgramUniform2fv(Program program, Int location, Sizei count, const Float* value)
{
	gm::ProgramUniform2fv(program, location, count, value);
}
using gm::ProgramUniform2i;
// TODO: Modernize (value: span input)
void ProgramUniform2iv(Program program, Int location, Sizei count, const Int* value)
{
	gm::ProgramUniform2iv(program, location, count, value);
}
using gm::ProgramUniform2ui;
// TODO: Modernize (value: span input)
void ProgramUniform2uiv(Program program, Int location, Sizei count, const Uint* value)
{
	gm::ProgramUniform2uiv(program, location, count, value);
}
using gm::ProgramUniform3d;
// TODO: Modernize (value: span input)
void ProgramUniform3dv(Program program, Int location, Sizei count, const Double* value)
{
	gm::ProgramUniform3dv(program, location, count, value);
}
using gm::ProgramUniform3f;
// TODO: Modernize (value: span input)
void ProgramUniform3fv(Program program, Int location, Sizei count, const Float* value)
{
	gm::ProgramUniform3fv(program, location, count, value);
}
using gm::ProgramUniform3i;
// TODO: Modernize (value: span input)
void ProgramUniform3iv(Program program, Int location, Sizei count, const Int* value)
{
	gm::ProgramUniform3iv(program, location, count, value);
}
using gm::ProgramUniform3ui;
// TODO: Modernize (value: span input)
void ProgramUniform3uiv(Program program, Int location, Sizei count, const Uint* value)
{
	gm::ProgramUniform3uiv(program, location, count, value);
}
using gm::ProgramUniform4d;
// TODO: Modernize (value: span input)
void ProgramUniform4dv(Program program, Int location, Sizei count, const Double* value)
{
	gm::ProgramUniform4dv(program, location, count, value);
}
using gm::ProgramUniform4f;
// TODO: Modernize (value: span input)
void ProgramUniform4fv(Program program, Int location, Sizei count, const Float* value)
{
	gm::ProgramUniform4fv(program, location, count, value);
}
using gm::ProgramUniform4i;
// TODO: Modernize (value: span input)
void ProgramUniform4iv(Program program, Int location, Sizei count, const Int* value)
{
	gm::ProgramUniform4iv(program, location, count, value);
}
using gm::ProgramUniform4ui;
// TODO: Modernize (value: span input)
void ProgramUniform4uiv(Program program, Int location, Sizei count, const Uint* value)
{
	gm::ProgramUniform4uiv(program, location, count, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix2dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::ProgramUniformMatrix2dv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix2fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix2x3dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix2x3fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix2x4dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix2x4fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix3dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::ProgramUniformMatrix3dv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix3fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix3x2dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix3x2fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix3x4dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix3x4fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix4dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::ProgramUniformMatrix4dv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix4fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix4x2dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix4x2fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix4x3dv(Program program, Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void ProgramUniformMatrix4x3fv(Program program, Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}
using gm::UseProgram;
using gm::UseProgramStages;
using gm::ValidateProgram;
using gm::ValidateProgramPipeline;

// -------- Uniforms --------

/**
 *
 * @param program Program Handle
 * @param index Index to Uniform
 * @param name Optional buffer for name of the Uniform
 * @return Type and Size of the Uniform + Optionally string_view into the name buffer
 */
std::tuple<UniformType, Int, string_view> GetActiveUniform(Program program, Uint index, std::span<Char> name = {})
{

	UniformType type;
	Int			size   = 0;
	Sizei		length = 0;
	// If name is empty then size == 0 and name.data() == nullptr
	gm::GetActiveUniform(program, index, name.size(), &length, &size, &type, name.data());
	if (name.empty())
	{
		return {type, size, {}}; // Explicitly empty sv
	}
	if constexpr (debug_mode)
	{
		// Truncation detection: if we used the entire buffer (minus null), name might be truncated
		if (length == static_cast<Sizei>(name.size()) - 1)
		{
			assert(false && "GetActiveUniform: name buffer may be truncated");
		}
	}
	return {type, size, string_view{name.data(), static_cast<std::size_t>(length)}};
}

// TODO: Modernize (length: span output, uniformBlockName: span output)
void GetActiveUniformBlockName(Program program, Uint uniformBlockIndex, Sizei bufSize, Sizei* length,
							   Char* uniformBlockName)
{
	gm::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}
// TODO: Modernize (params: span output)
void GetActiveUniformBlockiv(Program program, Uint uniformBlockIndex, UniformBlockPName pname, Int* params)
{
	gm::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}
// TODO: Modernize (length: span output, uniformName: span output)
void GetActiveUniformName(Program program, Uint uniformIndex, Sizei bufSize, Sizei* length, Char* uniformName)
{
	gm::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}
// TODO: Modernize (uniformIndices: span input, params: span output)
void GetActiveUniformsiv(Program program, Sizei uniformCount, const Uint* uniformIndices, UniformPName pname,
						 Int* params)
{
	gm::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}
// TODO: Modernize (uniformBlockName: string_view)
Uint GetUniformBlockIndex(Program program, const Char* uniformBlockName)
{
	return gm::GetUniformBlockIndex(program, uniformBlockName);
}
// TODO: Modernize (uniformNames: span<string_view>, uniformIndices: span output)
void GetUniformIndices(Program program, Sizei uniformCount, const Char** uniformNames, Uint* uniformIndices)
{
	gm::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}
// TODO: Modernize (name: string_view)
Int GetUniformLocation(Program program, const Char* name)
{
	return gm::GetUniformLocation(program, name);
}
// TODO: Modernize (params: span output)
void GetUniformSubroutineuiv(ShaderType shadertype, Int location, Uint* params)
{
	gm::GetUniformSubroutineuiv(shadertype, location, params);
}
// TODO: Modernize (params: span output)
void GetUniformdv(Program program, Int location, Double* params)
{
	gm::GetUniformdv(program, location, params);
}
// TODO: Modernize (params: span output)
void GetUniformfv(Program program, Int location, Float* params)
{
	gm::GetUniformfv(program, location, params);
}
// TODO: Modernize (params: span output)
void GetUniformiv(Program program, Int location, Int* params)
{
	gm::GetUniformiv(program, location, params);
}
// TODO: Modernize (params: span output)
void GetUniformuiv(Program program, Int location, Uint* params)
{
	gm::GetUniformuiv(program, location, params);
}
// TODO: Modernize (params: span output)
void GetnUniformdv(Program program, Int location, Sizei bufSize, Double* params)
{
	gm::GetnUniformdv(program, location, bufSize, params);
}
// TODO: Modernize (params: span output)
void GetnUniformfv(Program program, Int location, Sizei bufSize, Float* params)
{
	gm::GetnUniformfv(program, location, bufSize, params);
}
// TODO: Modernize (params: span output)
void GetnUniformiv(Program program, Int location, Sizei bufSize, Int* params)
{
	gm::GetnUniformiv(program, location, bufSize, params);
}
// TODO: Modernize (params: span output)
void GetnUniformuiv(Program program, Int location, Sizei bufSize, Uint* params)
{
	gm::GetnUniformuiv(program, location, bufSize, params);
}
using gm::Uniform1d;
// TODO: Modernize (value: span input)
void Uniform1dv(Int location, Sizei count, const Double* value)
{
	gm::Uniform1dv(location, count, value);
}
using gm::Uniform1f;
// TODO: Modernize (value: span input)
void Uniform1fv(Int location, Sizei count, const Float* value)
{
	gm::Uniform1fv(location, count, value);
}
using gm::Uniform1i;
// TODO: Modernize (value: span input)
void Uniform1iv(Int location, Sizei count, const Int* value)
{
	gm::Uniform1iv(location, count, value);
}
using gm::Uniform1ui;
// TODO: Modernize (value: span input)
void Uniform1uiv(Int location, Sizei count, const Uint* value)
{
	gm::Uniform1uiv(location, count, value);
}
using gm::Uniform2d;
// TODO: Modernize (value: span input)
void Uniform2dv(Int location, Sizei count, const Double* value)
{
	gm::Uniform2dv(location, count, value);
}
using gm::Uniform2f;
// TODO: Modernize (value: span input)
void Uniform2fv(Int location, Sizei count, const Float* value)
{
	gm::Uniform2fv(location, count, value);
}
using gm::Uniform2i;
// TODO: Modernize (value: span input)
void Uniform2iv(Int location, Sizei count, const Int* value)
{
	gm::Uniform2iv(location, count, value);
}
using gm::Uniform2ui;
// TODO: Modernize (value: span input)
void Uniform2uiv(Int location, Sizei count, const Uint* value)
{
	gm::Uniform2uiv(location, count, value);
}
using gm::Uniform3d;
// TODO: Modernize (value: span input)
void Uniform3dv(Int location, Sizei count, const Double* value)
{
	gm::Uniform3dv(location, count, value);
}
using gm::Uniform3f;
// TODO: Modernize (value: span input)
void Uniform3fv(Int location, Sizei count, const Float* value)
{
	gm::Uniform3fv(location, count, value);
}
using gm::Uniform3i;
// TODO: Modernize (value: span input)
void Uniform3iv(Int location, Sizei count, const Int* value)
{
	gm::Uniform3iv(location, count, value);
}
using gm::Uniform3ui;
// TODO: Modernize (value: span input)
void Uniform3uiv(Int location, Sizei count, const Uint* value)
{
	gm::Uniform3uiv(location, count, value);
}
using gm::Uniform4d;
// TODO: Modernize (value: span input)
void Uniform4dv(Int location, Sizei count, const Double* value)
{
	gm::Uniform4dv(location, count, value);
}
using gm::Uniform4f;
// TODO: Modernize (value: span input)
void Uniform4fv(Int location, Sizei count, const Float* value)
{
	gm::Uniform4fv(location, count, value);
}
using gm::Uniform4i;
// TODO: Modernize (value: span input)
void Uniform4iv(Int location, Sizei count, const Int* value)
{
	gm::Uniform4iv(location, count, value);
}
using gm::Uniform4ui;
// TODO: Modernize (value: span input)
void Uniform4uiv(Int location, Sizei count, const Uint* value)
{
	gm::Uniform4uiv(location, count, value);
}
using gm::UniformBlockBinding;
// TODO: Modernize (value: span input)
void UniformMatrix2dv(Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::UniformMatrix2dv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix2fv(Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::UniformMatrix2fv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix2x3dv(Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::UniformMatrix2x3dv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix2x3fv(Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::UniformMatrix2x3fv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix2x4dv(Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::UniformMatrix2x4dv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix2x4fv(Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::UniformMatrix2x4fv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix3dv(Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::UniformMatrix3dv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix3fv(Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::UniformMatrix3fv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix3x2dv(Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::UniformMatrix3x2dv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix3x2fv(Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::UniformMatrix3x2fv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix3x4dv(Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::UniformMatrix3x4dv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix3x4fv(Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::UniformMatrix3x4fv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix4dv(Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::UniformMatrix4dv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix4fv(Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::UniformMatrix4fv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix4x2dv(Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::UniformMatrix4x2dv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix4x2fv(Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::UniformMatrix4x2fv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix4x3dv(Int location, Sizei count, Boolean transpose, const Double* value)
{
	gm::UniformMatrix4x3dv(location, count, transpose, value);
}
// TODO: Modernize (value: span input)
void UniformMatrix4x3fv(Int location, Sizei count, Boolean transpose, const Float* value)
{
	gm::UniformMatrix4x3fv(location, count, transpose, value);
}
// TODO: Modernize (indices: span input)
void UniformSubroutinesuiv(ShaderType shadertype, Sizei count, const Uint* indices)
{
	gm::UniformSubroutinesuiv(shadertype, count, indices);
}

// -------- Vertex Arrays --------

using gm::BindVertexArray;
using gm::BindVertexBuffer;
// TODO: Modernize (buffers: span input, offsets: span input, strides: span input)
void BindVertexBuffers(Uint first, Sizei count, const Buffer* buffers, const Intptr* offsets, const Sizei* strides)
{
	gm::BindVertexBuffers(first, count, buffers, offsets, strides);
}
// TODO: Modernize (arrays: span output)
void CreateVertexArrays(Sizei n, VertexArray* arrays)
{
	gm::CreateVertexArrays(n, arrays);
}
// TODO: Modernize (arrays: span input)
void DeleteVertexArrays(Sizei n, const VertexArray* arrays)
{
	gm::DeleteVertexArrays(n, arrays);
}
using gm::DisableVertexAttribArray;
using gm::EnableVertexAttribArray;
// TODO: Modernize (arrays: span output)
void GenVertexArrays(Sizei n, VertexArray* arrays)
{
	gm::GenVertexArrays(n, arrays);
}
// TODO: Modernize (param: span output)
void GetVertexArrayIndexed64iv(VertexArray vaobj, Uint index, VertexArrayPName pname, Int64* param)
{
	gm::GetVertexArrayIndexed64iv(vaobj, index, pname, param);
}
// TODO: Modernize (param: span output)
void GetVertexArrayIndexediv(VertexArray vaobj, Uint index, VertexArrayPName pname, Int* param)
{
	gm::GetVertexArrayIndexediv(vaobj, index, pname, param);
}
// TODO: Modernize (param: span output)
void GetVertexArrayiv(VertexArray vaobj, VertexArrayPName pname, Int* param)
{
	gm::GetVertexArrayiv(vaobj, pname, param);
}
// TODO: Modernize (params: span output)
void GetVertexAttribIiv(Uint index, VertexAttribEnum pname, Int* params)
{
	gm::GetVertexAttribIiv(index, pname, params);
}
// TODO: Modernize (params: span output)
void GetVertexAttribIuiv(Uint index, VertexAttribEnum pname, Uint* params)
{
	gm::GetVertexAttribIuiv(index, pname, params);
}
// TODO: Modernize (params: span output)
void GetVertexAttribLdv(Uint index, VertexAttribEnum pname, Double* params)
{
	gm::GetVertexAttribLdv(index, pname, params);
}
using gm::GetVertexAttribPointerv;
// TODO: Modernize (params: span output)
void GetVertexAttribdv(Uint index, VertexAttribPropertyARB pname, Double* params)
{
	gm::GetVertexAttribdv(index, pname, params);
}
// TODO: Modernize (params: span output)
void GetVertexAttribfv(Uint index, VertexAttribPropertyARB pname, Float* params)
{
	gm::GetVertexAttribfv(index, pname, params);
}
// TODO: Modernize (params: span output)
void GetVertexAttribiv(Uint index, VertexAttribPropertyARB pname, Int* params)
{
	gm::GetVertexAttribiv(index, pname, params);
}
using gm::IsVertexArray;
using gm::VertexArrayAttribBinding;
using gm::VertexArrayAttribFormat;
using gm::VertexArrayAttribIFormat;
using gm::VertexArrayAttribLFormat;
using gm::VertexArrayBindingDivisor;
using gm::VertexArrayElementBuffer;
using gm::VertexArrayVertexBuffer;
// TODO: Modernize (buffers: span input, offsets: span input, strides: span input)
void VertexArrayVertexBuffers(VertexArray vaobj, Uint first, Sizei count, const Buffer* buffers, const Intptr* offsets,
							  const Sizei* strides)
{
	gm::VertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
}
using gm::VertexAttrib1d;
// TODO: Modernize (v: span input)
void VertexAttrib1dv(Uint index, const Double* v)
{
	gm::VertexAttrib1dv(index, v);
}
using gm::VertexAttrib1f;
// TODO: Modernize (v: span input)
void VertexAttrib1fv(Uint index, const Float* v)
{
	gm::VertexAttrib1fv(index, v);
}
using gm::VertexAttrib1s;
// TODO: Modernize (v: span input)
void VertexAttrib1sv(Uint index, const Short* v)
{
	gm::VertexAttrib1sv(index, v);
}
using gm::VertexAttrib2d;
// TODO: Modernize (v: span input)
void VertexAttrib2dv(Uint index, const Double* v)
{
	gm::VertexAttrib2dv(index, v);
}
using gm::VertexAttrib2f;
// TODO: Modernize (v: span input)
void VertexAttrib2fv(Uint index, const Float* v)
{
	gm::VertexAttrib2fv(index, v);
}
using gm::VertexAttrib2s;
// TODO: Modernize (v: span input)
void VertexAttrib2sv(Uint index, const Short* v)
{
	gm::VertexAttrib2sv(index, v);
}
using gm::VertexAttrib3d;
// TODO: Modernize (v: span input)
void VertexAttrib3dv(Uint index, const Double* v)
{
	gm::VertexAttrib3dv(index, v);
}
using gm::VertexAttrib3f;
// TODO: Modernize (v: span input)
void VertexAttrib3fv(Uint index, const Float* v)
{
	gm::VertexAttrib3fv(index, v);
}
using gm::VertexAttrib3s;
// TODO: Modernize (v: span input)
void VertexAttrib3sv(Uint index, const Short* v)
{
	gm::VertexAttrib3sv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4Nbv(Uint index, const Byte* v)
{
	gm::VertexAttrib4Nbv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4Niv(Uint index, const Int* v)
{
	gm::VertexAttrib4Niv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4Nsv(Uint index, const Short* v)
{
	gm::VertexAttrib4Nsv(index, v);
}
using gm::VertexAttrib4Nub;
// TODO: Modernize (v: span input)
void VertexAttrib4Nubv(Uint index, const Ubyte* v)
{
	gm::VertexAttrib4Nubv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4Nuiv(Uint index, const Uint* v)
{
	gm::VertexAttrib4Nuiv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4Nusv(Uint index, const Ushort* v)
{
	gm::VertexAttrib4Nusv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4bv(Uint index, const Byte* v)
{
	gm::VertexAttrib4bv(index, v);
}
using gm::VertexAttrib4d;
// TODO: Modernize (v: span input)
void VertexAttrib4dv(Uint index, const Double* v)
{
	gm::VertexAttrib4dv(index, v);
}
using gm::VertexAttrib4f;
// TODO: Modernize (v: span input)
void VertexAttrib4fv(Uint index, const Float* v)
{
	gm::VertexAttrib4fv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4iv(Uint index, const Int* v)
{
	gm::VertexAttrib4iv(index, v);
}
using gm::VertexAttrib4s;
// TODO: Modernize (v: span input)
void VertexAttrib4sv(Uint index, const Short* v)
{
	gm::VertexAttrib4sv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4ubv(Uint index, const Ubyte* v)
{
	gm::VertexAttrib4ubv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4uiv(Uint index, const Uint* v)
{
	gm::VertexAttrib4uiv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttrib4usv(Uint index, const Ushort* v)
{
	gm::VertexAttrib4usv(index, v);
}
using gm::VertexAttribBinding;
using gm::VertexAttribDivisor;
using gm::VertexAttribFormat;
using gm::VertexAttribI1i;
// TODO: Modernize (v: span input)
void VertexAttribI1iv(Uint index, const Int* v)
{
	gm::VertexAttribI1iv(index, v);
}
using gm::VertexAttribI1ui;
// TODO: Modernize (v: span input)
void VertexAttribI1uiv(Uint index, const Uint* v)
{
	gm::VertexAttribI1uiv(index, v);
}
using gm::VertexAttribI2i;
// TODO: Modernize (v: span input)
void VertexAttribI2iv(Uint index, const Int* v)
{
	gm::VertexAttribI2iv(index, v);
}
using gm::VertexAttribI2ui;
// TODO: Modernize (v: span input)
void VertexAttribI2uiv(Uint index, const Uint* v)
{
	gm::VertexAttribI2uiv(index, v);
}
using gm::VertexAttribI3i;
// TODO: Modernize (v: span input)
void VertexAttribI3iv(Uint index, const Int* v)
{
	gm::VertexAttribI3iv(index, v);
}
using gm::VertexAttribI3ui;
// TODO: Modernize (v: span input)
void VertexAttribI3uiv(Uint index, const Uint* v)
{
	gm::VertexAttribI3uiv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttribI4bv(Uint index, const Byte* v)
{
	gm::VertexAttribI4bv(index, v);
}
using gm::VertexAttribI4i;
// TODO: Modernize (v: span input)
void VertexAttribI4iv(Uint index, const Int* v)
{
	gm::VertexAttribI4iv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttribI4sv(Uint index, const Short* v)
{
	gm::VertexAttribI4sv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttribI4ubv(Uint index, const Ubyte* v)
{
	gm::VertexAttribI4ubv(index, v);
}
using gm::VertexAttribI4ui;
// TODO: Modernize (v: span input)
void VertexAttribI4uiv(Uint index, const Uint* v)
{
	gm::VertexAttribI4uiv(index, v);
}
// TODO: Modernize (v: span input)
void VertexAttribI4usv(Uint index, const Ushort* v)
{
	gm::VertexAttribI4usv(index, v);
}
using gm::VertexAttribIFormat;
using gm::VertexAttribIPointer;
using gm::VertexAttribL1d;
// TODO: Modernize (v: span input)
void VertexAttribL1dv(Uint index, const Double* v)
{
	gm::VertexAttribL1dv(index, v);
}
using gm::VertexAttribL2d;
// TODO: Modernize (v: span input)
void VertexAttribL2dv(Uint index, const Double* v)
{
	gm::VertexAttribL2dv(index, v);
}
using gm::VertexAttribL3d;
// TODO: Modernize (v: span input)
void VertexAttribL3dv(Uint index, const Double* v)
{
	gm::VertexAttribL3dv(index, v);
}
using gm::VertexAttribL4d;
// TODO: Modernize (v: span input)
void VertexAttribL4dv(Uint index, const Double* v)
{
	gm::VertexAttribL4dv(index, v);
}
using gm::VertexAttribLFormat;
using gm::VertexAttribLPointer;
using gm::VertexAttribP1ui;
// TODO: Modernize (value: span input)
void VertexAttribP1uiv(Uint index, VertexAttribPointerType type, Boolean normalized, const Uint* value)
{
	gm::VertexAttribP1uiv(index, type, normalized, value);
}
using gm::VertexAttribP2ui;
// TODO: Modernize (value: span input)
void VertexAttribP2uiv(Uint index, VertexAttribPointerType type, Boolean normalized, const Uint* value)
{
	gm::VertexAttribP2uiv(index, type, normalized, value);
}
using gm::VertexAttribP3ui;
// TODO: Modernize (value: span input)
void VertexAttribP3uiv(Uint index, VertexAttribPointerType type, Boolean normalized, const Uint* value)
{
	gm::VertexAttribP3uiv(index, type, normalized, value);
}
using gm::VertexAttribP4ui;
// TODO: Modernize (value: span input)
void VertexAttribP4uiv(Uint index, VertexAttribPointerType type, Boolean normalized, const Uint* value)
{
	gm::VertexAttribP4uiv(index, type, normalized, value);
}
using gm::VertexAttribPointer;
using gm::VertexBindingDivisor;

// -------- Buffers --------

using gm::BindBuffer;
using gm::BindBufferBase;
using gm::BindBufferRange;
// TODO: Modernize (buffers: span input)
void BindBuffersBase(BufferTargetARB target, Uint first, Sizei count, const Buffer* buffers)
{
	gm::BindBuffersBase(target, first, count, buffers);
}
// TODO: Modernize (buffers: span input, offsets: span input, sizes: span input)
void BindBuffersRange(BufferTargetARB target, Uint first, Sizei count, const Buffer* buffers, const Intptr* offsets,
					  const Sizeiptr* sizes)
{
	gm::BindBuffersRange(target, first, count, buffers, offsets, sizes);
}
using gm::BufferData;
using gm::BufferStorage;
using gm::BufferSubData;
using gm::ClearBufferData;
using gm::ClearBufferfi;
using gm::ClearBufferSubData;
// TODO: Modernize (value: span input)
void ClearBufferfv(BufferType buffer, Int drawbuffer, const Float* value)
{
	gm::ClearBufferfv(buffer, drawbuffer, value);
}
// TODO: Modernize (value: span input)
void ClearBufferiv(BufferType buffer, Int drawbuffer, const Int* value)
{
	gm::ClearBufferiv(buffer, drawbuffer, value);
}
// TODO: Modernize (value: span input)
void ClearBufferuiv(BufferType buffer, Int drawbuffer, const Uint* value)
{
	gm::ClearBufferuiv(buffer, drawbuffer, value);
}
using gm::ClearNamedBufferData;
using gm::ClearNamedBufferSubData;
using gm::CopyBufferSubData;
using gm::CopyNamedBufferSubData;
// TODO: Modernize (buffers: span output)
void CreateBuffers(Sizei n, Buffer* buffers)
{
	gm::CreateBuffers(n, buffers);
}
// TODO: Modernize (buffers: span input)
void DeleteBuffers(Sizei n, const Buffer* buffers)
{
	gm::DeleteBuffers(n, buffers);
}
using gm::FlushMappedBufferRange;
using gm::FlushMappedNamedBufferRange;
// TODO: Modernize (buffers: span output)
void GenBuffers(Sizei n, Buffer* buffers)
{
	gm::GenBuffers(n, buffers);
}
// TODO: Modernize (params: span output)
void GetActiveAtomicCounterBufferiv(Program program, Uint bufferIndex, AtomicCounterBufferPName pname, Int* params)
{
	gm::GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}
// TODO: Modernize (params: span output)
void GetBufferParameteri64v(BufferTargetARB target, BufferPNameARB pname, Int64* params)
{
	gm::GetBufferParameteri64v(target, pname, params);
}
// TODO: Modernize (params: span output)
void GetBufferParameteriv(BufferTargetARB target, BufferPNameARB pname, Int* params)
{
	gm::GetBufferParameteriv(target, pname, params);
}
using gm::GetBufferPointerv;
using gm::GetBufferSubData;
// TODO: Modernize (params: span output)
void GetNamedBufferParameteri64v(Buffer buffer, BufferPNameARB pname, Int64* params)
{
	gm::GetNamedBufferParameteri64v(buffer, pname, params);
}
// TODO: Modernize (params: span output)
void GetNamedBufferParameteriv(Buffer buffer, BufferPNameARB pname, Int* params)
{
	gm::GetNamedBufferParameteriv(buffer, pname, params);
}
using gm::GetNamedBufferPointerv;
using gm::GetNamedBufferSubData;
using gm::InvalidateBufferData;
using gm::InvalidateBufferSubData;
// TODO: Modernize (attachments: span input)
void InvalidateNamedFramebufferData(Framebuffer framebuffer, Sizei numAttachments,
									const FramebufferAttachment* attachments)
{
	gm::InvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
}
// TODO: Modernize (attachments: span input)
void InvalidateNamedFramebufferSubData(Framebuffer framebuffer, Sizei numAttachments,
									   const FramebufferAttachment* attachments, Int x, Int y, Sizei width,
									   Sizei height)
{
	gm::InvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
}
using gm::IsBuffer;
using gm::MapBuffer;
using gm::MapBufferRange;
using gm::MapNamedBuffer;
using gm::MapNamedBufferRange;
using gm::NamedBufferData;
using gm::NamedBufferStorage;
using gm::NamedBufferSubData;
using gm::UnmapBuffer;
using gm::UnmapNamedBuffer;

// -------- Textures --------

using gm::ActiveTexture;
using gm::BindImageTexture;
// TODO: Modernize (textures: span input)
void BindImageTextures(Uint first, Sizei count, const Texture* textures)
{
	gm::BindImageTextures(first, count, textures);
}
using gm::BindTexture;
using gm::BindTextureUnit;
// TODO: Modernize (textures: span input)
void BindTextures(Uint first, Sizei count, const Texture* textures)
{
	gm::BindTextures(first, count, textures);
}
using gm::ClearTexImage;
using gm::ClearTexSubImage;
using gm::CompressedTexImage1D;
using gm::CompressedTexImage2D;
using gm::CompressedTexImage3D;
using gm::CompressedTexSubImage1D;
using gm::CompressedTexSubImage2D;
using gm::CompressedTexSubImage3D;
using gm::CompressedTextureSubImage1D;
using gm::CompressedTextureSubImage2D;
using gm::CompressedTextureSubImage3D;
using gm::CopyImageSubData;
using gm::CopyTexImage1D;
using gm::CopyTexImage2D;
using gm::CopyTexSubImage1D;
using gm::CopyTexSubImage2D;
using gm::CopyTexSubImage3D;
using gm::CopyTextureSubImage1D;
using gm::CopyTextureSubImage2D;
using gm::CopyTextureSubImage3D;
// TODO: Modernize (textures: span output)
void CreateTextures(TextureTarget target, Sizei n, Texture* textures)
{
	gm::CreateTextures(target, n, textures);
}
// TODO: Modernize (textures: span input)
void DeleteTextures(Sizei n, const Texture* textures)
{
	gm::DeleteTextures(n, textures);
}
// TODO: Modernize (textures: span output)
void GenTextures(Sizei n, Texture* textures)
{
	gm::GenTextures(n, textures);
}
using gm::GenerateMipmap;
using gm::GenerateTextureMipmap;
using gm::GetCompressedTexImage;
using gm::GetCompressedTextureImage;
using gm::GetCompressedTextureSubImage;
// TODO: Modernize (params: span output)
void GetInternalformati64v(TextureTarget target, InternalFormat internalformat, InternalFormatPName pname, Sizei count,
						   Int64* params)
{
	gm::GetInternalformati64v(target, internalformat, pname, count, params);
}
// TODO: Modernize (params: span output)
void GetInternalformativ(TextureTarget target, InternalFormat internalformat, InternalFormatPName pname, Sizei count,
						 Int* params)
{
	gm::GetInternalformativ(target, internalformat, pname, count, params);
}
using gm::GetTexImage;
// TODO: Modernize (params: span output)
void GetTexLevelParameterfv(TextureTarget target, Int level, GetTextureParameter pname, Float* params)
{
	gm::GetTexLevelParameterfv(target, level, pname, params);
}
// TODO: Modernize (params: span output)
void GetTexLevelParameteriv(TextureTarget target, Int level, GetTextureParameter pname, Int* params)
{
	gm::GetTexLevelParameteriv(target, level, pname, params);
}
// TODO: Modernize (params: span output)
void GetTexParameterIiv(TextureTarget target, GetTextureParameter pname, Int* params)
{
	gm::GetTexParameterIiv(target, pname, params);
}
// TODO: Modernize (params: span output)
void GetTexParameterIuiv(TextureTarget target, GetTextureParameter pname, Uint* params)
{
	gm::GetTexParameterIuiv(target, pname, params);
}
// TODO: Modernize (params: span output)
void GetTexParameterfv(TextureTarget target, GetTextureParameter pname, Float* params)
{
	gm::GetTexParameterfv(target, pname, params);
}
// TODO: Modernize (params: span output)
void GetTexParameteriv(TextureTarget target, GetTextureParameter pname, Int* params)
{
	gm::GetTexParameteriv(target, pname, params);
}
using gm::GetTextureImage;
// TODO: Modernize (params: span output)
void GetTextureLevelParameterfv(Texture texture, Int level, GetTextureParameter pname, Float* params)
{
	gm::GetTextureLevelParameterfv(texture, level, pname, params);
}
// TODO: Modernize (params: span output)
void GetTextureLevelParameteriv(Texture texture, Int level, GetTextureParameter pname, Int* params)
{
	gm::GetTextureLevelParameteriv(texture, level, pname, params);
}
// TODO: Modernize (params: span output)
void GetTextureParameterIiv(Texture texture, GetTextureParameter pname, Int* params)
{
	gm::GetTextureParameterIiv(texture, pname, params);
}
// TODO: Modernize (params: span output)
void GetTextureParameterIuiv(Texture texture, GetTextureParameter pname, Uint* params)
{
	gm::GetTextureParameterIuiv(texture, pname, params);
}
// TODO: Modernize (params: span output)
void GetTextureParameterfv(Texture texture, GetTextureParameter pname, Float* params)
{
	gm::GetTextureParameterfv(texture, pname, params);
}
// TODO: Modernize (params: span output)
void GetTextureParameteriv(Texture texture, GetTextureParameter pname, Int* params)
{
	gm::GetTextureParameteriv(texture, pname, params);
}
using gm::GetnCompressedTexImage;
using gm::GetnTexImage;
using gm::GetTextureSubImage;
using gm::InvalidateTexImage;
using gm::InvalidateTexSubImage;
using gm::IsTexture;
using gm::TexBuffer;
using gm::TexBufferRange;
using gm::TexImage1D;
using gm::TexImage2D;
using gm::TexImage2DMultisample;
using gm::TexImage3D;
using gm::TexImage3DMultisample;
// TODO: Modernize (params: span input)
void TexParameterIiv(TextureTarget target, TextureParameterName pname, const Int* params)
{
	gm::TexParameterIiv(target, pname, params);
}
// TODO: Modernize (params: span input)
void TexParameterIuiv(TextureTarget target, TextureParameterName pname, const Uint* params)
{
	gm::TexParameterIuiv(target, pname, params);
}
using gm::TexParameterf;
// TODO: Modernize (params: span input)
void TexParameterfv(TextureTarget target, TextureParameterName pname, const Float* params)
{
	gm::TexParameterfv(target, pname, params);
}
using gm::TexParameteri;
// TODO: Modernize (params: span input)
void TexParameteriv(TextureTarget target, TextureParameterName pname, const Int* params)
{
	gm::TexParameteriv(target, pname, params);
}
using gm::TexStorage1D;
using gm::TexStorage2D;
using gm::TexStorage2DMultisample;
using gm::TexStorage3D;
using gm::TexStorage3DMultisample;
using gm::TexSubImage1D;
using gm::TexSubImage2D;
using gm::TexSubImage3D;
using gm::TextureBarrier;
using gm::TextureBuffer;
using gm::TextureBufferRange;
// TODO: Modernize (params: span input)
void TextureParameterIiv(Texture texture, TextureParameterName pname, const Int* params)
{
	gm::TextureParameterIiv(texture, pname, params);
}
// TODO: Modernize (params: span input)
void TextureParameterIuiv(Texture texture, TextureParameterName pname, const Uint* params)
{
	gm::TextureParameterIuiv(texture, pname, params);
}
using gm::TextureParameterf;
// TODO: Modernize (param: span input)
void TextureParameterfv(Texture texture, TextureParameterName pname, const Float* param)
{
	gm::TextureParameterfv(texture, pname, param);
}
using gm::TextureParameteri;
// TODO: Modernize (param: span input)
void TextureParameteriv(Texture texture, TextureParameterName pname, const Int* param)
{
	gm::TextureParameteriv(texture, pname, param);
}
using gm::TextureStorage1D;
using gm::TextureStorage2D;
using gm::TextureStorage2DMultisample;
using gm::TextureStorage3D;
using gm::TextureStorage3DMultisample;
using gm::TextureSubImage1D;
using gm::TextureSubImage2D;
using gm::TextureSubImage3D;
using gm::TextureView;

// -------- Samplers --------

using gm::BindSampler;
// TODO: Modernize (samplers: span input)
void BindSamplers(Uint first, Sizei count, const Sampler* samplers)
{
	gm::BindSamplers(first, count, samplers);
}
// TODO: Modernize (samplers: span output)
void CreateSamplers(Sizei n, Sampler* samplers)
{
	gm::CreateSamplers(n, samplers);
}
// TODO: Modernize (samplers: span input)
void DeleteSamplers(Sizei count, const Sampler* samplers)
{
	gm::DeleteSamplers(count, samplers);
}
// TODO: Modernize (samplers: span output)
void GenSamplers(Sizei count, Sampler* samplers)
{
	gm::GenSamplers(count, samplers);
}
// TODO: Modernize (params: span output)
void GetSamplerParameterIiv(Sampler sampler, SamplerParameterI pname, Int* params)
{
	gm::GetSamplerParameterIiv(sampler, pname, params);
}
// TODO: Modernize (params: span output)
void GetSamplerParameterIuiv(Sampler sampler, SamplerParameterI pname, Uint* params)
{
	gm::GetSamplerParameterIuiv(sampler, pname, params);
}
// TODO: Modernize (params: span output)
void GetSamplerParameterfv(Sampler sampler, SamplerParameterF pname, Float* params)
{
	gm::GetSamplerParameterfv(sampler, pname, params);
}
// TODO: Modernize (params: span output)
void GetSamplerParameteriv(Sampler sampler, SamplerParameterI pname, Int* params)
{
	gm::GetSamplerParameteriv(sampler, pname, params);
}
using gm::IsSampler;
// TODO: Modernize (param: span input)
void SamplerParameterIiv(Sampler sampler, SamplerParameterI pname, const Int* param)
{
	gm::SamplerParameterIiv(sampler, pname, param);
}
// TODO: Modernize (param: span input)
void SamplerParameterIuiv(Sampler sampler, SamplerParameterI pname, const Uint* param)
{
	gm::SamplerParameterIuiv(sampler, pname, param);
}
using gm::SamplerParameterf;
// TODO: Modernize (param: span input)
void SamplerParameterfv(Sampler sampler, SamplerParameterF pname, const Float* param)
{
	gm::SamplerParameterfv(sampler, pname, param);
}
using gm::SamplerParameteri;
// TODO: Modernize (param: span input)
void SamplerParameteriv(Sampler sampler, SamplerParameterI pname, const Int* param)
{
	gm::SamplerParameteriv(sampler, pname, param);
}

// -------- Framebuffers --------

using gm::BindFramebuffer;
using gm::BlitFramebuffer;
using gm::BlitNamedFramebuffer;
using gm::CheckFramebufferStatus;
using gm::CheckNamedFramebufferStatus;
using gm::ClearNamedFramebufferfi;
// TODO: Modernize (value: span input)
void ClearNamedFramebufferfv(Framebuffer framebuffer, BufferType buffer, Int drawbuffer, const Float* value)
{
	gm::ClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
}
// TODO: Modernize (value: span input)
void ClearNamedFramebufferiv(Framebuffer framebuffer, BufferType buffer, Int drawbuffer, const Int* value)
{
	gm::ClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
}
// TODO: Modernize (value: span input)
void ClearNamedFramebufferuiv(Framebuffer framebuffer, BufferType buffer, Int drawbuffer, const Uint* value)
{
	gm::ClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
}
// TODO: Modernize (framebuffers: span output)
void CreateFramebuffers(Sizei n, Framebuffer* framebuffers)
{
	gm::CreateFramebuffers(n, framebuffers);
}
// TODO: Modernize (framebuffers: span input)
void DeleteFramebuffers(Sizei n, const Framebuffer* framebuffers)
{
	gm::DeleteFramebuffers(n, framebuffers);
}
using gm::FramebufferParameteri;
using gm::FramebufferRenderbuffer;
using gm::FramebufferTexture;
using gm::FramebufferTexture1D;
using gm::FramebufferTexture2D;
using gm::FramebufferTexture3D;
using gm::FramebufferTextureLayer;
// TODO: Modernize (framebuffers: span output)
void GenFramebuffers(Sizei n, Framebuffer* framebuffers)
{
	gm::GenFramebuffers(n, framebuffers);
}
// TODO: Modernize (params: span output)
void GetFramebufferAttachmentParameteriv(FramebufferTarget target, FramebufferAttachment attachment,
										 FramebufferAttachmentParameterName pname, Int* params)
{
	gm::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}
// TODO: Modernize (params: span output)
void GetFramebufferParameteriv(FramebufferTarget target, FramebufferAttachmentParameterName pname, Int* params)
{
	gm::GetFramebufferParameteriv(target, pname, params);
}
// TODO: Modernize (params: span output)
void GetNamedFramebufferAttachmentParameteriv(Framebuffer framebuffer, FramebufferAttachment attachment,
											  FramebufferAttachmentParameterName pname, Int* params)
{
	gm::GetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
}
// TODO: Modernize (param: span output)
void GetNamedFramebufferParameteriv(Framebuffer framebuffer, GetFramebufferParameter pname, Int* param)
{
	gm::GetNamedFramebufferParameteriv(framebuffer, pname, param);
}
// TODO: Modernize (attachments: span input)
void InvalidateFramebuffer(FramebufferTarget target, Sizei numAttachments,
						   const InvalidateFramebufferAttachment* attachments)
{
	gm::InvalidateFramebuffer(target, numAttachments, attachments);
}
// TODO: Modernize (attachments: span input)
void InvalidateSubFramebuffer(FramebufferTarget target, Sizei numAttachments,
							  const InvalidateFramebufferAttachment* attachments, Int x, Int y, Sizei width,
							  Sizei height)
{
	gm::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}
using gm::IsFramebuffer;
using gm::NamedFramebufferDrawBuffer;
// TODO: Modernize (bufs: span input)
void NamedFramebufferDrawBuffers(Framebuffer framebuffer, Sizei n, const ColorBuffer* bufs)
{
	gm::NamedFramebufferDrawBuffers(framebuffer, n, bufs);
}
using gm::NamedFramebufferParameteri;
using gm::NamedFramebufferReadBuffer;
using gm::NamedFramebufferRenderbuffer;
using gm::NamedFramebufferTexture;
using gm::NamedFramebufferTextureLayer;
using gm::ReadBuffer;
using gm::ReadnPixels;
using gm::ReadPixels;

// -------- Renderbuffers --------

using gm::BindRenderbuffer;
// TODO: Modernize (renderbuffers: span output)
void CreateRenderbuffers(Sizei n, Renderbuffer* renderbuffers)
{
	gm::CreateRenderbuffers(n, renderbuffers);
}
// TODO: Modernize (renderbuffers: span input)
void DeleteRenderbuffers(Sizei n, const Renderbuffer* renderbuffers)
{
	gm::DeleteRenderbuffers(n, renderbuffers);
}
// TODO: Modernize (renderbuffers: span output)
void GenRenderbuffers(Sizei n, Renderbuffer* renderbuffers)
{
	gm::GenRenderbuffers(n, renderbuffers);
}
// TODO: Modernize (params: span output)
void GetNamedRenderbufferParameteriv(Renderbuffer renderbuffer, RenderbufferParameterName pname, Int* params)
{
	gm::GetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}
// TODO: Modernize (params: span output)
void GetRenderbufferParameteriv(RenderbufferTarget target, RenderbufferParameterName pname, Int* params)
{
	gm::GetRenderbufferParameteriv(target, pname, params);
}
using gm::IsRenderbuffer;
using gm::NamedRenderbufferStorage;
using gm::NamedRenderbufferStorageMultisample;
using gm::RenderbufferStorage;
using gm::RenderbufferStorageMultisample;

// -------- Queries --------

using gm::BeginQuery;
using gm::BeginQueryIndexed;
// TODO: Modernize (ids: span output)
void CreateQueries(QueryTarget target, Sizei n, Query* ids)
{
	gm::CreateQueries(target, n, ids);
}
// TODO: Modernize (ids: span input)
void DeleteQueries(Sizei n, const Query* ids)
{
	gm::DeleteQueries(n, ids);
}
using gm::EndQuery;
using gm::EndQueryIndexed;
// TODO: Modernize (ids: span output)
void GenQueries(Sizei n, Query* ids)
{
	gm::GenQueries(n, ids);
}
using gm::GetQueryBufferObjecti64v;
using gm::GetQueryBufferObjectiv;
using gm::GetQueryBufferObjectui64v;
using gm::GetQueryBufferObjectuiv;
// TODO: Modernize (params: span output)
void GetQueryIndexediv(QueryTarget target, Uint index, QueryParameterName pname, Int* params)
{
	gm::GetQueryIndexediv(target, index, pname, params);
}
// TODO: Modernize (params: span output)
void GetQueryObjecti64v(Query id, QueryObjectParameterName pname, Int64* params)
{
	gm::GetQueryObjecti64v(id, pname, params);
}
// TODO: Modernize (params: span output)
void GetQueryObjectiv(Query id, QueryObjectParameterName pname, Int* params)
{
	gm::GetQueryObjectiv(id, pname, params);
}
// TODO: Modernize (params: span output)
void GetQueryObjectui64v(Query id, QueryObjectParameterName pname, Uint64* params)
{
	gm::GetQueryObjectui64v(id, pname, params);
}
// TODO: Modernize (params: span output)
void GetQueryObjectuiv(Query id, QueryObjectParameterName pname, Uint* params)
{
	gm::GetQueryObjectuiv(id, pname, params);
}
// TODO: Modernize (params: span output)
void GetQueryiv(QueryTarget target, QueryParameterName pname, Int* params)
{
	gm::GetQueryiv(target, pname, params);
}
using gm::IsQuery;
using gm::QueryCounter;

// -------- Sync --------

using gm::ClientWaitSync;
using gm::DeleteSync;
using gm::FenceSync;
// TODO: Modernize (length: span output, values: span output)
void GetSynciv(Sync sync, SyncParameterName pname, Sizei count, Sizei* length, Int* values)
{
	gm::GetSynciv(sync, pname, count, length, values);
}
using gm::IsSync;
using gm::WaitSync;

// -------- Transform Feedback --------

using gm::BeginTransformFeedback;
using gm::BindTransformFeedback;
// TODO: Modernize (ids: span output)
void CreateTransformFeedbacks(Sizei n, TransformFeedback* ids)
{
	gm::CreateTransformFeedbacks(n, ids);
}
// TODO: Modernize (ids: span input)
void DeleteTransformFeedbacks(Sizei n, const TransformFeedback* ids)
{
	gm::DeleteTransformFeedbacks(n, ids);
}
using gm::EndTransformFeedback;
// TODO: Modernize (ids: span output)
void GenTransformFeedbacks(Sizei n, TransformFeedback* ids)
{
	gm::GenTransformFeedbacks(n, ids);
}
// TODO: Modernize (length: span output, size: span output, type: span output, name: span output)
void GetTransformFeedbackVarying(Program program, Uint index, Sizei bufSize, Sizei* length, Sizei* size,
								 AttributeType* type, Char* name)
{
	gm::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}
// TODO: Modernize (param: span output)
void GetTransformFeedbacki64_v(TransformFeedback xfb, TransformFeedbackPName pname, Uint index, Int64* param)
{
	gm::GetTransformFeedbacki64_v(xfb, pname, index, param);
}
// TODO: Modernize (param: span output)
void GetTransformFeedbacki_v(TransformFeedback xfb, TransformFeedbackPName pname, Uint index, Int* param)
{
	gm::GetTransformFeedbacki_v(xfb, pname, index, param);
}
// TODO: Modernize (param: span output)
void GetTransformFeedbackiv(TransformFeedback xfb, TransformFeedbackPName pname, Int* param)
{
	gm::GetTransformFeedbackiv(xfb, pname, param);
}
using gm::IsTransformFeedback;
using gm::PauseTransformFeedback;
using gm::ResumeTransformFeedback;
using gm::TransformFeedbackBufferBase;
using gm::TransformFeedbackBufferRange;
// TODO: Modernize (varyings: span<string_view>)
void TransformFeedbackVaryings(Program program, Sizei count, const Char** varyings,
							   TransformFeedbackBufferMode bufferMode)
{
	gm::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

// -------- Drawing --------

using gm::Clear;
using gm::ClearColor;
using gm::ClearDepth;
using gm::ClearDepthf;
using gm::ClearStencil;
using gm::ColorMask;
using gm::ColorMaski;
using gm::DrawArrays;
using gm::DrawArraysIndirect;
using gm::DrawArraysInstanced;
using gm::DrawArraysInstancedBaseInstance;
using gm::DrawBuffer;
// TODO: Modernize (bufs: span input)
void DrawBuffers(Sizei n, const DrawBufferMode* bufs)
{
	gm::DrawBuffers(n, bufs);
}
using gm::DrawElements;
using gm::DrawElementsBaseVertex;
using gm::DrawElementsIndirect;
using gm::DrawElementsInstanced;
using gm::DrawElementsInstancedBaseInstance;
using gm::DrawElementsInstancedBaseVertex;
using gm::DrawElementsInstancedBaseVertexBaseInstance;
using gm::DrawRangeElements;
using gm::DrawRangeElementsBaseVertex;
using gm::DrawTransformFeedback;
using gm::DrawTransformFeedbackInstanced;
using gm::DrawTransformFeedbackStream;
using gm::DrawTransformFeedbackStreamInstanced;
// TODO: Modernize (first: span input, count: span input)
void MultiDrawArrays(PrimitiveType mode, const Int* first, const Sizei* count, Sizei drawcount)
{
	gm::MultiDrawArrays(mode, first, count, drawcount);
}
using gm::MultiDrawArraysIndirect;
using gm::MultiDrawArraysIndirectCount;
// TODO: Modernize (count: span input)
void MultiDrawElements(PrimitiveType mode, const Sizei* count, DrawElementsType type, const void** indices,
					   Sizei drawcount)
{
	gm::MultiDrawElements(mode, count, type, indices, drawcount);
}
// TODO: Modernize (count: span input, basevertex: span input)
void MultiDrawElementsBaseVertex(PrimitiveType mode, const Sizei* count, DrawElementsType type, const void** indices,
								 Sizei drawcount, const Int* basevertex)
{
	gm::MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}
using gm::MultiDrawElementsIndirect;
using gm::MultiDrawElementsIndirectCount;
using gm::SampleCoverage;
using gm::SampleMaski;

// -------- Compute --------

using gm::DispatchCompute;
using gm::DispatchComputeIndirect;
using gm::MemoryBarrier;
using gm::MemoryBarrierByRegion;

// -------- State --------

using gm::Disable;
using gm::Disablei;
using gm::DisableVertexArrayAttrib;
using gm::Enable;
using gm::Enablei;
using gm::EnableVertexArrayAttrib;
using gm::Finish;
using gm::Flush;
// TODO: Modernize (data: span output)
void GetBooleani_v(BufferTargetARB target, Uint index, Boolean* data)
{
	gm::GetBooleani_v(target, index, data);
}
// TODO: Modernize (data: span output)
void GetBooleanv(GetPName pname, Boolean* data)
{
	gm::GetBooleanv(pname, data);
}
// TODO: Modernize (data: span output)
void GetDoublei_v(GetPName target, Uint index, Double* data)
{
	gm::GetDoublei_v(target, index, data);
}
// TODO: Modernize (data: span output)
void GetDoublev(GetPName pname, Double* data)
{
	gm::GetDoublev(pname, data);
}
using gm::GetError;
// TODO: Modernize (data: span output)
void GetFloati_v(GetPName target, Uint index, Float* data)
{
	gm::GetFloati_v(target, index, data);
}
// TODO: Modernize (data: span output)
void GetFloatv(GetPName pname, Float* data)
{
	gm::GetFloatv(pname, data);
}
using gm::GetGraphicsResetStatus;
// TODO: Modernize (data: span output)
void GetInteger64i_v(GetPName target, Uint index, Int64* data)
{
	gm::GetInteger64i_v(target, index, data);
}
// TODO: Modernize (data: span output)
void GetInteger64v(GetPName pname, Int64* data)
{
	gm::GetInteger64v(pname, data);
}
// TODO: Modernize (data: span output)
void GetIntegeri_v(GetPName target, Uint index, Int* data)
{
	gm::GetIntegeri_v(target, index, data);
}
// TODO: Modernize (data: span output)
void GetIntegerv(GetPName pname, Int* data)
{
	gm::GetIntegerv(pname, data);
}
// TODO: Modernize (val: span output)
void GetMultisamplefv(GetMultisamplePNameNV pname, Uint index, Float* val)
{
	gm::GetMultisamplefv(pname, index, val);
}
using gm::GetString;
using gm::GetStringi;
using gm::Hint;
using gm::IsEnabled;
using gm::IsEnabledi;
using gm::PixelStoref;
using gm::PixelStorei;

// -------- Viewport & Scissor --------

using gm::DepthRange;
// TODO: Modernize (v: span input)
void DepthRangeArrayv(Uint first, Sizei count, const Double* v)
{
	gm::DepthRangeArrayv(first, count, v);
}
using gm::DepthRangef;
using gm::DepthRangeIndexed;
using gm::Scissor;
// TODO: Modernize (v: span input)
void ScissorArrayv(Uint first, Sizei count, const Int* v)
{
	gm::ScissorArrayv(first, count, v);
}
using gm::ScissorIndexed;
// TODO: Modernize (v: span input)
void ScissorIndexedv(Uint index, const Int* v)
{
	gm::ScissorIndexedv(index, v);
}
using gm::Viewport;
// TODO: Modernize (v: span input)
void ViewportArrayv(Uint first, Sizei count, const Float* v)
{
	gm::ViewportArrayv(first, count, v);
}
using gm::ViewportIndexedf;
// TODO: Modernize (v: span input)
void ViewportIndexedfv(Uint index, const Float* v)
{
	gm::ViewportIndexedfv(index, v);
}

// -------- Blending --------

using gm::BlendColor;
using gm::BlendEquation;
using gm::BlendEquationi;
using gm::BlendEquationSeparate;
using gm::BlendEquationSeparatei;
using gm::BlendFunc;
using gm::BlendFunci;
using gm::BlendFuncSeparate;
using gm::BlendFuncSeparatei;

// -------- Depth & Stencil --------

using gm::DepthFunc;
using gm::DepthMask;
using gm::StencilFunc;
using gm::StencilFuncSeparate;
using gm::StencilMask;
using gm::StencilMaskSeparate;
using gm::StencilOp;
using gm::StencilOpSeparate;

// -------- Rasterization --------

using gm::ClampColor;
using gm::ClipControl;
using gm::CullFace;
using gm::FrontFace;
using gm::LineWidth;
using gm::LogicOp;
using gm::MinSampleShading;
using gm::PointParameterf;
// TODO: Modernize (params: span input)
void PointParameterfv(PointParameterNameARB pname, const Float* params)
{
	gm::PointParameterfv(pname, params);
}
using gm::PointParameteri;
// TODO: Modernize (params: span input)
void PointParameteriv(PointParameterNameARB pname, const Int* params)
{
	gm::PointParameteriv(pname, params);
}
using gm::PointSize;
using gm::PolygonMode;
using gm::PolygonOffset;
using gm::PolygonOffsetClamp;
using gm::PrimitiveRestartIndex;
using gm::ProvokingVertex;

// -------- Debug --------

using gm::DebugMessageCallback;
// TODO: Modernize (ids: span input)
void DebugMessageControl(DebugSource source, DebugType type, DebugSeverity severity, Sizei count, const Uint* ids,
						 Boolean enabled)
{
	gm::DebugMessageControl(source, type, severity, count, ids, enabled);
}
// TODO: Modernize (buf: string_view)
void DebugMessageInsert(DebugSource source, DebugType type, Uint id, DebugSeverity severity, Sizei length,
						const Char* buf)
{
	gm::DebugMessageInsert(source, type, id, severity, length, buf);
}
// TODO: Modernize (sources: span output, types: span output, ids: span output, severities: span output, lengths: span
// output, messageLog: span output)
Uint GetDebugMessageLog(Uint count, Sizei bufSize, DebugSource* sources, DebugType* types, Uint* ids,
						DebugSeverity* severities, Sizei* lengths, Char* messageLog)
{
	return gm::GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}
// TODO: Modernize (length: span output, label: span output)
void GetObjectLabel(ObjectIdentifier identifier, Uint name, Sizei bufSize, Sizei* length, Char* label)
{
	gm::GetObjectLabel(identifier, name, bufSize, length, label);
}
// TODO: Modernize (length: span output, label: span output)
void GetObjectPtrLabel(const void* ptr, Sizei bufSize, Sizei* length, Char* label)
{
	gm::GetObjectPtrLabel(ptr, bufSize, length, label);
}
// TODO: Modernize (label: string_view)
void ObjectLabel(ObjectIdentifier identifier, Uint name, Sizei length, const Char* label)
{
	gm::ObjectLabel(identifier, name, length, label);
}
// TODO: Modernize (label: string_view)
void ObjectPtrLabel(const void* ptr, Sizei length, const Char* label)
{
	gm::ObjectPtrLabel(ptr, length, label);
}
using gm::PopDebugGroup;
// TODO: Modernize (message: string_view)
void PushDebugGroup(DebugSource source, Uint id, Sizei length, const Char* message)
{
	gm::PushDebugGroup(source, id, length, message);
}

// -------- Pipeline --------

using gm::ActiveShaderProgram;
using gm::BindProgramPipeline;
// TODO: Modernize (pipelines: span output)
void GenProgramPipelines(Sizei n, ProgramPipeline* pipelines)
{
	gm::GenProgramPipelines(n, pipelines);
}

// -------- Conditional Rendering --------

using gm::BeginConditionalRender;
using gm::EndConditionalRender;

// -------- Tessellation --------

// TODO: Modernize (values: span input)
void PatchParameterfv(PatchParameterName pname, const Float* values)
{
	gm::PatchParameterfv(pname, values);
}
using gm::PatchParameteri;

} // namespace gn

// ============ Statistics ============
// Total functions: 656
// Need modernization: 300
// Ready to use: 356
