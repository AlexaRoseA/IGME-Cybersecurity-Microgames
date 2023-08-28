#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Google.Protobuf.Collections.MapField`2/Codec<System.String,System.Int32>
struct Codec_t64B51A44886765EB5E62FA0F929AE2B8878B8F04;
// Google.Protobuf.Collections.MapField`2/Codec<System.String,Yarn.Node>
struct Codec_t16155895250804C282DE1FF6C2AFE5173A8E5E59;
// Google.Protobuf.Collections.MapField`2/Codec<System.String,Yarn.Operand>
struct Codec_tCFC2ECAFD03BBCBF8C240FE8E2D27AEE12DF87AA;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,Yarn.Markup.MarkupValue>
struct Dictionary_2_tFB8C23003E75B56AF512EA70593F56434AACA2E9;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.LinkedListNode`1<System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Node>>>
struct Dictionary_2_tDB4F44891D287005C9F9FB6E657052C077575777;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,Yarn.Markup.MarkupValue>
struct Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158;
// System.Collections.Generic.EqualityComparer`1<Yarn.Instruction>
struct EqualityComparer_1_tBE0B7E1E36E224F752C3A7B8095500E53BA45D36;
// System.Collections.Generic.EqualityComparer`1<Yarn.Node>
struct EqualityComparer_1_t76E526FD7C2B26DE743545F0E19921F3B8BAC738;
// System.Collections.Generic.EqualityComparer`1<Yarn.Operand>
struct EqualityComparer_1_t45C584871A9892B7EB18C8D39F8F6FAFD737F472;
// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A;
// Google.Protobuf.FieldCodec`1<Yarn.Instruction>
struct FieldCodec_1_t095827B3187B09DF05BE3A5AE1F1AAFB27F25E69;
// Google.Protobuf.FieldCodec`1<Yarn.Operand>
struct FieldCodec_1_tB0ABD985461E5BEEE4EB4B3752CC6D4CDFE1CF86;
// Google.Protobuf.FieldCodec`1<System.String>
struct FieldCodec_1_t5E6313E604A7D06CE5EC653E6F62D4232681A90B;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<Yarn.Analysis.Diagnosis>
struct IEnumerable_1_tEF01A958F6DCC47C50212550D16A8CF4AB4449BF;
// System.Collections.Generic.IEnumerable`1<Yarn.Markup.MarkupProperty>
struct IEnumerable_1_tE526C139BA896F1D4C0B4026C806693FCF5EE09D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Node>>
struct IEnumerator_1_t6059EFD5DA2D078B4A12C80267647F3C2C2155B2;
// System.Collections.Generic.IEnumerator`1<Yarn.Instruction>
struct IEnumerator_1_tA3E8752D83F4E8B20F1C398CC30F52AB26FDA43D;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Yarn.Markup.MarkupValue>
struct IReadOnlyDictionary_2_t9D965E7F017149D41062227BEB287BC01F7A3D99;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Yarn.Markup.MarkupValue>
struct KeyCollection_t1596CF1746873451F9DA02DEDFE5BC738D11B0ED;
// System.Collections.Generic.LinkedList`1<System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Node>>
struct LinkedList_1_t9EB59CF4C53CB50057AF99DD4F9E4B98C25F6A9C;
// System.Collections.Generic.List`1<Yarn.Analysis.CompiledProgramAnalyser>
struct List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76;
// System.Collections.Generic.List`1<Yarn.Analysis.Diagnosis>
struct List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4;
// System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>
struct List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51;
// System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty>
struct List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// Google.Protobuf.Collections.MapField`2<System.Object,System.Object>
struct MapField_2_tA6C6934B5361E558BE1230612D2B88A359DB095B;
// Google.Protobuf.Collections.MapField`2<System.String,System.Int32>
struct MapField_2_tE4349ABAFCD55D1ACC27EF59D9C450C4B4EF6625;
// Google.Protobuf.Collections.MapField`2<System.String,Yarn.Node>
struct MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F;
// Google.Protobuf.Collections.MapField`2<System.String,Yarn.Operand>
struct MapField_2_t5FD9EF9366031F6B3DE8A4D4EB5B188230E38585;
// Google.Protobuf.MessageParser`1<Yarn.Instruction>
struct MessageParser_1_t2662B24229732BAFF916A9DC3087EC3984A805F2;
// Google.Protobuf.MessageParser`1<Yarn.Node>
struct MessageParser_1_t8D1F8FFD3479B412FD58EC85018D4EA8C73D9A48;
// Google.Protobuf.MessageParser`1<Yarn.Operand>
struct MessageParser_1_t82601374F0CDD811F08EBA32F3EF6C64CB4AE14B;
// Google.Protobuf.MessageParser`1<Yarn.Program>
struct MessageParser_1_tF607405F78A73E58076790A9AC0EC529E6321469;
// Google.Protobuf.Collections.RepeatedField`1<Yarn.Instruction>
struct RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68;
// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t33BF0A8B0555D4DEC49FF383CDDE959709150A74;
// Google.Protobuf.Collections.RepeatedField`1<Yarn.Operand>
struct RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F;
// Google.Protobuf.Collections.RepeatedField`1<System.String>
struct RepeatedField_1_t7788C916548A215E970C2455506FB29362383AF0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Yarn.Markup.MarkupValue>
struct ValueCollection_t546D8963C17FD53B1E1CD01E04137BF796D81269;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Yarn.Markup.MarkupValue>[]
struct EntryU5BU5D_t6B8C4E6E2EA3F500DEA347FC1654827CA12B6CA3;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Yarn.Analysis.CompiledProgramAnalyser[]
struct CompiledProgramAnalyserU5BU5D_tC266E07930AADEE869BFBFAF276F0A3645ABBA9E;
// Yarn.Analysis.Diagnosis[]
struct DiagnosisU5BU5D_t388F61A824037739BA368C185721C89B9FB18C20;
// Yarn.Instruction[]
struct InstructionU5BU5D_t443861283D769AB621D020B3E6A793CF78B1B8CE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Yarn.Markup.MarkupAttribute[]
struct MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D;
// Yarn.Markup.MarkupProperty[]
struct MarkupPropertyU5BU5D_t0AD5482F776C4C438A109862340DC6F6C8797982;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Yarn.Operand[]
struct OperandU5BU5D_tD2FA68E5204FA92AA38666A4B2EA262A0486B588;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Yarn.Analysis.CompiledProgramAnalyser
struct CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8;
// Yarn.Analysis.Context
struct Context_t80DED17249AB4D495B71229AF1CCB8F91E019E82;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// Yarn.Analysis.Diagnosis
struct Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Yarn.Instruction
struct Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Yarn.Markup.MarkupParseException
struct MarkupParseException_tD00D1AB1B27765E0AE90EFFB85E6BB898C9921A2;
// Yarn.Markup.MarkupValue
struct MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Yarn.Markup.NoMarkupTextProcessor
struct NoMarkupTextProcessor_tC1385E1160E490B506AA127D637057DAA78CF43A;
// Yarn.Node
struct Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Yarn.Operand
struct Operand_t29219BF1C85E0F708A3D8EE82174F1B44DC427EF;
// Yarn.Program
struct Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2;
// Yarn.Analysis.UnusedVariableChecker
struct UnusedVariableChecker_t1D0ADA11C68646B52BD647BF103D5DDCC9B8AA5E;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// Yarn.Analysis.VariableLister
struct VariableLister_t08C875D813F591AD2170E238DDD3F2D85FABCE27;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Yarn.Markup.LineParser/<>c
struct U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE526C139BA896F1D4C0B4026C806693FCF5EE09D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6059EFD5DA2D078B4A12C80267647F3C2C2155B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA3E8752D83F4E8B20F1C398CC30F52AB26FDA43D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA4D596DBC1295D75EEB5DE36613BBD39509D54BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t01503931A4672FA7CD5747275146FB48504AC173_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkupValueType_tDB61E0C5867897503CC9E887742E0FB758AEDDED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0;
IL2CPP_EXTERN_C String_t* _stringLiteral3A2105416614448D3B4BCBE73F3BCE66B3E800E4;
IL2CPP_EXTERN_C String_t* _stringLiteral3EAFEB490DE3DEA0179887FC6F9F75E550A7462A;
IL2CPP_EXTERN_C String_t* _stringLiteral42C692EBD9B440D6034CEFA06C04E4FD482F34B8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2A7DC38E3D06969C09083548DE5A6AC3F8CE8E;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB271F02C71DCC1304194CFAD1ECDD28F8C5B68;
IL2CPP_EXTERN_C String_t* _stringLiteral9EE187A1DFB6C7E24E0162931104A8F2CE585643;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB635C667599C757DF6C4968308D22AD68492CAC3;
IL2CPP_EXTERN_C String_t* _stringLiteralCD33AD139DDBEBE345F2D6F2F27D62170C733CA7;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0C06BDB698BEE69D59BD9367155F6EFC70CDEC;
IL2CPP_EXTERN_C String_t* _stringLiteralD1F45C5A77C8F04A3EC99712F021D7BC1A15D680;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF0DF48787D6207C0E0BD94E0B31BBDE5D8CDA00E;
IL2CPP_EXTERN_C const RuntimeMethod* Diagnosis_ToString_m4A92F8C5CB8A60416C40A9C3B30F9FF1D5545506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD149688A4C85B34CE383F12F115BC42132886AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5FC42799DA82C23E7C1AFEFF7CC4428CCD3AD52F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65E5F607EEC3B80658E33EEBA1F7DEB2C9E7E27C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6EB75C1FB772D4C3BB9D6386592765BF6B6DEB53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAE6E0135AA6D1C8A02070CB0968235D7A1856289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF1D3567EDFF69F9C848831F2D7CDDB48AF2C3C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2AC0A78D0A09FF6B899726D4F37F6EE5E4A74C58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m41E0ED7E38AF7323280A69D87D6327B1917DA9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_ExceptWith_m46D5B35715EF8FC1BF736C780D56A414DC6780CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m2760D03C96FEDBCFA6D6359DFC7BC461278B36CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m5CF6FA0E04D1B6DE3D63536BB949EE04F7F125BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m231A1BAA601DCA4B0A5F19F7C277726EEDA15ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA048461C43E36558B1E020BF0DADE809BAECDD46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDD50509A4E099C41E18997AE7BB792B20C9DF3F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1931AC460A30A8B39AB79EF200EB12A3FC65A0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1B75B96326652EE523F245A0E4A28D69F23C68EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m78D0BB339D35901957BB879D7EBBFBB380C4927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9A6A2CD57D34A9FA1D0EE0AED18DDCB1137DEFF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_GetEnumerator_m2907F2B8BCC37BA0A10975F5D74AE6114F4F485A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkupParseResult_TextForAttribute_m3429C446D2912D7ECA1EF3C5A1CEF1D1A09A77A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarkupValue_ToString_m161F800284002901823B7B20F21D5CA046031DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_GetEnumerator_mEA15D9F90F9CC0E9F394587C284443CF6DE9E95A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820;;
struct MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com;
struct MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com;;
struct MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke;
struct MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke;;

struct MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Yarn.Markup.MarkupValue>
struct Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6B8C4E6E2EA3F500DEA347FC1654827CA12B6CA3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1596CF1746873451F9DA02DEDFE5BC738D11B0ED* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t546D8963C17FD53B1E1CD01E04137BF796D81269* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<Yarn.Analysis.CompiledProgramAnalyser>
struct List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CompiledProgramAnalyserU5BU5D_tC266E07930AADEE869BFBFAF276F0A3645ABBA9E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CompiledProgramAnalyserU5BU5D_tC266E07930AADEE869BFBFAF276F0A3645ABBA9E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Yarn.Analysis.Diagnosis>
struct List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DiagnosisU5BU5D_t388F61A824037739BA368C185721C89B9FB18C20* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DiagnosisU5BU5D_t388F61A824037739BA368C185721C89B9FB18C20* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>
struct List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty>
struct List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MarkupPropertyU5BU5D_t0AD5482F776C4C438A109862340DC6F6C8797982* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MarkupPropertyU5BU5D_t0AD5482F776C4C438A109862340DC6F6C8797982* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray_5;
};

// Google.Protobuf.Collections.MapField`2<System.String,Yarn.Node>
struct MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,System.Collections.Generic.LinkedListNode`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>> Google.Protobuf.Collections.MapField`2::map
	Dictionary_2_tDB4F44891D287005C9F9FB6E657052C077575777* ___map_2;
	// System.Collections.Generic.LinkedList`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Google.Protobuf.Collections.MapField`2::list
	LinkedList_1_t9EB59CF4C53CB50057AF99DD4F9E4B98C25F6A9C* ___list_3;
};

struct MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<TValue> Google.Protobuf.Collections.MapField`2::ValueEqualityComparer
	EqualityComparer_1_t76E526FD7C2B26DE743545F0E19921F3B8BAC738* ___ValueEqualityComparer_0;
	// System.Collections.Generic.EqualityComparer`1<TKey> Google.Protobuf.Collections.MapField`2::KeyEqualityComparer
	EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A* ___KeyEqualityComparer_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Yarn.Instruction>
struct RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	InstructionU5BU5D_t443861283D769AB621D020B3E6A793CF78B1B8CE* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tBE0B7E1E36E224F752C3A7B8095500E53BA45D36* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	InstructionU5BU5D_t443861283D769AB621D020B3E6A793CF78B1B8CE* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Yarn.Operand>
struct RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	OperandU5BU5D_tD2FA68E5204FA92AA38666A4B2EA262A0486B588* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t45C584871A9892B7EB18C8D39F8F6FAFD737F472* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	OperandU5BU5D_tD2FA68E5204FA92AA38666A4B2EA262A0486B588* ___EmptyArray_1;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// Yarn.Analysis.CompiledProgramAnalyser
struct CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8  : public RuntimeObject
{
};

// Yarn.Analysis.Context
struct Context_t80DED17249AB4D495B71229AF1CCB8F91E019E82  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerable`1<System.Type> Yarn.Analysis.Context::_defaultAnalyserClasses
	RuntimeObject* ____defaultAnalyserClasses_0;
	// System.Collections.Generic.List`1<Yarn.Analysis.CompiledProgramAnalyser> Yarn.Analysis.Context::analysers
	List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* ___analysers_1;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Yarn.Analysis.Diagnosis
struct Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80  : public RuntimeObject
{
	// System.String Yarn.Analysis.Diagnosis::message
	String_t* ___message_0;
	// System.String Yarn.Analysis.Diagnosis::nodeName
	String_t* ___nodeName_1;
	// System.Int32 Yarn.Analysis.Diagnosis::lineNumber
	int32_t ___lineNumber_2;
	// System.Int32 Yarn.Analysis.Diagnosis::columnNumber
	int32_t ___columnNumber_3;
	// Yarn.Analysis.Diagnosis/Severity Yarn.Analysis.Diagnosis::severity
	int32_t ___severity_4;
};

// Yarn.Instruction
struct Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Yarn.Instruction::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// Yarn.Instruction/Types/OpCode Yarn.Instruction::opcode_
	int32_t ___opcode__3;
	// Google.Protobuf.Collections.RepeatedField`1<Yarn.Operand> Yarn.Instruction::operands_
	RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F* ___operands__6;
};

struct Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329_StaticFields
{
	// Google.Protobuf.MessageParser`1<Yarn.Instruction> Yarn.Instruction::_parser
	MessageParser_1_t2662B24229732BAFF916A9DC3087EC3984A805F2* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Yarn.Operand> Yarn.Instruction::_repeated_operands_codec
	FieldCodec_1_tB0ABD985461E5BEEE4EB4B3752CC6D4CDFE1CF86* ____repeated_operands_codec_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Yarn.Markup.NoMarkupTextProcessor
struct NoMarkupTextProcessor_tC1385E1160E490B506AA127D637057DAA78CF43A  : public RuntimeObject
{
};

// Yarn.Node
struct Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Yarn.Node::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// System.String Yarn.Node::name_
	String_t* ___name__3;
	// Google.Protobuf.Collections.RepeatedField`1<Yarn.Instruction> Yarn.Node::instructions_
	RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68* ___instructions__6;
	// Google.Protobuf.Collections.MapField`2<System.String,System.Int32> Yarn.Node::labels_
	MapField_2_tE4349ABAFCD55D1ACC27EF59D9C450C4B4EF6625* ___labels__9;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Yarn.Node::tags_
	RepeatedField_1_t7788C916548A215E970C2455506FB29362383AF0* ___tags__12;
	// System.String Yarn.Node::sourceTextStringID_
	String_t* ___sourceTextStringID__14;
};

struct Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C_StaticFields
{
	// Google.Protobuf.MessageParser`1<Yarn.Node> Yarn.Node::_parser
	MessageParser_1_t8D1F8FFD3479B412FD58EC85018D4EA8C73D9A48* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Yarn.Instruction> Yarn.Node::_repeated_instructions_codec
	FieldCodec_1_t095827B3187B09DF05BE3A5AE1F1AAFB27F25E69* ____repeated_instructions_codec_5;
	// Google.Protobuf.Collections.MapField`2/Codec<System.String,System.Int32> Yarn.Node::_map_labels_codec
	Codec_t64B51A44886765EB5E62FA0F929AE2B8878B8F04* ____map_labels_codec_8;
	// Google.Protobuf.FieldCodec`1<System.String> Yarn.Node::_repeated_tags_codec
	FieldCodec_1_t5E6313E604A7D06CE5EC653E6F62D4232681A90B* ____repeated_tags_codec_11;
};

