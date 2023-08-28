#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::Read(System.Void*)
// 0x00000002 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Void*)
// 0x00000003 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000004 System.Void System.Runtime.CompilerServices.Unsafe::Write(System.Void*,T)
// 0x00000005 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Void*,T)
// 0x00000006 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Byte&,T)
// 0x00000007 System.Void System.Runtime.CompilerServices.Unsafe::Copy(System.Void*,T&)
// 0x00000008 System.Void System.Runtime.CompilerServices.Unsafe::Copy(T&,System.Void*)
// 0x00000009 System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer(T&)
// 0x0000000A System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x0000000B System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Void*,System.Void*,System.UInt32)
extern void Unsafe_CopyBlock_m6D6DF62908221A7CBEC3E2AF21CED31D49B21F05 (void);
// 0x0000000C System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_m6D5EC5627AD03676D5E14DBBA040A106D34547AA (void);
// 0x0000000D System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Void*,System.Void*,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_mA66FCC4CF7874F5BBA5F641789BC12C870C4ED53 (void);
// 0x0000000E System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_mEB7622213F3DF486042F233EDF7E99AF5EF50797 (void);
// 0x0000000F System.Void System.Runtime.CompilerServices.Unsafe::InitBlock(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlock_m2A39751797639F849609C27F318196EFC3A1B8F2 (void);
// 0x00000010 System.Void System.Runtime.CompilerServices.Unsafe::InitBlock(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlock_mCF63468B73EC756C51CB0795D941776BC4596AB2 (void);
// 0x00000011 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m341D8E453DC990B55CDC7EC001065FE627031F14 (void);
// 0x00000012 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m9B42EC271F803B215F8FB565875E4874D2766FBA (void);
// 0x00000013 T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x00000014 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x00000015 T& System.Runtime.CompilerServices.Unsafe::AsRef(T&)
// 0x00000016 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000017 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x00000018 System.Void* System.Runtime.CompilerServices.Unsafe::Add(System.Void*,System.Int32)
// 0x00000019 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x0000001A T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000001B T& System.Runtime.CompilerServices.Unsafe::Subtract(T&,System.Int32)
// 0x0000001C System.Void* System.Runtime.CompilerServices.Unsafe::Subtract(System.Void*,System.Int32)
// 0x0000001D T& System.Runtime.CompilerServices.Unsafe::Subtract(T&,System.IntPtr)
// 0x0000001E T& System.Runtime.CompilerServices.Unsafe::SubtractByteOffset(T&,System.IntPtr)
// 0x0000001F System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x00000020 System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame(T&,T&)
// 0x00000021 System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressGreaterThan(T&,T&)
// 0x00000022 System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan(T&,T&)
// 0x00000023 System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m2569269FD9F23739585D049556CF822B883D0406 (void);
// 0x00000024 System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
extern void IsReadOnlyAttribute__ctor_mA115532A57459FE3E4A3D84FD73BD82AF4FB3FA6 (void);
static Il2CppMethodPointer s_methodPointers[36] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlock_m6D6DF62908221A7CBEC3E2AF21CED31D49B21F05,
	Unsafe_CopyBlock_m6D5EC5627AD03676D5E14DBBA040A106D34547AA,
	Unsafe_CopyBlockUnaligned_mA66FCC4CF7874F5BBA5F641789BC12C870C4ED53,
	Unsafe_CopyBlockUnaligned_mEB7622213F3DF486042F233EDF7E99AF5EF50797,
	Unsafe_InitBlock_m2A39751797639F849609C27F318196EFC3A1B8F2,
	Unsafe_InitBlock_mCF63468B73EC756C51CB0795D941776BC4596AB2,
	Unsafe_InitBlockUnaligned_m341D8E453DC990B55CDC7EC001065FE627031F14,
	Unsafe_InitBlockUnaligned_m9B42EC271F803B215F8FB565875E4874D2766FBA,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m2569269FD9F23739585D049556CF822B883D0406,
	IsReadOnlyAttribute__ctor_mA115532A57459FE3E4A3D84FD73BD82AF4FB3FA6,
};
static const int32_t s_InvokerIndices[36] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9389,
	9389,
	9389,
	9389,
	9394,
	9394,
	9394,
	9394,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7163,
	7163,
};
static const Il2CppTokenRangePair s_rgctxIndices[7] = 
{
	{ 0x0600000A, { 0, 1 } },
	{ 0x06000017, { 1, 1 } },
	{ 0x06000018, { 2, 1 } },
	{ 0x06000019, { 3, 1 } },
	{ 0x0600001B, { 4, 1 } },
	{ 0x0600001C, { 5, 1 } },
	{ 0x0600001D, { 6, 1 } },
};
extern const uint32_t g_rgctx_T_t92A9A2BB83A237A6308B49894E223CBAF42B9045;
extern const uint32_t g_rgctx_T_t269991DCB49F85D7B0F3137E6B8C5B4BC5F4456B;
extern const uint32_t g_rgctx_T_t32C6991FB90C85E8C3B65B051C4C9E31C593ED00;
extern const uint32_t g_rgctx_T_t01653F05B10D15DD5C893F77EB56D94085A7570B;
extern const uint32_t g_rgctx_T_t7984ABB229E30F1090FD86BA76B51253D487B9DD;
extern const uint32_t g_rgctx_T_t261638051C502CC76F53AD2EA7BD837A3BA512B8;
extern const uint32_t g_rgctx_T_tD41F2BECCBBE9E70F24C89C346DFC3507A5B9F1B;
static const Il2CppRGCTXDefinition s_rgctxValues[7] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t92A9A2BB83A237A6308B49894E223CBAF42B9045 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t269991DCB49F85D7B0F3137E6B8C5B4BC5F4456B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t32C6991FB90C85E8C3B65B051C4C9E31C593ED00 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t01653F05B10D15DD5C893F77EB56D94085A7570B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t7984ABB229E30F1090FD86BA76B51253D487B9DD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t261638051C502CC76F53AD2EA7BD837A3BA512B8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD41F2BECCBBE9E70F24C89C346DFC3507A5B9F1B },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Yarn_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_Yarn_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"Yarn.System.Runtime.CompilerServices.Unsafe.dll",
	36,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	7,
	s_rgctxIndices,
	7,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