// Yarn.Operand
struct Operand_t29219BF1C85E0F708A3D8EE82174F1B44DC427EF  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Yarn.Operand::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// System.Object Yarn.Operand::value_
	RuntimeObject* ___value__5;
	// Yarn.Operand/ValueOneofCase Yarn.Operand::valueCase_
	int32_t ___valueCase__6;
};

struct Operand_t29219BF1C85E0F708A3D8EE82174F1B44DC427EF_StaticFields
{
	// Google.Protobuf.MessageParser`1<Yarn.Operand> Yarn.Operand::_parser
	MessageParser_1_t82601374F0CDD811F08EBA32F3EF6C64CB4AE14B* ____parser_0;
};

// Yarn.Program
struct Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Yarn.Program::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// System.String Yarn.Program::name_
	String_t* ___name__3;
	// Google.Protobuf.Collections.MapField`2<System.String,Yarn.Node> Yarn.Program::nodes_
	MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F* ___nodes__6;
	// Google.Protobuf.Collections.MapField`2<System.String,Yarn.Operand> Yarn.Program::initialValues_
	MapField_2_t5FD9EF9366031F6B3DE8A4D4EB5B188230E38585* ___initialValues__9;
};

struct Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405_StaticFields
{
	// Google.Protobuf.MessageParser`1<Yarn.Program> Yarn.Program::_parser
	MessageParser_1_tF607405F78A73E58076790A9AC0EC529E6321469* ____parser_0;
	// Google.Protobuf.Collections.MapField`2/Codec<System.String,Yarn.Node> Yarn.Program::_map_nodes_codec
	Codec_t16155895250804C282DE1FF6C2AFE5173A8E5E59* ____map_nodes_codec_5;
	// Google.Protobuf.Collections.MapField`2/Codec<System.String,Yarn.Operand> Yarn.Program::_map_initialValues_codec
	Codec_tCFC2ECAFD03BBCBF8C240FE8E2D27AEE12DF87AA* ____map_initialValues_codec_8;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Yarn.Markup.LineParser/<>c
struct U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0  : public RuntimeObject
{
};

struct U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0_StaticFields
{
	// Yarn.Markup.LineParser/<>c Yarn.Markup.LineParser/<>c::<>9
	U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0* ___U3CU3E9_0;
};

// System.Collections.Generic.List`1/Enumerator<Yarn.Analysis.CompiledProgramAnalyser>
struct Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.String>
struct Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Node>
struct KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Yarn.Markup.MarkupAttribute
struct MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B 
{
	// System.Int32 Yarn.Markup.MarkupAttribute::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_0;
	// System.Int32 Yarn.Markup.MarkupAttribute::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String Yarn.Markup.MarkupAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Yarn.Markup.MarkupValue> Yarn.Markup.MarkupAttribute::<Properties>k__BackingField
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_3;
	// System.Int32 Yarn.Markup.MarkupAttribute::<SourcePosition>k__BackingField
	int32_t ___U3CSourcePositionU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of Yarn.Markup.MarkupAttribute
struct MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshaled_pinvoke
{
	int32_t ___U3CPositionU3Ek__BackingField_0;
	int32_t ___U3CLengthU3Ek__BackingField_1;
	char* ___U3CNameU3Ek__BackingField_2;
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_3;
	int32_t ___U3CSourcePositionU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Yarn.Markup.MarkupAttribute
struct MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshaled_com
{
	int32_t ___U3CPositionU3Ek__BackingField_0;
	int32_t ___U3CLengthU3Ek__BackingField_1;
	Il2CppChar* ___U3CNameU3Ek__BackingField_2;
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_3;
	int32_t ___U3CSourcePositionU3Ek__BackingField_4;
};

// Yarn.Markup.MarkupAttributeMarker
struct MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595 
{
	// System.String Yarn.Markup.MarkupAttributeMarker::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Yarn.Markup.MarkupAttributeMarker::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty> Yarn.Markup.MarkupAttributeMarker::<Properties>k__BackingField
	List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___U3CPropertiesU3Ek__BackingField_2;
	// Yarn.Markup.TagType Yarn.Markup.MarkupAttributeMarker::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_3;
	// System.Int32 Yarn.Markup.MarkupAttributeMarker::<SourcePosition>k__BackingField
	int32_t ___U3CSourcePositionU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of Yarn.Markup.MarkupAttributeMarker
struct MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField_0;
	int32_t ___U3CPositionU3Ek__BackingField_1;
	List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___U3CPropertiesU3Ek__BackingField_2;
	int32_t ___U3CTypeU3Ek__BackingField_3;
	int32_t ___U3CSourcePositionU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Yarn.Markup.MarkupAttributeMarker
struct MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField_0;
	int32_t ___U3CPositionU3Ek__BackingField_1;
	List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___U3CPropertiesU3Ek__BackingField_2;
	int32_t ___U3CTypeU3Ek__BackingField_3;
	int32_t ___U3CSourcePositionU3Ek__BackingField_4;
};

// Yarn.Markup.MarkupParseResult
struct MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36 
{
	// System.String Yarn.Markup.MarkupParseResult::Text
	String_t* ___Text_0;
	// System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute> Yarn.Markup.MarkupParseResult::Attributes
	List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* ___Attributes_1;
};
// Native definition for P/Invoke marshalling of Yarn.Markup.MarkupParseResult
struct MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshaled_pinvoke
{
	char* ___Text_0;
	List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* ___Attributes_1;
};
// Native definition for COM marshalling of Yarn.Markup.MarkupParseResult
struct MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshaled_com
{
	Il2CppChar* ___Text_0;
	List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* ___Attributes_1;
};

// Yarn.Markup.MarkupValue
struct MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 
{
	// System.Int32 Yarn.Markup.MarkupValue::<IntegerValue>k__BackingField
	int32_t ___U3CIntegerValueU3Ek__BackingField_0;
	// System.Single Yarn.Markup.MarkupValue::<FloatValue>k__BackingField
	float ___U3CFloatValueU3Ek__BackingField_1;
	// System.String Yarn.Markup.MarkupValue::<StringValue>k__BackingField
	String_t* ___U3CStringValueU3Ek__BackingField_2;
	// System.Boolean Yarn.Markup.MarkupValue::<BoolValue>k__BackingField
	bool ___U3CBoolValueU3Ek__BackingField_3;
	// Yarn.Markup.MarkupValueType Yarn.Markup.MarkupValue::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of Yarn.Markup.MarkupValue
struct MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke
{
	int32_t ___U3CIntegerValueU3Ek__BackingField_0;
	float ___U3CFloatValueU3Ek__BackingField_1;
	char* ___U3CStringValueU3Ek__BackingField_2;
	int32_t ___U3CBoolValueU3Ek__BackingField_3;
	int32_t ___U3CTypeU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Yarn.Markup.MarkupValue
struct MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com
{
	int32_t ___U3CIntegerValueU3Ek__BackingField_0;
	float ___U3CFloatValueU3Ek__BackingField_1;
	Il2CppChar* ___U3CStringValueU3Ek__BackingField_2;
	int32_t ___U3CBoolValueU3Ek__BackingField_3;
	int32_t ___U3CTypeU3Ek__BackingField_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Yarn.Analysis.UnusedVariableChecker
struct UnusedVariableChecker_t1D0ADA11C68646B52BD647BF103D5DDCC9B8AA5E  : public CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8
{
	// System.Collections.Generic.HashSet`1<System.String> Yarn.Analysis.UnusedVariableChecker::readVariables
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___readVariables_0;
	// System.Collections.Generic.HashSet`1<System.String> Yarn.Analysis.UnusedVariableChecker::writtenVariables
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___writtenVariables_1;
};

// Yarn.Analysis.VariableLister
struct VariableLister_t08C875D813F591AD2170E238DDD3F2D85FABCE27  : public CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8
{
	// System.Collections.Generic.HashSet`1<System.String> Yarn.Analysis.VariableLister::variables
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___variables_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupAttribute>
struct Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ____current_3;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Yarn.Markup.MarkupProperty
struct MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE 
{
	// System.String Yarn.Markup.MarkupProperty::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// Yarn.Markup.MarkupValue Yarn.Markup.MarkupProperty::<Value>k__BackingField
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___U3CValueU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Yarn.Markup.MarkupProperty
struct MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField_0;
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke ___U3CValueU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Yarn.Markup.MarkupProperty
struct MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField_0;
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com ___U3CValueU3Ek__BackingField_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupProperty>
struct Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE ____current_3;
};

// Yarn.Markup.MarkupParseException
struct MarkupParseException_tD00D1AB1B27765E0AE90EFFB85E6BB898C9921A2  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Yarn.Markup.MarkupAttribute[]
struct MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B m_Items[1];

	inline MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CPropertiesU3Ek__BackingField_3), (void*)NULL);
		#endif
	}
	inline MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CPropertiesU3Ek__BackingField_3), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_pinvoke(const MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820& unmarshaled, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_pinvoke_back(const MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke& marshaled, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820& unmarshaled);
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_pinvoke_cleanup(MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_com(const MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820& unmarshaled, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com& marshaled);
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_com_back(const MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com& marshaled, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820& unmarshaled);
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_com_cleanup(MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com& marshaled);

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD_gshared (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupAttribute>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138_gshared (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupAttribute>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_gshared_inline (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupAttribute>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B_gshared (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m78D0BB339D35901957BB879D7EBBFBB380C4927A_gshared (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_gshared_inline (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Yarn.Markup.MarkupValue>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6D918C49044EB08C72351806A4C7DDE02233E181_gshared (Dictionary_2_tFB8C23003E75B56AF512EA70593F56434AACA2E9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Yarn.Markup.MarkupValue>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFA077663CA35D0E0A51CF3D3EA5450F5F6347DFA_gshared (Dictionary_2_tFB8C23003E75B56AF512EA70593F56434AACA2E9* __this, RuntimeObject* ___key0, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E List_1_GetEnumerator_m1931AC460A30A8B39AB79EF200EB12A3FC65A0CD_gshared (List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupProperty>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m65E5F607EEC3B80658E33EEBA1F7DEB2C9E7E27C_gshared (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupProperty>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE Enumerator_get_Current_m2AC0A78D0A09FF6B899726D4F37F6EE5E4A74C58_gshared_inline (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupProperty>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF1D3567EDFF69F9C848831F2D7CDDB48AF2C3C5B_gshared (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Google.Protobuf.Collections.MapField`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapField_2_GetEnumerator_m0C29C8A100F19080B2942549EE0E1157BD8A0AF7_gshared (MapField_2_tA6C6934B5361E558BE1230612D2B88A359DB095B* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> Google.Protobuf.Collections.RepeatedField`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RepeatedField_1_GetEnumerator_mF44FB2D9A06C4255B2DB87766FD85E36F16F57AF_gshared (RepeatedField_1_t33BF0A8B0555D4DEC49FF383CDDE959709150A74* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.Collections.RepeatedField`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RepeatedField_1_get_Item_mD8725ACA0AB3289CD686AC5500D022AB5712AAFA_gshared (RepeatedField_1_t33BF0A8B0555D4DEC49FF383CDDE959709150A74* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m0009189D7A663A4CEABCAC347395D977883CDF04_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;

// System.Void Yarn.Markup.LineParser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5C1A53BB39E49E6F7EB776D9B1C8DBF1F2BB81F2 (U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 Yarn.Markup.MarkupAttribute::get_SourcePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttribute_get_SourcePosition_m7392E6BC7E2DC99C2651F9276BC2AB842D2FE418_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupParseResult::.ctor(System.String,System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupParseResult__ctor_m5866D389DC321E70C778DBB9A197243F92CD3343 (MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* __this, String_t* ___text0, List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* ___attributes1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>::GetEnumerator()
inline Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D (*) (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51*, const RuntimeMethod*))List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupAttribute>::Dispose()
inline void Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138 (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D*, const RuntimeMethod*))Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupAttribute>::get_Current()
inline MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_inline (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D* __this, const RuntimeMethod* method)
{
	return ((  MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B (*) (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D*, const RuntimeMethod*))Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_gshared_inline)(__this, method);
}
// System.String Yarn.Markup.MarkupAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkupAttribute_get_Name_mE1DD0B98462EC420587F7871FF2FBD703EECA089_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupAttribute>::MoveNext()
inline bool Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D*, const RuntimeMethod*))Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B_gshared)(__this, method);
}
// System.Boolean Yarn.Markup.MarkupParseResult::TryGetAttributeWithName(System.String,Yarn.Markup.MarkupAttribute&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarkupParseResult_TryGetAttributeWithName_m47BE776BFE424F25FE98B08564D2F0EBBEEB9F3B (MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* __this, String_t* ___name0, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* ___attribute1, const RuntimeMethod* method) ;
// System.Int32 Yarn.Markup.MarkupAttribute::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 Yarn.Markup.MarkupAttribute::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String Yarn.Markup.MarkupParseResult::TextForAttribute(Yarn.Markup.MarkupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupParseResult_TextForAttribute_m3429C446D2912D7ECA1EF3C5A1CEF1D1A09A77A7 (MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___attribute0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>::.ctor()
inline void List_1__ctor_m78D0BB339D35901957BB879D7EBBFBB380C4927A (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51*, const RuntimeMethod*))List_1__ctor_m78D0BB339D35901957BB879D7EBBFBB380C4927A_gshared)(__this, method);
}
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>::Add(T)
inline void List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_inline (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51*, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B, const RuntimeMethod*))List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_gshared_inline)(__this, ___item0, method);
}
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttribute::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_Length_mB56601DC0FF284366DF0C9169A356D352896F0AF_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttribute::set_Position(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_Position_mBE088A7198AFC4510F2EC23BD278BF792858B6AD_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Yarn.Markup.MarkupParseResult Yarn.Markup.MarkupParseResult::DeleteRange(Yarn.Markup.MarkupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36 MarkupParseResult_DeleteRange_m29D830C6D9E3DEB477FDFD45FF3C64DAD46F74CA (MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___attributeToDelete0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttribute::set_SourcePosition(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_SourcePosition_m2E895FCD584656FD47D3DC20FC629A8723D1BA65_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_Name_m1282691FC9A6E85F640C01992835C6E21565C375_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Yarn.Markup.MarkupValue>::.ctor()
inline void Dictionary_2__ctor_m5FC42799DA82C23E7C1AFEFF7CC4428CCD3AD52F (Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158*, const RuntimeMethod*))Dictionary_2__ctor_m6D918C49044EB08C72351806A4C7DDE02233E181_gshared)(__this, method);
}
// System.String Yarn.Markup.MarkupProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkupProperty_get_Name_mDD842596C83F512A7B51C7F3A41C7987C469A622_inline (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, const RuntimeMethod* method) ;
// Yarn.Markup.MarkupValue Yarn.Markup.MarkupProperty::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 MarkupProperty_get_Value_mB8C277B2962D6D15578A164DF14C302611F2A227_inline (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Yarn.Markup.MarkupValue>::Add(TKey,TValue)
inline void Dictionary_2_Add_mD149688A4C85B34CE383F12F115BC42132886AFC (Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158* __this, String_t* ___key0, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158*, String_t*, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820, const RuntimeMethod*))Dictionary_2_Add_mFA077663CA35D0E0A51CF3D3EA5450F5F6347DFA_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Yarn.Markup.MarkupAttribute::set_Properties(System.Collections.Generic.IReadOnlyDictionary`2<System.String,Yarn.Markup.MarkupValue>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_Properties_m3F479C05B96E4D327D398B1B90075611FE804628_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttribute::.ctor(System.Int32,System.Int32,System.Int32,System.String,System.Collections.Generic.IEnumerable`1<Yarn.Markup.MarkupProperty>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttribute__ctor_m9C43622B4302380C6ACD6111885F62BC77142494 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___position0, int32_t ___sourcePosition1, int32_t ___length2, String_t* ___name3, RuntimeObject* ___properties4, const RuntimeMethod* method) ;
// System.Int32 Yarn.Markup.MarkupAttributeMarker::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttributeMarker_get_Position_mC64E225D080E5339566BCD2F9AC82FD4B1EE6354_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) ;
// System.Int32 Yarn.Markup.MarkupAttributeMarker::get_SourcePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttributeMarker_get_SourcePosition_mDE8BCADDA567D0739617802CBF1CAEB03273329E_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) ;
// System.String Yarn.Markup.MarkupAttributeMarker::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkupAttributeMarker_get_Name_m83FD9B2A8777E2859C8E1130C92252BCEE0309BB_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty> Yarn.Markup.MarkupAttributeMarker::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* MarkupAttributeMarker_get_Properties_m90DBD4FFD5F2AFC40D0121A454C00EE1C2FA6466_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttribute::.ctor(Yarn.Markup.MarkupAttributeMarker,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttribute__ctor_mDD44A498C206A5AC55D2472ABB81CBCD50CB4D06 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595 ___openingMarker0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Yarn.Markup.MarkupValue> Yarn.Markup.MarkupAttribute::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MarkupAttribute_get_Properties_m28C7A5FE1D38D0B8F2D6C728A2F25C3E7D490F23_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String Yarn.Markup.MarkupAttribute::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupAttribute_ToString_m2510CDBCB0A9368E453DEEC611D3333FFF4E1B33 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupProperty::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupProperty_set_Name_mC15FFA1A44C445931B9B04633E6A718975DA14AB_inline (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupProperty::set_Value(Yarn.Markup.MarkupValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupProperty_set_Value_mD2BC2B4E9B19693B827B24311015759069940393_inline (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupProperty::.ctor(System.String,Yarn.Markup.MarkupValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupProperty__ctor_m01D113DC8BC124D3628B9109F1BA6361BFDDB308 (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, String_t* ___name0, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___value1, const RuntimeMethod* method) ;
// System.Int32 Yarn.Markup.MarkupValue::get_IntegerValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupValue_get_IntegerValue_mEA73E149B8951A0B639BC236AF886F7A983C0997_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupValue::set_IntegerValue(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_IntegerValue_m083DC656D87E01E516A4E2F24A9FE151CF8E8317_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single Yarn.Markup.MarkupValue::get_FloatValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MarkupValue_get_FloatValue_m5792B637D9A0CAF35154220FB7D15634397DAA14_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupValue::set_FloatValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_FloatValue_m88D271D273112E75B01280FB597FE9B97B1D6E1A_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, float ___value0, const RuntimeMethod* method) ;
// System.String Yarn.Markup.MarkupValue::get_StringValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkupValue_get_StringValue_m271DA9DFB626ECAEEA4F15E2F1CE2BB64C536F13_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupValue::set_StringValue(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_StringValue_mE7F5230E0668892DD005A6E62206526F6F71F8EC_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Yarn.Markup.MarkupValue::get_BoolValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MarkupValue_get_BoolValue_mF2B1BA3A1D5C57231C8E28031C10A2A7A0F02B65_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupValue::set_BoolValue(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_BoolValue_m0F2DA622C2A18063E86A7527C943C556C527D0B8_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, bool ___value0, const RuntimeMethod* method) ;
// Yarn.Markup.MarkupValueType Yarn.Markup.MarkupValue::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupValue_get_Type_m1D219521838B535DD3DA5EABB6EA5F92CA2EF8F1_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupValue::set_Type(Yarn.Markup.MarkupValueType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_Type_m1D10B00C28200E1E91664EB3102BD9437689EF80_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Yarn.Markup.MarkupValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupValue_ToString_m161F800284002901823B7B20F21D5CA046031DFD (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttributeMarker::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Name_mA7CD5C36210AC7D0596580B8D0285F754AA83285_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttributeMarker::set_Position(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Position_mCC86B55B2A78C1C37C6DF5DC368C85EBCBEFF0DC_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttributeMarker::set_SourcePosition(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_SourcePosition_mC84CB10AAF62E5C9870E3BFD92FA4F67F9BD9C02_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttributeMarker::set_Properties(System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Properties_m26E94D55E0337A8A5B1B9F39713F40F1FDB80AD1_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttributeMarker::set_Type(Yarn.Markup.TagType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Type_m34162DBD97A0855865E1A412C4A0FEEE50DF5116_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Yarn.Markup.MarkupAttributeMarker::.ctor(System.String,System.Int32,System.Int32,System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty>,Yarn.Markup.TagType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttributeMarker__ctor_m486A6D49C26EAFB6334B81E5C8EB5345EA498250 (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, String_t* ___name0, int32_t ___position1, int32_t ___sourcePosition2, List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___properties3, int32_t ___type4, const RuntimeMethod* method) ;
// Yarn.Markup.TagType Yarn.Markup.MarkupAttributeMarker::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttributeMarker_get_Type_m8E9A00AA159D9AA4B6F8BD312CF9BC4535DF545F_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty>::GetEnumerator()
inline Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E List_1_GetEnumerator_m1931AC460A30A8B39AB79EF200EB12A3FC65A0CD (List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E (*) (List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762*, const RuntimeMethod*))List_1_GetEnumerator_m1931AC460A30A8B39AB79EF200EB12A3FC65A0CD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupProperty>::Dispose()
inline void Enumerator_Dispose_m65E5F607EEC3B80658E33EEBA1F7DEB2C9E7E27C (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E*, const RuntimeMethod*))Enumerator_Dispose_m65E5F607EEC3B80658E33EEBA1F7DEB2C9E7E27C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupProperty>::get_Current()
inline MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE Enumerator_get_Current_m2AC0A78D0A09FF6B899726D4F37F6EE5E4A74C58_inline (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E* __this, const RuntimeMethod* method)
{
	return ((  MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE (*) (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E*, const RuntimeMethod*))Enumerator_get_Current_m2AC0A78D0A09FF6B899726D4F37F6EE5E4A74C58_gshared_inline)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Yarn.Markup.MarkupProperty>::MoveNext()
inline bool Enumerator_MoveNext_mF1D3567EDFF69F9C848831F2D7CDDB48AF2C3C5B (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E*, const RuntimeMethod*))Enumerator_MoveNext_mF1D3567EDFF69F9C848831F2D7CDDB48AF2C3C5B_gshared)(__this, method);
}
// System.Boolean Yarn.Markup.MarkupAttributeMarker::TryGetProperty(System.String,Yarn.Markup.MarkupValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarkupAttributeMarker_TryGetProperty_m8FDCBF955268092CCDE9F52FD6C6AD4A767E9B1F (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, String_t* ___name0, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* ___result1, const RuntimeMethod* method) ;
// System.String Yarn.Analysis.Diagnosis::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Diagnosis_ToString_m4A92F8C5CB8A60416C40A9C3B30F9FF1D5545506 (Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* __this, bool ___showSeverity0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m69D52D3917F3D1BAC76B506B9BAA68A41B483DEF (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
inline void List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
inline void List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Type_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Yarn.Analysis.CompiledProgramAnalyser>::.ctor()
inline void List_1__ctor_m9A6A2CD57D34A9FA1D0EE0AED18DDCB1137DEFF5 (List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.Type> Yarn.Analysis.Context::get_defaultAnalyserClasses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Context_get_defaultAnalyserClasses_m33366AC6E615FF2C3DFEA2F208869DFC512D1A67 (Context_t80DED17249AB4D495B71229AF1CCB8F91E019E82* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Yarn.Analysis.CompiledProgramAnalyser>::Add(T)
inline void List_1_Add_mDD50509A4E099C41E18997AE7BB792B20C9DF3F6_inline (List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* __this, CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76*, CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Yarn.Analysis.CompiledProgramAnalyser>::GetEnumerator()
inline Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B List_1_GetEnumerator_m1B75B96326652EE523F245A0E4A28D69F23C68EE (List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B (*) (List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Yarn.Analysis.CompiledProgramAnalyser>::Dispose()
inline void Enumerator_Dispose_m6EB75C1FB772D4C3BB9D6386592765BF6B6DEB53 (Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Yarn.Analysis.CompiledProgramAnalyser>::get_Current()
inline CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* Enumerator_get_Current_m41E0ED7E38AF7323280A69D87D6327B1917DA9DC_inline (Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B* __this, const RuntimeMethod* method)
{
	return ((  CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* (*) (Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Yarn.Analysis.CompiledProgramAnalyser>::MoveNext()
inline bool Enumerator_MoveNext_mAE6E0135AA6D1C8A02070CB0968235D7A1856289 (Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Yarn.Analysis.Diagnosis>::.ctor()
inline void List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26 (List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Yarn.Analysis.Diagnosis>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m231A1BAA601DCA4B0A5F19F7C277726EEDA15ECE (List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// Google.Protobuf.Collections.MapField`2<System.String,Yarn.Node> Yarn.Program::get_Nodes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F* Program_get_Nodes_mCC7FB1AF27B95AB3EB2D7E338DB97EBEDF48CE5D_inline (Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Google.Protobuf.Collections.MapField`2<System.String,Yarn.Node>::GetEnumerator()
inline RuntimeObject* MapField_2_GetEnumerator_m2907F2B8BCC37BA0A10975F5D74AE6114F4F485A (MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F*, const RuntimeMethod*))MapField_2_GetEnumerator_m0C29C8A100F19080B2942549EE0E1157BD8A0AF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Node>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m2760D03C96FEDBCFA6D6359DFC7BC461278B36CA_inline (KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Node>::get_Value()
inline Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C* KeyValuePair_2_get_Value_m5CF6FA0E04D1B6DE3D63536BB949EE04F7F125BB_inline (KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6* __this, const RuntimeMethod* method)
{
	return ((  Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C* (*) (KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// Google.Protobuf.Collections.RepeatedField`1<Yarn.Instruction> Yarn.Node::get_Instructions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68* Node_get_Instructions_m0127505A13379FC34118DB922BE88CBC8C51C5A5_inline (Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> Google.Protobuf.Collections.RepeatedField`1<Yarn.Instruction>::GetEnumerator()
inline RuntimeObject* RepeatedField_1_GetEnumerator_mEA15D9F90F9CC0E9F394587C284443CF6DE9E95A (RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68*, const RuntimeMethod*))RepeatedField_1_GetEnumerator_mF44FB2D9A06C4255B2DB87766FD85E36F16F57AF_gshared)(__this, method);
}
// Yarn.Instruction/Types/OpCode Yarn.Instruction::get_Opcode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Instruction_get_Opcode_m1BE35411F6C483F9F47896261C8C534AA5C5F0A4_inline (Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Yarn.Operand> Yarn.Instruction::get_Operands()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F* Instruction_get_Operands_mE27308D6B162EB11792C3A9C5E60351E136F18BF_inline (Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.Collections.RepeatedField`1<Yarn.Operand>::get_Item(System.Int32)
inline Operand_t29219BF1C85E0F708A3D8EE82174F1B44DC427EF* RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769 (RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Operand_t29219BF1C85E0F708A3D8EE82174F1B44DC427EF* (*) (RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F*, int32_t, const RuntimeMethod*))RepeatedField_1_get_Item_mD8725ACA0AB3289CD686AC5500D022AB5712AAFA_gshared)(__this, ___index0, method);
}
// System.String Yarn.Operand::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Operand_get_StringValue_m0306F2B505A77A1CE8DF76C89A7936553590FDB0 (Operand_t29219BF1C85E0F708A3D8EE82174F1B44DC427EF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
inline Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0 (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_inline (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Void Yarn.Analysis.Diagnosis::.ctor(System.String,Yarn.Analysis.Diagnosis/Severity,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnosis__ctor_m3DE178E97BFBB160AE486BC8694CD9D502A82FE7 (Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* __this, String_t* ___message0, int32_t ___severity1, String_t* ___nodeName2, int32_t ___lineNumber3, int32_t ___columnNumber4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Yarn.Analysis.Diagnosis>::Add(T)
inline void List_1_Add_mA048461C43E36558B1E020BF0DADE809BAECDD46_inline (List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* __this, Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4*, Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void Yarn.Analysis.CompiledProgramAnalyser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompiledProgramAnalyser__ctor_mF695C6EEA1D94CA985550107E820A4C791FF2F88 (CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
inline void HashSet_1_ExceptWith_m46D5B35715EF8FC1BF736C780D56A414DC6780CF (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ExceptWith_m0009189D7A663A4CEABCAC347395D977883CDF04_gshared)(__this, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Yarn.Markup.LineParser/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7A10C2EA93A79520EEFA76E055E039EDB2AC853B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0* L_0 = (U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0*)il2cpp_codegen_object_new(U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5C1A53BB39E49E6F7EB776D9B1C8DBF1F2BB81F2(L_0, NULL);
		((U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Yarn.Markup.LineParser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5C1A53BB39E49E6F7EB776D9B1C8DBF1F2BB81F2 (U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Yarn.Markup.LineParser/<>c::<.cctor>b__28_0(Yarn.Markup.MarkupAttribute,Yarn.Markup.MarkupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__28_0_mE5B67CE18E9FCD85157B12119A0024EE4BAEDBAE (U3CU3Ec_t102D3EC4340A44982942B004D59B3DB21DE5FDF0* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___x0, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___y1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = MarkupAttribute_get_SourcePosition_m7392E6BC7E2DC99C2651F9276BC2AB842D2FE418_inline((&___x0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = MarkupAttribute_get_SourcePosition_m7392E6BC7E2DC99C2651F9276BC2AB842D2FE418_inline((&___y1), NULL);
		int32_t L_2;
		L_2 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&V_0), L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Yarn.Markup.MarkupParseException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupParseException__ctor_m1762966EC551A08E987703D890E6964A803A2A3E (MarkupParseException_tD00D1AB1B27765E0AE90EFFB85E6BB898C9921A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void Yarn.Markup.MarkupParseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupParseException__ctor_mCAFFFA892016C7393AE192C0A0EBF7DD8304B2E7 (MarkupParseException_tD00D1AB1B27765E0AE90EFFB85E6BB898C9921A2* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void Yarn.Markup.MarkupParseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupParseException__ctor_m2EEB3F835C5C18A9C96BB4B2724814918105E7C4 (MarkupParseException_tD00D1AB1B27765E0AE90EFFB85E6BB898C9921A2* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Yarn.Markup.MarkupParseResult
IL2CPP_EXTERN_C void MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshal_pinvoke(const MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36& unmarshaled, MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Attributes_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Attributes' of type 'MarkupParseResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Attributes_1Exception, NULL);
}
IL2CPP_EXTERN_C void MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshal_pinvoke_back(const MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshaled_pinvoke& marshaled, MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36& unmarshaled)
{
	Exception_t* ___Attributes_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Attributes' of type 'MarkupParseResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Attributes_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupParseResult
IL2CPP_EXTERN_C void MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshal_pinvoke_cleanup(MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Yarn.Markup.MarkupParseResult
IL2CPP_EXTERN_C void MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshal_com(const MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36& unmarshaled, MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshaled_com& marshaled)
{
	Exception_t* ___Attributes_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Attributes' of type 'MarkupParseResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Attributes_1Exception, NULL);
}
IL2CPP_EXTERN_C void MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshal_com_back(const MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshaled_com& marshaled, MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36& unmarshaled)
{
	Exception_t* ___Attributes_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Attributes' of type 'MarkupParseResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Attributes_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupParseResult
IL2CPP_EXTERN_C void MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshal_com_cleanup(MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36_marshaled_com& marshaled)
{
}
// System.Void Yarn.Markup.MarkupParseResult::.ctor(System.String,System.Collections.Generic.List`1<Yarn.Markup.MarkupAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupParseResult__ctor_m5866D389DC321E70C778DBB9A197243F92CD3343 (MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* __this, String_t* ___text0, List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* ___attributes1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___text0;
		__this->___Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Text_0), (void*)L_0);
		List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* L_1 = ___attributes1;
		__this->___Attributes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Attributes_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupParseResult__ctor_m5866D389DC321E70C778DBB9A197243F92CD3343_AdjustorThunk (RuntimeObject* __this, String_t* ___text0, List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* ___attributes1, const RuntimeMethod* method)
{
	MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36*>(__this + _offset);
	MarkupParseResult__ctor_m5866D389DC321E70C778DBB9A197243F92CD3343(_thisAdjusted, ___text0, ___attributes1, method);
}
// System.Boolean Yarn.Markup.MarkupParseResult::TryGetAttributeWithName(System.String,Yarn.Markup.MarkupAttribute&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarkupParseResult_TryGetAttributeWithName_m47BE776BFE424F25FE98B08564D2F0EBBEEB9F3B (MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* __this, String_t* ___name0, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* ___attribute1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D V_0;
	memset((&V_0), 0, sizeof(V_0));
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* L_0 = __this->___Attributes_1;
		NullCheck(L_0);
		Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D L_1;
		L_1 = List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD(L_0, List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138((&V_0), Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_000e_1:
			{
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_2;
				L_2 = Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_inline((&V_0), Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_RuntimeMethod_var);
				V_1 = L_2;
				String_t* L_3;
				L_3 = MarkupAttribute_get_Name_mE1DD0B98462EC420587F7871FF2FBD703EECA089_inline((&V_1), NULL);
				String_t* L_4 = ___name0;
				bool L_5;
				L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, L_4, NULL);
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* L_6 = ___attribute1;
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_7 = V_1;
				*(MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*)L_6 = L_7;
				Il2CppCodeGenWriteBarrier((void**)&(((MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*)L_6)->___U3CNameU3Ek__BackingField_2), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*)L_6)->___U3CPropertiesU3Ek__BackingField_3), (void*)NULL);
				#endif
				V_2 = (bool)1;
				goto IL_0052;
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B((&V_0), Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* L_9 = ___attribute1;
		il2cpp_codegen_initobj(L_9, sizeof(MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B));
		return (bool)0;
	}

IL_0052:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C  bool MarkupParseResult_TryGetAttributeWithName_m47BE776BFE424F25FE98B08564D2F0EBBEEB9F3B_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* ___attribute1, const RuntimeMethod* method)
{
	MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36*>(__this + _offset);
	bool _returnValue;
	_returnValue = MarkupParseResult_TryGetAttributeWithName_m47BE776BFE424F25FE98B08564D2F0EBBEEB9F3B(_thisAdjusted, ___name0, ___attribute1, method);
	return _returnValue;
}
// System.String Yarn.Markup.MarkupParseResult::TextForAttribute(Yarn.Markup.MarkupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupParseResult_TextForAttribute_m3429C446D2912D7ECA1EF3C5A1CEF1D1A09A77A7 (MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___attribute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&___attribute0), NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = __this->___Text_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		int32_t L_4;
		L_4 = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline((&___attribute0), NULL);
		int32_t L_5;
		L_5 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&___attribute0), NULL);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5)))))
		{
			goto IL_0036;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A2105416614448D3B4BCBE73F3BCE66B3E800E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MarkupParseResult_TextForAttribute_m3429C446D2912D7ECA1EF3C5A1CEF1D1A09A77A7_RuntimeMethod_var)));
	}

IL_0036:
	{
		String_t* L_7 = __this->___Text_0;
		int32_t L_8;
		L_8 = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline((&___attribute0), NULL);
		int32_t L_9;
		L_9 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&___attribute0), NULL);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* MarkupParseResult_TextForAttribute_m3429C446D2912D7ECA1EF3C5A1CEF1D1A09A77A7_AdjustorThunk (RuntimeObject* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___attribute0, const RuntimeMethod* method)
{
	MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MarkupParseResult_TextForAttribute_m3429C446D2912D7ECA1EF3C5A1CEF1D1A09A77A7(_thisAdjusted, ___attribute0, method);
	return _returnValue;
}
// Yarn.Markup.MarkupParseResult Yarn.Markup.MarkupParseResult::DeleteRange(Yarn.Markup.MarkupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36 MarkupParseResult_DeleteRange_m29D830C6D9E3DEB477FDFD45FF3C64DAD46F74CA (MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___attributeToDelete0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m78D0BB339D35901957BB879D7EBBFBB380C4927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D V_4;
	memset((&V_4), 0, sizeof(V_4));
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B V_5;
	memset((&V_5), 0, sizeof(V_5));
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* L_0 = (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51*)il2cpp_codegen_object_new(List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m78D0BB339D35901957BB879D7EBBFBB380C4927A(L_0, List_1__ctor_m78D0BB339D35901957BB879D7EBBFBB380C4927A_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1;
		L_1 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&___attributeToDelete0), NULL);
		if (L_1)
		{
			goto IL_006a;
		}
	}
	{
		List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* L_2 = __this->___Attributes_1;
		NullCheck(L_2);
		Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D L_3;
		L_3 = List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD(L_2, List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD_RuntimeMethod_var);
		V_4 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138((&V_4), Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_001e_1:
			{
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_4;
				L_4 = Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_inline((&V_4), Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_RuntimeMethod_var);
				V_5 = L_4;
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_5 = ___attributeToDelete0;
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_6 = L_5;
				RuntimeObject* L_7 = Box(MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_il2cpp_TypeInfo_var, &L_6);
				Il2CppFakeBox<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B> L_8(MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_il2cpp_TypeInfo_var, (&V_5));
				bool L_9;
				L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
				if (L_9)
				{
					goto IL_0044_1;
				}
			}
			{
				List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* L_10 = V_0;
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_11 = V_5;
				NullCheck(L_10);
				List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_inline(L_10, L_11, List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_RuntimeMethod_var);
			}

IL_0044_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B((&V_4), Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		String_t* L_13 = __this->___Text_0;
		List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* L_14 = V_0;
		MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36 L_15;
		memset((&L_15), 0, sizeof(L_15));
		MarkupParseResult__ctor_m5866D389DC321E70C778DBB9A197243F92CD3343((&L_15), L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_006a:
	{
		int32_t L_16;
		L_16 = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline((&___attributeToDelete0), NULL);
		V_1 = L_16;
		int32_t L_17;
		L_17 = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline((&___attributeToDelete0), NULL);
		int32_t L_18;
		L_18 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&___attributeToDelete0), NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		String_t* L_19 = __this->___Text_0;
		int32_t L_20;
		L_20 = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline((&___attributeToDelete0), NULL);
		int32_t L_21;
		L_21 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&___attributeToDelete0), NULL);
		NullCheck(L_19);
		String_t* L_22;
		L_22 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_19, L_20, L_21, NULL);
		V_3 = L_22;
		List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* L_23 = __this->___Attributes_1;
		NullCheck(L_23);
		Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D L_24;
		L_24 = List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD(L_23, List_1_GetEnumerator_mF1A494949B7CEBA4681BEA9ADF4ADC72AF93E0DD_RuntimeMethod_var);
		V_4 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01a0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138((&V_4), Enumerator_Dispose_m4764531FFF4B02EA877CD64BA16441F311B89138_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0192_1;
			}

IL_00ae_1:
			{
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_25;
				L_25 = Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_inline((&V_4), Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_RuntimeMethod_var);
				V_6 = L_25;
				int32_t L_26;
				L_26 = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline((&V_6), NULL);
				V_7 = L_26;
				int32_t L_27;
				L_27 = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline((&V_6), NULL);
				int32_t L_28;
				L_28 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&V_6), NULL);
				V_8 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_29 = ___attributeToDelete0;
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_30 = L_29;
				RuntimeObject* L_31 = Box(MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_il2cpp_TypeInfo_var, &L_30);
				Il2CppFakeBox<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B> L_32(MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_il2cpp_TypeInfo_var, (&V_6));
				bool L_33;
				L_33 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_32), L_31, NULL);
				if (L_33)
				{
					goto IL_0192_1;
				}
			}
			{
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_34 = V_6;
				V_9 = L_34;
				int32_t L_35 = V_7;
				int32_t L_36 = V_1;
				if ((((int32_t)L_35) > ((int32_t)L_36)))
				{
					goto IL_0137_1;
				}
			}
			{
				int32_t L_37 = V_8;
				int32_t L_38 = V_1;
				if ((((int32_t)L_37) <= ((int32_t)L_38)))
				{
					goto IL_018a_1;
				}
			}
			{
				int32_t L_39 = V_8;
				int32_t L_40 = V_2;
				if ((((int32_t)L_39) > ((int32_t)L_40)))
				{
					goto IL_0120_1;
				}
			}
			{
				int32_t L_41 = V_1;
				int32_t L_42 = V_7;
				MarkupAttribute_set_Length_mB56601DC0FF284366DF0C9169A356D352896F0AF_inline((&V_9), ((int32_t)il2cpp_codegen_subtract(L_41, L_42)), NULL);
				int32_t L_43;
				L_43 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&V_6), NULL);
				if ((((int32_t)L_43) <= ((int32_t)0)))
				{
					goto IL_018a_1;
				}
			}
			{
				int32_t L_44;
				L_44 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&V_9), NULL);
				if ((((int32_t)L_44) > ((int32_t)0)))
				{
					goto IL_018a_1;
				}
			}
			{
				goto IL_0192_1;
			}

IL_0120_1:
			{
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* L_45 = (&V_9);
				int32_t L_46;
				L_46 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline(L_45, NULL);
				int32_t L_47;
				L_47 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&___attributeToDelete0), NULL);
				MarkupAttribute_set_Length_mB56601DC0FF284366DF0C9169A356D352896F0AF_inline(L_45, ((int32_t)il2cpp_codegen_subtract(L_46, L_47)), NULL);
				goto IL_018a_1;
			}

IL_0137_1:
			{
				int32_t L_48 = V_7;
				int32_t L_49 = V_2;
				if ((((int32_t)L_48) < ((int32_t)L_49)))
				{
					goto IL_014f_1;
				}
			}
			{
				int32_t L_50 = V_7;
				int32_t L_51;
				L_51 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&___attributeToDelete0), NULL);
				MarkupAttribute_set_Position_mBE088A7198AFC4510F2EC23BD278BF792858B6AD_inline((&V_9), ((int32_t)il2cpp_codegen_subtract(L_50, L_51)), NULL);
				goto IL_018a_1;
			}

IL_014f_1:
			{
				int32_t L_52 = V_7;
				int32_t L_53 = V_1;
				if ((((int32_t)L_52) < ((int32_t)L_53)))
				{
					goto IL_0159_1;
				}
			}
			{
				int32_t L_54 = V_8;
				int32_t L_55 = V_2;
				if ((((int32_t)L_54) <= ((int32_t)L_55)))
				{
					goto IL_0192_1;
				}
			}

IL_0159_1:
			{
				int32_t L_56 = V_7;
				int32_t L_57 = V_1;
				if ((((int32_t)L_56) < ((int32_t)L_57)))
				{
					goto IL_018a_1;
				}
			}
			{
				int32_t L_58 = V_8;
				int32_t L_59 = V_2;
				if ((((int32_t)L_58) <= ((int32_t)L_59)))
				{
					goto IL_018a_1;
				}
			}
			{
				int32_t L_60 = V_2;
				int32_t L_61 = V_7;
				V_10 = ((int32_t)il2cpp_codegen_subtract(L_60, L_61));
				int32_t L_62 = V_1;
				V_11 = L_62;
				int32_t L_63;
				L_63 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline((&V_6), NULL);
				int32_t L_64 = V_10;
				V_12 = ((int32_t)il2cpp_codegen_subtract(L_63, L_64));
				int32_t L_65 = V_11;
				MarkupAttribute_set_Position_mBE088A7198AFC4510F2EC23BD278BF792858B6AD_inline((&V_9), L_65, NULL);
				int32_t L_66 = V_12;
				MarkupAttribute_set_Length_mB56601DC0FF284366DF0C9169A356D352896F0AF_inline((&V_9), L_66, NULL);
			}

IL_018a_1:
			{
				List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* L_67 = V_0;
				MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_68 = V_9;
				NullCheck(L_67);
				List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_inline(L_67, L_68, List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_RuntimeMethod_var);
			}

IL_0192_1:
			{
				bool L_69;
				L_69 = Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B((&V_4), Enumerator_MoveNext_m0C81735ADD7B1CED08C35C223F251E4415E2D11B_RuntimeMethod_var);
				if (L_69)
				{
					goto IL_00ae_1;
				}
			}
			{
				goto IL_01ae;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01ae:
	{
		String_t* L_70 = V_3;
		List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* L_71 = V_0;
		MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36 L_72;
		memset((&L_72), 0, sizeof(L_72));
		MarkupParseResult__ctor_m5866D389DC321E70C778DBB9A197243F92CD3343((&L_72), L_70, L_71, /*hidden argument*/NULL);
		return L_72;
	}
}
IL2CPP_EXTERN_C  MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36 MarkupParseResult_DeleteRange_m29D830C6D9E3DEB477FDFD45FF3C64DAD46F74CA_AdjustorThunk (RuntimeObject* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___attributeToDelete0, const RuntimeMethod* method)
{
	MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36*>(__this + _offset);
	MarkupParseResult_t8A02358A10064C1582FC923D3372252FDB826A36 _returnValue;
	_returnValue = MarkupParseResult_DeleteRange_m29D830C6D9E3DEB477FDFD45FF3C64DAD46F74CA(_thisAdjusted, ___attributeToDelete0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Yarn.Markup.MarkupAttribute
IL2CPP_EXTERN_C void MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshal_pinvoke(const MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B& unmarshaled, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CPropertiesU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Properties>k__BackingField' of type 'MarkupAttribute'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPropertiesU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshal_pinvoke_back(const MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshaled_pinvoke& marshaled, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B& unmarshaled)
{
	Exception_t* ___U3CPropertiesU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Properties>k__BackingField' of type 'MarkupAttribute'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPropertiesU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupAttribute
IL2CPP_EXTERN_C void MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshal_pinvoke_cleanup(MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Yarn.Markup.MarkupAttribute
IL2CPP_EXTERN_C void MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshal_com(const MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B& unmarshaled, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshaled_com& marshaled)
{
	Exception_t* ___U3CPropertiesU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Properties>k__BackingField' of type 'MarkupAttribute'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPropertiesU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshal_com_back(const MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshaled_com& marshaled, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B& unmarshaled)
{
	Exception_t* ___U3CPropertiesU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Properties>k__BackingField' of type 'MarkupAttribute'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPropertiesU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupAttribute
IL2CPP_EXTERN_C void MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshal_com_cleanup(MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B_marshaled_com& marshaled)
{
}
// System.Void Yarn.Markup.MarkupAttribute::.ctor(System.Int32,System.Int32,System.Int32,System.String,System.Collections.Generic.IEnumerable`1<Yarn.Markup.MarkupProperty>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttribute__ctor_m9C43622B4302380C6ACD6111885F62BC77142494 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___position0, int32_t ___sourcePosition1, int32_t ___length2, String_t* ___name3, RuntimeObject* ___properties4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD149688A4C85B34CE383F12F115BC42132886AFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5FC42799DA82C23E7C1AFEFF7CC4428CCD3AD52F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE526C139BA896F1D4C0B4026C806693FCF5EE09D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA4D596DBC1295D75EEB5DE36613BBD39509D54BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___position0;
		MarkupAttribute_set_Position_mBE088A7198AFC4510F2EC23BD278BF792858B6AD_inline(__this, L_0, NULL);
		int32_t L_1 = ___sourcePosition1;
		MarkupAttribute_set_SourcePosition_m2E895FCD584656FD47D3DC20FC629A8723D1BA65_inline(__this, L_1, NULL);
		int32_t L_2 = ___length2;
		MarkupAttribute_set_Length_mB56601DC0FF284366DF0C9169A356D352896F0AF_inline(__this, L_2, NULL);
		String_t* L_3 = ___name3;
		MarkupAttribute_set_Name_m1282691FC9A6E85F640C01992835C6E21565C375_inline(__this, L_3, NULL);
		Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158* L_4 = (Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158*)il2cpp_codegen_object_new(Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m5FC42799DA82C23E7C1AFEFF7CC4428CCD3AD52F(L_4, Dictionary_2__ctor_m5FC42799DA82C23E7C1AFEFF7CC4428CCD3AD52F_RuntimeMethod_var);
		V_0 = L_4;
		RuntimeObject* L_5 = ___properties4;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Yarn.Markup.MarkupProperty>::GetEnumerator() */, IEnumerable_1_tE526C139BA896F1D4C0B4026C806693FCF5EE09D_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_005b;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_002d_1:
			{
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE L_10;
				L_10 = InterfaceFuncInvoker0< MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Yarn.Markup.MarkupProperty>::get_Current() */, IEnumerator_1_tA4D596DBC1295D75EEB5DE36613BBD39509D54BE_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158* L_11 = V_0;
				String_t* L_12;
				L_12 = MarkupProperty_get_Name_mDD842596C83F512A7B51C7F3A41C7987C469A622_inline((&V_2), NULL);
				MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 L_13;
				L_13 = MarkupProperty_get_Value_mB8C277B2962D6D15578A164DF14C302611F2A227_inline((&V_2), NULL);
				NullCheck(L_11);
				Dictionary_2_Add_mD149688A4C85B34CE383F12F115BC42132886AFC(L_11, L_12, L_13, Dictionary_2_Add_mD149688A4C85B34CE383F12F115BC42132886AFC_RuntimeMethod_var);
			}

IL_0048_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		Dictionary_2_t3376592513202D739B5ED794EEFD7836BD8FD158* L_16 = V_0;
		MarkupAttribute_set_Properties_m3F479C05B96E4D327D398B1B90075611FE804628_inline(__this, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttribute__ctor_m9C43622B4302380C6ACD6111885F62BC77142494_AdjustorThunk (RuntimeObject* __this, int32_t ___position0, int32_t ___sourcePosition1, int32_t ___length2, String_t* ___name3, RuntimeObject* ___properties4, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	MarkupAttribute__ctor_m9C43622B4302380C6ACD6111885F62BC77142494(_thisAdjusted, ___position0, ___sourcePosition1, ___length2, ___name3, ___properties4, method);
}
// System.Void Yarn.Markup.MarkupAttribute::.ctor(Yarn.Markup.MarkupAttributeMarker,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttribute__ctor_mDD44A498C206A5AC55D2472ABB81CBCD50CB4D06 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595 ___openingMarker0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MarkupAttributeMarker_get_Position_mC64E225D080E5339566BCD2F9AC82FD4B1EE6354_inline((&___openingMarker0), NULL);
		int32_t L_1;
		L_1 = MarkupAttributeMarker_get_SourcePosition_mDE8BCADDA567D0739617802CBF1CAEB03273329E_inline((&___openingMarker0), NULL);
		int32_t L_2 = ___length1;
		String_t* L_3;
		L_3 = MarkupAttributeMarker_get_Name_m83FD9B2A8777E2859C8E1130C92252BCEE0309BB_inline((&___openingMarker0), NULL);
		List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* L_4;
		L_4 = MarkupAttributeMarker_get_Properties_m90DBD4FFD5F2AFC40D0121A454C00EE1C2FA6466_inline((&___openingMarker0), NULL);
		MarkupAttribute__ctor_m9C43622B4302380C6ACD6111885F62BC77142494(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttribute__ctor_mDD44A498C206A5AC55D2472ABB81CBCD50CB4D06_AdjustorThunk (RuntimeObject* __this, MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595 ___openingMarker0, int32_t ___length1, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	MarkupAttribute__ctor_mDD44A498C206A5AC55D2472ABB81CBCD50CB4D06(_thisAdjusted, ___openingMarker0, ___length1, method);
}
// System.Int32 Yarn.Markup.MarkupAttribute::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttribute::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttribute_set_Position_mBE088A7198AFC4510F2EC23BD278BF792858B6AD (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttribute_set_Position_mBE088A7198AFC4510F2EC23BD278BF792858B6AD_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	MarkupAttribute_set_Position_mBE088A7198AFC4510F2EC23BD278BF792858B6AD_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Yarn.Markup.MarkupAttribute::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttribute::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttribute_set_Length_mB56601DC0FF284366DF0C9169A356D352896F0AF (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttribute_set_Length_mB56601DC0FF284366DF0C9169A356D352896F0AF_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	MarkupAttribute_set_Length_mB56601DC0FF284366DF0C9169A356D352896F0AF_inline(_thisAdjusted, ___value0, method);
}
// System.String Yarn.Markup.MarkupAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupAttribute_get_Name_mE1DD0B98462EC420587F7871FF2FBD703EECA089 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* MarkupAttribute_get_Name_mE1DD0B98462EC420587F7871FF2FBD703EECA089_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MarkupAttribute_get_Name_mE1DD0B98462EC420587F7871FF2FBD703EECA089_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttribute_set_Name_m1282691FC9A6E85F640C01992835C6E21565C375 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttribute_set_Name_m1282691FC9A6E85F640C01992835C6E21565C375_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	MarkupAttribute_set_Name_m1282691FC9A6E85F640C01992835C6E21565C375_inline(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Yarn.Markup.MarkupValue> Yarn.Markup.MarkupAttribute::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MarkupAttribute_get_Properties_m28C7A5FE1D38D0B8F2D6C728A2F25C3E7D490F23 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CPropertiesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MarkupAttribute_get_Properties_m28C7A5FE1D38D0B8F2D6C728A2F25C3E7D490F23_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = MarkupAttribute_get_Properties_m28C7A5FE1D38D0B8F2D6C728A2F25C3E7D490F23_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttribute::set_Properties(System.Collections.Generic.IReadOnlyDictionary`2<System.String,Yarn.Markup.MarkupValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttribute_set_Properties_m3F479C05B96E4D327D398B1B90075611FE804628 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttribute_set_Properties_m3F479C05B96E4D327D398B1B90075611FE804628_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	MarkupAttribute_set_Properties_m3F479C05B96E4D327D398B1B90075611FE804628_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Yarn.Markup.MarkupAttribute::get_SourcePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarkupAttribute_get_SourcePosition_m7392E6BC7E2DC99C2651F9276BC2AB842D2FE418 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSourcePositionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MarkupAttribute_get_SourcePosition_m7392E6BC7E2DC99C2651F9276BC2AB842D2FE418_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MarkupAttribute_get_SourcePosition_m7392E6BC7E2DC99C2651F9276BC2AB842D2FE418_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttribute::set_SourcePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttribute_set_SourcePosition_m2E895FCD584656FD47D3DC20FC629A8723D1BA65 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourcePositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttribute_set_SourcePosition_m2E895FCD584656FD47D3DC20FC629A8723D1BA65_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	MarkupAttribute_set_SourcePosition_m2E895FCD584656FD47D3DC20FC629A8723D1BA65_inline(_thisAdjusted, ___value0, method);
}
// System.String Yarn.Markup.MarkupAttribute::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupAttribute_ToString_m2510CDBCB0A9368E453DEEC611D3333FFF4E1B33 (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t01503931A4672FA7CD5747275146FB48504AC173_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42C692EBD9B440D6034CEFA06C04E4FD482F34B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB635C667599C757DF6C4968308D22AD68492CAC3);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4;
		L_4 = MarkupAttribute_get_Name_mE1DD0B98462EC420587F7871FF2FBD703EECA089_inline(__this, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		int32_t L_6;
		L_6 = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline(__this, NULL);
		int32_t L_11;
		L_11 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline(__this, NULL);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_9;
		int32_t L_15;
		L_15 = MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline(__this, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		String_t* L_18;
		L_18 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral42C692EBD9B440D6034CEFA06C04E4FD482F34B8, L_14, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_18, NULL);
		RuntimeObject* L_20;
		L_20 = MarkupAttribute_get_Properties_m28C7A5FE1D38D0B8F2D6C728A2F25C3E7D490F23_inline(__this, NULL);
		RuntimeObject* L_21 = L_20;
		G_B1_0 = L_21;
		if (L_21)
		{
			G_B2_0 = L_21;
			goto IL_0064;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_006c;
	}

IL_0064:
	{
		NullCheck(G_B2_0);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Markup.MarkupValue>>::get_Count() */, IReadOnlyCollection_1_t01503931A4672FA7CD5747275146FB48504AC173_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = ((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
	}

IL_006c:
	{
		if (!G_B3_0)
		{
			goto IL_008f;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		RuntimeObject* L_24;
		L_24 = MarkupAttribute_get_Properties_m28C7A5FE1D38D0B8F2D6C728A2F25C3E7D490F23_inline(__this, NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Markup.MarkupValue>>::get_Count() */, IReadOnlyCollection_1_t01503931A4672FA7CD5747275146FB48504AC173_il2cpp_TypeInfo_var, L_24);
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28;
		L_28 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB635C667599C757DF6C4968308D22AD68492CAC3, L_27, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_28, NULL);
	}

IL_008f:
	{
		StringBuilder_t* L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		return L_33;
	}
}
IL2CPP_EXTERN_C  String_t* MarkupAttribute_ToString_m2510CDBCB0A9368E453DEEC611D3333FFF4E1B33_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MarkupAttribute_ToString_m2510CDBCB0A9368E453DEEC611D3333FFF4E1B33(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Yarn.Markup.MarkupProperty
IL2CPP_EXTERN_C void MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshal_pinvoke(const MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE& unmarshaled, MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CNameU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.___U3CNameU3Ek__BackingField_0);
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_pinvoke(unmarshaled.___U3CValueU3Ek__BackingField_1, marshaled.___U3CValueU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshal_pinvoke_back(const MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshaled_pinvoke& marshaled, MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE& unmarshaled)
{
	unmarshaled.___U3CNameU3Ek__BackingField_0 = il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_0));
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 unmarshaledU3CValueU3Ek__BackingField_temp_1;
	memset((&unmarshaledU3CValueU3Ek__BackingField_temp_1), 0, sizeof(unmarshaledU3CValueU3Ek__BackingField_temp_1));
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_pinvoke_back(marshaled.___U3CValueU3Ek__BackingField_1, unmarshaledU3CValueU3Ek__BackingField_temp_1);
	unmarshaled.___U3CValueU3Ek__BackingField_1 = unmarshaledU3CValueU3Ek__BackingField_temp_1;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___U3CValueU3Ek__BackingField_1))->___U3CStringValueU3Ek__BackingField_2), (void*)NULL);
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupProperty
IL2CPP_EXTERN_C void MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshal_pinvoke_cleanup(MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CNameU3Ek__BackingField_0);
	marshaled.___U3CNameU3Ek__BackingField_0 = NULL;
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_pinvoke_cleanup(marshaled.___U3CValueU3Ek__BackingField_1);
}


// Conversion methods for marshalling of: Yarn.Markup.MarkupProperty
IL2CPP_EXTERN_C void MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshal_com(const MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE& unmarshaled, MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshaled_com& marshaled)
{
	marshaled.___U3CNameU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CNameU3Ek__BackingField_0);
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_com(unmarshaled.___U3CValueU3Ek__BackingField_1, marshaled.___U3CValueU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshal_com_back(const MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshaled_com& marshaled, MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE& unmarshaled)
{
	unmarshaled.___U3CNameU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_0));
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 unmarshaledU3CValueU3Ek__BackingField_temp_1;
	memset((&unmarshaledU3CValueU3Ek__BackingField_temp_1), 0, sizeof(unmarshaledU3CValueU3Ek__BackingField_temp_1));
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_com_back(marshaled.___U3CValueU3Ek__BackingField_1, unmarshaledU3CValueU3Ek__BackingField_temp_1);
	unmarshaled.___U3CValueU3Ek__BackingField_1 = unmarshaledU3CValueU3Ek__BackingField_temp_1;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___U3CValueU3Ek__BackingField_1))->___U3CStringValueU3Ek__BackingField_2), (void*)NULL);
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupProperty
IL2CPP_EXTERN_C void MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshal_com_cleanup(MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CNameU3Ek__BackingField_0);
	marshaled.___U3CNameU3Ek__BackingField_0 = NULL;
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_com_cleanup(marshaled.___U3CValueU3Ek__BackingField_1);
}
// System.Void Yarn.Markup.MarkupProperty::.ctor(System.String,Yarn.Markup.MarkupValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupProperty__ctor_m01D113DC8BC124D3628B9109F1BA6361BFDDB308 (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, String_t* ___name0, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		MarkupProperty_set_Name_mC15FFA1A44C445931B9B04633E6A718975DA14AB_inline(__this, L_0, NULL);
		MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 L_1 = ___value1;
		MarkupProperty_set_Value_mD2BC2B4E9B19693B827B24311015759069940393_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupProperty__ctor_m01D113DC8BC124D3628B9109F1BA6361BFDDB308_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___value1, const RuntimeMethod* method)
{
	MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE*>(__this + _offset);
	MarkupProperty__ctor_m01D113DC8BC124D3628B9109F1BA6361BFDDB308(_thisAdjusted, ___name0, ___value1, method);
}
// System.String Yarn.Markup.MarkupProperty::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupProperty_get_Name_mDD842596C83F512A7B51C7F3A41C7987C469A622 (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* MarkupProperty_get_Name_mDD842596C83F512A7B51C7F3A41C7987C469A622_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MarkupProperty_get_Name_mDD842596C83F512A7B51C7F3A41C7987C469A622_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupProperty::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupProperty_set_Name_mC15FFA1A44C445931B9B04633E6A718975DA14AB (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupProperty_set_Name_mC15FFA1A44C445931B9B04633E6A718975DA14AB_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE*>(__this + _offset);
	MarkupProperty_set_Name_mC15FFA1A44C445931B9B04633E6A718975DA14AB_inline(_thisAdjusted, ___value0, method);
}
// Yarn.Markup.MarkupValue Yarn.Markup.MarkupProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 MarkupProperty_get_Value_mB8C277B2962D6D15578A164DF14C302611F2A227 (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, const RuntimeMethod* method) 
{
	{
		MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 MarkupProperty_get_Value_mB8C277B2962D6D15578A164DF14C302611F2A227_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE*>(__this + _offset);
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 _returnValue;
	_returnValue = MarkupProperty_get_Value_mB8C277B2962D6D15578A164DF14C302611F2A227_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupProperty::set_Value(Yarn.Markup.MarkupValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupProperty_set_Value_mD2BC2B4E9B19693B827B24311015759069940393 (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___value0, const RuntimeMethod* method) 
{
	{
		MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CValueU3Ek__BackingField_1))->___U3CStringValueU3Ek__BackingField_2), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupProperty_set_Value_mD2BC2B4E9B19693B827B24311015759069940393_AdjustorThunk (RuntimeObject* __this, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___value0, const RuntimeMethod* method)
{
	MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE*>(__this + _offset);
	MarkupProperty_set_Value_mD2BC2B4E9B19693B827B24311015759069940393_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Yarn.Markup.MarkupValue
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_pinvoke(const MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820& unmarshaled, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIntegerValueU3Ek__BackingField_0 = unmarshaled.___U3CIntegerValueU3Ek__BackingField_0;
	marshaled.___U3CFloatValueU3Ek__BackingField_1 = unmarshaled.___U3CFloatValueU3Ek__BackingField_1;
	marshaled.___U3CStringValueU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.___U3CStringValueU3Ek__BackingField_2);
	marshaled.___U3CBoolValueU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.___U3CBoolValueU3Ek__BackingField_3);
	marshaled.___U3CTypeU3Ek__BackingField_4 = unmarshaled.___U3CTypeU3Ek__BackingField_4;
}
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_pinvoke_back(const MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke& marshaled, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820& unmarshaled)
{
	int32_t unmarshaledU3CIntegerValueU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CIntegerValueU3Ek__BackingField_temp_0 = marshaled.___U3CIntegerValueU3Ek__BackingField_0;
	unmarshaled.___U3CIntegerValueU3Ek__BackingField_0 = unmarshaledU3CIntegerValueU3Ek__BackingField_temp_0;
	float unmarshaledU3CFloatValueU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaledU3CFloatValueU3Ek__BackingField_temp_1 = marshaled.___U3CFloatValueU3Ek__BackingField_1;
	unmarshaled.___U3CFloatValueU3Ek__BackingField_1 = unmarshaledU3CFloatValueU3Ek__BackingField_temp_1;
	unmarshaled.___U3CStringValueU3Ek__BackingField_2 = il2cpp_codegen_marshal_string_result(marshaled.___U3CStringValueU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CStringValueU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CStringValueU3Ek__BackingField_2));
	bool unmarshaledU3CBoolValueU3Ek__BackingField_temp_3 = false;
	unmarshaledU3CBoolValueU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CBoolValueU3Ek__BackingField_3);
	unmarshaled.___U3CBoolValueU3Ek__BackingField_3 = unmarshaledU3CBoolValueU3Ek__BackingField_temp_3;
	int32_t unmarshaledU3CTypeU3Ek__BackingField_temp_4 = 0;
	unmarshaledU3CTypeU3Ek__BackingField_temp_4 = marshaled.___U3CTypeU3Ek__BackingField_4;
	unmarshaled.___U3CTypeU3Ek__BackingField_4 = unmarshaledU3CTypeU3Ek__BackingField_temp_4;
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupValue
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_pinvoke_cleanup(MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CStringValueU3Ek__BackingField_2);
	marshaled.___U3CStringValueU3Ek__BackingField_2 = NULL;
}
// Conversion methods for marshalling of: Yarn.Markup.MarkupValue
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_com(const MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820& unmarshaled, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com& marshaled)
{
	marshaled.___U3CIntegerValueU3Ek__BackingField_0 = unmarshaled.___U3CIntegerValueU3Ek__BackingField_0;
	marshaled.___U3CFloatValueU3Ek__BackingField_1 = unmarshaled.___U3CFloatValueU3Ek__BackingField_1;
	marshaled.___U3CStringValueU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CStringValueU3Ek__BackingField_2);
	marshaled.___U3CBoolValueU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.___U3CBoolValueU3Ek__BackingField_3);
	marshaled.___U3CTypeU3Ek__BackingField_4 = unmarshaled.___U3CTypeU3Ek__BackingField_4;
}
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_com_back(const MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com& marshaled, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820& unmarshaled)
{
	int32_t unmarshaledU3CIntegerValueU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CIntegerValueU3Ek__BackingField_temp_0 = marshaled.___U3CIntegerValueU3Ek__BackingField_0;
	unmarshaled.___U3CIntegerValueU3Ek__BackingField_0 = unmarshaledU3CIntegerValueU3Ek__BackingField_temp_0;
	float unmarshaledU3CFloatValueU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaledU3CFloatValueU3Ek__BackingField_temp_1 = marshaled.___U3CFloatValueU3Ek__BackingField_1;
	unmarshaled.___U3CFloatValueU3Ek__BackingField_1 = unmarshaledU3CFloatValueU3Ek__BackingField_temp_1;
	unmarshaled.___U3CStringValueU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CStringValueU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CStringValueU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CStringValueU3Ek__BackingField_2));
	bool unmarshaledU3CBoolValueU3Ek__BackingField_temp_3 = false;
	unmarshaledU3CBoolValueU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CBoolValueU3Ek__BackingField_3);
	unmarshaled.___U3CBoolValueU3Ek__BackingField_3 = unmarshaledU3CBoolValueU3Ek__BackingField_temp_3;
	int32_t unmarshaledU3CTypeU3Ek__BackingField_temp_4 = 0;
	unmarshaledU3CTypeU3Ek__BackingField_temp_4 = marshaled.___U3CTypeU3Ek__BackingField_4;
	unmarshaled.___U3CTypeU3Ek__BackingField_4 = unmarshaledU3CTypeU3Ek__BackingField_temp_4;
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupValue
IL2CPP_EXTERN_C void MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshal_com_cleanup(MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CStringValueU3Ek__BackingField_2);
	marshaled.___U3CStringValueU3Ek__BackingField_2 = NULL;
}
// System.Int32 Yarn.Markup.MarkupValue::get_IntegerValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarkupValue_get_IntegerValue_mEA73E149B8951A0B639BC236AF886F7A983C0997 (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIntegerValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MarkupValue_get_IntegerValue_mEA73E149B8951A0B639BC236AF886F7A983C0997_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MarkupValue_get_IntegerValue_mEA73E149B8951A0B639BC236AF886F7A983C0997_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupValue::set_IntegerValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupValue_set_IntegerValue_m083DC656D87E01E516A4E2F24A9FE151CF8E8317 (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CIntegerValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupValue_set_IntegerValue_m083DC656D87E01E516A4E2F24A9FE151CF8E8317_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	MarkupValue_set_IntegerValue_m083DC656D87E01E516A4E2F24A9FE151CF8E8317_inline(_thisAdjusted, ___value0, method);
}
// System.Single Yarn.Markup.MarkupValue::get_FloatValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MarkupValue_get_FloatValue_m5792B637D9A0CAF35154220FB7D15634397DAA14 (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CFloatValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float MarkupValue_get_FloatValue_m5792B637D9A0CAF35154220FB7D15634397DAA14_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	float _returnValue;
	_returnValue = MarkupValue_get_FloatValue_m5792B637D9A0CAF35154220FB7D15634397DAA14_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupValue::set_FloatValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupValue_set_FloatValue_m88D271D273112E75B01280FB597FE9B97B1D6E1A (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CFloatValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupValue_set_FloatValue_m88D271D273112E75B01280FB597FE9B97B1D6E1A_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	MarkupValue_set_FloatValue_m88D271D273112E75B01280FB597FE9B97B1D6E1A_inline(_thisAdjusted, ___value0, method);
}
// System.String Yarn.Markup.MarkupValue::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupValue_get_StringValue_m271DA9DFB626ECAEEA4F15E2F1CE2BB64C536F13 (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CStringValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* MarkupValue_get_StringValue_m271DA9DFB626ECAEEA4F15E2F1CE2BB64C536F13_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MarkupValue_get_StringValue_m271DA9DFB626ECAEEA4F15E2F1CE2BB64C536F13_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupValue::set_StringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupValue_set_StringValue_mE7F5230E0668892DD005A6E62206526F6F71F8EC (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CStringValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStringValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupValue_set_StringValue_mE7F5230E0668892DD005A6E62206526F6F71F8EC_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	MarkupValue_set_StringValue_mE7F5230E0668892DD005A6E62206526F6F71F8EC_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Yarn.Markup.MarkupValue::get_BoolValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarkupValue_get_BoolValue_mF2B1BA3A1D5C57231C8E28031C10A2A7A0F02B65 (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CBoolValueU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool MarkupValue_get_BoolValue_mF2B1BA3A1D5C57231C8E28031C10A2A7A0F02B65_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	bool _returnValue;
	_returnValue = MarkupValue_get_BoolValue_mF2B1BA3A1D5C57231C8E28031C10A2A7A0F02B65_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupValue::set_BoolValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupValue_set_BoolValue_m0F2DA622C2A18063E86A7527C943C556C527D0B8 (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CBoolValueU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupValue_set_BoolValue_m0F2DA622C2A18063E86A7527C943C556C527D0B8_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	MarkupValue_set_BoolValue_m0F2DA622C2A18063E86A7527C943C556C527D0B8_inline(_thisAdjusted, ___value0, method);
}
// Yarn.Markup.MarkupValueType Yarn.Markup.MarkupValue::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarkupValue_get_Type_m1D219521838B535DD3DA5EABB6EA5F92CA2EF8F1 (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MarkupValue_get_Type_m1D219521838B535DD3DA5EABB6EA5F92CA2EF8F1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MarkupValue_get_Type_m1D219521838B535DD3DA5EABB6EA5F92CA2EF8F1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupValue::set_Type(Yarn.Markup.MarkupValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupValue_set_Type_m1D10B00C28200E1E91664EB3102BD9437689EF80 (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupValue_set_Type_m1D10B00C28200E1E91664EB3102BD9437689EF80_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	MarkupValue_set_Type_m1D10B00C28200E1E91664EB3102BD9437689EF80_inline(_thisAdjusted, ___value0, method);
}
// System.String Yarn.Markup.MarkupValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupValue_ToString_m161F800284002901823B7B20F21D5CA046031DFD (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		int32_t L_0;
		L_0 = MarkupValue_get_Type_m1D219521838B535DD3DA5EABB6EA5F92CA2EF8F1_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_003d;
			}
			case 3:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_001f:
	{
		int32_t L_2;
		L_2 = MarkupValue_get_IntegerValue_mEA73E149B8951A0B639BC236AF886F7A983C0997_inline(__this, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		return L_3;
	}

IL_002e:
	{
		float L_4;
		L_4 = MarkupValue_get_FloatValue_m5792B637D9A0CAF35154220FB7D15634397DAA14_inline(__this, NULL);
		V_2 = L_4;
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		return L_5;
	}

IL_003d:
	{
		String_t* L_6;
		L_6 = MarkupValue_get_StringValue_m271DA9DFB626ECAEEA4F15E2F1CE2BB64C536F13_inline(__this, NULL);
		return L_6;
	}

IL_0044:
	{
		bool L_7;
		L_7 = MarkupValue_get_BoolValue_mF2B1BA3A1D5C57231C8E28031C10A2A7A0F02B65_inline(__this, NULL);
		V_3 = L_7;
		String_t* L_8;
		L_8 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_3), NULL);
		return L_8;
	}

IL_0053:
	{
		int32_t L_9;
		L_9 = MarkupValue_get_Type_m1D219521838B535DD3DA5EABB6EA5F92CA2EF8F1_inline(__this, NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MarkupValueType_tDB61E0C5867897503CC9E887742E0FB758AEDDED_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0DF48787D6207C0E0BD94E0B31BBDE5D8CDA00E)), L_11, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MarkupValue_ToString_m161F800284002901823B7B20F21D5CA046031DFD_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  String_t* MarkupValue_ToString_m161F800284002901823B7B20F21D5CA046031DFD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MarkupValue_ToString_m161F800284002901823B7B20F21D5CA046031DFD(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Yarn.Markup.MarkupAttributeMarker
IL2CPP_EXTERN_C void MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshal_pinvoke(const MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595& unmarshaled, MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CPropertiesU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Properties>k__BackingField' of type 'MarkupAttributeMarker'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPropertiesU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshal_pinvoke_back(const MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshaled_pinvoke& marshaled, MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595& unmarshaled)
{
	Exception_t* ___U3CPropertiesU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Properties>k__BackingField' of type 'MarkupAttributeMarker'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPropertiesU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupAttributeMarker
IL2CPP_EXTERN_C void MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshal_pinvoke_cleanup(MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Yarn.Markup.MarkupAttributeMarker
IL2CPP_EXTERN_C void MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshal_com(const MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595& unmarshaled, MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshaled_com& marshaled)
{
	Exception_t* ___U3CPropertiesU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Properties>k__BackingField' of type 'MarkupAttributeMarker'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPropertiesU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshal_com_back(const MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshaled_com& marshaled, MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595& unmarshaled)
{
	Exception_t* ___U3CPropertiesU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Properties>k__BackingField' of type 'MarkupAttributeMarker'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPropertiesU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Yarn.Markup.MarkupAttributeMarker
IL2CPP_EXTERN_C void MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshal_com_cleanup(MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595_marshaled_com& marshaled)
{
}
// System.Void Yarn.Markup.MarkupAttributeMarker::.ctor(System.String,System.Int32,System.Int32,System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty>,Yarn.Markup.TagType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttributeMarker__ctor_m486A6D49C26EAFB6334B81E5C8EB5345EA498250 (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, String_t* ___name0, int32_t ___position1, int32_t ___sourcePosition2, List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___properties3, int32_t ___type4, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		MarkupAttributeMarker_set_Name_mA7CD5C36210AC7D0596580B8D0285F754AA83285_inline(__this, L_0, NULL);
		int32_t L_1 = ___position1;
		MarkupAttributeMarker_set_Position_mCC86B55B2A78C1C37C6DF5DC368C85EBCBEFF0DC_inline(__this, L_1, NULL);
		int32_t L_2 = ___sourcePosition2;
		MarkupAttributeMarker_set_SourcePosition_mC84CB10AAF62E5C9870E3BFD92FA4F67F9BD9C02_inline(__this, L_2, NULL);
		List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* L_3 = ___properties3;
		MarkupAttributeMarker_set_Properties_m26E94D55E0337A8A5B1B9F39713F40F1FDB80AD1_inline(__this, L_3, NULL);
		int32_t L_4 = ___type4;
		MarkupAttributeMarker_set_Type_m34162DBD97A0855865E1A412C4A0FEEE50DF5116_inline(__this, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttributeMarker__ctor_m486A6D49C26EAFB6334B81E5C8EB5345EA498250_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, int32_t ___position1, int32_t ___sourcePosition2, List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___properties3, int32_t ___type4, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	MarkupAttributeMarker__ctor_m486A6D49C26EAFB6334B81E5C8EB5345EA498250(_thisAdjusted, ___name0, ___position1, ___sourcePosition2, ___properties3, ___type4, method);
}
// System.String Yarn.Markup.MarkupAttributeMarker::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MarkupAttributeMarker_get_Name_m83FD9B2A8777E2859C8E1130C92252BCEE0309BB (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* MarkupAttributeMarker_get_Name_m83FD9B2A8777E2859C8E1130C92252BCEE0309BB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MarkupAttributeMarker_get_Name_m83FD9B2A8777E2859C8E1130C92252BCEE0309BB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttributeMarker::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Name_mA7CD5C36210AC7D0596580B8D0285F754AA83285 (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttributeMarker_set_Name_mA7CD5C36210AC7D0596580B8D0285F754AA83285_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	MarkupAttributeMarker_set_Name_mA7CD5C36210AC7D0596580B8D0285F754AA83285_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Yarn.Markup.MarkupAttributeMarker::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarkupAttributeMarker_get_Position_mC64E225D080E5339566BCD2F9AC82FD4B1EE6354 (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MarkupAttributeMarker_get_Position_mC64E225D080E5339566BCD2F9AC82FD4B1EE6354_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MarkupAttributeMarker_get_Position_mC64E225D080E5339566BCD2F9AC82FD4B1EE6354_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttributeMarker::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Position_mCC86B55B2A78C1C37C6DF5DC368C85EBCBEFF0DC (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttributeMarker_set_Position_mCC86B55B2A78C1C37C6DF5DC368C85EBCBEFF0DC_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	MarkupAttributeMarker_set_Position_mCC86B55B2A78C1C37C6DF5DC368C85EBCBEFF0DC_inline(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty> Yarn.Markup.MarkupAttributeMarker::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* MarkupAttributeMarker_get_Properties_m90DBD4FFD5F2AFC40D0121A454C00EE1C2FA6466 (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* L_0 = __this->___U3CPropertiesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* MarkupAttributeMarker_get_Properties_m90DBD4FFD5F2AFC40D0121A454C00EE1C2FA6466_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* _returnValue;
	_returnValue = MarkupAttributeMarker_get_Properties_m90DBD4FFD5F2AFC40D0121A454C00EE1C2FA6466_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttributeMarker::set_Properties(System.Collections.Generic.List`1<Yarn.Markup.MarkupProperty>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Properties_m26E94D55E0337A8A5B1B9F39713F40F1FDB80AD1 (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttributeMarker_set_Properties_m26E94D55E0337A8A5B1B9F39713F40F1FDB80AD1_AdjustorThunk (RuntimeObject* __this, List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___value0, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	MarkupAttributeMarker_set_Properties_m26E94D55E0337A8A5B1B9F39713F40F1FDB80AD1_inline(_thisAdjusted, ___value0, method);
}
// Yarn.Markup.TagType Yarn.Markup.MarkupAttributeMarker::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarkupAttributeMarker_get_Type_m8E9A00AA159D9AA4B6F8BD312CF9BC4535DF545F (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MarkupAttributeMarker_get_Type_m8E9A00AA159D9AA4B6F8BD312CF9BC4535DF545F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MarkupAttributeMarker_get_Type_m8E9A00AA159D9AA4B6F8BD312CF9BC4535DF545F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttributeMarker::set_Type(Yarn.Markup.TagType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Type_m34162DBD97A0855865E1A412C4A0FEEE50DF5116 (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttributeMarker_set_Type_m34162DBD97A0855865E1A412C4A0FEEE50DF5116_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	MarkupAttributeMarker_set_Type_m34162DBD97A0855865E1A412C4A0FEEE50DF5116_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Yarn.Markup.MarkupAttributeMarker::get_SourcePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MarkupAttributeMarker_get_SourcePosition_mDE8BCADDA567D0739617802CBF1CAEB03273329E (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSourcePositionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MarkupAttributeMarker_get_SourcePosition_mDE8BCADDA567D0739617802CBF1CAEB03273329E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MarkupAttributeMarker_get_SourcePosition_mDE8BCADDA567D0739617802CBF1CAEB03273329E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Yarn.Markup.MarkupAttributeMarker::set_SourcePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_SourcePosition_mC84CB10AAF62E5C9870E3BFD92FA4F67F9BD9C02 (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourcePositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MarkupAttributeMarker_set_SourcePosition_mC84CB10AAF62E5C9870E3BFD92FA4F67F9BD9C02_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	MarkupAttributeMarker_set_SourcePosition_mC84CB10AAF62E5C9870E3BFD92FA4F67F9BD9C02_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Yarn.Markup.MarkupAttributeMarker::TryGetProperty(System.String,Yarn.Markup.MarkupValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MarkupAttributeMarker_TryGetProperty_m8FDCBF955268092CCDE9F52FD6C6AD4A767E9B1F (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, String_t* ___name0, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* ___result1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65E5F607EEC3B80658E33EEBA1F7DEB2C9E7E27C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF1D3567EDFF69F9C848831F2D7CDDB48AF2C3C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2AC0A78D0A09FF6B899726D4F37F6EE5E4A74C58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1931AC460A30A8B39AB79EF200EB12A3FC65A0CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E V_0;
	memset((&V_0), 0, sizeof(V_0));
	MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* L_0;
		L_0 = MarkupAttributeMarker_get_Properties_m90DBD4FFD5F2AFC40D0121A454C00EE1C2FA6466_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E L_1;
		L_1 = List_1_GetEnumerator_m1931AC460A30A8B39AB79EF200EB12A3FC65A0CD(L_0, List_1_GetEnumerator_m1931AC460A30A8B39AB79EF200EB12A3FC65A0CD_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m65E5F607EEC3B80658E33EEBA1F7DEB2C9E7E27C((&V_0), Enumerator_Dispose_m65E5F607EEC3B80658E33EEBA1F7DEB2C9E7E27C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_000e_1:
			{
				MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE L_2;
				L_2 = Enumerator_get_Current_m2AC0A78D0A09FF6B899726D4F37F6EE5E4A74C58_inline((&V_0), Enumerator_get_Current_m2AC0A78D0A09FF6B899726D4F37F6EE5E4A74C58_RuntimeMethod_var);
				V_1 = L_2;
				String_t* L_3;
				L_3 = MarkupProperty_get_Name_mDD842596C83F512A7B51C7F3A41C7987C469A622_inline((&V_1), NULL);
				String_t* L_4 = ___name0;
				NullCheck(L_3);
				bool L_5;
				L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_3, L_4, NULL);
				if (!L_5)
				{
					goto IL_0036_1;
				}
			}
			{
				MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* L_6 = ___result1;
				MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 L_7;
				L_7 = MarkupProperty_get_Value_mB8C277B2962D6D15578A164DF14C302611F2A227_inline((&V_1), NULL);
				*(MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*)L_6 = L_7;
				Il2CppCodeGenWriteBarrier((void**)&(((MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820*)L_6)->___U3CStringValueU3Ek__BackingField_2), (void*)NULL);
				V_2 = (bool)1;
				goto IL_0058;
			}

IL_0036_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mF1D3567EDFF69F9C848831F2D7CDDB48AF2C3C5B((&V_0), Enumerator_MoveNext_mF1D3567EDFF69F9C848831F2D7CDDB48AF2C3C5B_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* L_9 = ___result1;
		il2cpp_codegen_initobj(L_9, sizeof(MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820));
		return (bool)0;
	}

IL_0058:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C  bool MarkupAttributeMarker_TryGetProperty_m8FDCBF955268092CCDE9F52FD6C6AD4A767E9B1F_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* ___result1, const RuntimeMethod* method)
{
	MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595*>(__this + _offset);
	bool _returnValue;
	_returnValue = MarkupAttributeMarker_TryGetProperty_m8FDCBF955268092CCDE9F52FD6C6AD4A767E9B1F(_thisAdjusted, ___name0, ___result1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Yarn.Markup.NoMarkupTextProcessor::ReplacementTextForMarker(Yarn.Markup.MarkupAttributeMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NoMarkupTextProcessor_ReplacementTextForMarker_mE990BCA0F56CB1A9808DCD02A70BAE6D4E2120F0 (NoMarkupTextProcessor_tC1385E1160E490B506AA127D637057DAA78CF43A* __this, MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595 ___marker0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EE187A1DFB6C7E24E0162931104A8F2CE585643);
		s_Il2CppMethodInitialized = true;
	}
	MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = MarkupAttributeMarker_TryGetProperty_m8FDCBF955268092CCDE9F52FD6C6AD4A767E9B1F((&___marker0), _stringLiteral9EE187A1DFB6C7E24E0162931104A8F2CE585643, (&V_0), NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = MarkupValue_get_StringValue_m271DA9DFB626ECAEEA4F15E2F1CE2BB64C536F13_inline((&V_0), NULL);
		return L_1;
	}

IL_0018:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}
}
// System.Void Yarn.Markup.NoMarkupTextProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoMarkupTextProcessor__ctor_mF31652068855BD6192060E5FE999C2A5329E43A9 (NoMarkupTextProcessor_tC1385E1160E490B506AA127D637057DAA78CF43A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Yarn.Analysis.Diagnosis::.ctor(System.String,Yarn.Analysis.Diagnosis/Severity,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnosis__ctor_m3DE178E97BFBB160AE486BC8694CD9D502A82FE7 (Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* __this, String_t* ___message0, int32_t ___severity1, String_t* ___nodeName2, int32_t ___lineNumber3, int32_t ___columnNumber4, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___message0;
		__this->___message_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_0), (void*)L_0);
		String_t* L_1 = ___nodeName2;
		__this->___nodeName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeName_1), (void*)L_1);
		int32_t L_2 = ___lineNumber3;
		__this->___lineNumber_2 = L_2;
		int32_t L_3 = ___columnNumber4;
		__this->___columnNumber_3 = L_3;
		int32_t L_4 = ___severity1;
		__this->___severity_4 = L_4;
		return;
	}
}
// System.String Yarn.Analysis.Diagnosis::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Diagnosis_ToString_m1B7890F22A073849ABFA77FFAC14538121FB1530 (Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Diagnosis_ToString_m4A92F8C5CB8A60416C40A9C3B30F9FF1D5545506(__this, (bool)0, NULL);
		return L_0;
	}
}
// System.String Yarn.Analysis.Diagnosis::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Diagnosis_ToString_m4A92F8C5CB8A60416C40A9C3B30F9FF1D5545506 (Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* __this, bool ___showSeverity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D2A7DC38E3D06969C09083548DE5A6AC3F8CE8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB271F02C71DCC1304194CFAD1ECDD28F8C5B68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0C06BDB698BEE69D59BD9367155F6EFC70CDEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1F45C5A77C8F04A3EC99712F021D7BC1A15D680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		bool L_0 = ___showSeverity0;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_1 = __this->___severity_4;
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_0024:
	{
		V_0 = _stringLiteral4D2A7DC38E3D06969C09083548DE5A6AC3F8CE8E;
		goto IL_0042;
	}

IL_002c:
	{
		V_0 = _stringLiteralCF0C06BDB698BEE69D59BD9367155F6EFC70CDEC;
		goto IL_0042;
	}

IL_0034:
	{
		V_0 = _stringLiteral6CB271F02C71DCC1304194CFAD1ECDD28F8C5B68;
		goto IL_0042;
	}

IL_003c:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Diagnosis_ToString_m4A92F8C5CB8A60416C40A9C3B30F9FF1D5545506_RuntimeMethod_var)));
	}

IL_0042:
	{
		String_t* L_4 = __this->___nodeName_1;
		if (!L_4)
		{
			goto IL_00ab;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = __this->___nodeName_1;
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = __this->___lineNumber_2;
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_00ab;
		}
	}
	{
		String_t* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10;
		L_10 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		int32_t L_11 = __this->___lineNumber_2;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A(L_10, _stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_9, L_14, NULL);
		V_0 = L_15;
		int32_t L_16 = __this->___columnNumber_3;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_00ab;
		}
	}
	{
		String_t* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_18;
		L_18 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		int32_t L_19 = __this->___columnNumber_3;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A(L_18, _stringLiteralD1F45C5A77C8F04A3EC99712F021D7BC1A15D680, L_21, NULL);
		String_t* L_23;
		L_23 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_17, L_22, NULL);
		V_0 = L_23;
	}

IL_00ab:
	{
		String_t* L_24 = V_0;
		bool L_25;
		L_25 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_24, NULL);
		if (!L_25)
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_26 = __this->___message_0;
		V_1 = L_26;
		goto IL_00d3;
	}

IL_00bc:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_27;
		L_27 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_28 = V_0;
		String_t* L_29 = __this->___message_0;
		String_t* L_30;
		L_30 = String_Format_m69D52D3917F3D1BAC76B506B9BAA68A41B483DEF(L_27, _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, L_28, L_29, NULL);
		V_1 = L_30;
	}

IL_00d3:
	{
		String_t* L_31 = V_1;
		return L_31;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerable`1<System.Type> Yarn.Analysis.Context::get_defaultAnalyserClasses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Context_get_defaultAnalyserClasses_m33366AC6E615FF2C3DFEA2F208869DFC512D1A67 (Context_t80DED17249AB4D495B71229AF1CCB8F91E019E82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t* V_3 = NULL;
	{
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_0, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = __this->____defaultAnalyserClasses_0;
		if (L_1)
		{
			goto IL_005f;
		}
	}
	{
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_2 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_2, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		V_0 = L_2;
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_3);
		Assembly_t* L_4;
		L_4 = VirtualFuncInvoker0< Assembly_t* >::Invoke(36 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		NullCheck(L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5;
		L_5 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(18 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0052;
	}

IL_0029:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Type_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		Type_t* L_10 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(30 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_10, L_12);
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		Type_t* L_14 = V_3;
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_14, NULL);
		if (L_15)
		{
			goto IL_004e;
		}
	}
	{
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_16 = V_0;
		Type_t* L_17 = V_3;
		NullCheck(L_16);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_16, L_17, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0052:
	{
		int32_t L_19 = V_2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_21 = V_0;
		__this->____defaultAnalyserClasses_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaultAnalyserClasses_0), (void*)L_21);
	}

IL_005f:
	{
		RuntimeObject* L_22 = __this->____defaultAnalyserClasses_0;
		return L_22;
	}
}
// System.Void Yarn.Analysis.Context::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_m48F9EA9D15409635F8A178094FBF715FDF702FF7 (Context_t80DED17249AB4D495B71229AF1CCB8F91E019E82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDD50509A4E099C41E18997AE7BB792B20C9DF3F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9A6A2CD57D34A9FA1D0EE0AED18DDCB1137DEFF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* L_0 = (List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76*)il2cpp_codegen_object_new(List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9A6A2CD57D34A9FA1D0EE0AED18DDCB1137DEFF5(L_0, List_1__ctor_m9A6A2CD57D34A9FA1D0EE0AED18DDCB1137DEFF5_RuntimeMethod_var);
		__this->___analysers_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___analysers_1), (void*)L_0);
		RuntimeObject* L_1;
		L_1 = Context_get_defaultAnalyserClasses_m33366AC6E615FF2C3DFEA2F208869DFC512D1A67(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_004f;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003c_1;
			}

IL_001f_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Type_t* L_6;
				L_6 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* L_7 = __this->___analysers_1;
				Type_t* L_8 = V_1;
				RuntimeObject* L_9;
				L_9 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_8, NULL);
				NullCheck(L_7);
				List_1_Add_mDD50509A4E099C41E18997AE7BB792B20C9DF3F6_inline(L_7, ((CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8*)CastclassClass((RuntimeObject*)L_9, CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8_il2cpp_TypeInfo_var)), List_1_Add_mDD50509A4E099C41E18997AE7BB792B20C9DF3F6_RuntimeMethod_var);
			}

IL_003c_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		return;
	}
}
// System.Void Yarn.Analysis.Context::.ctor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_m37BC0A965FF459A6E0D862008DF35721A27111E2 (Context_t80DED17249AB4D495B71229AF1CCB8F91E019E82* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDD50509A4E099C41E18997AE7BB792B20C9DF3F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9A6A2CD57D34A9FA1D0EE0AED18DDCB1137DEFF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* L_0 = (List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76*)il2cpp_codegen_object_new(List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9A6A2CD57D34A9FA1D0EE0AED18DDCB1137DEFF5(L_0, List_1__ctor_m9A6A2CD57D34A9FA1D0EE0AED18DDCB1137DEFF5_RuntimeMethod_var);
		__this->___analysers_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___analysers_1), (void*)L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = ___types0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_0017:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Type_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* L_6 = __this->___analysers_1;
		Type_t* L_7 = V_2;
		RuntimeObject* L_8;
		L_8 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mDD50509A4E099C41E18997AE7BB792B20C9DF3F6_inline(L_6, ((CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8*)CastclassClass((RuntimeObject*)L_8, CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8_il2cpp_TypeInfo_var)), List_1_Add_mDD50509A4E099C41E18997AE7BB792B20C9DF3F6_RuntimeMethod_var);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		int32_t L_10 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void Yarn.Analysis.Context::AddProgramToAnalysis(Yarn.Program)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context_AddProgramToAnalysis_m878F3D90DDB13484626F028567D83AB0B982A067 (Context_t80DED17249AB4D495B71229AF1CCB8F91E019E82* __this, Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405* ___program0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6EB75C1FB772D4C3BB9D6386592765BF6B6DEB53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAE6E0135AA6D1C8A02070CB0968235D7A1856289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m41E0ED7E38AF7323280A69D87D6327B1917DA9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1B75B96326652EE523F245A0E4A28D69F23C68EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* L_0 = __this->___analysers_1;
		NullCheck(L_0);
		Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B L_1;
		L_1 = List_1_GetEnumerator_m1B75B96326652EE523F245A0E4A28D69F23C68EE(L_0, List_1_GetEnumerator_m1B75B96326652EE523F245A0E4A28D69F23C68EE_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6EB75C1FB772D4C3BB9D6386592765BF6B6DEB53((&V_0), Enumerator_Dispose_m6EB75C1FB772D4C3BB9D6386592765BF6B6DEB53_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* L_2;
				L_2 = Enumerator_get_Current_m41E0ED7E38AF7323280A69D87D6327B1917DA9DC_inline((&V_0), Enumerator_get_Current_m41E0ED7E38AF7323280A69D87D6327B1917DA9DC_RuntimeMethod_var);
				Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405* L_3 = ___program0;
				NullCheck(L_2);
				VirtualActionInvoker1< Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405* >::Invoke(4 /* System.Void Yarn.Analysis.CompiledProgramAnalyser::Diagnose(Yarn.Program) */, L_2, L_3);
			}

IL_001b_1:
			{
				bool L_4;
				L_4 = Enumerator_MoveNext_mAE6E0135AA6D1C8A02070CB0968235D7A1856289((&V_0), Enumerator_MoveNext_mAE6E0135AA6D1C8A02070CB0968235D7A1856289_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Yarn.Analysis.Diagnosis> Yarn.Analysis.Context::FinishAnalysis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Context_FinishAnalysis_m1DA6B48DED1EB29579D69D7787428C3B87B0989A (Context_t80DED17249AB4D495B71229AF1CCB8F91E019E82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6EB75C1FB772D4C3BB9D6386592765BF6B6DEB53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAE6E0135AA6D1C8A02070CB0968235D7A1856289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m41E0ED7E38AF7323280A69D87D6327B1917DA9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m231A1BAA601DCA4B0A5F19F7C277726EEDA15ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1B75B96326652EE523F245A0E4A28D69F23C68EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* V_0 = NULL;
	Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B V_1;
	memset((&V_1), 0, sizeof(V_1));
	CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* V_2 = NULL;
	{
		List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* L_0 = (List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4*)il2cpp_codegen_object_new(List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26(L_0, List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t536B7A357AA549966C9ADD238DC57B68C6704B76* L_1 = __this->___analysers_1;
		NullCheck(L_1);
		Enumerator_t78F52478F9AC01E57B5843763D23B94E8AAE0E4B L_2;
		L_2 = List_1_GetEnumerator_m1B75B96326652EE523F245A0E4A28D69F23C68EE(L_1, List_1_GetEnumerator_m1B75B96326652EE523F245A0E4A28D69F23C68EE_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6EB75C1FB772D4C3BB9D6386592765BF6B6DEB53((&V_1), Enumerator_Dispose_m6EB75C1FB772D4C3BB9D6386592765BF6B6DEB53_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0014_1:
			{
				CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* L_3;
				L_3 = Enumerator_get_Current_m41E0ED7E38AF7323280A69D87D6327B1917DA9DC_inline((&V_1), Enumerator_get_Current_m41E0ED7E38AF7323280A69D87D6327B1917DA9DC_RuntimeMethod_var);
				V_2 = L_3;
				List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* L_4 = V_0;
				CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* L_5 = V_2;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.IEnumerable`1<Yarn.Analysis.Diagnosis> Yarn.Analysis.CompiledProgramAnalyser::GatherDiagnoses() */, L_5);
				NullCheck(L_4);
				List_1_AddRange_m231A1BAA601DCA4B0A5F19F7C277726EEDA15ECE(L_4, L_6, List_1_AddRange_m231A1BAA601DCA4B0A5F19F7C277726EEDA15ECE_RuntimeMethod_var);
			}

IL_0028_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mAE6E0135AA6D1C8A02070CB0968235D7A1856289((&V_1), Enumerator_MoveNext_mAE6E0135AA6D1C8A02070CB0968235D7A1856289_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* L_8 = V_0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Yarn.Analysis.CompiledProgramAnalyser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompiledProgramAnalyser__ctor_mF695C6EEA1D94CA985550107E820A4C791FF2F88 (CompiledProgramAnalyser_t26B66C6077923E327566E61A3AF1A0E688468DB8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Yarn.Analysis.VariableLister::Diagnose(Yarn.Program)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableLister_Diagnose_mDD36E0BA096828C990720EFFE186D4E8569943CF (VariableLister_t08C875D813F591AD2170E238DDD3F2D85FABCE27* __this, Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405* ___program0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6059EFD5DA2D078B4A12C80267647F3C2C2155B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA3E8752D83F4E8B20F1C398CC30F52AB26FDA43D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m2760D03C96FEDBCFA6D6359DFC7BC461278B36CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m5CF6FA0E04D1B6DE3D63536BB949EE04F7F125BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapField_2_GetEnumerator_m2907F2B8BCC37BA0A10975F5D74AE6114F4F485A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_GetEnumerator_mEA15D9F90F9CC0E9F394587C284443CF6DE9E95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* V_3 = NULL;
	int32_t V_4 = 0;
	{
		Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405* L_0 = ___program0;
		NullCheck(L_0);
		MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F* L_1;
		L_1 = Program_get_Nodes_mCC7FB1AF27B95AB3EB2D7E338DB97EBEDF48CE5D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = MapField_2_GetEnumerator_m2907F2B8BCC37BA0A10975F5D74AE6114F4F485A(L_1, MapField_2_GetEnumerator_m2907F2B8BCC37BA0A10975F5D74AE6114F4F485A_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_008c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_008c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0079_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6 L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Node>>::get_Current() */, IEnumerator_1_t6059EFD5DA2D078B4A12C80267647F3C2C2155B2_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				String_t* L_7;
				L_7 = KeyValuePair_2_get_Key_m2760D03C96FEDBCFA6D6359DFC7BC461278B36CA_inline((&V_1), KeyValuePair_2_get_Key_m2760D03C96FEDBCFA6D6359DFC7BC461278B36CA_RuntimeMethod_var);
				Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C* L_8;
				L_8 = KeyValuePair_2_get_Value_m5CF6FA0E04D1B6DE3D63536BB949EE04F7F125BB_inline((&V_1), KeyValuePair_2_get_Value_m5CF6FA0E04D1B6DE3D63536BB949EE04F7F125BB_RuntimeMethod_var);
				NullCheck(L_8);
				RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68* L_9;
				L_9 = Node_get_Instructions_m0127505A13379FC34118DB922BE88CBC8C51C5A5_inline(L_8, NULL);
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = RepeatedField_1_GetEnumerator_mEA15D9F90F9CC0E9F394587C284443CF6DE9E95A(L_9, RepeatedField_1_GetEnumerator_mEA15D9F90F9CC0E9F394587C284443CF6DE9E95A_RuntimeMethod_var);
				V_2 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_006f_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_11 = V_2;
							if (!L_11)
							{
								goto IL_0078_1;
							}
						}
						{
							RuntimeObject* L_12 = V_2;
							NullCheck(L_12);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
						}

IL_0078_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0065_2;
					}

IL_0031_2:
					{
						RuntimeObject* L_13 = V_2;
						NullCheck(L_13);
						Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* L_14;
						L_14 = InterfaceFuncInvoker0< Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Yarn.Instruction>::get_Current() */, IEnumerator_1_tA3E8752D83F4E8B20F1C398CC30F52AB26FDA43D_il2cpp_TypeInfo_var, L_13);
						V_3 = L_14;
						Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* L_15 = V_3;
						NullCheck(L_15);
						int32_t L_16;
						L_16 = Instruction_get_Opcode_m1BE35411F6C483F9F47896261C8C534AA5C5F0A4_inline(L_15, NULL);
						V_4 = L_16;
						int32_t L_17 = V_4;
						if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, ((int32_t)13)))) <= ((uint32_t)1))))
						{
							goto IL_0065_2;
						}
					}
					{
						HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_18 = __this->___variables_0;
						Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* L_19 = V_3;
						NullCheck(L_19);
						RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F* L_20;
						L_20 = Instruction_get_Operands_mE27308D6B162EB11792C3A9C5E60351E136F18BF_inline(L_19, NULL);
						NullCheck(L_20);
						Operand_t29219BF1C85E0F708A3D8EE82174F1B44DC427EF* L_21;
						L_21 = RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769(L_20, 0, RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769_RuntimeMethod_var);
						NullCheck(L_21);
						String_t* L_22;
						L_22 = Operand_get_StringValue_m0306F2B505A77A1CE8DF76C89A7936553590FDB0(L_21, NULL);
						NullCheck(L_18);
						bool L_23;
						L_23 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_18, L_22, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
					}

IL_0065_2:
					{
						RuntimeObject* L_24 = V_2;
						NullCheck(L_24);
						bool L_25;
						L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
						if (L_25)
						{
							goto IL_0031_2;
						}
					}
					{
						goto IL_0079_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0079_1:
			{
				RuntimeObject* L_26 = V_0;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Yarn.Analysis.Diagnosis> Yarn.Analysis.VariableLister::GatherDiagnoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableLister_GatherDiagnoses_m96B539B9FE6F3EB9EF043B974129C0D0C9AC5F64 (VariableLister_t08C875D813F591AD2170E238DDD3F2D85FABCE27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA048461C43E36558B1E020BF0DADE809BAECDD46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD33AD139DDBEBE345F2D6F2F27D62170C733CA7);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* V_0 = NULL;
	Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* V_3 = NULL;
	{
		List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* L_0 = (List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4*)il2cpp_codegen_object_new(List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26(L_0, List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26_RuntimeMethod_var);
		V_0 = L_0;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = __this->___variables_0;
		NullCheck(L_1);
		Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C L_2;
		L_2 = HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B(L_1, HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0((&V_1), Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_0014_1:
			{
				String_t* L_3;
				L_3 = Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_inline((&V_1), Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var);
				V_2 = L_3;
				String_t* L_4 = V_2;
				String_t* L_5;
				L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCD33AD139DDBEBE345F2D6F2F27D62170C733CA7, L_4, NULL);
				Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* L_6 = (Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80*)il2cpp_codegen_object_new(Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Diagnosis__ctor_m3DE178E97BFBB160AE486BC8694CD9D502A82FE7(L_6, L_5, 2, (String_t*)NULL, (-1), (-1), NULL);
				V_3 = L_6;
				List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* L_7 = V_0;
				Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* L_8 = V_3;
				NullCheck(L_7);
				List_1_Add_mA048461C43E36558B1E020BF0DADE809BAECDD46_inline(L_7, L_8, List_1_Add_mA048461C43E36558B1E020BF0DADE809BAECDD46_RuntimeMethod_var);
			}

IL_0038_1:
			{
				bool L_9;
				L_9 = Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F((&V_1), Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* L_10 = V_0;
		return L_10;
	}
}
// System.Void Yarn.Analysis.VariableLister::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableLister__ctor_m944332D42D078E99576308CEF2E024C3D3EB916A (VariableLister_t08C875D813F591AD2170E238DDD3F2D85FABCE27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->___variables_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___variables_0), (void*)L_0);
		CompiledProgramAnalyser__ctor_mF695C6EEA1D94CA985550107E820A4C791FF2F88(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Yarn.Analysis.UnusedVariableChecker::Diagnose(Yarn.Program)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnusedVariableChecker_Diagnose_mBDC4649AD4EDBA5DB86432C49F421803BC59BF2E (UnusedVariableChecker_t1D0ADA11C68646B52BD647BF103D5DDCC9B8AA5E* __this, Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405* ___program0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6059EFD5DA2D078B4A12C80267647F3C2C2155B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA3E8752D83F4E8B20F1C398CC30F52AB26FDA43D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m2760D03C96FEDBCFA6D6359DFC7BC461278B36CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m5CF6FA0E04D1B6DE3D63536BB949EE04F7F125BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapField_2_GetEnumerator_m2907F2B8BCC37BA0A10975F5D74AE6114F4F485A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_GetEnumerator_mEA15D9F90F9CC0E9F394587C284443CF6DE9E95A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* V_3 = NULL;
	int32_t V_4 = 0;
	{
		Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405* L_0 = ___program0;
		NullCheck(L_0);
		MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F* L_1;
		L_1 = Program_get_Nodes_mCC7FB1AF27B95AB3EB2D7E338DB97EBEDF48CE5D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = MapField_2_GetEnumerator_m2907F2B8BCC37BA0A10975F5D74AE6114F4F485A(L_1, MapField_2_GetEnumerator_m2907F2B8BCC37BA0A10975F5D74AE6114F4F485A_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ae:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_00b7;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_00b7:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a1_1;
			}

IL_0011_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6 L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t884FAB2AC8FE3BA9D9ED2D896C50AB9699E295F6 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Node>>::get_Current() */, IEnumerator_1_t6059EFD5DA2D078B4A12C80267647F3C2C2155B2_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				String_t* L_7;
				L_7 = KeyValuePair_2_get_Key_m2760D03C96FEDBCFA6D6359DFC7BC461278B36CA_inline((&V_1), KeyValuePair_2_get_Key_m2760D03C96FEDBCFA6D6359DFC7BC461278B36CA_RuntimeMethod_var);
				Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C* L_8;
				L_8 = KeyValuePair_2_get_Value_m5CF6FA0E04D1B6DE3D63536BB949EE04F7F125BB_inline((&V_1), KeyValuePair_2_get_Value_m5CF6FA0E04D1B6DE3D63536BB949EE04F7F125BB_RuntimeMethod_var);
				NullCheck(L_8);
				RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68* L_9;
				L_9 = Node_get_Instructions_m0127505A13379FC34118DB922BE88CBC8C51C5A5_inline(L_8, NULL);
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = RepeatedField_1_GetEnumerator_mEA15D9F90F9CC0E9F394587C284443CF6DE9E95A(L_9, RepeatedField_1_GetEnumerator_mEA15D9F90F9CC0E9F394587C284443CF6DE9E95A_RuntimeMethod_var);
				V_2 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0097_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_11 = V_2;
							if (!L_11)
							{
								goto IL_00a0_1;
							}
						}
						{
							RuntimeObject* L_12 = V_2;
							NullCheck(L_12);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
						}

IL_00a0_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_008d_2;
					}

IL_0034_2:
					{
						RuntimeObject* L_13 = V_2;
						NullCheck(L_13);
						Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* L_14;
						L_14 = InterfaceFuncInvoker0< Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Yarn.Instruction>::get_Current() */, IEnumerator_1_tA3E8752D83F4E8B20F1C398CC30F52AB26FDA43D_il2cpp_TypeInfo_var, L_13);
						V_3 = L_14;
						Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* L_15 = V_3;
						NullCheck(L_15);
						int32_t L_16;
						L_16 = Instruction_get_Opcode_m1BE35411F6C483F9F47896261C8C534AA5C5F0A4_inline(L_15, NULL);
						V_4 = L_16;
						int32_t L_17 = V_4;
						if ((((int32_t)L_17) == ((int32_t)((int32_t)13))))
						{
							goto IL_0051_2;
						}
					}
					{
						int32_t L_18 = V_4;
						if ((((int32_t)L_18) == ((int32_t)((int32_t)14))))
						{
							goto IL_0070_2;
						}
					}
					{
						goto IL_008d_2;
					}

IL_0051_2:
					{
						HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_19 = __this->___readVariables_0;
						Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* L_20 = V_3;
						NullCheck(L_20);
						RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F* L_21;
						L_21 = Instruction_get_Operands_mE27308D6B162EB11792C3A9C5E60351E136F18BF_inline(L_20, NULL);
						NullCheck(L_21);
						Operand_t29219BF1C85E0F708A3D8EE82174F1B44DC427EF* L_22;
						L_22 = RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769(L_21, 0, RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769_RuntimeMethod_var);
						NullCheck(L_22);
						String_t* L_23;
						L_23 = Operand_get_StringValue_m0306F2B505A77A1CE8DF76C89A7936553590FDB0(L_22, NULL);
						NullCheck(L_19);
						bool L_24;
						L_24 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_19, L_23, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
						goto IL_008d_2;
					}

IL_0070_2:
					{
						HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_25 = __this->___writtenVariables_1;
						Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* L_26 = V_3;
						NullCheck(L_26);
						RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F* L_27;
						L_27 = Instruction_get_Operands_mE27308D6B162EB11792C3A9C5E60351E136F18BF_inline(L_26, NULL);
						NullCheck(L_27);
						Operand_t29219BF1C85E0F708A3D8EE82174F1B44DC427EF* L_28;
						L_28 = RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769(L_27, 0, RepeatedField_1_get_Item_m40E6675024D87461A61A254161122E91F7009769_RuntimeMethod_var);
						NullCheck(L_28);
						String_t* L_29;
						L_29 = Operand_get_StringValue_m0306F2B505A77A1CE8DF76C89A7936553590FDB0(L_28, NULL);
						NullCheck(L_25);
						bool L_30;
						L_30 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_25, L_29, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
					}

IL_008d_2:
					{
						RuntimeObject* L_31 = V_2;
						NullCheck(L_31);
						bool L_32;
						L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
						if (L_32)
						{
							goto IL_0034_2;
						}
					}
					{
						goto IL_00a1_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a1_1:
			{
				RuntimeObject* L_33 = V_0;
				NullCheck(L_33);
				bool L_34;
				L_34 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_33);
				if (L_34)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_00b8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b8:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Yarn.Analysis.Diagnosis> Yarn.Analysis.UnusedVariableChecker::GatherDiagnoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnusedVariableChecker_GatherDiagnoses_m6B9CC9A96CEED43ABB44C4635928A67C18833F16 (UnusedVariableChecker_t1D0ADA11C68646B52BD647BF103D5DDCC9B8AA5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_ExceptWith_m46D5B35715EF8FC1BF736C780D56A414DC6780CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA048461C43E36558B1E020BF0DADE809BAECDD46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EAFEB490DE3DEA0179887FC6F9F75E550A7462A);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* V_0 = NULL;
	Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->___readVariables_0;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62(L_1, L_0, HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_2 = __this->___writtenVariables_1;
		NullCheck(L_1);
		HashSet_1_ExceptWith_m46D5B35715EF8FC1BF736C780D56A414DC6780CF(L_1, L_2, HashSet_1_ExceptWith_m46D5B35715EF8FC1BF736C780D56A414DC6780CF_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = __this->___writtenVariables_1;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62(L_4, L_3, HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_5 = L_4;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_6 = __this->___readVariables_0;
		NullCheck(L_5);
		HashSet_1_ExceptWith_m46D5B35715EF8FC1BF736C780D56A414DC6780CF(L_5, L_6, HashSet_1_ExceptWith_m46D5B35715EF8FC1BF736C780D56A414DC6780CF_RuntimeMethod_var);
		List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* L_7 = (List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4*)il2cpp_codegen_object_new(List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26(L_7, List_1__ctor_m9946D04AA06112A2CCFBB4208720CFD07D076B26_RuntimeMethod_var);
		V_0 = L_7;
		NullCheck(L_5);
		Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C L_8;
		L_8 = HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B(L_5, HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0((&V_1), Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0064_1;
			}

IL_003b_1:
			{
				String_t* L_9;
				L_9 = Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_inline((&V_1), Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var);
				V_2 = L_9;
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10;
				L_10 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
				String_t* L_11 = V_2;
				String_t* L_12;
				L_12 = String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A(L_10, _stringLiteral3EAFEB490DE3DEA0179887FC6F9F75E550A7462A, L_11, NULL);
				V_3 = L_12;
				List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* L_13 = V_0;
				String_t* L_14 = V_3;
				Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80* L_15 = (Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80*)il2cpp_codegen_object_new(Diagnosis_tBCBCB5DFB2EAA4A336596852CE53187D57B1DE80_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				Diagnosis__ctor_m3DE178E97BFBB160AE486BC8694CD9D502A82FE7(L_15, L_14, 1, (String_t*)NULL, (-1), (-1), NULL);
				NullCheck(L_13);
				List_1_Add_mA048461C43E36558B1E020BF0DADE809BAECDD46_inline(L_13, L_15, List_1_Add_mA048461C43E36558B1E020BF0DADE809BAECDD46_RuntimeMethod_var);
			}

IL_0064_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F((&V_1), Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_007d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007d:
	{
		List_1_t1467B811B79BB4CC095E4E56CC7897059BBBBEA4* L_17 = V_0;
		return L_17;
	}
}
// System.Void Yarn.Analysis.UnusedVariableChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnusedVariableChecker__ctor_m6FDD3D89AA3A9E32C3C6A5F9BDAF1DDBFADAC271 (UnusedVariableChecker_t1D0ADA11C68646B52BD647BF103D5DDCC9B8AA5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->___readVariables_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readVariables_0), (void*)L_0);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_1, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->___writtenVariables_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writtenVariables_1), (void*)L_1);
		CompiledProgramAnalyser__ctor_mF695C6EEA1D94CA985550107E820A4C791FF2F88(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttribute_get_SourcePosition_m7392E6BC7E2DC99C2651F9276BC2AB842D2FE418_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSourcePositionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkupAttribute_get_Name_mE1DD0B98462EC420587F7871FF2FBD703EECA089_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttribute_get_Length_mDFCD641E9E8D26D21BA9DFB36CC4A44D9EA610AB_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttribute_get_Position_mB07456CFD7B822BC0801BF5DA94E0BF72033C0B5_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_Length_mB56601DC0FF284366DF0C9169A356D352896F0AF_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLengthU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_Position_mBE088A7198AFC4510F2EC23BD278BF792858B6AD_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_SourcePosition_m2E895FCD584656FD47D3DC20FC629A8723D1BA65_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourcePositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_Name_m1282691FC9A6E85F640C01992835C6E21565C375_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkupProperty_get_Name_mDD842596C83F512A7B51C7F3A41C7987C469A622_inline (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 MarkupProperty_get_Value_mB8C277B2962D6D15578A164DF14C302611F2A227_inline (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, const RuntimeMethod* method) 
{
	{
		MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttribute_set_Properties_m3F479C05B96E4D327D398B1B90075611FE804628_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttributeMarker_get_Position_mC64E225D080E5339566BCD2F9AC82FD4B1EE6354_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttributeMarker_get_SourcePosition_mDE8BCADDA567D0739617802CBF1CAEB03273329E_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSourcePositionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkupAttributeMarker_get_Name_m83FD9B2A8777E2859C8E1130C92252BCEE0309BB_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* MarkupAttributeMarker_get_Properties_m90DBD4FFD5F2AFC40D0121A454C00EE1C2FA6466_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* L_0 = __this->___U3CPropertiesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MarkupAttribute_get_Properties_m28C7A5FE1D38D0B8F2D6C728A2F25C3E7D490F23_inline (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CPropertiesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupProperty_set_Name_mC15FFA1A44C445931B9B04633E6A718975DA14AB_inline (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupProperty_set_Value_mD2BC2B4E9B19693B827B24311015759069940393_inline (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE* __this, MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 ___value0, const RuntimeMethod* method) 
{
	{
		MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820 L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CValueU3Ek__BackingField_1))->___U3CStringValueU3Ek__BackingField_2), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupValue_get_IntegerValue_mEA73E149B8951A0B639BC236AF886F7A983C0997_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIntegerValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_IntegerValue_m083DC656D87E01E516A4E2F24A9FE151CF8E8317_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CIntegerValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MarkupValue_get_FloatValue_m5792B637D9A0CAF35154220FB7D15634397DAA14_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CFloatValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_FloatValue_m88D271D273112E75B01280FB597FE9B97B1D6E1A_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CFloatValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MarkupValue_get_StringValue_m271DA9DFB626ECAEEA4F15E2F1CE2BB64C536F13_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CStringValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_StringValue_mE7F5230E0668892DD005A6E62206526F6F71F8EC_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CStringValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStringValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MarkupValue_get_BoolValue_mF2B1BA3A1D5C57231C8E28031C10A2A7A0F02B65_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CBoolValueU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_BoolValue_m0F2DA622C2A18063E86A7527C943C556C527D0B8_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CBoolValueU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupValue_get_Type_m1D219521838B535DD3DA5EABB6EA5F92CA2EF8F1_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupValue_set_Type_m1D10B00C28200E1E91664EB3102BD9437689EF80_inline (MarkupValue_t18DEF94E92A04558D65C0501F1CD9A97909AE820* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Name_mA7CD5C36210AC7D0596580B8D0285F754AA83285_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Position_mCC86B55B2A78C1C37C6DF5DC368C85EBCBEFF0DC_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_SourcePosition_mC84CB10AAF62E5C9870E3BFD92FA4F67F9BD9C02_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourcePositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Properties_m26E94D55E0337A8A5B1B9F39713F40F1FDB80AD1_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t593193ABDAF698C142E4FBFC1FB381B2DCD46762* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkupAttributeMarker_set_Type_m34162DBD97A0855865E1A412C4A0FEEE50DF5116_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MarkupAttributeMarker_get_Type_m8E9A00AA159D9AA4B6F8BD312CF9BC4535DF545F_inline (MarkupAttributeMarker_t74CF87E0C53A4129186582299CE31048BAC2D595* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F* Program_get_Nodes_mCC7FB1AF27B95AB3EB2D7E338DB97EBEDF48CE5D_inline (Program_tA25F1EDFCBD61A3BBEA07929F3AB918F31F94405* __this, const RuntimeMethod* method) 
{
	{
		MapField_2_t86156AC630176DE33FF345CF8AE1D468DBDDFE3F* L_0 = __this->___nodes__6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68* Node_get_Instructions_m0127505A13379FC34118DB922BE88CBC8C51C5A5_inline (Node_t4067B7D66C90EF925326B6EE70D7C97252DB1D7C* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tB6713283D06CAF084CF7B6B93AC78B3DC471DA68* L_0 = __this->___instructions__6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Instruction_get_Opcode_m1BE35411F6C483F9F47896261C8C534AA5C5F0A4_inline (Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___opcode__3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F* Instruction_get_Operands_mE27308D6B162EB11792C3A9C5E60351E136F18BF_inline (Instruction_tDDA6C13852698A9E6BBFD32A84B30860EFDA9329* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t87E3E5B8F3122D801A433595F0D7AF8AC870FA8F* L_0 = __this->___operands__6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B Enumerator_get_Current_mF475E9EBBF75496270DCE09103D52B70C2F33C65_gshared_inline (Enumerator_t1B7DD16420FC0812C9193E016E41BD63822B7B9D* __this, const RuntimeMethod* method) 
{
	{
		MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_0 = (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m637F8E1D66D17A029E908B910F87C2C605A55EC8_gshared_inline (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51* __this, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B ___item0, const RuntimeMethod* method) 
{
	MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D* L_1 = (MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		MarkupAttributeU5BU5D_t5E4B1024BAA0C36F19AC89368515DAF11D89F71D* L_6 = V_0;
		int32_t L_7 = V_1;
		MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B)L_8);
		return;
	}

IL_0034:
	{
		MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B L_9 = ___item0;
		((  void (*) (List_1_tBC75D07D56B519A0140CBF3A15A07EF0F5FD2E51*, MarkupAttribute_tC25CD7A093C7073A70C4D058020DB037A22C718B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE Enumerator_get_Current_m2AC0A78D0A09FF6B899726D4F37F6EE5E4A74C58_gshared_inline (Enumerator_t9E6B8B93FE277977115F266D578C8338B245700E* __this, const RuntimeMethod* method) 
{
	{
		MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE L_0 = (MarkupProperty_tDB5B539FF968DB64E9F0981CFDD8A387630372CE)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
