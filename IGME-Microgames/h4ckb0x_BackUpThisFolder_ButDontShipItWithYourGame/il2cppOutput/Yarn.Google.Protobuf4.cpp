#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Google.Protobuf.IMessage>
struct Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<Google.Protobuf.IMessage,System.Object>
struct Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue>
struct Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.DescriptorProto>
struct EqualityComparer_1_tC15324F770FE96DC962F4CD940A530C2B53E1484;
// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct EqualityComparer_1_tFA9E4B309657CE94AD22AB212201880A4484B16D;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct EqualityComparer_1_tE6698E71DE62DA5075C24CECC87816090F343F87;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct EqualityComparer_1_t5D7C5C1A0D39FC7C30FB7923AD53E263460BC83A;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct EqualityComparer_1_t2A6D99ED2A011D0B33EF87B2FC67F6DBE6ED8427;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct EqualityComparer_1_t91227FBC755F573BF264ED8F8ABDD71E6EF163DD;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions>
struct ExtensionSet_1_t8AFBC47CC3D9634C51CE6CF7C73174227BEC7041;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions>
struct ExtensionSet_1_tFA17AB50086B62AF47B08709FFD7A23C02C151F5;
// Google.Protobuf.ExtensionSet`1<System.Object>
struct ExtensionSet_1_tA05358208E9C70D382AD4E4E52D8E69F9BF19EE4;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions>
struct ExtensionSet_1_t94C0A6D27A4AE38EF6EB0A3B44EFC2D15390152D;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions>
struct ExtensionSet_1_t7F8B885AD0837CF76A8B264A7A1AFBCEA7B10EA8;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto>
struct FieldCodec_1_t7D0576D1FC7D2668C2DAD71DA0A4CF67E8C25A64;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct FieldCodec_1_tA0EDA357AA18CEB5EE8C80D66CD79A2B396BD7AB;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct FieldCodec_1_tC27DE39B077121FAB80B3F28BE4F3BF4AC4FD67B;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct FieldCodec_1_tB697B3EA99D8923C0EB3B5FA0B43B2981C766776;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct FieldCodec_1_t3EC0BB670F1231170A6342A2089DAC2833321A79;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct FieldCodec_1_tD3505524D815668EF4B48CA4104DE5E9227D6D6C;
// Google.Protobuf.FieldCodec`1<System.String>
struct FieldCodec_1_t5E6313E604A7D06CE5EC653E6F62D4232681A90B;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption>
struct FieldCodec_1_tDC20D9662BDFFD1C41EEE3D3FDBFBF039BEEC778;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct FieldCodec_1_t87B4CEFC5913100752CCA3066D150F4F3FCF1E39;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange>
struct FieldCodec_1_tCF27001EF1B0721239A54CD5658863532EABB945;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange>
struct FieldCodec_1_t213C5577BBEB057E0BB693C0E752AFC53D55D43E;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_t78078FF3E9488DA1D53EBF88B3437119D6265A94;
// System.Func`2<Google.Protobuf.Extension,System.Boolean>
struct Func_2_tEDBE012BD1449510E82C8BEB329D019BFBE3A0B7;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,Google.Protobuf.Extension>
struct Func_2_t1280C161400B0A5A2C08E91158C7127652CCFBE9;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>
struct Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptorProto,System.Boolean>
struct Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A;
// System.Func`2<Google.Protobuf.Reflection.FileDescriptor,System.String>
struct Func_2_t63AB7EB74BF273445A813E006C6BAB27A2459C8C;
// System.Func`2<Google.Protobuf.Reflection.GeneratedClrTypeInfo,System.Boolean>
struct Func_2_t92B5E144B8D7364D2869FE597D4E45159CF0C83B;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean>
struct Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348;
// System.Func`2<Google.Protobuf.IMessage,System.Int32>
struct Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008;
// System.Func`2<Google.Protobuf.IMessage,System.Object>
struct Func_2_t01A45D28F5BAF6BDEE002EB4222A30A74B6CE946;
// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<Google.Protobuf.Reflection.FileDescriptor>
struct HashSet_1_t2E9BEFD411A70CF27BD396DFFFF6215E0B6D8384;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.EnumValueDescriptor>
struct IDictionary_2_t29E03C007F16374720F5E061E33FEE0C4D61B20F;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_t6A23C4DA6209AAE5C1B12ACEBD32739437A86C71;
// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.IExtensionValue>
struct IDictionary_2_tB1DD74D0ECEDFB382ED3DDAF609DEF626E0172CF;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.MessageDescriptor,System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>>
struct IDictionary_2_t3CC544F5D29B7A2155AEA99EBADCED2F08FED621;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tBE45E9EA146F3429D2548CB8AD26CA9F56404879;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.IDescriptor>
struct IDictionary_2_tD43FCD2224E509F0989A7E481AC8EF4679B89225;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IEnumerable_1_t86BCEB7E987443B0EF9BAC13979F9A0D85072C5B;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct IEnumerable_1_tBA8C7C7C9B99B5168E01D6AA6C034632E2D19782;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>
struct IEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.DescriptorProto>
struct IList_1_t1BE222891674F2338E8713C6FD96CDE3870BAA1C;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_t36F4EDC5DB4E251579E01FBEAA855D1E24E33672;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct IList_1_t016C8E57403D9D3B344DCDDFD378420734E28323;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptor>
struct IList_1_t7F06D046ADC7D975E51688D0A59A1BD8588D9CAB;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_t027AA86F2C41FBA05C31CACB9149B96FC4E615BF;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct IList_1_tC75CBB6AE5DF15FAF35EB33E1564DE7470D34D3E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t80B1EADC96A218396981D71EEAA586359592A3C1;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_t902991F2E11587F8EEF6B73874B052703A513FBD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor>
struct IList_1_tACC7EEFE95BBF924849191D787B60E94897CDE0B;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct IList_1_tDE4C80C50594AABEF19D7742523D70E9C664DEEF;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t5E6C9053B3C9BD81C6C132157967039A59859892;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct IList_1_t1B1B21AD548FD860F16CCA30240E06260A9C5649;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t33F5D31C2CB17B2D4A6B24329C0266C01AD1F6CA;
// System.Linq.IOrderedEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IOrderedEnumerable_1_t45EA3AF751BF4B2E710452639EBE54F8CC19B640;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Collections.Generic.IReadOnlyList`1<Google.Protobuf.Reflection.DescriptorBase>
struct IReadOnlyList_1_tFAAB54C802F5320320500EA279C420C562FFBE89;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>
struct IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>
struct IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>
struct IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>
struct IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<System.Object,System.Object>
struct IndexedConverter_2_tB58456730034618830A90FBF08519615C7845C6F;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>
struct IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Google.Protobuf.IExtensionValue>
struct KeyCollection_t98D000F097C23ADABF87B0CC780480566F5DC0DB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct KeyCollection_tE67E07190D799BBB78834EEEDF965EC184026186;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct KeyCollection_tE8B2048C2D43BDD80398E3D2D82CA9DCEBEF4C21;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct KeyCollection_tEC47965EB5F315B476F143591EDE9A441EF299B2;
// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>>
struct Lazy_1_t26500A46DBA670AF4BD12078EE7AAC97A33BABF4;
// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>
struct List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.DescriptorProto>
struct MessageParser_1_t4CFFDBB2CC5D566C74F981292B24208F14311C1E;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct MessageParser_1_t74FA46F9CD5C9E957884E0AE7A0708AA715FEA53;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct MessageParser_1_t7D6DE11C7B531C9AC9643561259309A3A4AC5B19;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MessageOptions>
struct MessageParser_1_tAE6471FD65742366BD5B116F1BFF3BB39A07E728;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct MessageParser_1_t899E67C1B973599F93516749AE57C64EFF00F7F3;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodOptions>
struct MessageParser_1_t00E3FEEF8ED73FD3EBDDD1A67A42FA1A237F3ECD;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct MessageParser_1_t78F42FB594A7B64C3305F7C631123EBD090C03C1;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofOptions>
struct MessageParser_1_t518FA47A5C06E84BD7A0B4AA0012453ED9194751;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceDescriptorProto>
struct MessageParser_1_t9E18B688E6C82065658DF52437AF9ABC0DB019B3;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceOptions>
struct MessageParser_1_tB60B752F1242A98A44020A02E04A71C6251C0768;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct ReadOnlyDictionary_2_tA5E205F3BBEB6B67DBCA3C316E87352486DFF1C2;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto>
struct RepeatedField_1_tEF2F54ED9A8ADDF0DCD8F00400EFC350A6FEAD1F;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct RepeatedField_1_t71A0AAE53E51734430BFDE14A6B8663D02F9D240;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct RepeatedField_1_tED458B84BB303E84DB02A4495D6B84DE22FC9794;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct RepeatedField_1_t23CA0F67040B1B1AA6C4498022BA5CD40FD87B85;
// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t33BF0A8B0555D4DEC49FF383CDDE959709150A74;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct RepeatedField_1_tDEACD5DB2A56117C8938DE66C85F0906BBA55F20;
// Google.Protobuf.Collections.RepeatedField`1<System.String>
struct RepeatedField_1_t7788C916548A215E970C2455506FB29362383AF0;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption>
struct RepeatedField_1_t238AF18C445789816AC4F928E018EC0FA9889D9B;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange>
struct RepeatedField_1_t03746448D309B02CB463E7A70FF2B18A994A9644;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange>
struct RepeatedField_1_t0436E7540B187149E378623D8C93DAD5E50E5ED5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Google.Protobuf.IExtensionValue>
struct ValueCollection_t017C4FE9CE00AED29210D955145A1D254259D480;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ValueCollection_t94A1FE19C78ADF5FFA46398D5D3DB2598311F3A8;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ValueCollection_tD0F8455324FC56598D8C8076AD5F20692A295D88;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct ValueCollection_tCDA59BD3D614831BDE012B2A83FC0D90A1AAE1FC;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Google.Protobuf.IExtensionValue>[]
struct EntryU5BU5D_tF5AE69DA223B88742977967BC106C1E290F250F6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.FieldDescriptor>[]
struct EntryU5BU5D_t38514E76155A855CBD091CB6B770020514700F16;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.MessageDescriptor>[]
struct EntryU5BU5D_t73FEABFAE06D7F449E85E9588EF90802A5F35D6F;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.Protobuf.Reflection.DescriptorProto[]
struct DescriptorProtoU5BU5D_t28B7C65DD96F8ED2D824D248E4B12948A46F9BF2;
// Google.Protobuf.Reflection.EnumDescriptorProto[]
struct EnumDescriptorProtoU5BU5D_t04CAEE82E73A82CC8366EF20F74081475C2E141D;
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110;
// Google.Protobuf.Reflection.FieldDescriptor[]
struct FieldDescriptorU5BU5D_tBD048533FF07A549664BDB1823BF62E72E67A74D;
// Google.Protobuf.Reflection.FieldDescriptorProto[]
struct FieldDescriptorProtoU5BU5D_t714ED1CCC455FFA52D517C8EE007A20CBB51F0D5;
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tB8E7D5430A1D0CFF968012BBF8C0760169259E90;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_tB5A00ED4D833F1CC2866805E782DC830E16E36C2;
// Google.Protobuf.Reflection.MethodDescriptorProto[]
struct MethodDescriptorProtoU5BU5D_t5F0FC4640CA916D4390C1C70B2E7ABC6916BB646;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Google.Protobuf.Reflection.OneofDescriptorProto[]
struct OneofDescriptorProtoU5BU5D_tB5C9DF6130A56758E04D090087C746A14DB5A05C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange[]
struct ExtensionRangeU5BU5D_t66D8F9FC7DB1C073DBF29612752EFA1E42199838;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Google.Protobuf.ByteString
struct ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6;
// Google.Protobuf.Reflection.CustomOptions
struct CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337;
// Google.Protobuf.Reflection.DescriptorValidationException
struct DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC;
// Google.Protobuf.Reflection.EnumDescriptor
struct EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017;
// Google.Protobuf.Reflection.EnumDescriptorProto
struct EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4;
// Google.Protobuf.Reflection.EnumOptions
struct EnumOptions_tBCA2A7E273992A34AC2AC23B1DFD8C019664E22B;
// Google.Protobuf.Extension
struct Extension_t018320402D6776101851CAB78A7B81D89AEB45CD;
// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D;
// Google.Protobuf.ExtensionRegistry
struct ExtensionRegistry_tDAD3D4F07E2598E9B0DB95E3E34B202B538BE003;
// Google.Protobuf.Reflection.FieldAccessorBase
struct FieldAccessorBase_tBE53EBCC744C9FFB54B2843312ECD374D519044F;
// Google.Protobuf.Reflection.FieldDescriptor
struct FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3;
// Google.Protobuf.Reflection.FieldDescriptorProto
struct FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C;
// Google.Protobuf.Reflection.FieldOptions
struct FieldOptions_t91A23D81159162B3B25D3D70361305137B7D9599;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_t6FFAE9AE5C9BD71EA8BBE8C2B8A5B635894AE06E;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Google.Protobuf.Reflection.IDescriptor
struct IDescriptor_t55B6AE496BF87AFEC193BBE01F85B20D6AF8A0A7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Google.Protobuf.Reflection.IFieldAccessor
struct IFieldAccessor_tFFC3B7256A421EE76849A47E1067C109ED5D5D33;
// Google.Protobuf.IMessage
struct IMessage_tB6BA3FA7EC91FF8285719CE30B57B299124F6725;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
// Google.Protobuf.Reflection.MapFieldAccessor
struct MapFieldAccessor_tB3A1854320BC037636B8627B994086628E6E1D1D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866;
// Google.Protobuf.Reflection.MessageOptions
struct MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018;
// Google.Protobuf.MessageParser
struct MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A;
// System.Reflection.MethodBase
struct MethodBase_t;
// Google.Protobuf.Reflection.MethodDescriptor
struct MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4;
// Google.Protobuf.Reflection.MethodDescriptorProto
struct MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Google.Protobuf.Reflection.MethodOptions
struct MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333;
// Google.Protobuf.Reflection.OneofAccessor
struct OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D;
// Google.Protobuf.Reflection.OneofDescriptor
struct OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094;
// Google.Protobuf.Reflection.OneofDescriptorProto
struct OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4;
// Google.Protobuf.Reflection.OneofOptions
struct OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF;
// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F;
// Google.Protobuf.Reflection.PackageDescriptor
struct PackageDescriptor_t354290BE4135BF64573E645E5D28445FA1EFB246;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// Google.Protobuf.Reflection.RepeatedFieldAccessor
struct RepeatedFieldAccessor_tC0768EB80A9E4732FAD7110F5C87782828B919A6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43;
// Google.Protobuf.Reflection.ServiceDescriptorProto
struct ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7;
// Google.Protobuf.Reflection.ServiceOptions
struct ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0;
// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.Protobuf.Reflection.FileDescriptor/<>c
struct U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9;
// Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t7AED420DF7836A6786AF6031D6A698D1CBA871B7;
// Google.Protobuf.Reflection.MessageDescriptor/<>c
struct U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0;
// Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007;
// Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559;
// Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl
struct BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl
struct BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl
struct BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl
struct BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398;
// Google.Protobuf.Reflection.ReflectionUtil/IExtensionReflectionHelper
struct IExtensionReflectionHelper_tBF67F1265A875A006E1FA8486EE681B0D8F490CA;
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper
struct IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9;
// Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c
struct U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2
struct U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E;
// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB;
// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t624C7FFABE6CAF40B822030372264CC25D3D4E65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2D639189C28E76CEB75B142D0DE721C1DE43689D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t86BCEB7E987443B0EF9BAC13979F9A0D85072C5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB7A3E0EFAD1A08DA0DE2D51650DA1E8EBDBA3687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1A3FAFB1B0C873C69FA798CF5AED8D052591ADBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t532DBB98EA70DE834C63449BE3E90FF9C0D55BA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAB6AAAECE5289A4135C0085C0836472AF596880E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tB2A9AC3044EEC2C3DA952BE54E8DE895FE48869E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF4EFFA8FFA2D7A1B6138E0B7757F8903C40ED7CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExtensionReflectionHelper_tBF67F1265A875A006E1FA8486EE681B0D8F490CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExtensionSetReflector_t9F5D6132E5CB94B57A2A3DEB6C49FF96923FA5C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFieldAccessor_tFFC3B7256A421EE76849A47E1067C109ED5D5D33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t027AA86F2C41FBA05C31CACB9149B96FC4E615BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tFAAB54C802F5320320500EA279C420C562FFBE89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09353E39448C302F003639F3B4C81D6B132357DE;
IL2CPP_EXTERN_C String_t* _stringLiteral12FC0BF60BCE54234CA58CFD037BD8E5ADE3F2FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54;
IL2CPP_EXTERN_C String_t* _stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90;
IL2CPP_EXTERN_C String_t* _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA;
IL2CPP_EXTERN_C String_t* _stringLiteral352DC1AD46B06976FE1F09D69AD2AE07BA1C912F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B;
IL2CPP_EXTERN_C String_t* _stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3;
IL2CPP_EXTERN_C String_t* _stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793;
IL2CPP_EXTERN_C String_t* _stringLiteral795419E0019C339EB191F029F9E7E9EBD13BCFAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7F6EBD2865CE2FCCB1136CB39B9E6777A5F4777C;
IL2CPP_EXTERN_C String_t* _stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3;
IL2CPP_EXTERN_C String_t* _stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78;
IL2CPP_EXTERN_C String_t* _stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565;
IL2CPP_EXTERN_C String_t* _stringLiteralA598F7A018FBD9BE6B63FDAFF829654652603EEB;
IL2CPP_EXTERN_C String_t* _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA9233D8C418C04829410724511B59AEC0EF627BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAA2199D3FAB3E9A0592694D9E1A42317C06006B4;
IL2CPP_EXTERN_C String_t* _stringLiteralB7012EBD7A52FFE2177DD7A499A4226405016ACB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC735ABBBA0A4054E66CE20DF45D76FB73FAFF691;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8;
IL2CPP_EXTERN_C String_t* _stringLiteralD25853350172E0B01427BE241CD73C9EA8AD7200;
IL2CPP_EXTERN_C String_t* _stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A;
IL2CPP_EXTERN_C String_t* _stringLiteralD47CF5D6FE76B6693D0F4ADFBC7B1D127FBC8366;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A7B98FBAE659C1B887B207BDC5507066DBC057;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AB46C8C5CCDCA487773A386E008015AD2FB899;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorPool_FindSymbol_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m98B3600BEF7410D2FF0AE01C283FF02837625C59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorPool_FindSymbol_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_m3783F3C06BF3723749D752D5B1ED53DD9B7F8542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_m6D97E5A60E6DAE56E9CF16D58F62EE9CA490DE0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4_TisEnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_m786A479FA5064C509189F23691E61C152E5F1D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_mBD60ACD171989A76028E462665958F79DFE0C19F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_mEED10CD9A6911BB7B385BE2C0A27BB8227F3B5F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4_TisOneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094_m542DB4E32A1A2C3D93002FB50ADE7544904D3F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7731859EEFDBA2A57CDF6FB58B29B24BD233CB93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m522D7B62EA78C3B618413FDDBEF3A9C685E9303F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m588D015E4E6AB63B61FD84ABBD631A65102EEAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m58FEC00F353B8358EB846B17C21DB741A46DD2AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m83499F3D1ED0F9C432B2BB5832B9D136EC82C5BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_m64D8BE715A2B749E0574597D612A4B76A790BD7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m83486AECEE236A81A119D27C88FB3BF6ED66B18D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_TisFileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2_m627281073F0171842385C0B6162453BB4F22C9F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m131B54D265EF895987614EDDE728C8207D9D7889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_m903ACBDD62912505D5EC4587186B2EDDF9EA50B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_mCB641E5E5B780962B2C447CCA498E0E67C638905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_mCF80BFC76CAA9EE86A4D2D7334BC2C1F9995DC89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_mDA4A01A510CD576F8AEC5C529E72E48BF7412A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCollection_get_Item_m63BD3E9A2811EC58294B1D43A8179CA3AE802445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCollection_get_Item_m90A70DEE6E5355F4F17CCD7A8043C11FE8E0C971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF949D7D782453A987229748A26F2DFC684735B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2CCC951BE5356AF018AC6D20BCA5B421C1E750EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapFieldAccessor_HasValue_m976AC632CF6382702ABF8089DA0E61041C2F9797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapFieldAccessor_SetValue_m0C0EDF3177732A10A1EF95E5BD976041714407BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageDescriptor__ctor_m6980D0ADFCF03CD5DA38FA066A8FB12318369D4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodDescriptor_CrossLink_mBE18855EE33145A16BD069B0F9E4B4CC610AF972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneofDescriptor_CreateAccessor_mE66785E44B5D8412E5A30F590B493F93A39E0E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_m920160A81741571724B418280012E98FA84E1747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_mBB8C3535A64E52D9C8A6DACB04A4C2A5ED9AABAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisString_t_m06673E671A5ADECBE459106EA93632A686DEBA17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1__ctor_m21472BEF730F6D2142F60EF0490FA32E03026314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m205ED779047A8F433B79DDC137D8ADF5F37EFA37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC53EDBF958A0A911A80C12ADCAC8F76D57651A8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF35EC5F7627708BA2FD4BEBB88EE862D536F6EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36E57F5CFE7C47A7670FE63275CFF10474F42159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC10D6A4D3E6E9C8B10A1C58203E4508C346EB0DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_mA3E841EF2CB08E1300CA08D8AB9521FA758B657C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m72BFCF2DE965F0D168DB5C9F80FB817099ACF43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m565EC6F80080BA80E7CA5502630AB20D0ACC040D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mD746600CDA2403F4F54C1570C45785DF3B5366A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF0A9E4E71BF0AA5AD420925A87BA34D05BF9C6E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mDF899906C2E9DCA9B26BBDE9E77EC655B35E4373_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m60A52EBF2D50399A88FB364005B6AD5AE2ED0165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisSampleEnum_t738031E740377070D5623E89A66EC87469C2FB6A_mFF32A2AC2592F3F7B6EF0BE4D6D19F454393596F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m318BDC552B12F6EAE5C096949129E05A3B63A47D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisString_t_mA1ED4DAFC872FFC9BFED4D390124A97BDBD821A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCD4BA47215A551676E653D6F822E0209D14C241B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB9F5DF6A15A1F27E4C18C6D73A18CAF5FF13A6D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedFieldAccessor_HasValue_mD01D7A3EBFC7E0588C49E42133B88539976F3563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedFieldAccessor_SetValue_m00857270A32B93F05E43CBC6106E12CAEB69BEC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Count_mFED0B0748D63F5E388545C467B7F5CD8BAD3AF79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleFieldAccessor__ctor_m21C5258ACA1277997A125FCF456BD435A6BDB3BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFromMessagesU3Eb__9_0_mA8B14E74D2EF61E3882747B2E4A9DE502FDECD87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_4_m84FD8B69A7DBCC58A88BA4147BC4ACAE5BD24881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_4_m8A93DC18419A3D076230D916D7CA180ED7FF6AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m480E7F23C2EEECABB7C2E4F2EB16DBCCDDCFF94E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mAFFD1B7C5B68F1DE375DEA7ADAA01EBDBDA0AE00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m2C2148868D94466BAFAE599D36DCF88383E62CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_m98DC29EC1C59C9D968B47B563DC2BB5669C0D418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m116450593A6AA82F39907A9DD3F9EAE8AEB1A0BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m5E3F7230140B510EDB78C41EF0F79D9B0B738F50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_m48A236D555C993728B618BF4D886F37B9FB05388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_m1ACF4E0D81C8069BA9E99FA6B00BDE1B13EE558F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mAC062AA7A7FD3C18B23D2118C753207E0060D7CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m1893B48B075084EF7B1C0689D7E1BA8D7140CFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_mC686F7074B05BFC7B1C6CACA923EC6109B356DC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_mD41570AAEA563EE7D0F6D444E49414BAE304C14B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m19F7EA36DCEB14DF5E0B3D90911242479DB6423C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionReflectionHelper_2_t2F29BF586C802ABF0DAC0FFDE6717411CC3EE46A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionSetReflector_1_t49B3EE3246E03C94E03A7F71C47625581B5CB011_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectionHelper_2_tCC922DD074ED10A9D612A795BDBD4D04306F0FE9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110;
struct FieldDescriptorU5BU5D_tBD048533FF07A549664BDB1823BF62E72E67A74D;
struct FileDescriptorU5BU5D_tB8E7D5430A1D0CFF968012BBF8C0760169259E90;
struct GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED;
struct MessageDescriptorU5BU5D_tB5A00ED4D833F1CC2866805E782DC830E16E36C2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue>
struct Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF5AE69DA223B88742977967BC106C1E290F250F6* ____entries_1;
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
	KeyCollection_t98D000F097C23ADABF87B0CC780480566F5DC0DB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t017C4FE9CE00AED29210D955145A1D254259D480* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t38514E76155A855CBD091CB6B770020514700F16* ____entries_1;
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
	KeyCollection_tE67E07190D799BBB78834EEEDF965EC184026186* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t94A1FE19C78ADF5FFA46398D5D3DB2598311F3A8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t73FEABFAE06D7F449E85E9588EF90802A5F35D6F* ____entries_1;
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
	KeyCollection_tEC47965EB5F315B476F143591EDE9A441EF299B2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCDA59BD3D614831BDE012B2A83FC0D90A1AAE1FC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694  : public RuntimeObject
{
};

struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203  : public RuntimeObject
{
};

struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB  : public RuntimeObject
{
};

struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};

struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions>
struct ExtensionSet_1_t8AFBC47CC3D9634C51CE6CF7C73174227BEC7041  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions>
struct ExtensionSet_1_tFA17AB50086B62AF47B08709FFD7A23C02C151F5  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<System.Object>
struct ExtensionSet_1_tA05358208E9C70D382AD4E4E52D8E69F9BF19EE4  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions>
struct ExtensionSet_1_t94C0A6D27A4AE38EF6EB0A3B44EFC2D15390152D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions>
struct ExtensionSet_1_t7F8B885AD0837CF76A8B264A7A1AFBCEA7B10EA8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ___U3CValuesByNumberU3Ek__BackingField_0;
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

// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>
struct List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FieldDescriptorU5BU5D_tBD048533FF07A549664BDB1823BF62E72E67A74D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FieldDescriptorU5BU5D_tBD048533FF07A549664BDB1823BF62E72E67A74D* ___s_emptyArray_5;
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

// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_keys
	KeyCollection_tE8B2048C2D43BDD80398E3D2D82CA9DCEBEF4C21* ____keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_values
	ValueCollection_tD0F8455324FC56598D8C8076AD5F20692A295D88* ____values_3;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto>
struct RepeatedField_1_tEF2F54ED9A8ADDF0DCD8F00400EFC350A6FEAD1F  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	DescriptorProtoU5BU5D_t28B7C65DD96F8ED2D824D248E4B12948A46F9BF2* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tEF2F54ED9A8ADDF0DCD8F00400EFC350A6FEAD1F_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tC15324F770FE96DC962F4CD940A530C2B53E1484* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	DescriptorProtoU5BU5D_t28B7C65DD96F8ED2D824D248E4B12948A46F9BF2* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct RepeatedField_1_t71A0AAE53E51734430BFDE14A6B8663D02F9D240  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	EnumDescriptorProtoU5BU5D_t04CAEE82E73A82CC8366EF20F74081475C2E141D* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t71A0AAE53E51734430BFDE14A6B8663D02F9D240_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tFA9E4B309657CE94AD22AB212201880A4484B16D* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	EnumDescriptorProtoU5BU5D_t04CAEE82E73A82CC8366EF20F74081475C2E141D* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	FieldDescriptorProtoU5BU5D_t714ED1CCC455FFA52D517C8EE007A20CBB51F0D5* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tE6698E71DE62DA5075C24CECC87816090F343F87* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	FieldDescriptorProtoU5BU5D_t714ED1CCC455FFA52D517C8EE007A20CBB51F0D5* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct RepeatedField_1_t23CA0F67040B1B1AA6C4498022BA5CD40FD87B85  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	MethodDescriptorProtoU5BU5D_t5F0FC4640CA916D4390C1C70B2E7ABC6916BB646* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t23CA0F67040B1B1AA6C4498022BA5CD40FD87B85_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t5D7C5C1A0D39FC7C30FB7923AD53E263460BC83A* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	MethodDescriptorProtoU5BU5D_t5F0FC4640CA916D4390C1C70B2E7ABC6916BB646* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t33BF0A8B0555D4DEC49FF383CDDE959709150A74  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t33BF0A8B0555D4DEC49FF383CDDE959709150A74_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct RepeatedField_1_tDEACD5DB2A56117C8938DE66C85F0906BBA55F20  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	OneofDescriptorProtoU5BU5D_tB5C9DF6130A56758E04D090087C746A14DB5A05C* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tDEACD5DB2A56117C8938DE66C85F0906BBA55F20_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t2A6D99ED2A011D0B33EF87B2FC67F6DBE6ED8427* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	OneofDescriptorProtoU5BU5D_tB5C9DF6130A56758E04D090087C746A14DB5A05C* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	ExtensionRangeU5BU5D_t66D8F9FC7DB1C073DBF29612752EFA1E42199838* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t91227FBC755F573BF264ED8F8ABDD71E6EF163DD* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	ExtensionRangeU5BU5D_t66D8F9FC7DB1C073DBF29612752EFA1E42199838* ___EmptyArray_1;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.CustomOptions
struct CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.Reflection.CustomOptions::values
	RuntimeObject* ___values_1;
};

struct CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_StaticFields
{
	// System.Object[] Google.Protobuf.Reflection.CustomOptions::EmptyParameters
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyParameters_0;
};

// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::<File>k__BackingField
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___U3CFileU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.IDescriptor> Google.Protobuf.Reflection.DescriptorPool::descriptorsByName
	RuntimeObject* ___descriptorsByName_0;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.DescriptorPool::fieldsByNumber
	RuntimeObject* ___fieldsByNumber_1;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.EnumValueDescriptor> Google.Protobuf.Reflection.DescriptorPool::enumValuesByNumber
	RuntimeObject* ___enumValuesByNumber_2;
	// System.Collections.Generic.HashSet`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.DescriptorPool::dependencies
	HashSet_1_t2E9BEFD411A70CF27BD396DFFFF6215E0B6D8384* ___dependencies_3;
};

struct DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F_StaticFields
{
	// System.Text.RegularExpressions.Regex Google.Protobuf.Reflection.DescriptorPool::ValidationRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___ValidationRegex_4;
};

// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.DescriptorProto::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.DescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::field_
	RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA* ___field__7;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::extension_
	RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA* ___extension__10;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::nestedType_
	RepeatedField_1_tEF2F54ED9A8ADDF0DCD8F00400EFC350A6FEAD1F* ___nestedType__13;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::enumType_
	RepeatedField_1_t71A0AAE53E51734430BFDE14A6B8663D02F9D240* ___enumType__16;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::extensionRange_
	RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620* ___extensionRange__19;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::oneofDecl_
	RepeatedField_1_tDEACD5DB2A56117C8938DE66C85F0906BBA55F20* ___oneofDecl__22;
	// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.DescriptorProto::options_
	MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* ___options__24;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange> Google.Protobuf.Reflection.DescriptorProto::reservedRange_
	RepeatedField_1_t03746448D309B02CB463E7A70FF2B18A994A9644* ___reservedRange__27;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.DescriptorProto::reservedName_
	RepeatedField_1_t7788C916548A215E970C2455506FB29362383AF0* ___reservedName__30;
};

struct DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_parser
	MessageParser_1_t4CFFDBB2CC5D566C74F981292B24208F14311C1E* ____parser_0;
	// System.String Google.Protobuf.Reflection.DescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_field_codec
	FieldCodec_1_tB697B3EA99D8923C0EB3B5FA0B43B2981C766776* ____repeated_field_codec_6;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_extension_codec
	FieldCodec_1_tB697B3EA99D8923C0EB3B5FA0B43B2981C766776* ____repeated_extension_codec_9;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_nestedType_codec
	FieldCodec_1_t7D0576D1FC7D2668C2DAD71DA0A4CF67E8C25A64* ____repeated_nestedType_codec_12;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_enumType_codec
	FieldCodec_1_tA0EDA357AA18CEB5EE8C80D66CD79A2B396BD7AB* ____repeated_enumType_codec_15;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::_repeated_extensionRange_codec
	FieldCodec_1_t87B4CEFC5913100752CCA3066D150F4F3FCF1E39* ____repeated_extensionRange_codec_18;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_oneofDecl_codec
	FieldCodec_1_tD3505524D815668EF4B48CA4104DE5E9227D6D6C* ____repeated_oneofDecl_codec_21;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange> Google.Protobuf.Reflection.DescriptorProto::_repeated_reservedRange_codec
	FieldCodec_1_tCF27001EF1B0721239A54CD5658863532EABB945* ____repeated_reservedRange_codec_26;
	// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.Reflection.DescriptorProto::_repeated_reservedName_codec
	FieldCodec_1_t5E6313E604A7D06CE5EC653E6F62D4232681A90B* ____repeated_reservedName_codec_29;
};

// Google.Protobuf.Reflection.EnumDescriptorProto
struct EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.EnumDescriptorProto::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.EnumDescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::value_
	RepeatedField_1_tED458B84BB303E84DB02A4495D6B84DE22FC9794* ___value__7;
	// Google.Protobuf.Reflection.EnumOptions Google.Protobuf.Reflection.EnumDescriptorProto::options_
	EnumOptions_tBCA2A7E273992A34AC2AC23B1DFD8C019664E22B* ___options__9;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange> Google.Protobuf.Reflection.EnumDescriptorProto::reservedRange_
	RepeatedField_1_t0436E7540B187149E378623D8C93DAD5E50E5ED5* ___reservedRange__12;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.EnumDescriptorProto::reservedName_
	RepeatedField_1_t7788C916548A215E970C2455506FB29362383AF0* ___reservedName__15;
};

struct EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::_parser
	MessageParser_1_t74FA46F9CD5C9E957884E0AE7A0708AA715FEA53* ____parser_0;
	// System.String Google.Protobuf.Reflection.EnumDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_value_codec
	FieldCodec_1_tC27DE39B077121FAB80B3F28BE4F3BF4AC4FD67B* ____repeated_value_codec_6;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_reservedRange_codec
	FieldCodec_1_t213C5577BBEB057E0BB693C0E752AFC53D55D43E* ____repeated_reservedRange_codec_11;
	// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_reservedName_codec
	FieldCodec_1_t5E6313E604A7D06CE5EC653E6F62D4232681A90B* ____repeated_reservedName_codec_14;
};

// Google.Protobuf.Extension
struct Extension_t018320402D6776101851CAB78A7B81D89AEB45CD  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Extension::<FieldNumber>k__BackingField
	int32_t ___U3CFieldNumberU3Ek__BackingField_0;
};

// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.MessageDescriptor,System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>> Google.Protobuf.Reflection.ExtensionCollection::extensionsByTypeInDeclarationOrder
	RuntimeObject* ___extensionsByTypeInDeclarationOrder_0;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.MessageDescriptor,System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>> Google.Protobuf.Reflection.ExtensionCollection::extensionsByTypeInNumberOrder
	RuntimeObject* ___extensionsByTypeInNumberOrder_1;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.ExtensionCollection::<UnorderedExtensions>k__BackingField
	RuntimeObject* ___U3CUnorderedExtensionsU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.FieldAccessorBase
struct FieldAccessorBase_tBE53EBCC744C9FFB54B2843312ECD374D519044F  : public RuntimeObject
{
	// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.FieldAccessorBase::getValueDelegate
	Func_2_t01A45D28F5BAF6BDEE002EB4222A30A74B6CE946* ___getValueDelegate_0;
	// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.FieldAccessorBase::descriptor
	FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___descriptor_1;
};

// Google.Protobuf.Reflection.FieldDescriptorProto
struct FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.FieldDescriptorProto::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::_hasBits0
	int32_t ____hasBits0_2;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::name_
	String_t* ___name__5;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::number_
	int32_t ___number__8;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Label Google.Protobuf.Reflection.FieldDescriptorProto::label_
	int32_t ___label__11;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type Google.Protobuf.Reflection.FieldDescriptorProto::type_
	int32_t ___type__14;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::typeName_
	String_t* ___typeName__17;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::extendee_
	String_t* ___extendee__20;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::defaultValue_
	String_t* ___defaultValue__23;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::oneofIndex_
	int32_t ___oneofIndex__26;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::jsonName_
	String_t* ___jsonName__29;
	// Google.Protobuf.Reflection.FieldOptions Google.Protobuf.Reflection.FieldDescriptorProto::options_
	FieldOptions_t91A23D81159162B3B25D3D70361305137B7D9599* ___options__31;
	// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::proto3Optional_
	bool ___proto3Optional__34;
};

struct FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.FieldDescriptorProto::_parser
	MessageParser_1_t7D6DE11C7B531C9AC9643561259309A3A4AC5B19* ____parser_0;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_4;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::NumberDefaultValue
	int32_t ___NumberDefaultValue_7;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Label Google.Protobuf.Reflection.FieldDescriptorProto::LabelDefaultValue
	int32_t ___LabelDefaultValue_10;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type Google.Protobuf.Reflection.FieldDescriptorProto::TypeDefaultValue
	int32_t ___TypeDefaultValue_13;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::TypeNameDefaultValue
	String_t* ___TypeNameDefaultValue_16;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::ExtendeeDefaultValue
	String_t* ___ExtendeeDefaultValue_19;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::DefaultValueDefaultValue
	String_t* ___DefaultValueDefaultValue_22;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::OneofIndexDefaultValue
	int32_t ___OneofIndexDefaultValue_25;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::JsonNameDefaultValue
	String_t* ___JsonNameDefaultValue_28;
	// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::Proto3OptionalDefaultValue
	bool ___Proto3OptionalDefaultValue_33;
};

// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2  : public RuntimeObject
{
	// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>> Google.Protobuf.Reflection.FileDescriptor::declarations
	Lazy_1_t26500A46DBA670AF4BD12078EE7AAC97A33BABF4* ___declarations_0;
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_t6FFAE9AE5C9BD71EA8BBE8C2B8A5B635894AE06E* ___U3CProtoU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.Syntax Google.Protobuf.Reflection.FileDescriptor::<Syntax>k__BackingField
	int32_t ___U3CSyntaxU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_5;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.FileDescriptor::<Extensions>k__BackingField
	ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* ___U3CExtensionsU3Ek__BackingField_6;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_7;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_8;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6* ___U3CSerializedDataU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* ___U3CDescriptorPoolU3Ek__BackingField_10;
};

// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F  : public RuntimeObject
{
	// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_3;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Parser>k__BackingField
	MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* ___U3CParserU3Ek__BackingField_4;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<PropertyNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CPropertyNamesU3Ek__BackingField_5;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Extensions>k__BackingField
	ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* ___U3CExtensionsU3Ek__BackingField_6;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<OneofNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COneofNamesU3Ek__BackingField_7;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedTypes>k__BackingField
	GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* ___U3CNestedTypesU3Ek__BackingField_8;
	// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedEnums>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CNestedEnumsU3Ek__BackingField_9;
};

struct GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields
{
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyNames_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyCodeInfo
	GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* ___EmptyCodeInfo_1;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyExtensions
	ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* ___EmptyExtensions_2;
};

// Google.Protobuf.Collections.Lists
struct Lists_t02316FADED9C9D25F206F18802A2262BF3AAF20A  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.MessageOptions
struct MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MessageOptions::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions> Google.Protobuf.Reflection.MessageOptions::_extensions
	ExtensionSet_1_t8AFBC47CC3D9634C51CE6CF7C73174227BEC7041* ____extensions_2;
	// System.Int32 Google.Protobuf.Reflection.MessageOptions::_hasBits0
	int32_t ____hasBits0_3;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::messageSetWireFormat_
	bool ___messageSetWireFormat__6;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::noStandardDescriptorAccessor_
	bool ___noStandardDescriptorAccessor__9;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::deprecated_
	bool ___deprecated__12;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::mapEntry_
	bool ___mapEntry__15;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MessageOptions::uninterpretedOption_
	RepeatedField_1_t238AF18C445789816AC4F928E018EC0FA9889D9B* ___uninterpretedOption__18;
};

struct MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MessageOptions> Google.Protobuf.Reflection.MessageOptions::_parser
	MessageParser_1_tAE6471FD65742366BD5B116F1BFF3BB39A07E728* ____parser_0;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::MessageSetWireFormatDefaultValue
	bool ___MessageSetWireFormatDefaultValue_5;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::NoStandardDescriptorAccessorDefaultValue
	bool ___NoStandardDescriptorAccessorDefaultValue_8;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::DeprecatedDefaultValue
	bool ___DeprecatedDefaultValue_11;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::MapEntryDefaultValue
	bool ___MapEntryDefaultValue_14;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MessageOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_tDC20D9662BDFFD1C41EEE3D3FDBFBF039BEEC778* ____repeated_uninterpretedOption_codec_17;
};

// Google.Protobuf.MessageParser
struct MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A  : public RuntimeObject
{
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_t78078FF3E9488DA1D53EBF88B3437119D6265A94* ___factory_0;
	// System.Boolean Google.Protobuf.MessageParser::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_1;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.MessageParser::<Extensions>k__BackingField
	ExtensionRegistry_tDAD3D4F07E2598E9B0DB95E3E34B202B538BE003* ___U3CExtensionsU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.MethodDescriptorProto
struct MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MethodDescriptorProto::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// System.Int32 Google.Protobuf.Reflection.MethodDescriptorProto::_hasBits0
	int32_t ____hasBits0_2;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::name_
	String_t* ___name__5;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::inputType_
	String_t* ___inputType__8;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::outputType_
	String_t* ___outputType__11;
	// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptorProto::options_
	MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* ___options__13;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::clientStreaming_
	bool ___clientStreaming__16;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::serverStreaming_
	bool ___serverStreaming__19;
};

struct MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.MethodDescriptorProto::_parser
	MessageParser_1_t899E67C1B973599F93516749AE57C64EFF00F7F3* ____parser_0;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_4;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::InputTypeDefaultValue
	String_t* ___InputTypeDefaultValue_7;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::OutputTypeDefaultValue
	String_t* ___OutputTypeDefaultValue_10;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::ClientStreamingDefaultValue
	bool ___ClientStreamingDefaultValue_15;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::ServerStreamingDefaultValue
	bool ___ServerStreamingDefaultValue_18;
};

// Google.Protobuf.Reflection.MethodOptions
struct MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MethodOptions::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions> Google.Protobuf.Reflection.MethodOptions::_extensions
	ExtensionSet_1_tFA17AB50086B62AF47B08709FFD7A23C02C151F5* ____extensions_2;
	// System.Int32 Google.Protobuf.Reflection.MethodOptions::_hasBits0
	int32_t ____hasBits0_3;
	// System.Boolean Google.Protobuf.Reflection.MethodOptions::deprecated_
	bool ___deprecated__6;
	// Google.Protobuf.Reflection.MethodOptions/Types/IdempotencyLevel Google.Protobuf.Reflection.MethodOptions::idempotencyLevel_
	int32_t ___idempotencyLevel__9;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MethodOptions::uninterpretedOption_
	RepeatedField_1_t238AF18C445789816AC4F928E018EC0FA9889D9B* ___uninterpretedOption__12;
};

struct MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodOptions> Google.Protobuf.Reflection.MethodOptions::_parser
	MessageParser_1_t00E3FEEF8ED73FD3EBDDD1A67A42FA1A237F3ECD* ____parser_0;
	// System.Boolean Google.Protobuf.Reflection.MethodOptions::DeprecatedDefaultValue
	bool ___DeprecatedDefaultValue_5;
	// Google.Protobuf.Reflection.MethodOptions/Types/IdempotencyLevel Google.Protobuf.Reflection.MethodOptions::IdempotencyLevelDefaultValue
	int32_t ___IdempotencyLevelDefaultValue_8;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MethodOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_tDC20D9662BDFFD1C41EEE3D3FDBFBF039BEEC778* ____repeated_uninterpretedOption_codec_11;
};

// Google.Protobuf.Reflection.OneofAccessor
struct OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D  : public RuntimeObject
{
	// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.OneofAccessor::caseDelegate
	Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* ___caseDelegate_0;
	// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.OneofAccessor::clearDelegate
	Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* ___clearDelegate_1;
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::<Descriptor>k__BackingField
	OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* ___U3CDescriptorU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.OneofDescriptorProto
struct OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.OneofDescriptorProto::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.OneofDescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptorProto::options_
	OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* ___options__6;
};

struct OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.OneofDescriptorProto::_parser
	MessageParser_1_t78F42FB594A7B64C3305F7C631123EBD090C03C1* ____parser_0;
	// System.String Google.Protobuf.Reflection.OneofDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
};

// Google.Protobuf.Reflection.OneofOptions
struct OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.OneofOptions::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions> Google.Protobuf.Reflection.OneofOptions::_extensions
	ExtensionSet_1_t94C0A6D27A4AE38EF6EB0A3B44EFC2D15390152D* ____extensions_2;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.OneofOptions::uninterpretedOption_
	RepeatedField_1_t238AF18C445789816AC4F928E018EC0FA9889D9B* ___uninterpretedOption__5;
};

struct OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofOptions> Google.Protobuf.Reflection.OneofOptions::_parser
	MessageParser_1_t518FA47A5C06E84BD7A0B4AA0012453ED9194751* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.OneofOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_tDC20D9662BDFFD1C41EEE3D3FDBFBF039BEEC778* ____repeated_uninterpretedOption_codec_4;
};

// Google.Protobuf.Reflection.PackageDescriptor
struct PackageDescriptor_t354290BE4135BF64573E645E5D28445FA1EFB246  : public RuntimeObject
{
	// System.String Google.Protobuf.Reflection.PackageDescriptor::name
	String_t* ___name_0;
	// System.String Google.Protobuf.Reflection.PackageDescriptor::fullName
	String_t* ___fullName_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.PackageDescriptor::file
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file_2;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Google.Protobuf.Compatibility.PropertyInfoExtensions
struct PropertyInfoExtensions_t3F8A537C96D19C4C4D0B703008E007643A5426BF  : public RuntimeObject
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers
struct ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121  : public RuntimeObject
{
};

struct ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
	// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
};

// Google.Protobuf.Reflection.ReflectionUtil
struct ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027  : public RuntimeObject
{
};

struct ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_StaticFields
{
	// System.Type[] Google.Protobuf.Reflection.ReflectionUtil::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
	// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::<CanConvertEnumFuncToInt32Func>k__BackingField
	bool ___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1;
};

// Google.Protobuf.Reflection.ServiceDescriptorProto
struct ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.ServiceDescriptorProto::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::method_
	RepeatedField_1_t23CA0F67040B1B1AA6C4498022BA5CD40FD87B85* ___method__7;
	// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptorProto::options_
	ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* ___options__9;
};

struct ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::_parser
	MessageParser_1_t9E18B688E6C82065658DF52437AF9ABC0DB019B3* ____parser_0;
	// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::_repeated_method_codec
	FieldCodec_1_t3EC0BB670F1231170A6342A2089DAC2833321A79* ____repeated_method_codec_6;
};

// Google.Protobuf.Reflection.ServiceOptions
struct ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.ServiceOptions::_unknownFields
	UnknownFieldSet_t2DB353C4FEAF869680B2F4701C4FEF364E54E6B2* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions> Google.Protobuf.Reflection.ServiceOptions::_extensions
	ExtensionSet_1_t7F8B885AD0837CF76A8B264A7A1AFBCEA7B10EA8* ____extensions_2;
	// System.Int32 Google.Protobuf.Reflection.ServiceOptions::_hasBits0
	int32_t ____hasBits0_3;
	// System.Boolean Google.Protobuf.Reflection.ServiceOptions::deprecated_
	bool ___deprecated__6;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.ServiceOptions::uninterpretedOption_
	RepeatedField_1_t238AF18C445789816AC4F928E018EC0FA9889D9B* ___uninterpretedOption__9;
};

struct ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceOptions> Google.Protobuf.Reflection.ServiceOptions::_parser
	MessageParser_1_tB60B752F1242A98A44020A02E04A71C6251C0768* ____parser_0;
	// System.Boolean Google.Protobuf.Reflection.ServiceOptions::DeprecatedDefaultValue
	bool ___DeprecatedDefaultValue_5;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.ServiceOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_tDC20D9662BDFFD1C41EEE3D3FDBFBF039BEEC778* ____repeated_uninterpretedOption_codec_8;
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

// Google.Protobuf.Compatibility.TypeExtensions
struct TypeExtensions_t4E16E2043FA058B974623161E0D5694CC8A7E0C6  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry::fullNameToMessageMap
	Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* ___fullNameToMessageMap_1;
};

struct TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::<Empty>k__BackingField
	TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* ___U3CEmptyU3Ek__BackingField_0;
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

// Google.Protobuf.Reflection.FileDescriptor/<>c
struct U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9  : public RuntimeObject
{
};

struct U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor/<>c Google.Protobuf.Reflection.FileDescriptor/<>c::<>9
	U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.FileDescriptor,System.String> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__9_0
	Func_2_t63AB7EB74BF273445A813E006C6BAB27A2459C8C* ___U3CU3E9__9_0_1;
	// System.Func`2<Google.Protobuf.Reflection.GeneratedClrTypeInfo,System.Boolean> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__53_0
	Func_2_t92B5E144B8D7364D2869FE597D4E45159CF0C83B* ___U3CU3E9__53_0_2;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,Google.Protobuf.Extension> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__54_0
	Func_2_t1280C161400B0A5A2C08E91158C7127652CCFBE9* ___U3CU3E9__54_0_3;
	// System.Func`2<Google.Protobuf.Extension,System.Boolean> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__54_1
	Func_2_tEDBE012BD1449510E82C8BEB329D019BFBE3A0B7* ___U3CU3E9__54_1_4;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,Google.Protobuf.Extension> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__55_0
	Func_2_t1280C161400B0A5A2C08E91158C7127652CCFBE9* ___U3CU3E9__55_0_5;
	// System.Func`2<Google.Protobuf.Extension,System.Boolean> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__55_1
	Func_2_tEDBE012BD1449510E82C8BEB329D019BFBE3A0B7* ___U3CU3E9__55_1_6;
};

// Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t7AED420DF7836A6786AF6031D6A698D1CBA871B7  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<>4__this
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___U3CU3E4__this_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::generatedCodeInfo
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* ___generatedCodeInfo_1;
};

// Google.Protobuf.Reflection.MessageDescriptor/<>c
struct U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0  : public RuntimeObject
{
};

struct U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_StaticFields
{
	// Google.Protobuf.Reflection.MessageDescriptor/<>c Google.Protobuf.Reflection.MessageDescriptor/<>c::<>9
	U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32> Google.Protobuf.Reflection.MessageDescriptor/<>c::<>9__5_4
	Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD* ___U3CU3E9__5_4_1;
};

// Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::file
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file_0;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<>4__this
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___U3CU3E4__this_1;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::generatedCodeInfo
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* ___generatedCodeInfo_2;
};

// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007  : public RuntimeObject
{
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::messageDescriptor
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___messageDescriptor_0;
};

// Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559  : public RuntimeObject
{
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::descriptor
	OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* ___descriptor_0;
};

// Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::index
	int32_t ___index_0;
};

// Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::file
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file_0;
	// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::<>4__this
	ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* ___U3CU3E4__this_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c
struct U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF  : public RuntimeObject
{
};

struct U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_StaticFields
{
	// Google.Protobuf.Reflection.SingleFieldAccessor/<>c Google.Protobuf.Reflection.SingleFieldAccessor/<>c::<>9
	U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.SingleFieldAccessor/<>c::<>9__3_4
	Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* ___U3CU3E9__3_4_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F  : public RuntimeObject
{
	// Google.Protobuf.Reflection.SingleFieldAccessor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::<>4__this
	SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* ___U3CU3E4__this_0;
	// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::descriptor
	FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___descriptor_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB  : public RuntimeObject
{
	// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::oneofAccessor
	OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* ___oneofAccessor_0;
	// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0 Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* ___CSU24U3CU3E8__locals1_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2
struct U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E  : public RuntimeObject
{
	// System.Object Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::defaultValue
	RuntimeObject* ___defaultValue_0;
	// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0 Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* ___CSU24U3CU3E8__locals2_1;
};

// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB  : public RuntimeObject
{
};

struct U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry/<>c Google.Protobuf.Reflection.TypeRegistry/<>c::<>9
	U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.TypeRegistry/<>c::<>9__9_0
	Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644* ___U3CU3E9__9_0_1;
};

// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry/Builder::types
	Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* ___types_0;
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.TypeRegistry/Builder::fileDescriptorNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___fileDescriptorNames_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_tFB6935B544E2E4D0A33E7E296CE7120CD0C37844 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_pinvoke_define
#define ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_pinvoke_define
struct ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_com_define
#define ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_com_define
struct ReadOnlyMemory_1_tCFA998A18464B99322FB23BC3FC6CFFD2CAACC52_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Google.Protobuf.Reflection.EnumDescriptor
struct EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017  : public DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226
{
	// Google.Protobuf.Reflection.EnumDescriptorProto Google.Protobuf.Reflection.EnumDescriptor::proto
	EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* ___proto_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.EnumDescriptor::containingType
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___containingType_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptor> Google.Protobuf.Reflection.EnumDescriptor::values
	RuntimeObject* ___values_5;
	// System.Type Google.Protobuf.Reflection.EnumDescriptor::clrType
	Type_t* ___clrType_6;
};

// Google.Protobuf.Reflection.FieldDescriptor
struct FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3  : public DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226
{
	// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.FieldDescriptor::enumType
	EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017* ___enumType_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::extendeeType
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___extendeeType_4;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::messageType
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___messageType_5;
	// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::fieldType
	int32_t ___fieldType_6;
	// System.String Google.Protobuf.Reflection.FieldDescriptor::propertyName
	String_t* ___propertyName_7;
	// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::accessor
	RuntimeObject* ___accessor_8;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___U3CContainingTypeU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::<ContainingOneof>k__BackingField
	OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* ___U3CContainingOneofU3Ek__BackingField_10;
	// System.String Google.Protobuf.Reflection.FieldDescriptor::<JsonName>k__BackingField
	String_t* ___U3CJsonNameU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.FieldDescriptorProto Google.Protobuf.Reflection.FieldDescriptor::<Proto>k__BackingField
	FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* ___U3CProtoU3Ek__BackingField_12;
	// Google.Protobuf.Extension Google.Protobuf.Reflection.FieldDescriptor::<Extension>k__BackingField
	Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* ___U3CExtensionU3Ek__BackingField_13;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Google.Protobuf.Reflection.MapFieldAccessor
struct MapFieldAccessor_tB3A1854320BC037636B8627B994086628E6E1D1D  : public FieldAccessorBase_tBE53EBCC744C9FFB54B2843312ECD374D519044F
{
};

// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866  : public DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226
{
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.MessageDescriptor::extensionSetIsInitialized
	Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* ___extensionSetIsInitialized_7;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* ___U3CProtoU3Ek__BackingField_8;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_9;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* ___U3CParserU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___U3CContainingTypeU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* ___U3CFieldsU3Ek__BackingField_12;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::<Extensions>k__BackingField
	ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* ___U3CExtensionsU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_15;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_16;
	// System.Int32 Google.Protobuf.Reflection.MessageDescriptor::<RealOneofCount>k__BackingField
	int32_t ___U3CRealOneofCountU3Ek__BackingField_17;
};

struct MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___WellKnownTypeNames_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// Google.Protobuf.Reflection.MethodDescriptor
struct MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4  : public DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226
{
	// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::proto
	MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* ___proto_3;
	// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.MethodDescriptor::service
	ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* ___service_4;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::inputType
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___inputType_5;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::outputType
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___outputType_6;
};

// Google.Protobuf.Reflection.OneofDescriptor
struct OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094  : public DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226
{
	// Google.Protobuf.Reflection.OneofDescriptorProto Google.Protobuf.Reflection.OneofDescriptor::proto
	OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* ___proto_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::containingType
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___containingType_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::fields
	RuntimeObject* ___fields_5;
	// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::accessor
	OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* ___accessor_6;
	// System.Boolean Google.Protobuf.Reflection.OneofDescriptor::<IsSynthetic>k__BackingField
	bool ___U3CIsSyntheticU3Ek__BackingField_7;
};

// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Google.Protobuf.Reflection.OriginalNameAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean Google.Protobuf.Reflection.OriginalNameAttribute::<PreferredAlias>k__BackingField
	bool ___U3CPreferredAliasU3Ek__BackingField_1;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// Google.Protobuf.Reflection.RepeatedFieldAccessor
struct RepeatedFieldAccessor_tC0768EB80A9E4732FAD7110F5C87782828B919A6  : public FieldAccessorBase_tBE53EBCC744C9FFB54B2843312ECD374D519044F
{
};

// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43  : public DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226
{
	// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::proto
	ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* ___proto_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor> Google.Protobuf.Reflection.ServiceDescriptor::methods
	RuntimeObject* ___methods_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10  : public FieldAccessorBase_tBE53EBCC744C9FFB54B2843312ECD374D519044F
{
	// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.SingleFieldAccessor::setValueDelegate
	Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0* ___setValueDelegate_2;
	// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.SingleFieldAccessor::clearDelegate
	Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* ___clearDelegate_3;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.SingleFieldAccessor::hasDelegate
	Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* ___hasDelegate_4;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_t34D3B9245AF822060F2F7487F9D85B192738D41B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t34D3B9245AF822060F2F7487F9D85B192738D41B__padding[44];
	};
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl
struct BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4  : public EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl
struct BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF  : public EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl
struct BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC  : public EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl
struct BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398  : public EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBC1BF017181EDDC9AFB47495F8DA2758E7F1A03B  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tBC1BF017181EDDC9AFB47495F8DA2758E7F1A03B_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::1EFF1891409D680B30DE202BD7A16F945ED09F02601C0E7B90FD917BE1162300
	__StaticArrayInitTypeSizeU3D44_t34D3B9245AF822060F2F7487F9D85B192738D41B ___1EFF1891409D680B30DE202BD7A16F945ED09F02601C0E7B90FD917BE1162300_0;
};

// Google.Protobuf.ByteString
struct ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6  : public RuntimeObject
{
	// System.ReadOnlyMemory`1<System.Byte> Google.Protobuf.ByteString::bytes
	ReadOnlyMemory_1_tFB6935B544E2E4D0A33E7E296CE7120CD0C37844 ___bytes_1;
};

struct ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_StaticFields
{
	// Google.Protobuf.ByteString Google.Protobuf.ByteString::empty
	ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6* ___empty_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Google.Protobuf.Reflection.DescriptorValidationException
struct DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC  : public Exception_t
{
	// System.String Google.Protobuf.Reflection.DescriptorValidationException::name
	String_t* ___name_18;
	// System.String Google.Protobuf.Reflection.DescriptorValidationException::description
	String_t* ___description_19;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// System.Action`1<Google.Protobuf.IMessage>
struct Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<Google.Protobuf.IMessage,System.Object>
struct Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>
struct Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.FieldDescriptorProto,System.Boolean>
struct Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Boolean>
struct Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Int32>
struct Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Object>
struct Func_2_t01A45D28F5BAF6BDEE002EB4222A30A74B6CE946  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>
struct IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>
struct IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>
struct IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>
struct IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>
struct IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED  : public RuntimeArray
{
	ALIGN_FIELD (8) GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* m_Items[1];

	inline GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* value)
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110  : public RuntimeArray
{
	ALIGN_FIELD (8) Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* m_Items[1];

	inline Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Extension_t018320402D6776101851CAB78A7B81D89AEB45CD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Extension_t018320402D6776101851CAB78A7B81D89AEB45CD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.FieldDescriptor[]
struct FieldDescriptorU5BU5D_tBD048533FF07A549664BDB1823BF62E72E67A74D  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* m_Items[1];

	inline FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tB8E7D5430A1D0CFF968012BBF8C0760169259E90  : public RuntimeArray
{
	ALIGN_FIELD (8) FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* m_Items[1];

	inline FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_tB5A00ED4D833F1CC2866805E782DC830E16E36C2  : public RuntimeArray
{
	ALIGN_FIELD (8) MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* m_Items[1];

	inline MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedConverter_2__ctor_m8C7640A698136D13339A572D32871FCEC1C2F362_gshared (IndexedConverter_2_tB58456730034618830A90FBF08519615C7845C6F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<System.Object,System.Object>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m27A0CE0EDDC29DBC991FA036E3F2C0032598A4C7_gshared (RuntimeObject* ___input0, IndexedConverter_2_tB58456730034618830A90FBF08519615C7845C6F* ___converter1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___keySelector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m96973475803B2B44481AF891D0B2AB063B5D4CDA_gshared (ReadOnlyDictionary_2_tA5E205F3BBEB6B67DBCA3C316E87352486DFF1C2* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m759EB5DCD1C2408B76905255B8EAF9019C4A40CD_gshared_inline (RepeatedField_1_t33BF0A8B0555D4DEC49FF383CDDE959709150A74* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorPool_FindSymbol_TisRuntimeObject_mDD95678DAA90503005FE0585A431B3D7DA644BDB_gshared (DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* __this, String_t* ___fullName0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<System.Object>::get_ValuesByNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ExtensionSet_1_get_ValuesByNumber_m839D2F7D18061DC4D5B2D269B8EEC1D4D69498B5_gshared_inline (ExtensionSet_1_tA05358208E9C70D382AD4E4E52D8E69F9BF19EE4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoPreconditions_CheckNotNull_TisRuntimeObject_m0FB9D47CAC40B9BEB6800DAE57F7F3A2998ADE17_gshared (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisRuntimeObject_mDB98B5584F947FF881A8A3A9CCFC2C4FEE953012_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36E57F5CFE7C47A7670FE63275CFF10474F42159_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC10D6A4D3E6E9C8B10A1C58203E4508C346EB0DC_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCD4BA47215A551676E653D6F822E0209D14C241B_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB9F5DF6A15A1F27E4C18C6D73A18CAF5FF13A6D9_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m318BDC552B12F6EAE5C096949129E05A3B63A47D_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Double>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF35EC5F7627708BA2FD4BEBB88EE862D536F6EAF_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC53EDBF958A0A911A80C12ADCAC8F76D57651A8B_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF0A9E4E71BF0AA5AD420925A87BA34D05BF9C6E9_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_mA3E841EF2CB08E1300CA08D8AB9521FA758B657C_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mDF899906C2E9DCA9B26BBDE9E77EC655B35E4373_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m60A52EBF2D50399A88FB364005B6AD5AE2ED0165_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m72BFCF2DE965F0D168DB5C9F80FB817099ACF43F_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Double>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m565EC6F80080BA80E7CA5502630AB20D0ACC040D_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Boolean>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mD746600CDA2403F4F54C1570C45785DF3B5366A9_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB3003ED163B9CE78CB86EBA348FBFF55428D4AE1_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_gshared (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_gshared (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* GeneratedClrTypeInfo_get_NestedTypes_mC42B07E7E473D4AFF1403F8461C179DC7A9E771D_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.ctor(Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__ctor_m6980D0ADFCF03CD5DA38FA066A8FB12318369D4F (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___parent2, int32_t ___typeIndex3, GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* ___generatedCodeInfo4, const RuntimeMethod* method) ;
// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedEnums()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mC6336935A16759B50F5A3E423DA0AB0FB0C771B0_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.EnumDescriptor::.ctor(Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumDescriptor__ctor_mA0E1699FAAC4FCD724621DBD9F0EC52D9C01D74A (EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017* __this, EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___parent2, int32_t ___index3, Type_t* ___clrType4, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::.ctor(Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m8ED6BCC9879B21F0C00AB7E2C9109E9238F99C14 (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0A512E70511B617466538EF2C704A15B2641CE37 (U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Name_mC4D0E40FF43F67DF49DA01B628F4F39331E08387 (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Extension Google.Protobuf.Reflection.FieldDescriptor::get_Extension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* FieldDescriptor_get_Extension_mF7D85E98A9357A689E821BE09497D970D440189D_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::set_ClrType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_mA39F8368309F1B9F4549415C16FC97D17A76E785_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mB12BADFF97605C724C62EA3680AA167677FDAFC2 (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, Type_t* ___clrType0, MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* ___extensions5, GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* ___nestedTypes6, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mB41DAD49A9EC3CB7DFDBAB3F7C65117D20978375 (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, Type_t* ___clrType0, MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* ___nestedTypes5, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldAccessorBase::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldAccessorBase__ctor_mD3B117BF47BBDD5990D5A37E4289DAE2E21A7239 (FieldAccessorBase_tBE53EBCC744C9FFB54B2843312ECD374D519044F* __this, PropertyInfo_t* ___property0, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___descriptor1, const RuntimeMethod* method) ;
// System.Object Google.Protobuf.Reflection.FieldAccessorBase::GetValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldAccessorBase_GetValue_mA21ECE16F4C057EA81FA58FF84DA4727772F93E0 (FieldAccessorBase_tBE53EBCC744C9FFB54B2843312ECD374D519044F* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m276264D71919CDD4D2D4D4BBE5490CF4D337DF62 (U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.DescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptorProto_get_Name_m62663DF6189E02C3164FA3B5499C010388722E20 (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::ComputeFullName(Google.Protobuf.Reflection.MessageDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_ComputeFullName_m4C32A39C9FE38EF762A3DB6FE4A777B6BD631ADF (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___parent0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorBase::.ctor(Google.Protobuf.Reflection.FileDescriptor,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorBase__ctor_mED7E1B63CB9FC50B03B552A29E453444A267EC3C (DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226* __this, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file0, String_t* ___fullName1, int32_t ___index2, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* GeneratedClrTypeInfo_get_Parser_m3D28CA17551D394EC13DDC2773AC6B10327E8796_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) ;
// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_ClrType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m8760BCA5D62B73A4FF7DAE8FB782F63E08B69C6D_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_OneofDecl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tDEACD5DB2A56117C8938DE66C85F0906BBA55F20* DescriptorProto_get_OneofDecl_m16312F7D125565170D0D9EECB6C03F299CCD5D64_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_mDA03682A434687CC6609B709CBC48386D067E091 (IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m8C7640A698136D13339A572D32871FCEC1C2F362_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4_TisOneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094_m542DB4E32A1A2C3D93002FB50ADE7544904D3F93 (RuntimeObject* ___input0, IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m27A0CE0EDDC29DBC991FA036E3F2C0032598A4C7_gshared)(___input0, ___converter1, method);
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_Oneofs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_mB36AC248D3195BCD4B2E3DF296648AF41852041B_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.OneofDescriptor::get_IsSynthetic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OneofDescriptor_get_IsSynthetic_m3EBC2B8491206FAB6452FDFF837397162B485E3E_inline (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_NestedType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tEF2F54ED9A8ADDF0DCD8F00400EFC350A6FEAD1F* DescriptorProto_get_NestedType_m1C4908AC5CF02B379DB558FCACEA139540A3F26D_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m8899F10998AD1D9F55D057385635349F512FDD31 (IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m8C7640A698136D13339A572D32871FCEC1C2F362_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_m6D97E5A60E6DAE56E9CF16D58F62EE9CA490DE0D (RuntimeObject* ___input0, IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m27A0CE0EDDC29DBC991FA036E3F2C0032598A4C7_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_EnumType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t71A0AAE53E51734430BFDE14A6B8663D02F9D240* DescriptorProto_get_EnumType_m0FCCFAEF4ED4972C7A1F504F5AB594AEC2CAF251_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m8CBB6F28443DBC275975A01F1BAF34278B4290C2 (IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m8C7640A698136D13339A572D32871FCEC1C2F362_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4_TisEnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_m786A479FA5064C509189F23691E61C152E5F1D59 (RuntimeObject* ___input0, IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m27A0CE0EDDC29DBC991FA036E3F2C0032598A4C7_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Extensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* GeneratedClrTypeInfo_get_Extensions_m93425C1090E8654C2D749D785623F15D82FCB82E_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ExtensionCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Extension[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionCollection__ctor_m189B7DE9430F084A2CA53E778B3A7D56ED98B0CD (ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* __this, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___message0, ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* ___extensions1, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_Field()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA* DescriptorProto_get_Field_m1316408B55C4ACDD66F5F522BF41284642604645_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_mB7CB68BD5B3D4D00FEE778860F1F7D18A49F6A4A (IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m8C7640A698136D13339A572D32871FCEC1C2F362_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_mBD60ACD171989A76028E462665958F79DFE0C19F (RuntimeObject* ___input0, IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m27A0CE0EDDC29DBC991FA036E3F2C0032598A4C7_gshared)(___input0, ___converter1, method);
}
// System.Void System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m90D9DF75CEBAAD0B472DECBEE7113AC51ED055B1 (Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m83486AECEE236A81A119D27C88FB3BF6ED66B18D (RuntimeObject* ___source0, Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared)(___source0, ___keySelector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Google.Protobuf.Reflection.FieldDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>)
inline FieldDescriptorU5BU5D_tBD048533FF07A549664BDB1823BF62E72E67A74D* Enumerable_ToArray_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m131B54D265EF895987614EDDE728C8207D9D7889 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  FieldDescriptorU5BU5D_tBD048533FF07A549664BDB1823BF62E72E67A74D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m21472BEF730F6D2142F60EF0490FA32E03026314 (ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared)(__this, ___list0, method);
}
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::CreateJsonFieldMap(System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951* MessageDescriptor_CreateJsonFieldMap_m65228638AD3A152B248078B48FEE02CBD1FDB157 (RuntimeObject* ___fields0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::get_DescriptorPool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorPool::AddSymbol(Google.Protobuf.Reflection.IDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorPool_AddSymbol_mD3D2D83D042E8A90C5743D84D798E6AF0E364358 (DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* __this, RuntimeObject* ___descriptor0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldCollection__ctor_m42FEE65DAB79D44EBEB58B69B16A56DF98526291 (FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* __this, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___messageDescriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::.ctor()
inline void Dictionary_2__ctor_m588D015E4E6AB63B61FD84ABBD631A65102EEAD3 (Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m58FEC00F353B8358EB846B17C21DB741A46DD2AF (Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE* __this, String_t* ___key0, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE*, String_t*, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String Google.Protobuf.Reflection.FieldDescriptor::get_JsonName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_JsonName_mE9AFE054721CFB786C8D421CD8E06225B5AA1342_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m205ED779047A8F433B79DDC137D8ADF5F37EFA37 (ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951*, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m96973475803B2B44481AF891D0B2AB063B5D4CDA_gshared)(__this, ___dictionary0, method);
}
// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* MessageDescriptor_get_Proto_m8FF678DAE55C2F06D14F924BA9DCBEAA8E486D8D_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_mDA9150A9CDE6DBC665EDDC9D5592C8D377DEA0C8_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_EnumTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_mC6064EEB7FBC228247FE5150E8762BA7D04379D7_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::get_ExtensionRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620* DescriptorProto_get_ExtensionRange_m1F133A8F6C9C99E7FCCD40996F2782C5826FD166_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>::get_Count()
inline int32_t RepeatedField_1_get_Count_mFED0B0748D63F5E388545C467B7F5CD8BAD3AF79_inline (RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620*, const RuntimeMethod*))RepeatedField_1_get_Count_m759EB5DCD1C2408B76905255B8EAF9019C4A40CD_gshared_inline)(__this, method);
}
// System.Type Google.Protobuf.Reflection.MessageDescriptor::get_ClrType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mDE0A2FB92672D080739D93F8BF77E72C89D4956B_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateIsInitializedCaller(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* ReflectionUtil_CreateIsInitializedCaller_m72002140AAFACD5AC58FF98EAA8412327109C9AF (Type_t* ___msg0, const RuntimeMethod* method) ;
// TResult System.Func`2<Google.Protobuf.IMessage,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m2F487BF3E02BA71134AC5FEC56C002FDC4F67518_inline (Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___arg0, method);
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::get_File()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline (DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Package()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Package_mB7B6A5CC9DEC881BCF4FEF034DBC3A9FA0DBE9ED (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.String Google.Protobuf.Reflection.DescriptorBase::get_FullName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptorBase_get_FullName_mA48184ACD7737D0608F64040E4854024064FC2C4_inline (DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<Google.Protobuf.Reflection.FieldDescriptor>(System.String)
inline FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* DescriptorPool_FindSymbol_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m98B3600BEF7410D2FF0AE01C283FF02837625C59 (DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* __this, String_t* ___fullName0, const RuntimeMethod* method)
{
	return ((  FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* (*) (DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F*, String_t*, const RuntimeMethod*))DescriptorPool_FindSymbol_TisRuntimeObject_mDD95678DAA90503005FE0585A431B3D7DA644BDB_gshared)(__this, ___fullName0, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.DescriptorPool::FindFieldByNumber(Google.Protobuf.Reflection.MessageDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* DescriptorPool_FindFieldByNumber_mD2B452442B13352203D3327CD2E004F55AC3E018 (DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* __this, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___messageDescriptor0, int32_t ___number1, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.DescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* DescriptorProto_get_Options_mC750170555FF8C5E7C22602EC182FEB5299EC6A6_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions>::get_ValuesByNumber()
inline Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ExtensionSet_1_get_ValuesByNumber_m903ACBDD62912505D5EC4587186B2EDDF9EA50B1_inline (ExtensionSet_1_t8AFBC47CC3D9634C51CE6CF7C73174227BEC7041* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* (*) (ExtensionSet_1_t8AFBC47CC3D9634C51CE6CF7C73174227BEC7041*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_m839D2F7D18061DC4D5B2D269B8EEC1D4D69498B5_gshared_inline)(__this, method);
}
// System.Void Google.Protobuf.Reflection.CustomOptions::.ctor(System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.IExtensionValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomOptions__ctor_mAF131F32F793FFA229F14EB8061155803B4D4D84 (CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7* __this, RuntimeObject* ___values0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.MessageOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* MessageOptions_Clone_m4D7816ECB397BC23F54D8201ABDA127CBAF78228 (MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor_CrossLink_m14D367C9156209FB6484A40150D5314CB41AAF92 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor_CrossLink_mDFB87602D9D2E28D625C1E8DB241DC36F5FB96D4 (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor_CrossLink_mFA0CECDB2FA56DC4F11E7FEC6F6B5B43196408A2 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::get_Extensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* MessageDescriptor_get_Extensions_mC099F48F955CB4B01FA1617FAC6D398B75B213E9_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ExtensionCollection::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionCollection_CrossLink_m2F481B28AF27BDCAB8FAEB4A3585BB3393D89844 (ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* MessageDescriptor_FindFieldByNumber_m4F6176B35E92D139EEB4D52B4F98DC0324F8AC0C (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, int32_t ___number0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* MessageDescriptor_FindFieldByName_mD8C9123ECE5B7E6CE38A52130E58111742CEEEDA (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_OneofNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_m99BDCF6A2E438F03AE9CFDD735A9C21AA1FC1790_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor::.ctor(Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor__ctor_m59075E983024167437413D8BD2E18FB7241BEB30 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___parent2, int32_t ___index3, String_t* ___clrName4, const RuntimeMethod* method) ;
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_PropertyNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m5CFFB4520E6AA5050893D38BAD18AE74D4BA8EC1_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldDescriptor::.ctor(Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String,Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor__ctor_mF377396441600A36FCD8A85C8F24C2FBE5AB6B6C (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___parent2, int32_t ___index3, String_t* ___propertyName4, Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* ___extension5, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8D1D2820477DEB818B86F5889842309CB9692684 (U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.FieldDescriptor::get_FieldNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldNumber_mFB3195F01383AB142E74BCE669B5B19C26AE2BF4 (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::get_ClientStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptorProto_get_ClientStreaming_m51BFBED0B741F8D7275A390F34F99C8D3824E039 (MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::get_ServerStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptorProto_get_ServerStreaming_m0D63184D9ACD4FD58DF98E1B646A148FE0600A7C (MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* MethodDescriptor_get_Proto_mBCCAB8F855DD004EAA6289C4EE21AED21D5F0691_inline (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* MethodDescriptorProto_get_Options_m82072F67608D54843974E1F7080A28571B709D51_inline (MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions>::get_ValuesByNumber()
inline Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ExtensionSet_1_get_ValuesByNumber_mDA4A01A510CD576F8AEC5C529E72E48BF7412A30_inline (ExtensionSet_1_tFA17AB50086B62AF47B08709FFD7A23C02C151F5* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* (*) (ExtensionSet_1_tFA17AB50086B62AF47B08709FFD7A23C02C151F5*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_m839D2F7D18061DC4D5B2D269B8EEC1D4D69498B5_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* MethodOptions_Clone_mF70D5FBD9C207E07DAC5A461DE853EBFF945AAE9 (MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_Name_mA3F013E05B9504C85FDF43C4696A7BFC14F52866 (MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_InputType_mD2CCC347C23AD089AECF7703E73AFC15BD9E9F67 (MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.IDescriptor Google.Protobuf.Reflection.DescriptorPool::LookupSymbol(System.String,Google.Protobuf.Reflection.IDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorPool_LookupSymbol_m2CCCC359586D4B8A102E8E5B91D87C031E3FE323 (DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* __this, String_t* ___name0, RuntimeObject* ___relativeTo1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorValidationException::.ctor(Google.Protobuf.Reflection.IDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorValidationException__ctor_m4FF2090F4C388A11E74271DD17AEF8DC05922780 (DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC* __this, RuntimeObject* ___problemDescriptor0, String_t* ___description1, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_OutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_OutputType_mDF59A6E7816B21CEC46C271E5080E443EA1B3F6D (MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageInt32(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* ReflectionUtil_CreateFuncIMessageInt32_m951DB7EA8353AE171F8E9775D471BD0B9CD81216 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessage(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* ReflectionUtil_CreateActionIMessage_mA8FFAC3A1E1B758C56D701F1D4D9A5CC6131DA84 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor::.ctor(Google.Protobuf.Reflection.OneofDescriptor,System.Func`2<Google.Protobuf.IMessage,System.Int32>,System.Action`1<Google.Protobuf.IMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor__ctor_mB7CB47CB36C71F2A8BBDBE4D3318D15E4330ABE7 (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* __this, OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* ___descriptor0, Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* ___caseDelegate1, Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* ___clearDelegate2, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m0E4F6234FB7DC2A2044C7CE8A095181A3228277E (U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Protobuf.IMessage,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAECE9AEAF14938FAE0804D3112712C31D7941417 (Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<Google.Protobuf.IMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4B015901F32758EAB8712DD786AE591B5ED7D006 (Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<Google.Protobuf.IMessage>::Invoke(T)
inline void Action_1_Invoke_m3E31E4E9C3B83076E6F7F20F3F7CEC37F564A4C4_inline (Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// TResult System.Func`2<Google.Protobuf.IMessage,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m4B2BF3C8E8E4D2C0DF911A08A94AA689027C8896_inline (Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline)(__this, ___arg0, method);
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::get_Descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* OneofAccessor_get_Descriptor_mD49EC5D3EFBE29CB9C35EFCD240F972F998251C0_inline (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::get_ContainingType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* OneofDescriptor_get_ContainingType_m7924C0CCDE65B9F36AD278ABDC1F626C2A82740E_inline (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::get_Fields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_mC655FCD01A24E61C49EB7A28F175A6C908EC58BE_inline (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::get_Accessor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FieldDescriptor_get_Accessor_mA9F2054D50061283ED7524317D96942F4ADA8D65_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mA936BB6DB2B936F8BE2A444EFF9A456B3324418B (U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.OneofDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneofDescriptorProto_get_Name_mA3965E08427C8E845AF9A17025413A05FCA75D4D (OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Protobuf.Reflection.FieldDescriptorProto,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m512180D27B37F15FD3D3F473A0ED82A0117182C8 (Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<Google.Protobuf.Reflection.FieldDescriptorProto>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* Enumerable_FirstOrDefault_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_m64D8BE715A2B749E0574597D612A4B76A790BD7B (RuntimeObject* ___source0, Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A* ___predicate1, const RuntimeMethod* method)
{
	return ((  FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* (*) (RuntimeObject*, Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::get_Proto3Optional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptorProto_get_Proto3Optional_m5DF7BD4D2D3B307F09974BF54030BEDE206F18C8 (FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::CreateAccessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* OneofDescriptor_CreateAccessor_mE66785E44B5D8412E5A30F590B493F93A39E0E64 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, String_t* ___clrName0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* OneofDescriptorProto_get_Options_mB8140ABB677F3D2DB21BD203EED211927504B63F_inline (OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions>::get_ValuesByNumber()
inline Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ExtensionSet_1_get_ValuesByNumber_mCF80BFC76CAA9EE86A4D2D7334BC2C1F9995DC89_inline (ExtensionSet_1_t94C0A6D27A4AE38EF6EB0A3B44EFC2D15390152D* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* (*) (ExtensionSet_1_t94C0A6D27A4AE38EF6EB0A3B44EFC2D15390152D*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_m839D2F7D18061DC4D5B2D269B8EEC1D4D69498B5_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* OneofOptions_Clone_m261AB5E9B5B3A9E652F527804F61FFE43F408F69 (OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>::.ctor()
inline void List_1__ctor_m2CCC951BE5356AF018AC6D20BCA5B421C1E750EF (List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::get_Fields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* MessageDescriptor_get_Fields_m0605E8908D26B72265071D66F7D1798943E005B8_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InDeclarationOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InDeclarationOrder_m49140F71B48F80C00CA2FF25BD73D69B4D585F02 (FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_ContainingOneof()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* FieldDescriptor_get_ContainingOneof_mAD9A56A20B0FD569E496F3809EEA048A0B35BE12_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>::Add(T)
inline void List_1_Add_mF949D7D782453A987229748A26F2DFC684735B57_inline (List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9* __this, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9*, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForSyntheticOneof(Google.Protobuf.Reflection.OneofDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* OneofAccessor_ForSyntheticOneof_m0E34C0B6576671C196DDA48317FA1A9BF2B24248 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* ___descriptor0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_mD077C524E99EF7A3C977705217D3A88AB4DE5C13 (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForRegularOneof(Google.Protobuf.Reflection.OneofDescriptor,System.Reflection.PropertyInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* OneofAccessor_ForRegularOneof_mD0DA269AADDB4CB841CEAD730E6FB592E6B72162 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* ___descriptor0, PropertyInfo_t* ___caseProperty1, MethodInfo_t* ___clearMethod2, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::get_HasOneofIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptorProto_get_HasOneofIndex_m0116F63E52C57BD0F840F1ABE94C51B13BF0139B (FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::get_OneofIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptorProto_get_OneofIndex_m6A15837DFDDD8E5949A7DD43D75A21714011628D (FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.String>(T,System.String)
inline String_t* ProtoPreconditions_CheckNotNull_TisString_t_m06673E671A5ADECBE459106EA93632A686DEBA17 (String_t* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m0FB9D47CAC40B9BEB6800DAE57F7F3A2998ADE17_gshared)(___value0, ___name1, method);
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m7AB2000F20A48610A7371031906FADF8F6F7673A_inline (OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_PreferredAlias(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_mBA1221E2C67E7CC561A3309C1CC18F540549368B_inline (OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::CheckCanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_m467926889D1EE3821AA91482F9B89AC3AC55064F (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.String>()
inline void ReflectionUtil_ForceInitialize_TisString_t_mA1ED4DAFC872FFC9BFED4D390124A97BDBD821A9 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisRuntimeObject_mDB98B5584F947FF881A8A3A9CCFC2C4FEE953012_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32>()
inline void ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36E57F5CFE7C47A7670FE63275CFF10474F42159 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36E57F5CFE7C47A7670FE63275CFF10474F42159_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int64>()
inline void ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC10D6A4D3E6E9C8B10A1C58203E4508C346EB0DC (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC10D6A4D3E6E9C8B10A1C58203E4508C346EB0DC_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt32>()
inline void ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCD4BA47215A551676E653D6F822E0209D14C241B (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCD4BA47215A551676E653D6F822E0209D14C241B_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt64>()
inline void ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB9F5DF6A15A1F27E4C18C6D73A18CAF5FF13A6D9 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB9F5DF6A15A1F27E4C18C6D73A18CAF5FF13A6D9_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Single>()
inline void ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m318BDC552B12F6EAE5C096949129E05A3B63A47D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m318BDC552B12F6EAE5C096949129E05A3B63A47D_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Double>()
inline void ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF35EC5F7627708BA2FD4BEBB88EE862D536F6EAF (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF35EC5F7627708BA2FD4BEBB88EE862D536F6EAF_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Boolean>()
inline void ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC53EDBF958A0A911A80C12ADCAC8F76D57651A8B (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC53EDBF958A0A911A80C12ADCAC8F76D57651A8B_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int32>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF0A9E4E71BF0AA5AD420925A87BA34D05BF9C6E9 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF0A9E4E71BF0AA5AD420925A87BA34D05BF9C6E9_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int64>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_mA3E841EF2CB08E1300CA08D8AB9521FA758B657C (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_mA3E841EF2CB08E1300CA08D8AB9521FA758B657C_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt32>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mDF899906C2E9DCA9B26BBDE9E77EC655B35E4373 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mDF899906C2E9DCA9B26BBDE9E77EC655B35E4373_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt64>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m60A52EBF2D50399A88FB364005B6AD5AE2ED0165 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m60A52EBF2D50399A88FB364005B6AD5AE2ED0165_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Single>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m72BFCF2DE965F0D168DB5C9F80FB817099ACF43F (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m72BFCF2DE965F0D168DB5C9F80FB817099ACF43F_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Double>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m565EC6F80080BA80E7CA5502630AB20D0ACC040D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m565EC6F80080BA80E7CA5502630AB20D0ACC040D_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Boolean>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mD746600CDA2403F4F54C1570C45785DF3B5366A9 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mD746600CDA2403F4F54C1570C45785DF3B5366A9_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<Google.Protobuf.Reflection.ReflectionUtil/SampleEnum>()
inline void ReflectionUtil_ForceInitialize_TisSampleEnum_t738031E740377070D5623E89A66EC87469C2FB6A_mFF32A2AC2592F3F7B6EF0BE4D6D19F454393596F (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB3003ED163B9CE78CB86EBA348FBFF55428D4AE1_gshared)(method);
}
// Google.Protobuf.Reflection.ReflectionUtil/SampleEnum Google.Protobuf.Reflection.ReflectionUtil::SampleEnumMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectionUtil_SampleEnumMethod_mF2FFA6D95DA02C27AE9653413B667D1E8FBD3D4A (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::GetReflectionHelper(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_GetReflectionHelper_m4357951AA9383C83968C42E2C9805AD68B046CA7 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m978D6F745618B691D632E5D6E4AB8840541FC858 (Type_t* ___type0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m24217FFFBD7135FCDD7847EE2DD9949B4609906F (U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptorProto_get_Name_mA1196A0B2532DBECA32AB528865DD5DD4AD86660 (ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t23CA0F67040B1B1AA6C4498022BA5CD40FD87B85* ServiceDescriptorProto_get_Method_mB794C6E023EBA2C7832607851BAA9004DB2B5706_inline (ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_mFCA1426E3D13670FFA8AA7399429FDFE86E27F25 (IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m8C7640A698136D13339A572D32871FCEC1C2F362_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_mEED10CD9A6911BB7B385BE2C0A27BB8227F3B5F6 (RuntimeObject* ___input0, IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m27A0CE0EDDC29DBC991FA036E3F2C0032598A4C7_gshared)(___input0, ___converter1, method);
}
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<Google.Protobuf.Reflection.MethodDescriptor>(System.String)
inline MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* DescriptorPool_FindSymbol_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_m3783F3C06BF3723749D752D5B1ED53DD9B7F8542 (DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* __this, String_t* ___fullName0, const RuntimeMethod* method)
{
	return ((  MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* (*) (DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F*, String_t*, const RuntimeMethod*))DescriptorPool_FindSymbol_TisRuntimeObject_mDD95678DAA90503005FE0585A431B3D7DA644BDB_gshared)(__this, ___fullName0, method);
}
// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* ServiceDescriptor_get_Proto_m4C9694FC0013513FFD4C339F481202DC6F54A9B1_inline (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* ServiceDescriptorProto_get_Options_m6DE652CD2E5E237A808257748339EEC422F0DB3A_inline (ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions>::get_ValuesByNumber()
inline Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ExtensionSet_1_get_ValuesByNumber_mCB641E5E5B780962B2C447CCA498E0E67C638905_inline (ExtensionSet_1_t7F8B885AD0837CF76A8B264A7A1AFBCEA7B10EA8* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* (*) (ExtensionSet_1_t7F8B885AD0837CF76A8B264A7A1AFBCEA7B10EA8*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_m839D2F7D18061DC4D5B2D269B8EEC1D4D69498B5_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* ServiceOptions_Clone_mD3869A09995A57D0BA426C82FD3A70D71C8FF80B (ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MethodDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor_CrossLink_mBE18855EE33145A16BD069B0F9E4B4CC610AF972 (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MethodDescriptor::.ctor(Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.ServiceDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor__ctor_m5AB65326D330536E078E9397DE6CFC581B68FBB5 (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* ___parent2, int32_t ___index3, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2A2ABF0341F7C6972B75304F7366CBA69F99F67C (U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0* ReflectionUtil_CreateActionIMessageObject_mD497A6A7FF54331196BE103806C92B963CEEEB36 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::get_FieldType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldType_mA6AAE2D18452D92D0ED4292C12CF1787E838A170_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Protobuf.IMessage,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m33B07D3B7D12BEA38ED424D5A19B1A91CA8A4A0A (Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_RealContainingOneof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* FieldDescriptor_get_RealContainingOneof_m0A1344203C0E28A07907291446979344E259E4EA (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m2C5BE6EA467C08D632E1D3FFF7CA802380EBC7A2 (U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::get_Accessor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* OneofDescriptor_get_Accessor_mFD8F72DCDD5290916D3EA15E1B61BE88A4615211_inline (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.Syntax Google.Protobuf.Reflection.FileDescriptor::get_Syntax()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FileDescriptor_get_Syntax_mE2805A7CB3C2A521559E48369408101228694536_inline (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptorProto Google.Protobuf.Reflection.FieldDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* FieldDescriptor_get_Proto_mAF61ACC27177C740DAA6B48F87092257ACC7F334_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Reflection.RuntimeReflectionExtensions::GetRuntimeProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* RuntimeReflectionExtensions_GetRuntimeProperty_m8B8DEA120CC82BEDC0298B1DBFA4980AFEFB6625 (Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageBool(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* ReflectionUtil_CreateFuncIMessageBool_mACAF39380E9564E50A4DB2291569C662BA7C97B9 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.RuntimeReflectionExtensions::GetRuntimeMethod(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* RuntimeReflectionExtensions_GetRuntimeMethod_mC91D0D6D5A70AB4B5201F67718E3C5E276454C51 (Type_t* ___type0, String_t* ___name1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters2, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_m6CF4BFC153548BC9B96C0A170DEC0C4E6DF35DEB (U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// Google.Protobuf.ByteString Google.Protobuf.ByteString::get_Empty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6* ByteString_get_Empty_m2803BB517EB2079F887E53869BE46899B2D9AB9F_inline (const RuntimeMethod* method) ;
// System.Void System.Action`2<Google.Protobuf.IMessage,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_m0CDE1E78E0212B365BF9F5A1425A133918D65790_inline (Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.OneofAccessor::GetCaseFieldDescriptor(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* OneofAccessor_GetCaseFieldDescriptor_mC948A4FB54C2F1F4256170977C33CBA45D051EAD (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor_Clear_m52D09B039FBD35E252B21EDD031321ADF7552878 (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC9A8F141C1F2DD9CBE910DF1D8F03B0C1AF9841F (U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m7731859EEFDBA2A57CDF6FB58B29B24BD233CB93 (Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* __this, String_t* ___key0, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608*, String_t*, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* TypeRegistry_FromFiles_mC5D7C7CD54F88F0A08F7941E97277428281AB25F (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_mBB8C3535A64E52D9C8A6DACB04A4C2A5ED9AABAA (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m0FB9D47CAC40B9BEB6800DAE57F7F3A2998ADE17_gshared)(___value0, ___name1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mBC9E08451E2569FAB20386BE8DA32E5F43AFD94C (Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_mBD144D9A8B4395E54686D3F189989E5BFB993F13 (Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* __this, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___fileDescriptor0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* Builder_Build_m6D803737297EF476EED428A3D5BF8B2B573714B4 (Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* TypeRegistry_FromMessages_m7321611870404E29E1AD5DCBA094FFD425E44135 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_m920160A81741571724B418280012E98FA84E1747 (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m0FB9D47CAC40B9BEB6800DAE57F7F3A2998ADE17_gshared)(___value0, ___name1, method);
}
// System.Void System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF49195E842281AA87F265BA2D2BA4763A5C0233E (Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_TisFileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2_m627281073F0171842385C0B6162453BB4F22C9F2 (RuntimeObject* ___source0, Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::.ctor()
inline void Dictionary_2__ctor_m522D7B62EA78C3B618413FDDBEF3A9C685E9303F (Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_mD5B08F30494F9E931BA960321CE42CB0198BEA27 (TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* __this, Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* ___fullNameToMessageMap0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_Dependencies()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_m50251A9E6576BB3E83F86357D803DDBF12C9ED71_inline (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_mAFA1FC569B22442C5D558E1D8C0D8F5B7AB58410_inline (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_m53364FCA8D15954C8226D4880B7CC8F220D155B9 (Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* __this, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___messageDescriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m83499F3D1ED0F9C432B2BB5832B9D136EC82C5BD (Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* __this, String_t* ___key0, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608*, String_t*, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m034BCDE73611B58670415DD4DA61577A27A5B591 (U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_m5DA1C329CB63868255C466876EC2452B40E418A9 (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseDoubleEqualityComparerImpl__ctor_m9FA4C9C4765FFAA25C4929FA0D76E6312EB530D4 (BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseSingleEqualityComparerImpl__ctor_mDB0FEFC8587752D4C9E2C8746E75EABDFB19390D (BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableDoubleEqualityComparerImpl__ctor_m6EA71FADCD10D0CBCF2A83B5A23F66D4F581A0FF (BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableSingleEqualityComparerImpl__ctor_m13399C63AEE3DA937D6189052DB9B710B789D1BB (BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC* __this, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Double>::.ctor()
inline void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6 (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB*, const RuntimeMethod*))EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.ctor()
inline void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3 (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499*, const RuntimeMethod*))EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseDoubleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mB3150FEFE28F0F8C8C1354C667DE61E1D5CD8104_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>::.ctor()
inline void EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694*, const RuntimeMethod*))EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseSingleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mA085AADB399D6B96D8F7634E99566599AAE681B8_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>::.ctor()
inline void EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203*, const RuntimeMethod*))EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m61DDD6E15252FAE5053C75EBB2DDB8FAEA5B6116 (U3CU3Ec__DisplayClass2_0_t7AED420DF7836A6786AF6031D6A698D1CBA871B7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<.ctor>b__0(Google.Protobuf.Reflection.DescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m57A55E200FA74894745DE2BD697F4038800B45AC (U3CU3Ec__DisplayClass2_0_t7AED420DF7836A6786AF6031D6A698D1CBA871B7* __this, DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* ___message0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	RuntimeObject* G_B2_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B2_3 = NULL;
	DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	RuntimeObject* G_B1_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B1_3 = NULL;
	DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* G_B1_4 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	RuntimeObject* G_B3_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B3_3 = NULL;
	DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* G_B3_4 = NULL;
	{
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_0 = ___message0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = ___index1;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_3 = __this->___generatedCodeInfo_1;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = NULL;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = NULL;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_001d;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_5;
		L_5 = GeneratedClrTypeInfo_get_NestedTypes_mC42B07E7E473D4AFF1403F8461C179DC7A9E771D_inline(G_B2_0, NULL);
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_001d:
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_9 = (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)il2cpp_codegen_object_new(MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MessageDescriptor__ctor_m6980D0ADFCF03CD5DA38FA066A8FB12318369D4F(L_9, G_B3_4, G_B3_3, (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<.ctor>b__1(Google.Protobuf.Reflection.EnumDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__1_mF2690BA6D112957A148413F0CF5E36266F1F5F1C (U3CU3Ec__DisplayClass2_0_t7AED420DF7836A6786AF6031D6A698D1CBA871B7* __this, EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* ___enumType0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	RuntimeObject* G_B2_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B2_3 = NULL;
	EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	RuntimeObject* G_B1_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B1_3 = NULL;
	EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* G_B1_4 = NULL;
	Type_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	RuntimeObject* G_B3_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B3_3 = NULL;
	EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* G_B3_4 = NULL;
	{
		EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* L_0 = ___enumType0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = ___index1;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_3 = __this->___generatedCodeInfo_1;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = NULL;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = NULL;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((Type_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_001d;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5;
		L_5 = GeneratedClrTypeInfo_get_NestedEnums_mC6336935A16759B50F5A3E423DA0AB0FB0C771B0_inline(G_B2_0, NULL);
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Type_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_001d:
	{
		EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017* L_9 = (EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017*)il2cpp_codegen_object_new(EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EnumDescriptor__ctor_mA0E1699FAAC4FCD724621DBD9F0EC52D9C01D74A(L_9, G_B3_4, G_B3_3, (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<.ctor>b__2(Google.Protobuf.Reflection.ServiceDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__2_m5EB12371121F4149A7BCC1B79F4DAA949BE0361A (U3CU3Ec__DisplayClass2_0_t7AED420DF7836A6786AF6031D6A698D1CBA871B7* __this, ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* ___service0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* L_0 = ___service0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = ___index1;
		ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* L_3 = (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43*)il2cpp_codegen_object_new(ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ServiceDescriptor__ctor_m8ED6BCC9879B21F0C00AB7E2C9109E9238F99C14(L_3, L_0, L_1, L_2, NULL);
		return L_3;
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
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m854B135166B117696EA696CDF038C2C3D5CA4478 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* L_0 = (U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9*)il2cpp_codegen_object_new(U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0A512E70511B617466538EF2C704A15B2641CE37(L_0, NULL);
		((U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0A512E70511B617466538EF2C704A15B2641CE37 (U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Google.Protobuf.Reflection.FileDescriptor/<>c::<DeterminePublicDependencies>b__9_0(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CDeterminePublicDependenciesU3Eb__9_0_mEAA8C6365D5A0476948D07751224AD03036AF09D (U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* __this, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file0, const RuntimeMethod* method) 
{
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0 = ___file0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Name_mC4D0E40FF43F67DF49DA01B628F4F39331E08387(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllGeneratedExtensions>b__53_0(Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllGeneratedExtensionsU3Eb__53_0_mA691952B294A3A825CE3535A714E3EA29B2ED4CD (U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* __this, GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* ___t0, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_0 = ___t0;
		return (bool)((!(((RuntimeObject*)(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Google.Protobuf.Extension Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensions>b__54_0(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* U3CU3Ec_U3CGetAllDependedExtensionsU3Eb__54_0_m2A8763F6DD2908B9011A2DDDF5BC75618BE33325 (U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* __this, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___s0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_0 = ___s0;
		NullCheck(L_0);
		Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* L_1;
		L_1 = FieldDescriptor_get_Extension_mF7D85E98A9357A689E821BE09497D970D440189D_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensions>b__54_1(Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllDependedExtensionsU3Eb__54_1_m445101FF1256DD2941D06E8BDA536F5BCD634024 (U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* __this, Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* ___e0, const RuntimeMethod* method) 
{
	{
		Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* L_0 = ___e0;
		return (bool)((!(((RuntimeObject*)(Extension_t018320402D6776101851CAB78A7B81D89AEB45CD*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Google.Protobuf.Extension Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensionsFromMessage>b__55_0(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* U3CU3Ec_U3CGetAllDependedExtensionsFromMessageU3Eb__55_0_m3EA0A1BFB9C1DBE9B51F446E84831D41DA8B45DC (U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* __this, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___s0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_0 = ___s0;
		NullCheck(L_0);
		Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* L_1;
		L_1 = FieldDescriptor_get_Extension_mF7D85E98A9357A689E821BE09497D970D440189D_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensionsFromMessage>b__55_1(Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllDependedExtensionsFromMessageU3Eb__55_1_m2DCDA9509F6E90847036B412C973ACACD5785806 (U3CU3Ec_t82EF6B2229AA26F00A1BF24F75E8B4634532F8E9* __this, Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* ___e0, const RuntimeMethod* method) 
{
	{
		Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* L_0 = ___e0;
		return (bool)((!(((RuntimeObject*)(Extension_t018320402D6776101851CAB78A7B81D89AEB45CD*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_ClrType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m8760BCA5D62B73A4FF7DAE8FB782F63E08B69C6D (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::set_ClrType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_mA39F8368309F1B9F4549415C16FC97D17A76E785 (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CClrTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClrTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* GeneratedClrTypeInfo_get_Parser_m3D28CA17551D394EC13DDC2773AC6B10327E8796 (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* L_0 = __this->___U3CParserU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_PropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m5CFFB4520E6AA5050893D38BAD18AE74D4BA8EC1 (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CPropertyNamesU3Ek__BackingField_5;
		return L_0;
	}
}
// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* GeneratedClrTypeInfo_get_Extensions_m93425C1090E8654C2D749D785623F15D82FCB82E (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* L_0 = __this->___U3CExtensionsU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_OneofNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_m99BDCF6A2E438F03AE9CFDD735A9C21AA1FC1790 (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COneofNamesU3Ek__BackingField_7;
		return L_0;
	}
}
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* GeneratedClrTypeInfo_get_NestedTypes_mC42B07E7E473D4AFF1403F8461C179DC7A9E771D (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedEnums()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mC6336935A16759B50F5A3E423DA0AB0FB0C771B0 (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CNestedEnumsU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mB12BADFF97605C724C62EA3680AA167677FDAFC2 (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, Type_t* ___clrType0, MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* ___extensions5, GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* ___nestedTypes6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* G_B2_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B2_1 = NULL;
	GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* G_B1_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B1_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B4_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B4_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B3_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B3_1 = NULL;
	ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* G_B6_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B6_1 = NULL;
	ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* G_B5_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B5_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B8_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B7_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_0 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B9_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_0 = ___nestedTypes6;
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_2 = ((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0012:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CNestedTypesU3Ek__BackingField_8 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CNestedTypesU3Ek__BackingField_8), (void*)G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = ___nestedEnums4;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ((ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var))->___EmptyTypes_0;
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		G_B4_1->___U3CNestedEnumsU3Ek__BackingField_9 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3CNestedEnumsU3Ek__BackingField_9), (void*)G_B4_0);
		Type_t* L_6 = ___clrType0;
		GeneratedClrTypeInfo_set_ClrType_mA39F8368309F1B9F4549415C16FC97D17A76E785_inline(__this, L_6, NULL);
		ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* L_7 = ___extensions5;
		ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* L_8 = L_7;
		G_B5_0 = L_8;
		G_B5_1 = __this;
		if (L_8)
		{
			G_B6_0 = L_8;
			G_B6_1 = __this;
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var);
		ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* L_9 = ((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyExtensions_2;
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_003b:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CExtensionsU3Ek__BackingField_6 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CExtensionsU3Ek__BackingField_6), (void*)G_B6_0);
		MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* L_10 = ___parser1;
		__this->___U3CParserU3Ek__BackingField_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParserU3Ek__BackingField_4), (void*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___propertyNames2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		G_B7_0 = L_12;
		G_B7_1 = __this;
		if (L_12)
		{
			G_B8_0 = L_12;
			G_B8_1 = __this;
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyNames_0;
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
	}

IL_0052:
	{
		NullCheck(G_B8_1);
		G_B8_1->___U3CPropertyNamesU3Ek__BackingField_5 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___U3CPropertyNamesU3Ek__BackingField_5), (void*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___oneofNames3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		G_B9_0 = L_15;
		G_B9_1 = __this;
		if (L_15)
		{
			G_B10_0 = L_15;
			G_B10_1 = __this;
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyNames_0;
		G_B10_0 = L_16;
		G_B10_1 = G_B9_1;
	}

IL_0063:
	{
		NullCheck(G_B10_1);
		G_B10_1->___U3COneofNamesU3Ek__BackingField_7 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->___U3COneofNamesU3Ek__BackingField_7), (void*)G_B10_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mB41DAD49A9EC3CB7DFDBAB3F7C65117D20978375 (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, Type_t* ___clrType0, MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* ___nestedTypes5, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___clrType0;
		MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* L_1 = ___parser1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___propertyNames2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___oneofNames3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = ___nestedEnums4;
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_5 = ___nestedTypes5;
		GeneratedClrTypeInfo__ctor_mB12BADFF97605C724C62EA3680AA167677FDAFC2(__this, L_0, L_1, L_2, L_3, L_4, (ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110*)NULL, L_5, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m7E90EDDE56D58DC15023E2BA38EB80EAAE328BAC (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* ___extensions1, GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* ___nestedTypes2, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___nestedEnums0;
		ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* L_1 = ___extensions1;
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_2 = ___nestedTypes2;
		GeneratedClrTypeInfo__ctor_mB12BADFF97605C724C62EA3680AA167677FDAFC2(__this, (Type_t*)NULL, (MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mD0694C59463A98FFA7084DCE11AB3978E424F7ED (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* ___nestedTypes1, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___nestedEnums0;
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_1 = ___nestedTypes1;
		GeneratedClrTypeInfo__ctor_mB41DAD49A9EC3CB7DFDBAB3F7C65117D20978375(__this, (Type_t*)NULL, (MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__cctor_mE32F9E1B64A665DF74166CF983C48CA9974AB931 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyNames_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyNames_0), (void*)L_0);
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_1 = (GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED*)(GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1), (void*)L_1);
		ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* L_2 = (ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110*)(ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110*)SZArrayNew(ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyExtensions_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F_il2cpp_TypeInfo_var))->___EmptyExtensions_2), (void*)L_2);
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
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor__ctor_m47ED0E8251995520F6D6984BCFDBAAE75EB250EC (MapFieldAccessor_tB3A1854320BC037636B8627B994086628E6E1D1D* __this, PropertyInfo_t* ___property0, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___descriptor1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = ___property0;
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_1 = ___descriptor1;
		FieldAccessorBase__ctor_mD3B117BF47BBDD5990D5A37E4289DAE2E21A7239(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor_Clear_mFAEB6807B81F190E378A324DDCCD3BF8F0835522 (MapFieldAccessor_tB3A1854320BC037636B8627B994086628E6E1D1D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		RuntimeObject* L_1;
		L_1 = FieldAccessorBase_GetValue_mA21ECE16F4C057EA81FA58FF84DA4727772F93E0(__this, L_0, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(6 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.MapFieldAccessor::HasValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapFieldAccessor_HasValue_m976AC632CF6382702ABF8089DA0E61041C2F9797 (MapFieldAccessor_tB3A1854320BC037636B8627B994086628E6E1D1D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8AB46C8C5CCDCA487773A386E008015AD2FB899)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapFieldAccessor_HasValue_m976AC632CF6382702ABF8089DA0E61041C2F9797_RuntimeMethod_var)));
	}
}
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor_SetValue_m0C0EDF3177732A10A1EF95E5BD976041714407BB (MapFieldAccessor_tB3A1854320BC037636B8627B994086628E6E1D1D* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA2199D3FAB3E9A0592694D9E1A42317C06006B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapFieldAccessor_SetValue_m0C0EDF3177732A10A1EF95E5BD976041714407BB_RuntimeMethod_var)));
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.ctor(Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__ctor_m6980D0ADFCF03CD5DA38FA066A8FB12318369D4F (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___parent2, int32_t ___typeIndex3, GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* ___generatedCodeInfo4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_m6D97E5A60E6DAE56E9CF16D58F62EE9CA490DE0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4_TisEnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_m786A479FA5064C509189F23691E61C152E5F1D59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_mBD60ACD171989A76028E462665958F79DFE0C19F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4_TisOneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094_m542DB4E32A1A2C3D93002FB50ADE7544904D3F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m83486AECEE236A81A119D27C88FB3BF6ED66B18D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m131B54D265EF895987614EDDE728C8207D9D7889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t624C7FFABE6CAF40B822030372264CC25D3D4E65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB7A3E0EFAD1A08DA0DE2D51650DA1E8EBDBA3687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t532DBB98EA70DE834C63449BE3E90FF9C0D55BA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m21472BEF730F6D2142F60EF0490FA32E03026314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__5_4_m8A93DC18419A3D076230D916D7CA180ED7FF6AE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m1893B48B075084EF7B1C0689D7E1BA8D7140CFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_mC686F7074B05BFC7B1C6CACA923EC6109B356DC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_mD41570AAEA563EE7D0F6D444E49414BAE304C14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m19F7EA36DCEB14DF5E0B3D90911242479DB6423C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B2_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B2_1 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B1_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B1_1 = NULL;
	MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* G_B3_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B3_1 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B5_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B5_1 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B4_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B4_1 = NULL;
	Type_t* G_B6_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B6_1 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B19_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B19_1 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B19_2 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B18_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B18_1 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B18_2 = NULL;
	ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* G_B20_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B20_1 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B20_2 = NULL;
	Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD* G_B22_0 = NULL;
	RuntimeObject* G_B22_1 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B22_2 = NULL;
	Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD* G_B21_0 = NULL;
	RuntimeObject* G_B21_1 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B21_2 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_0 = (U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m276264D71919CDD4D2D4D4BBE5490CF4D337DF62(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_1 = V_0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_2 = ___file1;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_3 = V_0;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_4 = ___generatedCodeInfo4;
		NullCheck(L_3);
		L_3->___generatedCodeInfo_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___generatedCodeInfo_2), (void*)L_4);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_5 = V_0;
		NullCheck(L_5);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_6 = L_5->___file_0;
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_7 = V_0;
		NullCheck(L_7);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_8 = L_7->___file_0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_9 = ___parent2;
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_10 = ___proto0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = DescriptorProto_get_Name_m62663DF6189E02C3164FA3B5499C010388722E20(L_10, NULL);
		NullCheck(L_8);
		String_t* L_12;
		L_12 = FileDescriptor_ComputeFullName_m4C32A39C9FE38EF762A3DB6FE4A777B6BD631ADF(L_8, L_9, L_11, NULL);
		int32_t L_13 = ___typeIndex3;
		DescriptorBase__ctor_mED7E1B63CB9FC50B03B552A29E453444A267EC3C(__this, L_6, L_12, L_13, NULL);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_14 = V_0;
		NullCheck(L_14);
		L_14->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___U3CU3E4__this_1), (void*)__this);
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_15 = ___proto0;
		__this->___U3CProtoU3Ek__BackingField_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtoU3Ek__BackingField_8), (void*)L_15);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_16 = V_0;
		NullCheck(L_16);
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_17 = L_16->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_18 = L_17;
		G_B1_0 = L_18;
		G_B1_1 = __this;
		if (L_18)
		{
			G_B2_0 = L_18;
			G_B2_1 = __this;
			goto IL_0051;
		}
	}
	{
		G_B3_0 = ((MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0056;
	}

IL_0051:
	{
		NullCheck(G_B2_0);
		MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* L_19;
		L_19 = GeneratedClrTypeInfo_get_Parser_m3D28CA17551D394EC13DDC2773AC6B10327E8796_inline(G_B2_0, NULL);
		G_B3_0 = L_19;
		G_B3_1 = G_B2_1;
	}

IL_0056:
	{
		NullCheck(G_B3_1);
		G_B3_1->___U3CParserU3Ek__BackingField_10 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___U3CParserU3Ek__BackingField_10), (void*)G_B3_0);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_20 = V_0;
		NullCheck(L_20);
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_21 = L_20->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_22 = L_21;
		G_B4_0 = L_22;
		G_B4_1 = __this;
		if (L_22)
		{
			G_B5_0 = L_22;
			G_B5_1 = __this;
			goto IL_0069;
		}
	}
	{
		G_B6_0 = ((Type_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_006e;
	}

IL_0069:
	{
		NullCheck(G_B5_0);
		Type_t* L_23;
		L_23 = GeneratedClrTypeInfo_get_ClrType_m8760BCA5D62B73A4FF7DAE8FB782F63E08B69C6D_inline(G_B5_0, NULL);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
	}

IL_006e:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CClrTypeU3Ek__BackingField_9 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CClrTypeU3Ek__BackingField_9), (void*)G_B6_0);
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_24 = ___parent2;
		__this->___U3CContainingTypeU3Ek__BackingField_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContainingTypeU3Ek__BackingField_11), (void*)L_24);
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_25 = ___proto0;
		NullCheck(L_25);
		RepeatedField_1_tDEACD5DB2A56117C8938DE66C85F0906BBA55F20* L_26;
		L_26 = DescriptorProto_get_OneofDecl_m16312F7D125565170D0D9EECB6C03F299CCD5D64_inline(L_25, NULL);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_27 = V_0;
		IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A* L_28 = (IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A*)il2cpp_codegen_object_new(IndexedConverter_2_tDB76A564C8260E751137652E6B0C5BEA6AA0328A_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		IndexedConverter_2__ctor_mDA03682A434687CC6609B709CBC48386D067E091(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m1893B48B075084EF7B1C0689D7E1BA8D7140CFAC_RuntimeMethod_var), NULL);
		RuntimeObject* L_29;
		L_29 = DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4_TisOneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094_m542DB4E32A1A2C3D93002FB50ADE7544904D3F93(L_26, L_28, DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4_TisOneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094_m542DB4E32A1A2C3D93002FB50ADE7544904D3F93_RuntimeMethod_var);
		__this->___U3COneofsU3Ek__BackingField_16 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COneofsU3Ek__BackingField_16), (void*)L_29);
		V_1 = 0;
		RuntimeObject* L_30;
		L_30 = MessageDescriptor_get_Oneofs_mB36AC248D3195BCD4B2E3DF296648AF41852041B_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.OneofDescriptor>::GetEnumerator() */, IEnumerable_1_tB7A3E0EFAD1A08DA0DE2D51650DA1E8EBDBA3687_il2cpp_TypeInfo_var, L_30);
		V_2 = L_31;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_32 = V_2;
					if (!L_32)
					{
						goto IL_00db;
					}
				}
				{
					RuntimeObject* L_33 = V_2;
					NullCheck(L_33);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_33);
				}

IL_00db:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c8_1;
			}

IL_00a7_1:
			{
				RuntimeObject* L_34 = V_2;
				NullCheck(L_34);
				OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_35;
				L_35 = InterfaceFuncInvoker0< OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Current() */, IEnumerator_1_t532DBB98EA70DE834C63449BE3E90FF9C0D55BA8_il2cpp_TypeInfo_var, L_34);
				NullCheck(L_35);
				bool L_36;
				L_36 = OneofDescriptor_get_IsSynthetic_m3EBC2B8491206FAB6452FDFF837397162B485E3E_inline(L_35, NULL);
				if (!L_36)
				{
					goto IL_00ba_1;
				}
			}
			{
				int32_t L_37 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
				goto IL_00c8_1;
			}

IL_00ba_1:
			{
				int32_t L_38 = V_1;
				if (!L_38)
				{
					goto IL_00c8_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_39 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				NullCheck(L_39);
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA598F7A018FBD9BE6B63FDAFF829654652603EEB)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessageDescriptor__ctor_m6980D0ADFCF03CD5DA38FA066A8FB12318369D4F_RuntimeMethod_var)));
			}

IL_00c8_1:
			{
				RuntimeObject* L_40 = V_2;
				NullCheck(L_40);
				bool L_41;
				L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_40);
				if (L_41)
				{
					goto IL_00a7_1;
				}
			}
			{
				goto IL_00dc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dc:
	{
		RuntimeObject* L_42;
		L_42 = MessageDescriptor_get_Oneofs_mB36AC248D3195BCD4B2E3DF296648AF41852041B_inline(__this, NULL);
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Count() */, ICollection_1_t624C7FFABE6CAF40B822030372264CC25D3D4E65_il2cpp_TypeInfo_var, L_42);
		int32_t L_44 = V_1;
		__this->___U3CRealOneofCountU3Ek__BackingField_17 = ((int32_t)il2cpp_codegen_subtract(L_43, L_44));
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_45 = ___proto0;
		NullCheck(L_45);
		RepeatedField_1_tEF2F54ED9A8ADDF0DCD8F00400EFC350A6FEAD1F* L_46;
		L_46 = DescriptorProto_get_NestedType_m1C4908AC5CF02B379DB558FCACEA139540A3F26D_inline(L_45, NULL);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_47 = V_0;
		IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B* L_48 = (IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B*)il2cpp_codegen_object_new(IndexedConverter_2_t24EF50831B2F1247112C0E6B670E5182316E588B_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		IndexedConverter_2__ctor_m8899F10998AD1D9F55D057385635349F512FDD31(L_48, L_47, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_mC686F7074B05BFC7B1C6CACA923EC6109B356DC9_RuntimeMethod_var), NULL);
		RuntimeObject* L_49;
		L_49 = DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_m6D97E5A60E6DAE56E9CF16D58F62EE9CA490DE0D(L_46, L_48, DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_m6D97E5A60E6DAE56E9CF16D58F62EE9CA490DE0D_RuntimeMethod_var);
		__this->___U3CNestedTypesU3Ek__BackingField_14 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNestedTypesU3Ek__BackingField_14), (void*)L_49);
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_50 = ___proto0;
		NullCheck(L_50);
		RepeatedField_1_t71A0AAE53E51734430BFDE14A6B8663D02F9D240* L_51;
		L_51 = DescriptorProto_get_EnumType_m0FCCFAEF4ED4972C7A1F504F5AB594AEC2CAF251_inline(L_50, NULL);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_52 = V_0;
		IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23* L_53 = (IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23*)il2cpp_codegen_object_new(IndexedConverter_2_tCC447CE1E6723806C357C661DAB8231D67DC7E23_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		IndexedConverter_2__ctor_m8CBB6F28443DBC275975A01F1BAF34278B4290C2(L_53, L_52, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_mD41570AAEA563EE7D0F6D444E49414BAE304C14B_RuntimeMethod_var), NULL);
		RuntimeObject* L_54;
		L_54 = DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4_TisEnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_m786A479FA5064C509189F23691E61C152E5F1D59(L_51, L_53, DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4_TisEnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_m786A479FA5064C509189F23691E61C152E5F1D59_RuntimeMethod_var);
		__this->___U3CEnumTypesU3Ek__BackingField_15 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnumTypesU3Ek__BackingField_15), (void*)L_54);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_55 = V_0;
		NullCheck(L_55);
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_56 = L_55->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_57 = L_56;
		G_B18_0 = L_57;
		G_B18_1 = __this;
		G_B18_2 = __this;
		if (L_57)
		{
			G_B19_0 = L_57;
			G_B19_1 = __this;
			G_B19_2 = __this;
			goto IL_0138;
		}
	}
	{
		G_B20_0 = ((ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		goto IL_013d;
	}

IL_0138:
	{
		NullCheck(G_B19_0);
		ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* L_58;
		L_58 = GeneratedClrTypeInfo_get_Extensions_m93425C1090E8654C2D749D785623F15D82FCB82E_inline(G_B19_0, NULL);
		G_B20_0 = L_58;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_013d:
	{
		ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* L_59 = (ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D*)il2cpp_codegen_object_new(ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		ExtensionCollection__ctor_m189B7DE9430F084A2CA53E778B3A7D56ED98B0CD(L_59, G_B20_1, G_B20_0, NULL);
		NullCheck(G_B20_2);
		G_B20_2->___U3CExtensionsU3Ek__BackingField_13 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&G_B20_2->___U3CExtensionsU3Ek__BackingField_13), (void*)L_59);
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_60 = ___proto0;
		NullCheck(L_60);
		RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA* L_61;
		L_61 = DescriptorProto_get_Field_m1316408B55C4ACDD66F5F522BF41284642604645_inline(L_60, NULL);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_62 = V_0;
		IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D* L_63 = (IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D*)il2cpp_codegen_object_new(IndexedConverter_2_t633E8A240BC205AEB94294D655092EDDEB2D911D_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		IndexedConverter_2__ctor_mB7CB68BD5B3D4D00FEE778860F1F7D18A49F6A4A(L_63, L_62, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m19F7EA36DCEB14DF5E0B3D90911242479DB6423C_RuntimeMethod_var), NULL);
		RuntimeObject* L_64;
		L_64 = DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_mBD60ACD171989A76028E462665958F79DFE0C19F(L_61, L_63, DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_mBD60ACD171989A76028E462665958F79DFE0C19F_RuntimeMethod_var);
		__this->___fieldsInDeclarationOrder_4 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fieldsInDeclarationOrder_4), (void*)L_64);
		RuntimeObject* L_65 = __this->___fieldsInDeclarationOrder_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var);
		Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD* L_66 = ((U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var))->___U3CU3E9__5_4_1;
		Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD* L_67 = L_66;
		G_B21_0 = L_67;
		G_B21_1 = L_65;
		G_B21_2 = __this;
		if (L_67)
		{
			G_B22_0 = L_67;
			G_B22_1 = L_65;
			G_B22_2 = __this;
			goto IL_018a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var);
		U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0* L_68 = ((U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD* L_69 = (Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD*)il2cpp_codegen_object_new(Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		Func_2__ctor_m90D9DF75CEBAAD0B472DECBEE7113AC51ED055B1(L_69, L_68, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__5_4_m8A93DC18419A3D076230D916D7CA180ED7FF6AE2_RuntimeMethod_var), NULL);
		Func_2_t1FBDCF261C48C3F0B116BA2DB7CD230AA2B9ADFD* L_70 = L_69;
		((U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var))->___U3CU3E9__5_4_1 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var))->___U3CU3E9__5_4_1), (void*)L_70);
		G_B22_0 = L_70;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
	}

IL_018a:
	{
		RuntimeObject* L_71;
		L_71 = Enumerable_OrderBy_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m83486AECEE236A81A119D27C88FB3BF6ED66B18D(G_B22_1, G_B22_0, Enumerable_OrderBy_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m83486AECEE236A81A119D27C88FB3BF6ED66B18D_RuntimeMethod_var);
		FieldDescriptorU5BU5D_tBD048533FF07A549664BDB1823BF62E72E67A74D* L_72;
		L_72 = Enumerable_ToArray_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m131B54D265EF895987614EDDE728C8207D9D7889(L_71, Enumerable_ToArray_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m131B54D265EF895987614EDDE728C8207D9D7889_RuntimeMethod_var);
		ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58* L_73 = (ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		ReadOnlyCollection_1__ctor_m21472BEF730F6D2142F60EF0490FA32E03026314(L_73, (RuntimeObject*)L_72, ReadOnlyCollection_1__ctor_m21472BEF730F6D2142F60EF0490FA32E03026314_RuntimeMethod_var);
		NullCheck(G_B22_2);
		G_B22_2->___fieldsInNumberOrder_5 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_2->___fieldsInNumberOrder_5), (void*)L_73);
		RuntimeObject* L_74 = __this->___fieldsInNumberOrder_5;
		il2cpp_codegen_runtime_class_init_inline(MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951* L_75;
		L_75 = MessageDescriptor_CreateJsonFieldMap_m65228638AD3A152B248078B48FEE02CBD1FDB157(L_74, NULL);
		__this->___jsonFieldMap_6 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonFieldMap_6), (void*)L_75);
		U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* L_76 = V_0;
		NullCheck(L_76);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_77 = L_76->___file_0;
		NullCheck(L_77);
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_78;
		L_78 = FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline(L_77, NULL);
		NullCheck(L_78);
		DescriptorPool_AddSymbol_mD3D2D83D042E8A90C5743D84D798E6AF0E364358(L_78, __this, NULL);
		FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* L_79 = (FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007*)il2cpp_codegen_object_new(FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		FieldCollection__ctor_m42FEE65DAB79D44EBEB58B69B16A56DF98526291(L_79, __this, NULL);
		__this->___U3CFieldsU3Ek__BackingField_12 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFieldsU3Ek__BackingField_12), (void*)L_79);
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::CreateJsonFieldMap(System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951* MessageDescriptor_CreateJsonFieldMap_m65228638AD3A152B248078B48FEE02CBD1FDB157 (RuntimeObject* ___fields0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m588D015E4E6AB63B61FD84ABBD631A65102EEAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m58FEC00F353B8358EB846B17C21DB741A46DD2AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t86BCEB7E987443B0EF9BAC13979F9A0D85072C5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF4EFFA8FFA2D7A1B6138E0B7757F8903C40ED7CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m205ED779047A8F433B79DDC137D8ADF5F37EFA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* V_2 = NULL;
	{
		Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE* L_0 = (Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE*)il2cpp_codegen_object_new(Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m588D015E4E6AB63B61FD84ABBD631A65102EEAD3(L_0, Dictionary_2__ctor_m588D015E4E6AB63B61FD84ABBD631A65102EEAD3_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___fields0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_t86BCEB7E987443B0EF9BAC13979F9A0D85072C5B_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0043;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_6;
				L_6 = InterfaceFuncInvoker0< FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_tF4EFFA8FFA2D7A1B6138E0B7757F8903C40ED7CE_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE* L_7 = V_0;
				FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String Google.Protobuf.Reflection.DescriptorBase::get_Name() */, L_8);
				FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_10 = V_2;
				NullCheck(L_7);
				Dictionary_2_set_Item_m58FEC00F353B8358EB846B17C21DB741A46DD2AF(L_7, L_9, L_10, Dictionary_2_set_Item_m58FEC00F353B8358EB846B17C21DB741A46DD2AF_RuntimeMethod_var);
				Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE* L_11 = V_0;
				FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_12 = V_2;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = FieldDescriptor_get_JsonName_mE9AFE054721CFB786C8D421CD8E06225B5AA1342_inline(L_12, NULL);
				FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_14 = V_2;
				NullCheck(L_11);
				Dictionary_2_set_Item_m58FEC00F353B8358EB846B17C21DB741A46DD2AF(L_11, L_13, L_14, Dictionary_2_set_Item_m58FEC00F353B8358EB846B17C21DB741A46DD2AF_RuntimeMethod_var);
			}

IL_0030_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		Dictionary_2_t06D51E29CADEEF4323AA214E7A73A110679600CE* L_17 = V_0;
		ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951* L_18 = (ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tE336A6A92EFDA964DCD8B9C05944E751DD172951_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ReadOnlyDictionary_2__ctor_m205ED779047A8F433B79DDC137D8ADF5F37EFA37(L_18, L_17, ReadOnlyDictionary_2__ctor_m205ED779047A8F433B79DDC137D8ADF5F37EFA37_RuntimeMethod_var);
		return L_18;
	}
}
// System.String Google.Protobuf.Reflection.MessageDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageDescriptor_get_Name_m1FBF62D3925978C6ADD07382BB02E1FD53EF4E5F (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_0;
		L_0 = MessageDescriptor_get_Proto_m8FF678DAE55C2F06D14F924BA9DCBEAA8E486D8D_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = DescriptorProto_get_Name_m62663DF6189E02C3164FA3B5499C010388722E20(L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Google.Protobuf.Reflection.DescriptorBase> Google.Protobuf.Reflection.MessageDescriptor::GetNestedDescriptorListForField(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_GetNestedDescriptorListForField_m0BED48D3D0E5DEA7C1462477494A9B3EEBC90EA8 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, int32_t ___fieldNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tFAAB54C802F5320320500EA279C420C562FFBE89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 2)))
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0016:
	{
		RuntimeObject* L_1 = __this->___fieldsInDeclarationOrder_4;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IReadOnlyList_1_tFAAB54C802F5320320500EA279C420C562FFBE89_il2cpp_TypeInfo_var));
	}

IL_0022:
	{
		RuntimeObject* L_2;
		L_2 = MessageDescriptor_get_NestedTypes_mDA9150A9CDE6DBC665EDDC9D5592C8D377DEA0C8_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IReadOnlyList_1_tFAAB54C802F5320320500EA279C420C562FFBE89_il2cpp_TypeInfo_var));
	}

IL_002e:
	{
		RuntimeObject* L_3;
		L_3 = MessageDescriptor_get_EnumTypes_mC6064EEB7FBC228247FE5150E8762BA7D04379D7_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IReadOnlyList_1_tFAAB54C802F5320320500EA279C420C562FFBE89_il2cpp_TypeInfo_var));
	}

IL_003a:
	{
		return (RuntimeObject*)NULL;
	}
}
// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* MessageDescriptor_get_Proto_m8FF678DAE55C2F06D14F924BA9DCBEAA8E486D8D (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_0 = __this->___U3CProtoU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::IsExtensionsInitialized(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_IsExtensionsInitialized_m2CB29A0B734E090C0FEC29D66F907E1F743DDD78 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Count_mFED0B0748D63F5E388545C467B7F5CD8BAD3AF79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_0;
		L_0 = MessageDescriptor_get_Proto_m8FF678DAE55C2F06D14F924BA9DCBEAA8E486D8D_inline(__this, NULL);
		NullCheck(L_0);
		RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620* L_1;
		L_1 = DescriptorProto_get_ExtensionRange_m1F133A8F6C9C99E7FCCD40996F2782C5826FD166_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RepeatedField_1_get_Count_mFED0B0748D63F5E388545C467B7F5CD8BAD3AF79_inline(L_1, RepeatedField_1_get_Count_mFED0B0748D63F5E388545C467B7F5CD8BAD3AF79_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_3 = __this->___extensionSetIsInitialized_7;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Type_t* L_4;
		L_4 = MessageDescriptor_get_ClrType_mDE0A2FB92672D080739D93F8BF77E72C89D4956B_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_5;
		L_5 = ReflectionUtil_CreateIsInitializedCaller_m72002140AAFACD5AC58FF98EAA8412327109C9AF(L_4, NULL);
		__this->___extensionSetIsInitialized_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensionSetIsInitialized_7), (void*)L_5);
	}

IL_002d:
	{
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_6 = __this->___extensionSetIsInitialized_7;
		RuntimeObject* L_7 = ___message0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Func_2_Invoke_m2F487BF3E02BA71134AC5FEC56C002FDC4F67518_inline(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Type Google.Protobuf.Reflection.MessageDescriptor::get_ClrType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mDE0A2FB92672D080739D93F8BF77E72C89D4956B (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_9;
		return L_0;
	}
}
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* MessageDescriptor_get_Parser_m5DD83BB26BDDBD05601387BE81916DD5268119A1 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* L_0 = __this->___U3CParserU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::get_IsWellKnownType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_get_IsWellKnownType_mA90511FDF1039700C84BC0E78F1C494A9A258E53 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0;
		L_0 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Package_mB7B6A5CC9DEC881BCF4FEF034DBC3A9FA0DBE9ED(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = ((MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_4;
		L_4 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = FileDescriptor_get_Name_mC4D0E40FF43F67DF49DA01B628F4F39331E08387(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_3, L_5, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		return L_6;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::get_IsWrapperType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_get_IsWrapperType_m16B68C24CEB86377552AD2F13A18834095F64D52 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0;
		L_0 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Package_mB7B6A5CC9DEC881BCF4FEF034DBC3A9FA0DBE9ED(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_3;
		L_3 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = FileDescriptor_get_Name_mC4D0E40FF43F67DF49DA01B628F4F39331E08387(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC, NULL);
		return L_5;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* MessageDescriptor_get_ContainingType_m0A03BDA4794A7CBEAC0F3E0555D4A9CBA367C8D1 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___U3CContainingTypeU3Ek__BackingField_11;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* MessageDescriptor_get_Fields_m0605E8908D26B72265071D66F7D1798943E005B8 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* L_0 = __this->___U3CFieldsU3Ek__BackingField_12;
		return L_0;
	}
}
// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* MessageDescriptor_get_Extensions_mC099F48F955CB4B01FA1617FAC6D398B75B213E9 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* L_0 = __this->___U3CExtensionsU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_mDA9150A9CDE6DBC665EDDC9D5592C8D377DEA0C8 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_EnumTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_mC6064EEB7FBC228247FE5150E8762BA7D04379D7 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEnumTypesU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_Oneofs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_mB36AC248D3195BCD4B2E3DF296648AF41852041B (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3COneofsU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Int32 Google.Protobuf.Reflection.MessageDescriptor::get_RealOneofCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageDescriptor_get_RealOneofCount_mBF8E450EA5A73B9CEED4344D5A387BC247B4D9C6 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRealOneofCountU3Ek__BackingField_17;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* MessageDescriptor_FindFieldByName_mD8C9123ECE5B7E6CE38A52130E58111742CEEEDA (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_FindSymbol_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m98B3600BEF7410D2FF0AE01C283FF02837625C59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0;
		L_0 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline(L_0, NULL);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_mA48184ACD7737D0608F64040E4854024064FC2C4_inline(__this, NULL);
		String_t* L_3 = ___name0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		NullCheck(L_1);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_5;
		L_5 = DescriptorPool_FindSymbol_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m98B3600BEF7410D2FF0AE01C283FF02837625C59(L_1, L_4, DescriptorPool_FindSymbol_TisFieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_m98B3600BEF7410D2FF0AE01C283FF02837625C59_RuntimeMethod_var);
		return L_5;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* MessageDescriptor_FindFieldByNumber_m4F6176B35E92D139EEB4D52B4F98DC0324F8AC0C (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0;
		L_0 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline(L_0, NULL);
		int32_t L_2 = ___number0;
		NullCheck(L_1);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_3;
		L_3 = DescriptorPool_FindFieldByNumber_mD2B452442B13352203D3327CD2E004F55AC3E018(L_1, __this, L_2, NULL);
		return L_3;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MessageDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7* MessageDescriptor_get_CustomOptions_mEB6265E9ED50C674DE36503376CB0FF7D2555201 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_m903ACBDD62912505D5EC4587186B2EDDF9EA50B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* G_B2_0 = NULL;
	MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* G_B1_0 = NULL;
	Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* G_B5_0 = NULL;
	ExtensionSet_1_t8AFBC47CC3D9634C51CE6CF7C73174227BEC7041* G_B4_0 = NULL;
	ExtensionSet_1_t8AFBC47CC3D9634C51CE6CF7C73174227BEC7041* G_B3_0 = NULL;
	{
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_0;
		L_0 = MessageDescriptor_get_Proto_m8FF678DAE55C2F06D14F924BA9DCBEAA8E486D8D_inline(__this, NULL);
		NullCheck(L_0);
		MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* L_1;
		L_1 = DescriptorProto_get_Options_mC750170555FF8C5E7C22602EC182FEB5299EC6A6_inline(L_0, NULL);
		MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_t8AFBC47CC3D9634C51CE6CF7C73174227BEC7041* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_t8AFBC47CC3D9634C51CE6CF7C73174227BEC7041* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_m903ACBDD62912505D5EC4587186B2EDDF9EA50B1_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_m903ACBDD62912505D5EC4587186B2EDDF9EA50B1_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7* L_6 = (CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7*)il2cpp_codegen_object_new(CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_mAF131F32F793FFA229F14EB8061155803B4D4D84(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.MessageDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* MessageDescriptor_GetOptions_m1D8CC2265DAA17AEEB52B87DAF0DF363463620B3 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* G_B2_0 = NULL;
	MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* G_B1_0 = NULL;
	{
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_0;
		L_0 = MessageDescriptor_get_Proto_m8FF678DAE55C2F06D14F924BA9DCBEAA8E486D8D_inline(__this, NULL);
		NullCheck(L_0);
		MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* L_1;
		L_1 = DescriptorProto_get_Options_mC750170555FF8C5E7C22602EC182FEB5299EC6A6_inline(L_0, NULL);
		MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* L_3;
		L_3 = MessageOptions_Clone_m4D7816ECB397BC23F54D8201ABDA127CBAF78228(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor_CrossLink_m14D367C9156209FB6484A40150D5314CB41AAF92 (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t86BCEB7E987443B0EF9BAC13979F9A0D85072C5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB7A3E0EFAD1A08DA0DE2D51650DA1E8EBDBA3687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1A3FAFB1B0C873C69FA798CF5AED8D052591ADBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t532DBB98EA70DE834C63449BE3E90FF9C0D55BA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF4EFFA8FFA2D7A1B6138E0B7757F8903C40ED7CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = MessageDescriptor_get_NestedTypes_mDA9150A9CDE6DBC665EDDC9D5592C8D377DEA0C8_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_5;
				L_5 = InterfaceFuncInvoker0< MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t1A3FAFB1B0C873C69FA798CF5AED8D052591ADBA_il2cpp_TypeInfo_var, L_4);
				NullCheck(L_5);
				MessageDescriptor_CrossLink_m14D367C9156209FB6484A40150D5314CB41AAF92(L_5, NULL);
			}

IL_0019_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		RuntimeObject* L_8 = __this->___fieldsInDeclarationOrder_4;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_t86BCEB7E987443B0EF9BAC13979F9A0D85072C5B_il2cpp_TypeInfo_var, L_8);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_1;
					if (!L_10)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_11 = V_1;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0059:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_13;
				L_13 = InterfaceFuncInvoker0< FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_tF4EFFA8FFA2D7A1B6138E0B7757F8903C40ED7CE_il2cpp_TypeInfo_var, L_12);
				NullCheck(L_13);
				FieldDescriptor_CrossLink_mDFB87602D9D2E28D625C1E8DB241DC36F5FB96D4(L_13, NULL);
			}

IL_0046_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		RuntimeObject* L_16;
		L_16 = MessageDescriptor_get_Oneofs_mB36AC248D3195BCD4B2E3DF296648AF41852041B_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.OneofDescriptor>::GetEnumerator() */, IEnumerable_1_tB7A3E0EFAD1A08DA0DE2D51650DA1E8EBDBA3687_il2cpp_TypeInfo_var, L_16);
		V_2 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_2;
					if (!L_18)
					{
						goto IL_0086;
					}
				}
				{
					RuntimeObject* L_19 = V_2;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_0068_1:
			{
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_21;
				L_21 = InterfaceFuncInvoker0< OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Current() */, IEnumerator_1_t532DBB98EA70DE834C63449BE3E90FF9C0D55BA8_il2cpp_TypeInfo_var, L_20);
				NullCheck(L_21);
				OneofDescriptor_CrossLink_mFA0CECDB2FA56DC4F11E7FEC6F6B5B43196408A2(L_21, NULL);
			}

IL_0073_1:
			{
				RuntimeObject* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0068_1;
				}
			}
			{
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* L_24;
		L_24 = MessageDescriptor_get_Extensions_mC099F48F955CB4B01FA1617FAC6D398B75B213E9_inline(__this, NULL);
		NullCheck(L_24);
		ExtensionCollection_CrossLink_m2F481B28AF27BDCAB8FAEB4A3585BB3393D89844(L_24, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__cctor_m9E8FB91F4416D11086FF5E09CA804B1A364E33BF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = L_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_1, _stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = L_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_3, _stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_5 = L_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_5, _stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_7 = L_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_7, _stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_9 = L_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_9, _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_11 = L_9;
		NullCheck(L_11);
		bool L_12;
		L_12 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_11, _stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_13 = L_11;
		NullCheck(L_13);
		bool L_14;
		L_14 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_13, _stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_15 = L_13;
		NullCheck(L_15);
		bool L_16;
		L_16 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_15, _stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_17 = L_15;
		NullCheck(L_17);
		bool L_18;
		L_18 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_17, _stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_19 = L_17;
		NullCheck(L_19);
		bool L_20;
		L_20 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_19, _stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		((MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3), (void*)L_19);
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldCollection__ctor_m42FEE65DAB79D44EBEB58B69B16A56DF98526291 (FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* __this, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___messageDescriptor0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = ___messageDescriptor0;
		__this->___messageDescriptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageDescriptor_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InDeclarationOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InDeclarationOrder_m49140F71B48F80C00CA2FF25BD73D69B4D585F02 (FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___fieldsInDeclarationOrder_4;
		return L_1;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InFieldNumberOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InFieldNumberOrder_m373427A4EA121144550B15B0E3FE14185EE1A155 (FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___fieldsInNumberOrder_5;
		return L_1;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::ByJsonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_ByJsonName_m94CF45DEF45CBF029987755C645AAD0D00ED9CEF (FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___jsonFieldMap_6;
		return L_1;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* FieldCollection_get_Item_m63BD3E9A2811EC58294B1D43A8179CA3AE802445 (FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* G_B2_0 = NULL;
	FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* G_B1_0 = NULL;
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___messageDescriptor_0;
		int32_t L_1 = ___number0;
		NullCheck(L_0);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_2;
		L_2 = MessageDescriptor_FindFieldByNumber_m4F6176B35E92D139EEB4D52B4F98DC0324F8AC0C(L_0, L_1, NULL);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001a;
		}
	}
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_4 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7012EBD7A52FFE2177DD7A499A4226405016ACB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldCollection_get_Item_m63BD3E9A2811EC58294B1D43A8179CA3AE802445_RuntimeMethod_var)));
	}

IL_001a:
	{
		return G_B2_0;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* FieldCollection_get_Item_m90A70DEE6E5355F4F17CCD7A8043C11FE8E0C971 (FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* G_B2_0 = NULL;
	FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* G_B1_0 = NULL;
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___messageDescriptor_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_2;
		L_2 = MessageDescriptor_FindFieldByName_mD8C9123ECE5B7E6CE38A52130E58111742CEEEDA(L_0, L_1, NULL);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001a;
		}
	}
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_4 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9233D8C418C04829410724511B59AEC0EF627BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldCollection_get_Item_m90A70DEE6E5355F4F17CCD7A8043C11FE8E0C971_RuntimeMethod_var)));
	}

IL_001a:
	{
		return G_B2_0;
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m276264D71919CDD4D2D4D4BBE5490CF4D337DF62 (U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__0(Google.Protobuf.Reflection.OneofDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m1893B48B075084EF7B1C0689D7E1BA8D7140CFAC (U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* __this, OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* ___oneof0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B2_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B2_3 = NULL;
	OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B1_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B1_3 = NULL;
	OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B3_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B3_3 = NULL;
	OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* G_B3_4 = NULL;
	{
		OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* L_0 = ___oneof0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1 = __this->___file_0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = GeneratedClrTypeInfo_get_OneofNames_m99BDCF6A2E438F03AE9CFDD735A9C21AA1FC1790_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_10 = (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094*)il2cpp_codegen_object_new(OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OneofDescriptor__ctor_m59075E983024167437413D8BD2E18FB7241BEB30(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__1(Google.Protobuf.Reflection.DescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_mC686F7074B05BFC7B1C6CACA923EC6109B356DC9 (U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* __this, DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* ___type0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B2_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B2_3 = NULL;
	DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B1_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B1_3 = NULL;
	DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* G_B1_4 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B3_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B3_3 = NULL;
	DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* G_B3_4 = NULL;
	{
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_0 = ___type0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1 = __this->___file_0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_6;
		L_6 = GeneratedClrTypeInfo_get_NestedTypes_mC42B07E7E473D4AFF1403F8461C179DC7A9E771D_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_10 = (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)il2cpp_codegen_object_new(MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		MessageDescriptor__ctor_m6980D0ADFCF03CD5DA38FA066A8FB12318369D4F(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__2(Google.Protobuf.Reflection.EnumDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_mD41570AAEA563EE7D0F6D444E49414BAE304C14B (U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* __this, EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* ___type0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B2_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B2_3 = NULL;
	EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B1_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B1_3 = NULL;
	EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* G_B1_4 = NULL;
	Type_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B3_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B3_3 = NULL;
	EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* G_B3_4 = NULL;
	{
		EnumDescriptorProto_t73A9E2C439D93EC7CF6407CF8AB4A812B0963DE4* L_0 = ___type0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1 = __this->___file_0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((Type_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6;
		L_6 = GeneratedClrTypeInfo_get_NestedEnums_mC6336935A16759B50F5A3E423DA0AB0FB0C771B0_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Type_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017* L_10 = (EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017*)il2cpp_codegen_object_new(EnumDescriptor_t5C88C185C8D49D1376B0C5E1046B2A18F4251017_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EnumDescriptor__ctor_mA0E1699FAAC4FCD724621DBD9F0EC52D9C01D74A(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__3(Google.Protobuf.Reflection.FieldDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m19F7EA36DCEB14DF5E0B3D90911242479DB6423C (U3CU3Ec__DisplayClass5_0_tBA4AC523E7D182F14770F96EF490F457B90710BD* __this, FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* ___field0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B2_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B2_3 = NULL;
	FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B1_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B1_3 = NULL;
	FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* G_B3_2 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* G_B3_3 = NULL;
	FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* G_B3_4 = NULL;
	{
		FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* L_0 = ___field0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1 = __this->___file_0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = GeneratedClrTypeInfo_get_PropertyNames_m5CFFB4520E6AA5050893D38BAD18AE74D4BA8EC1_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_10 = (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*)il2cpp_codegen_object_new(FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		FieldDescriptor__ctor_mF377396441600A36FCD8A85C8F24C2FBE5AB6B6C(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, (Extension_t018320402D6776101851CAB78A7B81D89AEB45CD*)NULL, NULL);
		return L_10;
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF1E5B19713AE7766C1EB16180F26476AF8971038 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0* L_0 = (U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0*)il2cpp_codegen_object_new(U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8D1D2820477DEB818B86F5889842309CB9692684(L_0, NULL);
		((U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8D1D2820477DEB818B86F5889842309CB9692684 (U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.Protobuf.Reflection.MessageDescriptor/<>c::<.ctor>b__5_4(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__5_4_m8A93DC18419A3D076230D916D7CA180ED7FF6AE2 (U3CU3Ec_tBC75CF7F5380AE0AA32B28A758620F0D637837F0* __this, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___field0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_0 = ___field0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FieldDescriptor_get_FieldNumber_mFB3195F01383AB142E74BCE669B5B19C26AE2BF4(L_0, NULL);
		return L_1;
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
// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* MethodDescriptor_get_Service_m0031177CC1A299F3B8CF04A82A8E54B75142983A (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* L_0 = __this->___service_4;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* MethodDescriptor_get_InputType_m0803A9A31090557120B4D65DCA357D4C9C756C75 (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___inputType_5;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_OutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* MethodDescriptor_get_OutputType_m8DEF14B7886360EA7583CF66BF670C0CD9B4E524 (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___outputType_6;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MethodDescriptor::get_IsClientStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptor_get_IsClientStreaming_m0CB492D9AB99957CE94B486E16695B24195F467D (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_0 = __this->___proto_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDescriptorProto_get_ClientStreaming_m51BFBED0B741F8D7275A390F34F99C8D3824E039(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.MethodDescriptor::get_IsServerStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptor_get_IsServerStreaming_mF33C88CB0F5D48E792376CD9DBFAFFA272691340 (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_0 = __this->___proto_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDescriptorProto_get_ServerStreaming_m0D63184D9ACD4FD58DF98E1B646A148FE0600A7C(L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MethodDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7* MethodDescriptor_get_CustomOptions_mF05460B4DCD8B0F97118D7B489C96C2C3416BBD3 (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_mDA4A01A510CD576F8AEC5C529E72E48BF7412A30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* G_B2_0 = NULL;
	MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* G_B1_0 = NULL;
	Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* G_B5_0 = NULL;
	ExtensionSet_1_tFA17AB50086B62AF47B08709FFD7A23C02C151F5* G_B4_0 = NULL;
	ExtensionSet_1_tFA17AB50086B62AF47B08709FFD7A23C02C151F5* G_B3_0 = NULL;
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_0;
		L_0 = MethodDescriptor_get_Proto_mBCCAB8F855DD004EAA6289C4EE21AED21D5F0691_inline(__this, NULL);
		NullCheck(L_0);
		MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* L_1;
		L_1 = MethodDescriptorProto_get_Options_m82072F67608D54843974E1F7080A28571B709D51_inline(L_0, NULL);
		MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_tFA17AB50086B62AF47B08709FFD7A23C02C151F5* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_tFA17AB50086B62AF47B08709FFD7A23C02C151F5* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_mDA4A01A510CD576F8AEC5C529E72E48BF7412A30_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_mDA4A01A510CD576F8AEC5C529E72E48BF7412A30_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7* L_6 = (CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7*)il2cpp_codegen_object_new(CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_mAF131F32F793FFA229F14EB8061155803B4D4D84(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* MethodDescriptor_GetOptions_mBE3A19F35C91CD57ABF9F2DFECED471E15EF204A (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* G_B2_0 = NULL;
	MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* G_B1_0 = NULL;
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_0;
		L_0 = MethodDescriptor_get_Proto_mBCCAB8F855DD004EAA6289C4EE21AED21D5F0691_inline(__this, NULL);
		NullCheck(L_0);
		MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* L_1;
		L_1 = MethodDescriptorProto_get_Options_m82072F67608D54843974E1F7080A28571B709D51_inline(L_0, NULL);
		MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* L_3;
		L_3 = MethodOptions_Clone_mF70D5FBD9C207E07DAC5A461DE853EBFF945AAE9(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.MethodDescriptor::.ctor(Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.ServiceDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor__ctor_m5AB65326D330536E078E9397DE6CFC581B68FBB5 (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* ___parent2, int32_t ___index3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0 = ___file1;
		ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* L_1 = ___parent2;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_mA48184ACD7737D0608F64040E4854024064FC2C4_inline(L_1, NULL);
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_3 = ___proto0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = MethodDescriptorProto_get_Name_mA3F013E05B9504C85FDF43C4696A7BFC14F52866(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_4, NULL);
		int32_t L_6 = ___index3;
		DescriptorBase__ctor_mED7E1B63CB9FC50B03B552A29E453444A267EC3C(__this, L_0, L_5, L_6, NULL);
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_7 = ___proto0;
		__this->___proto_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_7);
		ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* L_8 = ___parent2;
		__this->___service_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___service_4), (void*)L_8);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_9 = ___file1;
		NullCheck(L_9);
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_10;
		L_10 = FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline(L_9, NULL);
		NullCheck(L_10);
		DescriptorPool_AddSymbol_mD3D2D83D042E8A90C5743D84D798E6AF0E364358(L_10, __this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* MethodDescriptor_get_Proto_mBCCAB8F855DD004EAA6289C4EE21AED21D5F0691 (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_0 = __this->___proto_3;
		return L_0;
	}
}
// System.String Google.Protobuf.Reflection.MethodDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptor_get_Name_m59506938C6BE57C29A9C39395A89AC763E42C8AD (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MethodDescriptorProto_get_Name_mA3F013E05B9504C85FDF43C4696A7BFC14F52866(L_0, NULL);
		return L_1;
	}
}
// System.Void Google.Protobuf.Reflection.MethodDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor_CrossLink_mBE18855EE33145A16BD069B0F9E4B4CC610AF972 (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0;
		L_0 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline(L_0, NULL);
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_2;
		L_2 = MethodDescriptor_get_Proto_mBCCAB8F855DD004EAA6289C4EE21AED21D5F0691_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = MethodDescriptorProto_get_InputType_mD2CCC347C23AD089AECF7703E73AFC15BD9E9F67(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = DescriptorPool_LookupSymbol_m2CCCC359586D4B8A102E8E5B91D87C031E3FE323(L_1, L_3, __this, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		if (((MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)IsInstSealed((RuntimeObject*)L_5, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var)))
		{
			goto IL_0046;
		}
	}
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_6;
		L_6 = MethodDescriptor_get_Proto_mBCCAB8F855DD004EAA6289C4EE21AED21D5F0691_inline(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = MethodDescriptorProto_get_InputType_mD2CCC347C23AD089AECF7703E73AFC15BD9E9F67(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A)), NULL);
		DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC* L_9 = (DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		DescriptorValidationException__ctor_m4FF2090F4C388A11E74271DD17AEF8DC05922780(L_9, __this, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodDescriptor_CrossLink_mBE18855EE33145A16BD069B0F9E4B4CC610AF972_RuntimeMethod_var)));
	}

IL_0046:
	{
		RuntimeObject* L_10 = V_0;
		__this->___inputType_5 = ((MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)CastclassSealed((RuntimeObject*)L_10, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputType_5), (void*)((MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)CastclassSealed((RuntimeObject*)L_10, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var)));
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_11;
		L_11 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(__this, NULL);
		NullCheck(L_11);
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_12;
		L_12 = FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline(L_11, NULL);
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_13;
		L_13 = MethodDescriptor_get_Proto_mBCCAB8F855DD004EAA6289C4EE21AED21D5F0691_inline(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = MethodDescriptorProto_get_OutputType_mDF59A6E7816B21CEC46C271E5080E443EA1B3F6D(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = DescriptorPool_LookupSymbol_m2CCCC359586D4B8A102E8E5B91D87C031E3FE323(L_12, L_14, __this, NULL);
		V_0 = L_15;
		RuntimeObject* L_16 = V_0;
		if (((MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)IsInstSealed((RuntimeObject*)L_16, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var)))
		{
			goto IL_0098;
		}
	}
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_17;
		L_17 = MethodDescriptor_get_Proto_mBCCAB8F855DD004EAA6289C4EE21AED21D5F0691_inline(__this, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = MethodDescriptorProto_get_OutputType_mDF59A6E7816B21CEC46C271E5080E443EA1B3F6D(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A)), NULL);
		DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC* L_20 = (DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		DescriptorValidationException__ctor_m4FF2090F4C388A11E74271DD17AEF8DC05922780(L_20, __this, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodDescriptor_CrossLink_mBE18855EE33145A16BD069B0F9E4B4CC610AF972_RuntimeMethod_var)));
	}

IL_0098:
	{
		RuntimeObject* L_21 = V_0;
		__this->___outputType_6 = ((MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)CastclassSealed((RuntimeObject*)L_21, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputType_6), (void*)((MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)CastclassSealed((RuntimeObject*)L_21, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_il2cpp_TypeInfo_var)));
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
// System.Void Google.Protobuf.Reflection.OneofAccessor::.ctor(Google.Protobuf.Reflection.OneofDescriptor,System.Func`2<Google.Protobuf.IMessage,System.Int32>,System.Action`1<Google.Protobuf.IMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor__ctor_mB7CB47CB36C71F2A8BBDBE4D3318D15E4330ABE7 (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* __this, OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* ___descriptor0, Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* ___caseDelegate1, Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* ___clearDelegate2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_0 = ___descriptor0;
		__this->___U3CDescriptorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptorU3Ek__BackingField_2), (void*)L_0);
		Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* L_1 = ___caseDelegate1;
		__this->___caseDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___caseDelegate_0), (void*)L_1);
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_2 = ___clearDelegate2;
		__this->___clearDelegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_1), (void*)L_2);
		return;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForRegularOneof(Google.Protobuf.Reflection.OneofDescriptor,System.Reflection.PropertyInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* OneofAccessor_ForRegularOneof_mD0DA269AADDB4CB841CEAD730E6FB592E6B72162 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* ___descriptor0, PropertyInfo_t* ___caseProperty1, MethodInfo_t* ___clearMethod2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_0 = ___descriptor0;
		PropertyInfo_t* L_1 = ___caseProperty1;
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* L_3;
		L_3 = ReflectionUtil_CreateFuncIMessageInt32_m951DB7EA8353AE171F8E9775D471BD0B9CD81216(L_2, NULL);
		MethodInfo_t* L_4 = ___clearMethod2;
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_5;
		L_5 = ReflectionUtil_CreateActionIMessage_mA8FFAC3A1E1B758C56D701F1D4D9A5CC6131DA84(L_4, NULL);
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_6 = (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D*)il2cpp_codegen_object_new(OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		OneofAccessor__ctor_mB7CB47CB36C71F2A8BBDBE4D3318D15E4330ABE7(L_6, L_0, L_3, L_5, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForSyntheticOneof(Google.Protobuf.Reflection.OneofDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* OneofAccessor_ForSyntheticOneof_m0E34C0B6576671C196DDA48317FA1A9BF2B24248 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* ___descriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_m48A236D555C993728B618BF4D886F37B9FB05388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_m1ACF4E0D81C8069BA9E99FA6B00BDE1B13EE558F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* L_0 = (U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m0E4F6234FB7DC2A2044C7CE8A095181A3228277E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* L_1 = V_0;
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_2 = ___descriptor0;
		NullCheck(L_1);
		L_1->___descriptor_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___descriptor_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* L_3 = V_0;
		NullCheck(L_3);
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_4 = L_3->___descriptor_0;
		U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* L_5 = V_0;
		Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* L_6 = (Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008*)il2cpp_codegen_object_new(Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mAECE9AEAF14938FAE0804D3112712C31D7941417(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_m48A236D555C993728B618BF4D886F37B9FB05388_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* L_7 = V_0;
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_8 = (Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6*)il2cpp_codegen_object_new(Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m4B015901F32758EAB8712DD786AE591B5ED7D006(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_m1ACF4E0D81C8069BA9E99FA6B00BDE1B13EE558F_RuntimeMethod_var), NULL);
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_9 = (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D*)il2cpp_codegen_object_new(OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		OneofAccessor__ctor_mB7CB47CB36C71F2A8BBDBE4D3318D15E4330ABE7(L_9, L_4, L_6, L_8, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* OneofAccessor_get_Descriptor_mD49EC5D3EFBE29CB9C35EFCD240F972F998251C0 (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_0 = __this->___U3CDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OneofAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor_Clear_m52D09B039FBD35E252B21EDD031321ADF7552878 (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_0 = __this->___clearDelegate_1;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_m3E31E4E9C3B83076E6F7F20F3F7CEC37F564A4C4_inline(L_0, L_1, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.OneofAccessor::GetCaseFieldDescriptor(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* OneofAccessor_GetCaseFieldDescriptor_mC948A4FB54C2F1F4256170977C33CBA45D051EAD (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* L_0 = __this->___caseDelegate_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Func_2_Invoke_m4B2BF3C8E8E4D2C0DF911A08A94AA689027C8896_inline(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*)NULL;
	}

IL_0013:
	{
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_4;
		L_4 = OneofAccessor_get_Descriptor_mD49EC5D3EFBE29CB9C35EFCD240F972F998251C0_inline(__this, NULL);
		NullCheck(L_4);
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_5;
		L_5 = OneofDescriptor_get_ContainingType_m7924C0CCDE65B9F36AD278ABDC1F626C2A82740E_inline(L_4, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_7;
		L_7 = MessageDescriptor_FindFieldByNumber_m4F6176B35E92D139EEB4D52B4F98DC0324F8AC0C(L_5, L_6, NULL);
		return L_7;
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
// System.Void Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m0E4F6234FB7DC2A2044C7CE8A095181A3228277E (U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::<ForSyntheticOneof>b__0(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_m48A236D555C993728B618BF4D886F37B9FB05388 (U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFieldAccessor_tFFC3B7256A421EE76849A47E1067C109ED5D5D33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t027AA86F2C41FBA05C31CACB9149B96FC4E615BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_0 = __this->___descriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = OneofDescriptor_get_Fields_mC655FCD01A24E61C49EB7A28F175A6C908EC58BE_inline(L_0, NULL);
		NullCheck(L_1);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_2;
		L_2 = InterfaceFuncInvoker1< FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Item(System.Int32) */, IList_1_t027AA86F2C41FBA05C31CACB9149B96FC4E615BF_il2cpp_TypeInfo_var, L_1, 0);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldDescriptor_get_Accessor_mA9F2054D50061283ED7524317D96942F4ADA8D65_inline(L_2, NULL);
		RuntimeObject* L_4 = ___message0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean Google.Protobuf.Reflection.IFieldAccessor::HasValue(Google.Protobuf.IMessage) */, IFieldAccessor_tFFC3B7256A421EE76849A47E1067C109ED5D5D33_il2cpp_TypeInfo_var, L_3, L_4);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_6 = __this->___descriptor_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = OneofDescriptor_get_Fields_mC655FCD01A24E61C49EB7A28F175A6C908EC58BE_inline(L_6, NULL);
		NullCheck(L_7);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_8;
		L_8 = InterfaceFuncInvoker1< FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Item(System.Int32) */, IList_1_t027AA86F2C41FBA05C31CACB9149B96FC4E615BF_il2cpp_TypeInfo_var, L_7, 0);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = FieldDescriptor_get_FieldNumber_mFB3195F01383AB142E74BCE669B5B19C26AE2BF4(L_8, NULL);
		return L_9;
	}
}
// System.Void Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::<ForSyntheticOneof>b__1(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_m1ACF4E0D81C8069BA9E99FA6B00BDE1B13EE558F (U3CU3Ec__DisplayClass4_0_t6393E37A1CE4CE8E640E33E76AEC3C056CA5C559* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFieldAccessor_tFFC3B7256A421EE76849A47E1067C109ED5D5D33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t027AA86F2C41FBA05C31CACB9149B96FC4E615BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_0 = __this->___descriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = OneofDescriptor_get_Fields_mC655FCD01A24E61C49EB7A28F175A6C908EC58BE_inline(L_0, NULL);
		NullCheck(L_1);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_2;
		L_2 = InterfaceFuncInvoker1< FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Item(System.Int32) */, IList_1_t027AA86F2C41FBA05C31CACB9149B96FC4E615BF_il2cpp_TypeInfo_var, L_1, 0);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldDescriptor_get_Accessor_mA9F2054D50061283ED7524317D96942F4ADA8D65_inline(L_2, NULL);
		RuntimeObject* L_4 = ___message0;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Google.Protobuf.Reflection.IFieldAccessor::Clear(Google.Protobuf.IMessage) */, IFieldAccessor_tFFC3B7256A421EE76849A47E1067C109ED5D5D33_il2cpp_TypeInfo_var, L_3, L_4);
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
// System.Void Google.Protobuf.Reflection.OneofDescriptor::.ctor(Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor__ctor_m59075E983024167437413D8BD2E18FB7241BEB30 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___parent2, int32_t ___index3, String_t* ___clrName4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_m64D8BE715A2B749E0574597D612A4B76A790BD7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mAC062AA7A7FD3C18B23D2118C753207E0060D7CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC* V_0 = NULL;
	FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* V_1 = NULL;
	OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* G_B2_0 = NULL;
	OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC* L_0 = (U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mA936BB6DB2B936F8BE2A444EFF9A456B3324418B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC* L_1 = V_0;
		int32_t L_2 = ___index3;
		NullCheck(L_1);
		L_1->___index_0 = L_2;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_3 = ___file1;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_4 = ___file1;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_5 = ___parent2;
		OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* L_6 = ___proto0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = OneofDescriptorProto_get_Name_mA3965E08427C8E845AF9A17025413A05FCA75D4D(L_6, NULL);
		NullCheck(L_4);
		String_t* L_8;
		L_8 = FileDescriptor_ComputeFullName_m4C32A39C9FE38EF762A3DB6FE4A777B6BD631ADF(L_4, L_5, L_7, NULL);
		U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___index_0;
		DescriptorBase__ctor_mED7E1B63CB9FC50B03B552A29E453444A267EC3C(__this, L_3, L_8, L_10, NULL);
		OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* L_11 = ___proto0;
		__this->___proto_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_11);
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_12 = ___parent2;
		__this->___containingType_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___containingType_4), (void*)L_12);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_13 = ___file1;
		NullCheck(L_13);
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_14;
		L_14 = FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline(L_13, NULL);
		NullCheck(L_14);
		DescriptorPool_AddSymbol_mD3D2D83D042E8A90C5743D84D798E6AF0E364358(L_14, __this, NULL);
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_15 = ___parent2;
		NullCheck(L_15);
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_16;
		L_16 = MessageDescriptor_get_Proto_m8FF678DAE55C2F06D14F924BA9DCBEAA8E486D8D_inline(L_15, NULL);
		NullCheck(L_16);
		RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA* L_17;
		L_17 = DescriptorProto_get_Field_m1316408B55C4ACDD66F5F522BF41284642604645_inline(L_16, NULL);
		U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC* L_18 = V_0;
		Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A* L_19 = (Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A*)il2cpp_codegen_object_new(Func_2_t114CFA422BB28926D5E19D779AC9FE0997B4736A_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_m512180D27B37F15FD3D3F473A0ED82A0117182C8(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mAC062AA7A7FD3C18B23D2118C753207E0060D7CB_RuntimeMethod_var), NULL);
		FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* L_20;
		L_20 = Enumerable_FirstOrDefault_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_m64D8BE715A2B749E0574597D612A4B76A790BD7B(L_17, L_19, Enumerable_FirstOrDefault_TisFieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C_m64D8BE715A2B749E0574597D612A4B76A790BD7B_RuntimeMethod_var);
		V_1 = L_20;
		FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* L_21 = V_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_0066;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_006c;
	}

IL_0066:
	{
		FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* L_22 = V_1;
		NullCheck(L_22);
		bool L_23;
		L_23 = FieldDescriptorProto_get_Proto3Optional_m5DF7BD4D2D3B307F09974BF54030BEDE206F18C8(L_22, NULL);
		G_B3_0 = ((int32_t)(L_23));
		G_B3_1 = G_B2_0;
	}

IL_006c:
	{
		NullCheck(G_B3_1);
		G_B3_1->___U3CIsSyntheticU3Ek__BackingField_7 = (bool)G_B3_0;
		String_t* L_24 = ___clrName4;
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_25;
		L_25 = OneofDescriptor_CreateAccessor_mE66785E44B5D8412E5A30F590B493F93A39E0E64(__this, L_24, NULL);
		__this->___accessor_6 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessor_6), (void*)L_25);
		return;
	}
}
// System.String Google.Protobuf.Reflection.OneofDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneofDescriptor_get_Name_mBA435F1C23C706BA9AE14D5A934DCB2B756FB689 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = OneofDescriptorProto_get_Name_mA3965E08427C8E845AF9A17025413A05FCA75D4D(L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* OneofDescriptor_get_ContainingType_m7924C0CCDE65B9F36AD278ABDC1F626C2A82740E (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___containingType_4;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_mC655FCD01A24E61C49EB7A28F175A6C908EC58BE (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___fields_5;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.OneofDescriptor::get_IsSynthetic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneofDescriptor_get_IsSynthetic_m3EBC2B8491206FAB6452FDFF837397162B485E3E (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsSyntheticU3Ek__BackingField_7;
		return L_0;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::get_Accessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* OneofDescriptor_get_Accessor_mFD8F72DCDD5290916D3EA15E1B61BE88A4615211 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	{
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_0 = __this->___accessor_6;
		return L_0;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.OneofDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7* OneofDescriptor_get_CustomOptions_m844CA705FB6754ECD6DC8A61F71942CAE1CF3BBD (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_mCF80BFC76CAA9EE86A4D2D7334BC2C1F9995DC89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* G_B2_0 = NULL;
	OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* G_B1_0 = NULL;
	Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* G_B5_0 = NULL;
	ExtensionSet_1_t94C0A6D27A4AE38EF6EB0A3B44EFC2D15390152D* G_B4_0 = NULL;
	ExtensionSet_1_t94C0A6D27A4AE38EF6EB0A3B44EFC2D15390152D* G_B3_0 = NULL;
	{
		OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* L_0 = __this->___proto_3;
		NullCheck(L_0);
		OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* L_1;
		L_1 = OneofDescriptorProto_get_Options_mB8140ABB677F3D2DB21BD203EED211927504B63F_inline(L_0, NULL);
		OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_t94C0A6D27A4AE38EF6EB0A3B44EFC2D15390152D* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_t94C0A6D27A4AE38EF6EB0A3B44EFC2D15390152D* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_mCF80BFC76CAA9EE86A4D2D7334BC2C1F9995DC89_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_mCF80BFC76CAA9EE86A4D2D7334BC2C1F9995DC89_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7* L_6 = (CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7*)il2cpp_codegen_object_new(CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_mAF131F32F793FFA229F14EB8061155803B4D4D84(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* OneofDescriptor_GetOptions_m9C0E44008BB90EC12EFA8A5C3EA5F2981F6F7BF6 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* G_B2_0 = NULL;
	OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* G_B1_0 = NULL;
	{
		OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* L_0 = __this->___proto_3;
		NullCheck(L_0);
		OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* L_1;
		L_1 = OneofDescriptorProto_get_Options_mB8140ABB677F3D2DB21BD203EED211927504B63F_inline(L_0, NULL);
		OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* L_3;
		L_3 = OneofOptions_Clone_m261AB5E9B5B3A9E652F527804F61FFE43F408F69(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.OneofDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor_CrossLink_mFA0CECDB2FA56DC4F11E7FEC6F6B5B43196408A2 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t86BCEB7E987443B0EF9BAC13979F9A0D85072C5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF4EFFA8FFA2D7A1B6138E0B7757F8903C40ED7CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF949D7D782453A987229748A26F2DFC684735B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2CCC951BE5356AF018AC6D20BCA5B421C1E750EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m21472BEF730F6D2142F60EF0490FA32E03026314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* V_2 = NULL;
	{
		List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9* L_0 = (List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9*)il2cpp_codegen_object_new(List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2CCC951BE5356AF018AC6D20BCA5B421C1E750EF(L_0, List_1__ctor_m2CCC951BE5356AF018AC6D20BCA5B421C1E750EF_RuntimeMethod_var);
		V_0 = L_0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_1;
		L_1 = OneofDescriptor_get_ContainingType_m7924C0CCDE65B9F36AD278ABDC1F626C2A82740E_inline(__this, NULL);
		NullCheck(L_1);
		FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* L_2;
		L_2 = MessageDescriptor_get_Fields_m0605E8908D26B72265071D66F7D1798943E005B8_inline(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldCollection_InDeclarationOrder_m49140F71B48F80C00CA2FF25BD73D69B4D585F02(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_t86BCEB7E987443B0EF9BAC13979F9A0D85072C5B_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_001e_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_8;
				L_8 = InterfaceFuncInvoker0< FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_tF4EFFA8FFA2D7A1B6138E0B7757F8903C40ED7CE_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_9 = V_2;
				NullCheck(L_9);
				OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_10;
				L_10 = FieldDescriptor_get_ContainingOneof_mAD9A56A20B0FD569E496F3809EEA048A0B35BE12_inline(L_9, NULL);
				if ((!(((RuntimeObject*)(OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094*)L_10) == ((RuntimeObject*)(OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094*)__this))))
				{
					goto IL_0035_1;
				}
			}
			{
				List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9* L_11 = V_0;
				FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_12 = V_2;
				NullCheck(L_11);
				List_1_Add_mF949D7D782453A987229748A26F2DFC684735B57_inline(L_11, L_12, List_1_Add_mF949D7D782453A987229748A26F2DFC684735B57_RuntimeMethod_var);
			}

IL_0035_1:
			{
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_001e_1;
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
		List_1_tFC45E2A6F5F36DA25D5959A14F5D766CF6FF90F9* L_15 = V_0;
		ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58* L_16 = (ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t56A944D17C525A3ABD16F0FEB0F7A2C6E7A20A58_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ReadOnlyCollection_1__ctor_m21472BEF730F6D2142F60EF0490FA32E03026314(L_16, L_15, ReadOnlyCollection_1__ctor_m21472BEF730F6D2142F60EF0490FA32E03026314_RuntimeMethod_var);
		__this->___fields_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fields_5), (void*)L_16);
		return;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::CreateAccessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* OneofDescriptor_CreateAccessor_mE66785E44B5D8412E5A30F590B493F93A39E0E64 (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, String_t* ___clrName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		String_t* L_0 = ___clrName0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D*)NULL;
	}

IL_0005:
	{
		bool L_1;
		L_1 = OneofDescriptor_get_IsSynthetic_m3EBC2B8491206FAB6452FDFF837397162B485E3E_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_2;
		L_2 = OneofAccessor_ForSyntheticOneof_m0E34C0B6576671C196DDA48317FA1A9BF2B24248(__this, NULL);
		return L_2;
	}

IL_0014:
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_3 = __this->___containingType_4;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = MessageDescriptor_get_ClrType_mDE0A2FB92672D080739D93F8BF77E72C89D4956B_inline(L_3, NULL);
		String_t* L_5 = ___clrName0;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, _stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8, NULL);
		NullCheck(L_4);
		PropertyInfo_t* L_7;
		L_7 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_4, L_6, NULL);
		V_0 = L_7;
		PropertyInfo_t* L_8 = V_0;
		bool L_9;
		L_9 = PropertyInfo_op_Equality_mD077C524E99EF7A3C977705217D3A88AB4DE5C13(L_8, (PropertyInfo_t*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_10 = ___clrName0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_11 = __this->___containingType_4;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = MessageDescriptor_get_ClrType_mDE0A2FB92672D080739D93F8BF77E72C89D4956B_inline(L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC735ABBBA0A4054E66CE20DF45D76FB73FAFF691)), L_10, L_12, NULL);
		DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC* L_14 = (DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		DescriptorValidationException__ctor_m4FF2090F4C388A11E74271DD17AEF8DC05922780(L_14, __this, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_mE66785E44B5D8412E5A30F590B493F93A39E0E64_RuntimeMethod_var)));
	}

IL_0056:
	{
		PropertyInfo_t* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtualFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_15);
		if (L_16)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_17 = ___clrName0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_18 = __this->___containingType_4;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = MessageDescriptor_get_ClrType_mDE0A2FB92672D080739D93F8BF77E72C89D4956B_inline(L_18, NULL);
		String_t* L_20;
		L_20 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD47CF5D6FE76B6693D0F4ADFBC7B1D127FBC8366)), L_17, L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_mE66785E44B5D8412E5A30F590B493F93A39E0E64_RuntimeMethod_var)));
	}

IL_007a:
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_22 = __this->___containingType_4;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = MessageDescriptor_get_ClrType_mDE0A2FB92672D080739D93F8BF77E72C89D4956B_inline(L_22, NULL);
		String_t* L_24 = ___clrName0;
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, L_24, NULL);
		NullCheck(L_23);
		MethodInfo_t* L_26;
		L_26 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_23, L_25, NULL);
		V_1 = L_26;
		MethodInfo_t* L_27 = V_1;
		bool L_28;
		L_28 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_27, (MethodInfo_t*)NULL, NULL);
		if (!L_28)
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_29 = ___clrName0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_30 = __this->___containingType_4;
		NullCheck(L_30);
		Type_t* L_31;
		L_31 = MessageDescriptor_get_ClrType_mDE0A2FB92672D080739D93F8BF77E72C89D4956B_inline(L_30, NULL);
		String_t* L_32;
		L_32 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F6EBD2865CE2FCCB1136CB39B9E6777A5F4777C)), L_29, L_31, NULL);
		DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC* L_33 = (DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2636099069192E815D85B86627886720E88E68AC_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		DescriptorValidationException__ctor_m4FF2090F4C388A11E74271DD17AEF8DC05922780(L_33, __this, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_mE66785E44B5D8412E5A30F590B493F93A39E0E64_RuntimeMethod_var)));
	}

IL_00bc:
	{
		PropertyInfo_t* L_34 = V_0;
		MethodInfo_t* L_35 = V_1;
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_36;
		L_36 = OneofAccessor_ForRegularOneof_mD0DA269AADDB4CB841CEAD730E6FB592E6B72162(__this, L_34, L_35, NULL);
		return L_36;
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
// System.Void Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mA936BB6DB2B936F8BE2A444EFF9A456B3324418B (U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::<.ctor>b__0(Google.Protobuf.Reflection.FieldDescriptorProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mAC062AA7A7FD3C18B23D2118C753207E0060D7CB (U3CU3Ec__DisplayClass4_0_tF91AE7A26E4AD4EEC3950B2038D115DF5B9607EC* __this, FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* ___fieldProto0, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* L_0 = ___fieldProto0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldDescriptorProto_get_HasOneofIndex_m0116F63E52C57BD0F840F1ABE94C51B13BF0139B(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* L_2 = ___fieldProto0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FieldDescriptorProto_get_OneofIndex_m6A15837DFDDD8E5949A7DD43D75A21714011628D(L_2, NULL);
		int32_t L_4 = __this->___index_0;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
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
// System.String Google.Protobuf.Reflection.OriginalNameAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OriginalNameAttribute_get_Name_m790ACAF78DCB29A350BF6FB7F1434AB2D9193967 (OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m7AB2000F20A48610A7371031906FADF8F6F7673A (OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.OriginalNameAttribute::get_PreferredAlias()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OriginalNameAttribute_get_PreferredAlias_mC3F32D0E3B24DC82BDA700896FDC5DD0D2EA1C62 (OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CPreferredAliasU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_PreferredAlias(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_mBA1221E2C67E7CC561A3309C1CC18F540549368B (OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPreferredAliasU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute__ctor_m8E96B4D023A3607EB8FE3A451C737E18B3D041FA (OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisString_t_m06673E671A5ADECBE459106EA93632A686DEBA17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		String_t* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisString_t_m06673E671A5ADECBE459106EA93632A686DEBA17(L_0, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, ProtoPreconditions_CheckNotNull_TisString_t_m06673E671A5ADECBE459106EA93632A686DEBA17_RuntimeMethod_var);
		OriginalNameAttribute_set_Name_m7AB2000F20A48610A7371031906FADF8F6F7673A_inline(__this, L_1, NULL);
		OriginalNameAttribute_set_PreferredAlias_mBA1221E2C67E7CC561A3309C1CC18F540549368B_inline(__this, (bool)1, NULL);
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
// System.Void Google.Protobuf.Reflection.PackageDescriptor::.ctor(System.String,System.String,Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageDescriptor__ctor_mBD9E25263D0940ED03DAD3344B8F440535A3BE44 (PackageDescriptor_t354290BE4135BF64573E645E5D28445FA1EFB246* __this, String_t* ___name0, String_t* ___fullName1, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0 = ___file2;
		__this->___file_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___file_2), (void*)L_0);
		String_t* L_1 = ___fullName1;
		__this->___fullName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullName_1), (void*)L_1);
		String_t* L_2 = ___name0;
		__this->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_2);
		return;
	}
}
// System.String Google.Protobuf.Reflection.PackageDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PackageDescriptor_get_Name_mD254B173554CCAB1CF211CE59CFE80C5E98078E3 (PackageDescriptor_t354290BE4135BF64573E645E5D28445FA1EFB246* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.String Google.Protobuf.Reflection.PackageDescriptor::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PackageDescriptor_get_FullName_m1CF01AC40008A5BE9B57BF9292EEF88833C1FF91 (PackageDescriptor_t354290BE4135BF64573E645E5D28445FA1EFB246* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___fullName_1;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.PackageDescriptor::get_File()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* PackageDescriptor_get_File_m216B48966638B50BF66D6E36D1841F767B6735F0 (PackageDescriptor_t354290BE4135BF64573E645E5D28445FA1EFB246* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0 = __this->___file_2;
		return L_0;
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
// System.Void Google.Protobuf.Reflection.ReflectionUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil__cctor_mA500CE6532C351689CEA9A91E548B4BCD6E6EFAB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC53EDBF958A0A911A80C12ADCAC8F76D57651A8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF35EC5F7627708BA2FD4BEBB88EE862D536F6EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36E57F5CFE7C47A7670FE63275CFF10474F42159_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC10D6A4D3E6E9C8B10A1C58203E4508C346EB0DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_mA3E841EF2CB08E1300CA08D8AB9521FA758B657C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m72BFCF2DE965F0D168DB5C9F80FB817099ACF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m565EC6F80080BA80E7CA5502630AB20D0ACC040D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mD746600CDA2403F4F54C1570C45785DF3B5366A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF0A9E4E71BF0AA5AD420925A87BA34D05BF9C6E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mDF899906C2E9DCA9B26BBDE9E77EC655B35E4373_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m60A52EBF2D50399A88FB364005B6AD5AE2ED0165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisSampleEnum_t738031E740377070D5623E89A66EC87469C2FB6A_mFF32A2AC2592F3F7B6EF0BE4D6D19F454393596F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m318BDC552B12F6EAE5C096949129E05A3B63A47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisString_t_mA1ED4DAFC872FFC9BFED4D390124A97BDBD821A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCD4BA47215A551676E653D6F822E0209D14C241B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB9F5DF6A15A1F27E4C18C6D73A18CAF5FF13A6D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		((ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var))->___EmptyTypes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var))->___EmptyTypes_0), (void*)L_0);
		bool L_1;
		L_1 = ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_m467926889D1EE3821AA91482F9B89AC3AC55064F(NULL);
		((ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var))->___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1 = L_1;
		ReflectionUtil_ForceInitialize_TisString_t_mA1ED4DAFC872FFC9BFED4D390124A97BDBD821A9(ReflectionUtil_ForceInitialize_TisString_t_mA1ED4DAFC872FFC9BFED4D390124A97BDBD821A9_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36E57F5CFE7C47A7670FE63275CFF10474F42159(ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36E57F5CFE7C47A7670FE63275CFF10474F42159_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC10D6A4D3E6E9C8B10A1C58203E4508C346EB0DC(ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC10D6A4D3E6E9C8B10A1C58203E4508C346EB0DC_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCD4BA47215A551676E653D6F822E0209D14C241B(ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCD4BA47215A551676E653D6F822E0209D14C241B_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB9F5DF6A15A1F27E4C18C6D73A18CAF5FF13A6D9(ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB9F5DF6A15A1F27E4C18C6D73A18CAF5FF13A6D9_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m318BDC552B12F6EAE5C096949129E05A3B63A47D(ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m318BDC552B12F6EAE5C096949129E05A3B63A47D_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF35EC5F7627708BA2FD4BEBB88EE862D536F6EAF(ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF35EC5F7627708BA2FD4BEBB88EE862D536F6EAF_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC53EDBF958A0A911A80C12ADCAC8F76D57651A8B(ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC53EDBF958A0A911A80C12ADCAC8F76D57651A8B_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF0A9E4E71BF0AA5AD420925A87BA34D05BF9C6E9(ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF0A9E4E71BF0AA5AD420925A87BA34D05BF9C6E9_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_mA3E841EF2CB08E1300CA08D8AB9521FA758B657C(ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_mA3E841EF2CB08E1300CA08D8AB9521FA758B657C_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mDF899906C2E9DCA9B26BBDE9E77EC655B35E4373(ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mDF899906C2E9DCA9B26BBDE9E77EC655B35E4373_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m60A52EBF2D50399A88FB364005B6AD5AE2ED0165(ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m60A52EBF2D50399A88FB364005B6AD5AE2ED0165_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m72BFCF2DE965F0D168DB5C9F80FB817099ACF43F(ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m72BFCF2DE965F0D168DB5C9F80FB817099ACF43F_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m565EC6F80080BA80E7CA5502630AB20D0ACC040D(ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m565EC6F80080BA80E7CA5502630AB20D0ACC040D_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mD746600CDA2403F4F54C1570C45785DF3B5366A9(ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mD746600CDA2403F4F54C1570C45785DF3B5366A9_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisSampleEnum_t738031E740377070D5623E89A66EC87469C2FB6A_mFF32A2AC2592F3F7B6EF0BE4D6D19F454393596F(ReflectionUtil_ForceInitialize_TisSampleEnum_t738031E740377070D5623E89A66EC87469C2FB6A_mFF32A2AC2592F3F7B6EF0BE4D6D19F454393596F_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReflectionUtil_SampleEnumMethod_mF2FFA6D95DA02C27AE9653413B667D1E8FBD3D4A(NULL);
		return;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t01A45D28F5BAF6BDEE002EB4222A30A74B6CE946* ReflectionUtil_CreateFuncIMessageObject_m278F81D3726E2E0DAB277438FC40D79DBC1BCB4F (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(54 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_m4357951AA9383C83968C42E2C9805AD68B046CA7(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_t01A45D28F5BAF6BDEE002EB4222A30A74B6CE946* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_t01A45D28F5BAF6BDEE002EB4222A30A74B6CE946*, MethodInfo_t* >::Invoke(2 /* System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageObject(System.Reflection.MethodInfo) */, IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageInt32(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* ReflectionUtil_CreateFuncIMessageInt32_m951DB7EA8353AE171F8E9775D471BD0B9CD81216 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(54 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_m4357951AA9383C83968C42E2C9805AD68B046CA7(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_t08A3F575DD99B5647466D361BBB3D8752AE18008*, MethodInfo_t* >::Invoke(0 /* System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageInt32(System.Reflection.MethodInfo) */, IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0* ReflectionUtil_CreateActionIMessageObject_mD497A6A7FF54331196BE103806C92B963CEEEB36 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(25 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		NullCheck(L_3);
		int32_t L_4 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_5);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ReflectionUtil_GetReflectionHelper_m4357951AA9383C83968C42E2C9805AD68B046CA7(L_1, L_6, NULL);
		MethodInfo_t* L_8 = ___method0;
		NullCheck(L_7);
		Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0* L_9;
		L_9 = InterfaceFuncInvoker1< Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0*, MethodInfo_t* >::Invoke(3 /* System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateActionIMessageObject(System.Reflection.MethodInfo) */, IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var, L_7, L_8);
		return L_9;
	}
}
// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessage(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* ReflectionUtil_CreateActionIMessage_mA8FFAC3A1E1B758C56D701F1D4D9A5CC6131DA84 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_m4357951AA9383C83968C42E2C9805AD68B046CA7(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_6;
		L_6 = InterfaceFuncInvoker1< Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6*, MethodInfo_t* >::Invoke(1 /* System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateActionIMessage(System.Reflection.MethodInfo) */, IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageBool(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* ReflectionUtil_CreateFuncIMessageBool_mACAF39380E9564E50A4DB2291569C662BA7C97B9 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(54 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_m4357951AA9383C83968C42E2C9805AD68B046CA7(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348*, MethodInfo_t* >::Invoke(4 /* System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageBool(System.Reflection.MethodInfo) */, IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateIsInitializedCaller(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* ReflectionUtil_CreateIsInitializedCaller_m72002140AAFACD5AC58FF98EAA8412327109C9AF (Type_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSetReflector_1_t49B3EE3246E03C94E03A7F71C47625581B5CB011_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExtensionSetReflector_t9F5D6132E5CB94B57A2A3DEB6C49FF96923FA5C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ExtensionSetReflector_1_t49B3EE3246E03C94E03A7F71C47625581B5CB011_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___msg0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		NullCheck(L_1);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(135 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_3);
		RuntimeObject* L_6;
		L_6 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_5, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IExtensionSetReflector_t9F5D6132E5CB94B57A2A3DEB6C49FF96923FA5C1_il2cpp_TypeInfo_var)));
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_7;
		L_7 = InterfaceFuncInvoker0< Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* >::Invoke(0 /* System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil/IExtensionSetReflector::CreateIsInitializedCaller() */, IExtensionSetReflector_t9F5D6132E5CB94B57A2A3DEB6C49FF96923FA5C1_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IExtensionSetReflector_t9F5D6132E5CB94B57A2A3DEB6C49FF96923FA5C1_il2cpp_TypeInfo_var)));
		return L_7;
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/IExtensionReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::CreateExtensionHelper(Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_CreateExtensionHelper_m65EFC8D2E6AF76B69AF9FE6EF3352A86E9AFC921 (Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionReflectionHelper_2_t2F29BF586C802ABF0DAC0FFDE6717411CC3EE46A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExtensionReflectionHelper_tBF67F1265A875A006E1FA8486EE681B0D8F490CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ExtensionReflectionHelper_2_t2F29BF586C802ABF0DAC0FFDE6717411CC3EE46A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* L_4 = ___extension0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(4 /* System.Type Google.Protobuf.Extension::get_TargetType() */, L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* L_7 = ___extension0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		NullCheck(L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9;
		L_9 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(58 /* System.Type[] System.Type::get_GenericTypeArguments() */, L_8);
		NullCheck(L_9);
		int32_t L_10 = 1;
		Type_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_11);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_11);
		NullCheck(L_1);
		Type_t* L_12;
		L_12 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(135 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* L_15 = ___extension0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		RuntimeObject* L_16;
		L_16 = Activator_CreateInstance_m978D6F745618B691D632E5D6E4AB8840541FC858(L_12, L_14, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IExtensionReflectionHelper_tBF67F1265A875A006E1FA8486EE681B0D8F490CA_il2cpp_TypeInfo_var));
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::GetReflectionHelper(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_GetReflectionHelper_m4357951AA9383C83968C42E2C9805AD68B046CA7 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_2_tCC922DD074ED10A9D612A795BDBD4D04306F0FE9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ReflectionHelper_2_tCC922DD074ED10A9D612A795BDBD4D04306F0FE9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___t10;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = L_3;
		Type_t* L_6 = ___t21;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_6);
		NullCheck(L_1);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(135 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_5);
		RuntimeObject* L_8;
		L_8 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_7, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IReflectionHelper_t89709C4365DE19D7892D9B3E8B3F580E469055C9_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::get_CanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_get_CanConvertEnumFuncToInt32Func_m405C2104763A1C896299FE0D2296B271556B5488 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		bool L_0 = ((ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var))->___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::CheckCanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_m467926889D1EE3821AA91482F9B89AC3AC55064F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, _stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		NullCheck(L_2);
		Delegate_t* L_5;
		L_5 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(58 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_2, L_4);
		V_0 = (bool)1;
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.ArgumentException)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002d;
	}// end catch (depth: 1)

IL_002d:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/SampleEnum Google.Protobuf.Reflection.ReflectionUtil::SampleEnumMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectionUtil_SampleEnumMethod_mF2FFA6D95DA02C27AE9653413B667D1E8FBD3D4A (const RuntimeMethod* method) 
{
	{
		return (int32_t)(0);
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
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor__ctor_mDF4C79CC7CE1E6814E2C6623BC3FAF740AC5BB15 (RepeatedFieldAccessor_tC0768EB80A9E4732FAD7110F5C87782828B919A6* __this, PropertyInfo_t* ___property0, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___descriptor1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = ___property0;
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_1 = ___descriptor1;
		FieldAccessorBase__ctor_mD3B117BF47BBDD5990D5A37E4289DAE2E21A7239(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor_Clear_mC547B2AF3133D9171A650AF9053E3613281594BD (RepeatedFieldAccessor_tC0768EB80A9E4732FAD7110F5C87782828B919A6* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		RuntimeObject* L_1;
		L_1 = FieldAccessorBase_GetValue_mA21ECE16F4C057EA81FA58FF84DA4727772F93E0(__this, L_0, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.RepeatedFieldAccessor::HasValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RepeatedFieldAccessor_HasValue_mD01D7A3EBFC7E0588C49E42133B88539976F3563 (RepeatedFieldAccessor_tC0768EB80A9E4732FAD7110F5C87782828B919A6* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD25853350172E0B01427BE241CD73C9EA8AD7200)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RepeatedFieldAccessor_HasValue_mD01D7A3EBFC7E0588C49E42133B88539976F3563_RuntimeMethod_var)));
	}
}
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor_SetValue_m00857270A32B93F05E43CBC6106E12CAEB69BEC2 (RepeatedFieldAccessor_tC0768EB80A9E4732FAD7110F5C87782828B919A6* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral352DC1AD46B06976FE1F09D69AD2AE07BA1C912F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RepeatedFieldAccessor_SetValue_m00857270A32B93F05E43CBC6106E12CAEB69BEC2_RuntimeMethod_var)));
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
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::.ctor(Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m8ED6BCC9879B21F0C00AB7E2C9109E9238F99C14 (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* ___proto0, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___file1, int32_t ___index2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_mEED10CD9A6911BB7B385BE2C0A27BB8227F3B5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m480E7F23C2EEECABB7C2E4F2EB16DBCCDDCFF94E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* L_0 = (U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m24217FFFBD7135FCDD7847EE2DD9949B4609906F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* L_1 = V_0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_2 = ___file1;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* L_3 = V_0;
		NullCheck(L_3);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_4 = L_3->___file_0;
		U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* L_5 = V_0;
		NullCheck(L_5);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_6 = L_5->___file_0;
		ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* L_7 = ___proto0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ServiceDescriptorProto_get_Name_mA1196A0B2532DBECA32AB528865DD5DD4AD86660(L_7, NULL);
		NullCheck(L_6);
		String_t* L_9;
		L_9 = FileDescriptor_ComputeFullName_m4C32A39C9FE38EF762A3DB6FE4A777B6BD631ADF(L_6, (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866*)NULL, L_8, NULL);
		int32_t L_10 = ___index2;
		DescriptorBase__ctor_mED7E1B63CB9FC50B03B552A29E453444A267EC3C(__this, L_4, L_9, L_10, NULL);
		U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* L_11 = V_0;
		NullCheck(L_11);
		L_11->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___U3CU3E4__this_1), (void*)__this);
		ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* L_12 = ___proto0;
		__this->___proto_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_12);
		ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* L_13 = ___proto0;
		NullCheck(L_13);
		RepeatedField_1_t23CA0F67040B1B1AA6C4498022BA5CD40FD87B85* L_14;
		L_14 = ServiceDescriptorProto_get_Method_mB794C6E023EBA2C7832607851BAA9004DB2B5706_inline(L_13, NULL);
		U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* L_15 = V_0;
		IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9* L_16 = (IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9*)il2cpp_codegen_object_new(IndexedConverter_2_t21A024F7BF164664290E356258F4DD069A653CB9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		IndexedConverter_2__ctor_mFCA1426E3D13670FFA8AA7399429FDFE86E27F25(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m480E7F23C2EEECABB7C2E4F2EB16DBCCDDCFF94E_RuntimeMethod_var), NULL);
		RuntimeObject* L_17;
		L_17 = DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_mEED10CD9A6911BB7B385BE2C0A27BB8227F3B5F6(L_14, L_16, DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_mEED10CD9A6911BB7B385BE2C0A27BB8227F3B5F6_RuntimeMethod_var);
		__this->___methods_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methods_4), (void*)L_17);
		U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* L_18 = V_0;
		NullCheck(L_18);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_19 = L_18->___file_0;
		NullCheck(L_19);
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_20;
		L_20 = FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline(L_19, NULL);
		NullCheck(L_20);
		DescriptorPool_AddSymbol_mD3D2D83D042E8A90C5743D84D798E6AF0E364358(L_20, __this, NULL);
		return;
	}
}
// System.String Google.Protobuf.Reflection.ServiceDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptor_get_Name_m15FD4E1BA6575DFE89A7CE2A2BCD9FC10C4C4C7D (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ServiceDescriptorProto_get_Name_mA1196A0B2532DBECA32AB528865DD5DD4AD86660(L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Google.Protobuf.Reflection.DescriptorBase> Google.Protobuf.Reflection.ServiceDescriptor::GetNestedDescriptorListForField(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_GetNestedDescriptorListForField_mC079610F42F64E2D4CD6E63BC56726199C9E30A6 (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, int32_t ___fieldNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tFAAB54C802F5320320500EA279C420C562FFBE89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_1 = __this->___methods_4;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IReadOnlyList_1_tFAAB54C802F5320320500EA279C420C562FFBE89_il2cpp_TypeInfo_var));
	}

IL_0010:
	{
		return (RuntimeObject*)NULL;
	}
}
// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* ServiceDescriptor_get_Proto_m4C9694FC0013513FFD4C339F481202DC6F54A9B1 (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* L_0 = __this->___proto_3;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor> Google.Protobuf.Reflection.ServiceDescriptor::get_Methods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_get_Methods_m4CE98DB96944AF6164B900D50E291F029DDC6391 (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___methods_4;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MethodDescriptor Google.Protobuf.Reflection.ServiceDescriptor::FindMethodByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* ServiceDescriptor_FindMethodByName_m4A2A9B0C70944C9388ADC1AFB51925F10FD4224B (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_FindSymbol_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_m3783F3C06BF3723749D752D5B1ED53DD9B7F8542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0;
		L_0 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline(L_0, NULL);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_mA48184ACD7737D0608F64040E4854024064FC2C4_inline(__this, NULL);
		String_t* L_3 = ___name0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		NullCheck(L_1);
		MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* L_5;
		L_5 = DescriptorPool_FindSymbol_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_m3783F3C06BF3723749D752D5B1ED53DD9B7F8542(L_1, L_4, DescriptorPool_FindSymbol_TisMethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_m3783F3C06BF3723749D752D5B1ED53DD9B7F8542_RuntimeMethod_var);
		return L_5;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.ServiceDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7* ServiceDescriptor_get_CustomOptions_m0698057EE5AFB47948DF2F38C055E45A565DCF01 (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_mCB641E5E5B780962B2C447CCA498E0E67C638905_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* G_B2_0 = NULL;
	ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* G_B1_0 = NULL;
	Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* G_B5_0 = NULL;
	ExtensionSet_1_t7F8B885AD0837CF76A8B264A7A1AFBCEA7B10EA8* G_B4_0 = NULL;
	ExtensionSet_1_t7F8B885AD0837CF76A8B264A7A1AFBCEA7B10EA8* G_B3_0 = NULL;
	{
		ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* L_0;
		L_0 = ServiceDescriptor_get_Proto_m4C9694FC0013513FFD4C339F481202DC6F54A9B1_inline(__this, NULL);
		NullCheck(L_0);
		ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* L_1;
		L_1 = ServiceDescriptorProto_get_Options_m6DE652CD2E5E237A808257748339EEC422F0DB3A_inline(L_0, NULL);
		ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_t7F8B885AD0837CF76A8B264A7A1AFBCEA7B10EA8* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_t7F8B885AD0837CF76A8B264A7A1AFBCEA7B10EA8* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_mCB641E5E5B780962B2C447CCA498E0E67C638905_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_mCB641E5E5B780962B2C447CCA498E0E67C638905_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7* L_6 = (CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7*)il2cpp_codegen_object_new(CustomOptions_t881DAD43194DD5AE72271CCD797B0BA6ED1952C7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_mAF131F32F793FFA229F14EB8061155803B4D4D84(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* ServiceDescriptor_GetOptions_m228313AA032A84D90B6E2002F76C1D95DF23AC3F (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, const RuntimeMethod* method) 
{
	ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* G_B2_0 = NULL;
	ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* G_B1_0 = NULL;
	{
		ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* L_0;
		L_0 = ServiceDescriptor_get_Proto_m4C9694FC0013513FFD4C339F481202DC6F54A9B1_inline(__this, NULL);
		NullCheck(L_0);
		ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* L_1;
		L_1 = ServiceDescriptorProto_get_Options_m6DE652CD2E5E237A808257748339EEC422F0DB3A_inline(L_0, NULL);
		ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* L_3;
		L_3 = ServiceOptions_Clone_mD3869A09995A57D0BA426C82FD3A70D71C8FF80B(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor_CrossLink_m047076F33ED69130B71DB1D08D58534C389E5BBE (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2D639189C28E76CEB75B142D0DE721C1DE43689D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAB6AAAECE5289A4135C0085C0836472AF596880E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___methods_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MethodDescriptor>::GetEnumerator() */, IEnumerable_1_t2D639189C28E76CEB75B142D0DE721C1DE43689D_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* L_5;
				L_5 = InterfaceFuncInvoker0< MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MethodDescriptor>::get_Current() */, IEnumerator_1_tAB6AAAECE5289A4135C0085C0836472AF596880E_il2cpp_TypeInfo_var, L_4);
				NullCheck(L_5);
				MethodDescriptor_CrossLink_mBE18855EE33145A16BD069B0F9E4B4CC610AF972(L_5, NULL);
			}

IL_0019_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
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
// System.Void Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m24217FFFBD7135FCDD7847EE2DD9949B4609906F (U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MethodDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::<.ctor>b__0(Google.Protobuf.Reflection.MethodDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m480E7F23C2EEECABB7C2E4F2EB16DBCCDDCFF94E (U3CU3Ec__DisplayClass2_0_t74152E159EEE5114384BCD1030C15D936C9DE1B6* __this, MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* ___method0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_0 = ___method0;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1 = __this->___file_0;
		ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___i1;
		MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* L_4 = (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4*)il2cpp_codegen_object_new(MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MethodDescriptor__ctor_m5AB65326D330536E078E9397DE6CFC581B68FBB5(L_4, L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor__ctor_m21C5258ACA1277997A125FCF456BD435A6BDB3BA (SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* __this, PropertyInfo_t* ___property0, FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* ___descriptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_4_m84FD8B69A7DBCC58A88BA4147BC4ACAE5BD24881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mAFFD1B7C5B68F1DE375DEA7ADAA01EBDBDA0AE00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m2C2148868D94466BAFAE599D36DCF88383E62CB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_m98DC29EC1C59C9D968B47B563DC2BB5669C0D418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m116450593A6AA82F39907A9DD3F9EAE8AEB1A0BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m5E3F7230140B510EDB78C41EF0F79D9B0B738F50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral795419E0019C339EB191F029F9E7E9EBD13BCFAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* V_0 = NULL;
	U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* V_4 = NULL;
	Type_t* V_5 = NULL;
	Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* G_B15_0 = NULL;
	SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* G_B15_1 = NULL;
	Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* G_B14_0 = NULL;
	SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* G_B14_1 = NULL;
	U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* G_B19_0 = NULL;
	U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* G_B16_0 = NULL;
	U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* G_B18_0 = NULL;
	U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* G_B17_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* G_B20_1 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_0 = (U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m2A2ABF0341F7C6972B75304F7366CBA69F99F67C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_1 = V_0;
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_2 = ___descriptor1;
		NullCheck(L_1);
		L_1->___descriptor_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___descriptor_1), (void*)L_2);
		PropertyInfo_t* L_3 = ___property0;
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_4 = V_0;
		NullCheck(L_4);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_5 = L_4->___descriptor_1;
		FieldAccessorBase__ctor_mD3B117BF47BBDD5990D5A37E4289DAE2E21A7239(__this, L_3, L_5, NULL);
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___U3CU3E4__this_0), (void*)__this);
		PropertyInfo_t* L_7 = ___property0;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_7);
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral12FC0BF60BCE54234CA58CFD037BD8E5ADE3F2FB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m21C5258ACA1277997A125FCF456BD435A6BDB3BA_RuntimeMethod_var)));
	}

IL_0034:
	{
		PropertyInfo_t* L_10 = ___property0;
		NullCheck(L_10);
		MethodInfo_t* L_11;
		L_11 = PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0* L_12;
		L_12 = ReflectionUtil_CreateActionIMessageObject_mD497A6A7FF54331196BE103806C92B963CEEEB36(L_11, NULL);
		__this->___setValueDelegate_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setValueDelegate_2), (void*)L_12);
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_13 = V_0;
		NullCheck(L_13);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_14 = L_13->___descriptor_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = FieldDescriptor_get_FieldType_mA6AAE2D18452D92D0ED4292C12CF1787E838A170_inline(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0079;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_16 = V_0;
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_17 = (Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348*)il2cpp_codegen_object_new(Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_m33B07D3B7D12BEA38ED424D5A19B1A91CA8A4A0A(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mAFFD1B7C5B68F1DE375DEA7ADAA01EBDBDA0AE00_RuntimeMethod_var), NULL);
		__this->___hasDelegate_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hasDelegate_4), (void*)L_17);
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_18 = V_0;
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_19 = (Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6*)il2cpp_codegen_object_new(Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_m4B015901F32758EAB8712DD786AE591B5ED7D006(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m2C2148868D94466BAFAE599D36DCF88383E62CB7_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_19);
		return;
	}

IL_0079:
	{
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_20 = V_0;
		NullCheck(L_20);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_21 = L_20->___descriptor_1;
		NullCheck(L_21);
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_22;
		L_22 = FieldDescriptor_get_RealContainingOneof_m0A1344203C0E28A07907291446979344E259E4EA(L_21, NULL);
		if (!L_22)
		{
			goto IL_00d3;
		}
	}
	{
		U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* L_23 = (U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		U3CU3Ec__DisplayClass3_1__ctor_m2C5BE6EA467C08D632E1D3FFF7CA802380EBC7A2(L_23, NULL);
		V_1 = L_23;
		U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* L_24 = V_1;
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_25 = V_0;
		NullCheck(L_24);
		L_24->___CSU24U3CU3E8__locals1_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___CSU24U3CU3E8__locals1_1), (void*)L_25);
		U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* L_26 = V_1;
		U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* L_27 = V_1;
		NullCheck(L_27);
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_28 = L_27->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_28);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_29 = L_28->___descriptor_1;
		NullCheck(L_29);
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_30;
		L_30 = FieldDescriptor_get_RealContainingOneof_m0A1344203C0E28A07907291446979344E259E4EA(L_29, NULL);
		NullCheck(L_30);
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_31;
		L_31 = OneofDescriptor_get_Accessor_mFD8F72DCDD5290916D3EA15E1B61BE88A4615211_inline(L_30, NULL);
		NullCheck(L_26);
		L_26->___oneofAccessor_0 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___oneofAccessor_0), (void*)L_31);
		U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* L_32 = V_1;
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_33 = (Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348*)il2cpp_codegen_object_new(Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m33B07D3B7D12BEA38ED424D5A19B1A91CA8A4A0A(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_m98DC29EC1C59C9D968B47B563DC2BB5669C0D418_RuntimeMethod_var), NULL);
		__this->___hasDelegate_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hasDelegate_4), (void*)L_33);
		U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* L_34 = V_1;
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_35 = (Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6*)il2cpp_codegen_object_new(Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action_1__ctor_m4B015901F32758EAB8712DD786AE591B5ED7D006(L_35, L_34, (intptr_t)((void*)U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m116450593A6AA82F39907A9DD3F9EAE8AEB1A0BE_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_35);
		return;
	}

IL_00d3:
	{
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_36 = V_0;
		NullCheck(L_36);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_37 = L_36->___descriptor_1;
		NullCheck(L_37);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_38;
		L_38 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(L_37, NULL);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = FileDescriptor_get_Syntax_mE2805A7CB3C2A521559E48369408101228694536_inline(L_38, NULL);
		if (!L_39)
		{
			goto IL_00fa;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_40 = V_0;
		NullCheck(L_40);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_41 = L_40->___descriptor_1;
		NullCheck(L_41);
		FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* L_42;
		L_42 = FieldDescriptor_get_Proto_mAF61ACC27177C740DAA6B48F87092257ACC7F334_inline(L_41, NULL);
		NullCheck(L_42);
		bool L_43;
		L_43 = FieldDescriptorProto_get_Proto3Optional_m5DF7BD4D2D3B307F09974BF54030BEDE206F18C8(L_42, NULL);
		if (!L_43)
		{
			goto IL_017d;
		}
	}

IL_00fa:
	{
		PropertyInfo_t* L_44 = ___property0;
		NullCheck(L_44);
		Type_t* L_45;
		L_45 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_44);
		PropertyInfo_t* L_46 = ___property0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		String_t* L_48;
		L_48 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral795419E0019C339EB191F029F9E7E9EBD13BCFAD, L_47, NULL);
		PropertyInfo_t* L_49;
		L_49 = RuntimeReflectionExtensions_GetRuntimeProperty_m8B8DEA120CC82BEDC0298B1DBFA4980AFEFB6625(L_45, L_48, NULL);
		NullCheck(L_49);
		MethodInfo_t* L_50;
		L_50 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(29 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_49);
		V_2 = L_50;
		MethodInfo_t* L_51 = V_2;
		bool L_52;
		L_52 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_51, (MethodInfo_t*)NULL, NULL);
		if (!L_52)
		{
			goto IL_012f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_53 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_53);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_53, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09353E39448C302F003639F3B4C81D6B132357DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m21C5258ACA1277997A125FCF456BD435A6BDB3BA_RuntimeMethod_var)));
	}

IL_012f:
	{
		MethodInfo_t* L_54 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_55;
		L_55 = ReflectionUtil_CreateFuncIMessageBool_mACAF39380E9564E50A4DB2291569C662BA7C97B9(L_54, NULL);
		__this->___hasDelegate_4 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hasDelegate_4), (void*)L_55);
		PropertyInfo_t* L_56 = ___property0;
		NullCheck(L_56);
		Type_t* L_57;
		L_57 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_56);
		PropertyInfo_t* L_58 = ___property0;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_58);
		String_t* L_60;
		L_60 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, L_59, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_61 = ((ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var))->___EmptyTypes_0;
		MethodInfo_t* L_62;
		L_62 = RuntimeReflectionExtensions_GetRuntimeMethod_mC91D0D6D5A70AB4B5201F67718E3C5E276454C51(L_57, L_60, L_61, NULL);
		V_3 = L_62;
		MethodInfo_t* L_63 = V_3;
		bool L_64;
		L_64 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_63, (MethodInfo_t*)NULL, NULL);
		if (!L_64)
		{
			goto IL_0170;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_65 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_65);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_65, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09353E39448C302F003639F3B4C81D6B132357DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m21C5258ACA1277997A125FCF456BD435A6BDB3BA_RuntimeMethod_var)));
	}

IL_0170:
	{
		MethodInfo_t* L_66 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t8B26843C5895C345B9971F5A3C9699E37EB86027_il2cpp_TypeInfo_var);
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_67;
		L_67 = ReflectionUtil_CreateActionIMessage_mA8FFAC3A1E1B758C56D701F1D4D9A5CC6131DA84(L_66, NULL);
		__this->___clearDelegate_3 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_67);
		return;
	}

IL_017d:
	{
		U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* L_68 = (U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		U3CU3Ec__DisplayClass3_2__ctor_m6CF4BFC153548BC9B96C0A170DEC0C4E6DF35DEB(L_68, NULL);
		V_4 = L_68;
		U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* L_69 = V_4;
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_70 = V_0;
		NullCheck(L_69);
		L_69->___CSU24U3CU3E8__locals2_1 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___CSU24U3CU3E8__locals2_1), (void*)L_70);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var);
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_71 = ((U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_1;
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_72 = L_71;
		G_B14_0 = L_72;
		G_B14_1 = __this;
		if (L_72)
		{
			G_B15_0 = L_72;
			G_B15_1 = __this;
			goto IL_01ac;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var);
		U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF* L_73 = ((U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_74 = (Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348*)il2cpp_codegen_object_new(Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		Func_2__ctor_m33B07D3B7D12BEA38ED424D5A19B1A91CA8A4A0A(L_74, L_73, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_4_m84FD8B69A7DBCC58A88BA4147BC4ACAE5BD24881_RuntimeMethod_var), NULL);
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_75 = L_74;
		((U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_1 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_1), (void*)L_75);
		G_B15_0 = L_75;
		G_B15_1 = G_B14_1;
	}

IL_01ac:
	{
		NullCheck(G_B15_1);
		G_B15_1->___hasDelegate_4 = G_B15_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___hasDelegate_4), (void*)G_B15_0);
		PropertyInfo_t* L_76 = ___property0;
		NullCheck(L_76);
		Type_t* L_77;
		L_77 = VirtualFuncInvoker0< Type_t* >::Invoke(25 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_76);
		V_5 = L_77;
		U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* L_78 = V_4;
		Type_t* L_79 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_80, NULL);
		bool L_82;
		L_82 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_79, L_81, NULL);
		G_B16_0 = L_78;
		if (L_82)
		{
			G_B19_0 = L_78;
			goto IL_01f1;
		}
	}
	{
		Type_t* L_83 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_85;
		L_85 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_84, NULL);
		bool L_86;
		L_86 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_83, L_85, NULL);
		G_B17_0 = G_B16_0;
		if (L_86)
		{
			G_B18_0 = G_B16_0;
			goto IL_01ea;
		}
	}
	{
		Type_t* L_87 = V_5;
		RuntimeObject* L_88;
		L_88 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_87, NULL);
		G_B20_0 = L_88;
		G_B20_1 = G_B17_0;
		goto IL_01f6;
	}

IL_01ea:
	{
		il2cpp_codegen_runtime_class_init_inline(ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_il2cpp_TypeInfo_var);
		ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6* L_89;
		L_89 = ByteString_get_Empty_m2803BB517EB2079F887E53869BE46899B2D9AB9F_inline(NULL);
		G_B20_0 = ((RuntimeObject*)(L_89));
		G_B20_1 = G_B18_0;
		goto IL_01f6;
	}

IL_01f1:
	{
		G_B20_0 = ((RuntimeObject*)(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
		G_B20_1 = G_B19_0;
	}

IL_01f6:
	{
		NullCheck(G_B20_1);
		G_B20_1->___defaultValue_0 = G_B20_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B20_1->___defaultValue_0), (void*)G_B20_0);
		U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* L_90 = V_4;
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_91 = (Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6*)il2cpp_codegen_object_new(Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		Action_1__ctor_m4B015901F32758EAB8712DD786AE591B5ED7D006(L_91, L_90, (intptr_t)((void*)U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m5E3F7230140B510EDB78C41EF0F79D9B0B738F50_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_91);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor_Clear_mBB020F5FA99FA573406AF00543EAED9DFEE52E40 (SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Action_1_t523E058EC27C2FFD0F355534DADA86680E2CAAB6* L_0 = __this->___clearDelegate_3;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_m3E31E4E9C3B83076E6F7F20F3F7CEC37F564A4C4_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor::HasValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SingleFieldAccessor_HasValue_m618312291F666BB0959904280F01E0A5EF5EAC87 (SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Func_2_tD12E842ED2C19B3B2DF2060B0AE9982AEE550348* L_0 = __this->___hasDelegate_4;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Func_2_Invoke_m2F487BF3E02BA71134AC5FEC56C002FDC4F67518_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor_SetValue_m0AA831B062B862851B6F9684BDEA2084C93A8C79 (SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Action_2_t2AD20C99515F9B026CEABCD8F5CDAE5C8CEE4AC0* L_0 = __this->___setValueDelegate_2;
		RuntimeObject* L_1 = ___message0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		Action_2_Invoke_m0CDE1E78E0212B365BF9F5A1425A133918D65790_inline(L_0, L_1, L_2, NULL);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2A2ABF0341F7C6972B75304F7366CBA69F99F67C (U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::<.ctor>b__0(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mAFFD1B7C5B68F1DE375DEA7ADAA01EBDBDA0AE00 (U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = FieldAccessorBase_GetValue_mA21ECE16F4C057EA81FA58FF84DA4727772F93E0(L_0, L_1, NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::<.ctor>b__1(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m2C2148868D94466BAFAE599D36DCF88383E62CB7 (U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(11 /* System.Void Google.Protobuf.Reflection.FieldAccessorBase::SetValue(Google.Protobuf.IMessage,System.Object) */, L_0, L_1, NULL);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m2C5BE6EA467C08D632E1D3FFF7CA802380EBC7A2 (U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::<.ctor>b__2(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_m98DC29EC1C59C9D968B47B563DC2BB5669C0D418 (U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_0 = __this->___oneofAccessor_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_2;
		L_2 = OneofAccessor_GetCaseFieldDescriptor_mC948A4FB54C2F1F4256170977C33CBA45D051EAD(L_0, L_1, NULL);
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_4 = L_3->___descriptor_1;
		return (bool)((((RuntimeObject*)(FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*)L_2) == ((RuntimeObject*)(FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*)L_4))? 1 : 0);
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::<.ctor>b__3(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m116450593A6AA82F39907A9DD3F9EAE8AEB1A0BE (U3CU3Ec__DisplayClass3_1_tE57A68DAA6657A2FFB9AFC74389746D8BFB5BCBB* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_0 = __this->___oneofAccessor_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_2;
		L_2 = OneofAccessor_GetCaseFieldDescriptor_mC948A4FB54C2F1F4256170977C33CBA45D051EAD(L_0, L_1, NULL);
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* L_4 = L_3->___descriptor_1;
		if ((!(((RuntimeObject*)(FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*)L_2) == ((RuntimeObject*)(FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3*)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_5 = __this->___oneofAccessor_0;
		RuntimeObject* L_6 = ___message0;
		NullCheck(L_5);
		OneofAccessor_Clear_m52D09B039FBD35E252B21EDD031321ADF7552878(L_5, L_6, NULL);
	}

IL_0025:
	{
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_m6CF4BFC153548BC9B96C0A170DEC0C4E6DF35DEB (U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::<.ctor>b__5(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m5E3F7230140B510EDB78C41EF0F79D9B0B738F50 (U3CU3Ec__DisplayClass3_2_t2CD8FE85EF283E38FCE26B7541876A5CD724234E* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass3_0_t1216C1FEF6F17DD0F14E3951A8A050B1C13F0E4F* L_0 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_0);
		SingleFieldAccessor_t1ECA04DF3B428DFDC152D20D3BFCD16DE559CF10* L_1 = L_0->___U3CU3E4__this_0;
		RuntimeObject* L_2 = ___message0;
		RuntimeObject* L_3 = __this->___defaultValue_0;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(11 /* System.Void Google.Protobuf.Reflection.FieldAccessorBase::SetValue(Google.Protobuf.IMessage,System.Object) */, L_1, L_2, L_3);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m70B75963BE47A154F0FDDC5A4BC4D2AB347A2115 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF* L_0 = (U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF*)il2cpp_codegen_object_new(U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC9A8F141C1F2DD9CBE910DF1D8F03B0C1AF9841F(L_0, NULL);
		((U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC9A8F141C1F2DD9CBE910DF1D8F03B0C1AF9841F (U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor/<>c::<.ctor>b__3_4(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__3_4_m84FD8B69A7DBCC58A88BA4147BC4ACAE5BD24881 (U3CU3Ec_t67437EF0DBCEA0CF8B299ADDF53DC2575497EFDF* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7A7B98FBAE659C1B887B207BDC5507066DBC057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_4_m84FD8B69A7DBCC58A88BA4147BC4ACAE5BD24881_RuntimeMethod_var)));
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
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* TypeRegistry_get_Empty_m9F11990592F0486CE3EF46367CBD063EDD798517 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* L_0 = ((TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_mD5B08F30494F9E931BA960321CE42CB0198BEA27 (TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* __this, Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* ___fullNameToMessageMap0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* L_0 = ___fullNameToMessageMap0;
		__this->___fullNameToMessageMap_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullNameToMessageMap_1), (void*)L_0);
		return;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.TypeRegistry::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* TypeRegistry_Find_m6042313E8EFD06960AEA5EDAFEFE932458970E96 (TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* __this, String_t* ___fullName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7731859EEFDBA2A57CDF6FB58B29B24BD233CB93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* V_0 = NULL;
	{
		Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* L_0 = __this->___fullNameToMessageMap_1;
		String_t* L_1 = ___fullName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m7731859EEFDBA2A57CDF6FB58B29B24BD233CB93(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m7731859EEFDBA2A57CDF6FB58B29B24BD233CB93_RuntimeMethod_var);
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(Google.Protobuf.Reflection.FileDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* TypeRegistry_FromFiles_mEF74B01159D8198E10683F33BBD075EBD4227D9D (FileDescriptorU5BU5D_tB8E7D5430A1D0CFF968012BBF8C0760169259E90* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptorU5BU5D_tB8E7D5430A1D0CFF968012BBF8C0760169259E90* L_0 = ___fileDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* L_1;
		L_1 = TypeRegistry_FromFiles_mC5D7C7CD54F88F0A08F7941E97277428281AB25F((RuntimeObject*)L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* TypeRegistry_FromFiles_mC5D7C7CD54F88F0A08F7941E97277428281AB25F (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB2A9AC3044EEC2C3DA952BE54E8DE895FE48869E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_mBB8C3535A64E52D9C8A6DACB04A4C2A5ED9AABAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565);
		s_Il2CppMethodInitialized = true;
	}
	Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___fileDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_mBB8C3535A64E52D9C8A6DACB04A4C2A5ED9AABAA(L_0, _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_mBB8C3535A64E52D9C8A6DACB04A4C2A5ED9AABAA_RuntimeMethod_var);
		Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* L_2 = (Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79*)il2cpp_codegen_object_new(Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_mBC9E08451E2569FAB20386BE8DA32E5F43AFD94C(L_2, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___fileDescriptors0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_001b_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_8;
				L_8 = InterfaceFuncInvoker0< FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_tB2A9AC3044EEC2C3DA952BE54E8DE895FE48869E_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* L_9 = V_0;
				FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_10 = V_2;
				NullCheck(L_9);
				Builder_AddFile_mBD144D9A8B4395E54686D3F189989E5BFB993F13(L_9, L_10, NULL);
			}

IL_0029_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* L_13 = V_0;
		NullCheck(L_13);
		TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* L_14;
		L_14 = Builder_Build_m6D803737297EF476EED428A3D5BF8B2B573714B4(L_13, NULL);
		return L_14;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(Google.Protobuf.Reflection.MessageDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* TypeRegistry_FromMessages_mB5E6FE22CD574CCD7F9C8DF70F32CB30308CA40D (MessageDescriptorU5BU5D_tB5A00ED4D833F1CC2866805E782DC830E16E36C2* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageDescriptorU5BU5D_tB5A00ED4D833F1CC2866805E782DC830E16E36C2* L_0 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* L_1;
		L_1 = TypeRegistry_FromMessages_m7321611870404E29E1AD5DCBA094FFD425E44135((RuntimeObject*)L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* TypeRegistry_FromMessages_m7321611870404E29E1AD5DCBA094FFD425E44135 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_TisFileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2_m627281073F0171842385C0B6162453BB4F22C9F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_m920160A81741571724B418280012E98FA84E1747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFromMessagesU3Eb__9_0_mA8B14E74D2EF61E3882747B2E4A9DE502FDECD87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___messageDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_m920160A81741571724B418280012E98FA84E1747(L_0, _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_m920160A81741571724B418280012E98FA84E1747_RuntimeMethod_var);
		RuntimeObject* L_2 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var);
		Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644* L_3 = ((U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var);
		U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB* L_5 = ((U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644* L_6 = (Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644*)il2cpp_codegen_object_new(Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mF49195E842281AA87F265BA2D2BA4763A5C0233E(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CFromMessagesU3Eb__9_0_mA8B14E74D2EF61E3882747B2E4A9DE502FDECD87_RuntimeMethod_var), NULL);
		Func_2_t264F6FF3585EEB1266B731B7BA45570A1B028644* L_7 = L_6;
		((U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_TisFileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2_m627281073F0171842385C0B6162453BB4F22C9F2(G_B2_1, G_B2_0, Enumerable_Select_TisMessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866_TisFileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2_m627281073F0171842385C0B6162453BB4F22C9F2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* L_9;
		L_9 = TypeRegistry_FromFiles_mC5D7C7CD54F88F0A08F7941E97277428281AB25F(L_8, NULL);
		return L_9;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__cctor_mD584C99054277E0B6E8260B263CAE454EEB3D1A5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m522D7B62EA78C3B618413FDDBEF3A9C685E9303F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* L_0 = (Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608*)il2cpp_codegen_object_new(Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m522D7B62EA78C3B618413FDDBEF3A9C685E9303F(L_0, Dictionary_2__ctor_m522D7B62EA78C3B618413FDDBEF3A9C685E9303F_RuntimeMethod_var);
		TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* L_1 = (TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2*)il2cpp_codegen_object_new(TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_mD5B08F30494F9E931BA960321CE42CB0198BEA27(L_1, L_0, NULL);
		((TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0), (void*)L_1);
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mBC9E08451E2569FAB20386BE8DA32E5F43AFD94C (Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m522D7B62EA78C3B618413FDDBEF3A9C685E9303F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* L_0 = (Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608*)il2cpp_codegen_object_new(Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m522D7B62EA78C3B618413FDDBEF3A9C685E9303F(L_0, Dictionary_2__ctor_m522D7B62EA78C3B618413FDDBEF3A9C685E9303F_RuntimeMethod_var);
		__this->___types_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___types_0), (void*)L_0);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_1, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->___fileDescriptorNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileDescriptorNames_1), (void*)L_1);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_mBD144D9A8B4395E54686D3F189989E5BFB993F13 (Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* __this, FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* ___fileDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1A3FAFB1B0C873C69FA798CF5AED8D052591ADBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB2A9AC3044EEC2C3DA952BE54E8DE895FE48869E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* V_3 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->___fileDescriptorNames_1;
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1 = ___fileDescriptor0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = FileDescriptor_get_Name_mC4D0E40FF43F67DF49DA01B628F4F39331E08387(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_0, L_2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_4 = ___fileDescriptor0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = FileDescriptor_get_Dependencies_m50251A9E6576BB3E83F86357D803DDBF12C9ED71_inline(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_tE4BAF862F28680087BC7DAEBAC486700EBE872B0_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0043;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0022_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_10;
				L_10 = InterfaceFuncInvoker0< FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_tB2A9AC3044EEC2C3DA952BE54E8DE895FE48869E_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_11 = V_1;
				Builder_AddFile_mBD144D9A8B4395E54686D3F189989E5BFB993F13(__this, L_11, NULL);
			}

IL_0030_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_14 = ___fileDescriptor0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = FileDescriptor_get_MessageTypes_mAFA1FC569B22442C5D558E1D8C0D8F5B7AB58410_inline(L_14, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_il2cpp_TypeInfo_var, L_15);
		V_2 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_17 = V_2;
					if (!L_17)
					{
						goto IL_0073;
					}
				}
				{
					RuntimeObject* L_18 = V_2;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_0052_1:
			{
				RuntimeObject* L_19 = V_2;
				NullCheck(L_19);
				MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_20;
				L_20 = InterfaceFuncInvoker0< MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t1A3FAFB1B0C873C69FA798CF5AED8D052591ADBA_il2cpp_TypeInfo_var, L_19);
				V_3 = L_20;
				MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_21 = V_3;
				Builder_AddMessage_m53364FCA8D15954C8226D4880B7CC8F220D155B9(__this, L_21, NULL);
			}

IL_0060_1:
			{
				RuntimeObject* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0052_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_m53364FCA8D15954C8226D4880B7CC8F220D155B9 (Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* __this, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___messageDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m83499F3D1ED0F9C432B2BB5832B9D136EC82C5BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1A3FAFB1B0C873C69FA798CF5AED8D052591ADBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* V_1 = NULL;
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = ___messageDescriptor0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MessageDescriptor_get_NestedTypes_mDA9150A9CDE6DBC665EDDC9D5592C8D377DEA0C8_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_tA5248F4E88ED00AE3C175ECEFED9C4BD98A9C3E9_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_6;
				L_6 = InterfaceFuncInvoker0< MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t1A3FAFB1B0C873C69FA798CF5AED8D052591ADBA_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_7 = V_1;
				Builder_AddMessage_m53364FCA8D15954C8226D4880B7CC8F220D155B9(__this, L_7, NULL);
			}

IL_001c_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0030;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* L_10 = __this->___types_0;
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_11 = ___messageDescriptor0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DescriptorBase_get_FullName_mA48184ACD7737D0608F64040E4854024064FC2C4_inline(L_11, NULL);
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_13 = ___messageDescriptor0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m83499F3D1ED0F9C432B2BB5832B9D136EC82C5BD(L_10, L_12, L_13, Dictionary_2_set_Item_m83499F3D1ED0F9C432B2BB5832B9D136EC82C5BD_RuntimeMethod_var);
		return;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* Builder_Build_m6D803737297EF476EED428A3D5BF8B2B573714B4 (Builder_t0FEE9A04AFBAA9D2D47252F3FDE4CBBB10F69E79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tBDDD731750989631DC586DD69F4E31DE97977608* L_0 = __this->___types_0;
		TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2* L_1 = (TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2*)il2cpp_codegen_object_new(TypeRegistry_tD8EC748131F09E3B4B8FB28953933A383213BAF2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_mD5B08F30494F9E931BA960321CE42CB0198BEA27(L_1, L_0, NULL);
		return L_1;
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7AD54F3CFBC104DDDCDD3C9B28E894F51C950E47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB* L_0 = (U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB*)il2cpp_codegen_object_new(U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m034BCDE73611B58670415DD4DA61577A27A5B591(L_0, NULL);
		((U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m034BCDE73611B58670415DD4DA61577A27A5B591 (U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.TypeRegistry/<>c::<FromMessages>b__9_0(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* U3CU3Ec_U3CFromMessagesU3Eb__9_0_mA8B14E74D2EF61E3882747B2E4A9DE502FDECD87 (U3CU3Ec_t484875708141754521CA19A8F37C4A0DEDC418AB* __this, MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* ___md0, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = ___md0;
		NullCheck(L_0);
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_1;
		L_1 = DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline(L_0, NULL);
		return L_1;
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
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetGetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetGetMethod_m0CB1964B67E150FEBD884BE45BC90F7D441F5533 (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(29 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_0);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_2, (MethodInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		MethodInfo_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (MethodInfo_t*)NULL;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_0;
		return L_6;
	}
}
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetSetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetSetMethod_mEAB554003CB4D44CC8C603925B97AE2E08DAFF14 (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(32 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_0);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_2, (MethodInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		MethodInfo_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (MethodInfo_t*)NULL;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_0;
		return L_6;
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
// System.Boolean Google.Protobuf.Compatibility.TypeExtensions::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsAssignableFrom_mA64A9FC9E06CBD573E73EB64231730814047DE6F (Type_t* ___target0, Type_t* ___c1, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_0, NULL);
		Type_t* L_2 = ___c1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_3;
		L_3 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* >::Invoke(148 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_1, L_3);
		return L_4;
	}
}
// System.Reflection.PropertyInfo Google.Protobuf.Compatibility.TypeExtensions::GetProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* TypeExtensions_GetProperty_m4CF7F6F7A12F464254DD057F6BE6AF4E91A844C0 (Type_t* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	{
		goto IL_004e;
	}

IL_0002:
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_0, NULL);
		V_0 = L_1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2 = V_0;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		PropertyInfo_t* L_4;
		L_4 = VirtualFuncInvoker1< PropertyInfo_t*, String_t* >::Invoke(145 /* System.Reflection.PropertyInfo System.Reflection.TypeInfo::GetDeclaredProperty(System.String) */, L_2, L_3);
		V_1 = L_4;
		PropertyInfo_t* L_5 = V_1;
		bool L_6;
		L_6 = PropertyInfo_op_Inequality_m5DA1C329CB63868255C466876EC2452B40E418A9(L_5, (PropertyInfo_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		PropertyInfo_t* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_7);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		PropertyInfo_t* L_9 = V_1;
		NullCheck(L_9);
		MethodInfo_t* L_10;
		L_10 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(29 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_9);
		NullCheck(L_10);
		bool L_11;
		L_11 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_10, NULL);
		if (L_11)
		{
			goto IL_0044;
		}
	}

IL_002f:
	{
		PropertyInfo_t* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_12);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		PropertyInfo_t* L_14 = V_1;
		NullCheck(L_14);
		MethodInfo_t* L_15;
		L_15 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(32 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_14);
		NullCheck(L_15);
		bool L_16;
		L_16 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_15, NULL);
		if (!L_16)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
		PropertyInfo_t* L_17 = V_1;
		return L_17;
	}

IL_0046:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_18 = V_0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(125 /* System.Type System.Type::get_BaseType() */, L_18);
		___target0 = L_19;
	}

IL_004e:
	{
		Type_t* L_20 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_20, (Type_t*)NULL, NULL);
		if (L_21)
		{
			goto IL_0002;
		}
	}
	{
		return (PropertyInfo_t*)NULL;
	}
}
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.TypeExtensions::GetMethod(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetMethod_m4D78147314687CE487EF45F9AD35EA267A93A917 (Type_t* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		goto IL_002c;
	}

IL_0002:
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_0, NULL);
		V_0 = L_1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2 = V_0;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		MethodInfo_t* L_4;
		L_4 = VirtualFuncInvoker1< MethodInfo_t*, String_t* >::Invoke(144 /* System.Reflection.MethodInfo System.Reflection.TypeInfo::GetDeclaredMethod(System.String) */, L_2, L_3);
		V_1 = L_4;
		MethodInfo_t* L_5 = V_1;
		bool L_6;
		L_6 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_5, (MethodInfo_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		MethodInfo_t* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		MethodInfo_t* L_9 = V_1;
		return L_9;
	}

IL_0024:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_10 = V_0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(125 /* System.Type System.Type::get_BaseType() */, L_10);
		___target0 = L_11;
	}

IL_002c:
	{
		Type_t* L_12 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_12, (Type_t*)NULL, NULL);
		if (L_13)
		{
			goto IL_0002;
		}
	}
	{
		return (MethodInfo_t*)NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseDoubleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mB3150FEFE28F0F8C8C1354C667DE61E1D5CD8104 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseSingleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mA085AADB399D6B96D8F7634E99566599AAE681B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseNullableDoubleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ProtobufEqualityComparers_get_BitwiseNullableDoubleEqualityComparer_m9B32C0BD2123F1A16F9BA69B25715D1A4906D0E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_0 = ((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseNullableSingleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ProtobufEqualityComparers_get_BitwiseNullableSingleEqualityComparer_mA569E0780CE5675D6F74C634A2DC18C84DAF45A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_0 = ((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtobufEqualityComparers__cctor_mFCD5416196F50F5E01D810524CFE0594D5B19CD1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4* L_0 = (BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4*)il2cpp_codegen_object_new(BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BitwiseDoubleEqualityComparerImpl__ctor_m9FA4C9C4765FFAA25C4929FA0D76E6312EB530D4(L_0, NULL);
		((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0), (void*)L_0);
		BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398* L_1 = (BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398*)il2cpp_codegen_object_new(BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BitwiseSingleEqualityComparerImpl__ctor_mDB0FEFC8587752D4C9E2C8746E75EABDFB19390D(L_1, NULL);
		((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1), (void*)L_1);
		BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF* L_2 = (BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF*)il2cpp_codegen_object_new(BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BitwiseNullableDoubleEqualityComparerImpl__ctor_m6EA71FADCD10D0CBCF2A83B5A23F66D4F581A0FF(L_2, NULL);
		((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2), (void*)L_2);
		BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC* L_3 = (BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC*)il2cpp_codegen_object_new(BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BitwiseNullableSingleEqualityComparerImpl__ctor_m13399C63AEE3DA937D6189052DB9B710B789D1BB(L_3, NULL);
		((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3), (void*)L_3);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::Equals(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseDoubleEqualityComparerImpl_Equals_mA1B3AC771644232B80A0FFD5C237B0DA2089A19E (BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4* __this, double ___x0, double ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		double L_2 = ___y1;
		int64_t L_3;
		L_3 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_2, NULL);
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::GetHashCode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseDoubleEqualityComparerImpl_GetHashCode_m3EBADBF5333FCD2874E1C5DE9441D98D3C6075BF (BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4* __this, double ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseDoubleEqualityComparerImpl__ctor_m9FA4C9C4765FFAA25C4929FA0D76E6312EB530D4 (BitwiseDoubleEqualityComparerImpl_t120F31F4D9F7142718333D5944497F6D35DC7BF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6(__this, EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::Equals(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseSingleEqualityComparerImpl_Equals_m515CDAEDDC98491F8D70A6FDED39FF2D557F9278 (BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(((double)L_0), NULL);
		float L_2 = ___y1;
		int64_t L_3;
		L_3 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(((double)L_2), NULL);
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::GetHashCode(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseSingleEqualityComparerImpl_GetHashCode_mE409C45367DD880EC9F5526C7FC7372C47438C64 (BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398* __this, float ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		float L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(((double)L_0), NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseSingleEqualityComparerImpl__ctor_mDB0FEFC8587752D4C9E2C8746E75EABDFB19390D (BitwiseSingleEqualityComparerImpl_tB7A676BF8E676E72D4F74294D369CC2187F4C398* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3(__this, EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::Equals(System.Nullable`1<System.Double>,System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseNullableDoubleEqualityComparerImpl_Equals_m877328B1B5235FE0B5C63CFF3F1A8E05C9A56570 (BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___x0, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___x0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___y1), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003f;
		}
	}

IL_0012:
	{
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___x0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___y1), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_4;
		L_4 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mB3150FEFE28F0F8C8C1354C667DE61E1D5CD8104_inline(NULL);
		double L_5;
		L_5 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___x0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		double L_6;
		L_6 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___y1), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, double, double >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Double>::Equals(T,T) */, L_4, L_5, L_6);
		return L_7;
	}

IL_003d:
	{
		return (bool)0;
	}

IL_003f:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::GetHashCode(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseNullableDoubleEqualityComparerImpl_GetHashCode_m1624A2F33AAB01902269F657FE5D1C595B034296 (BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___obj0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_1;
		L_1 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mB3150FEFE28F0F8C8C1354C667DE61E1D5CD8104_inline(NULL);
		double L_2;
		L_2 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___obj0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, double >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Double>::GetHashCode(T) */, L_1, L_2);
		return L_3;
	}

IL_001b:
	{
		return ((int32_t)293864);
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableDoubleEqualityComparerImpl__ctor_m6EA71FADCD10D0CBCF2A83B5A23F66D4F581A0FF (BitwiseNullableDoubleEqualityComparerImpl_t1F58F915616FF44C8A0203B8F6A0FDE533CAF3DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB(__this, EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::Equals(System.Nullable`1<System.Single>,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseNullableSingleEqualityComparerImpl_Equals_m477742C4A75149B1B8199183B3DB39E038B354CE (BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___x0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___x0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___y1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003f;
		}
	}

IL_0012:
	{
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___x0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___y1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4;
		L_4 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mA085AADB399D6B96D8F7634E99566599AAE681B8_inline(NULL);
		float L_5;
		L_5 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___x0), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_6;
		L_6 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___y1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, L_4, L_5, L_6);
		return L_7;
	}

IL_003d:
	{
		return (bool)0;
	}

IL_003f:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::GetHashCode(System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseNullableSingleEqualityComparerImpl_GetHashCode_mBF403F30D4BFBEB97D7B6870840131E0121BF20B (BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___obj0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1;
		L_1 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mA085AADB399D6B96D8F7634E99566599AAE681B8_inline(NULL);
		float L_2;
		L_2 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___obj0), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, float >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T) */, L_1, L_2);
		return L_3;
	}

IL_001b:
	{
		return ((int32_t)293864);
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableSingleEqualityComparerImpl__ctor_m13399C63AEE3DA937D6189052DB9B710B789D1BB (BitwiseNullableSingleEqualityComparerImpl_t2ADC9F17F52319BE34DE98815534573F6BF4C9AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E(__this, EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* GeneratedClrTypeInfo_get_NestedTypes_mC42B07E7E473D4AFF1403F8461C179DC7A9E771D_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfoU5BU5D_t22278DC056DC58AC97FD8742B055335819E77FED* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mC6336935A16759B50F5A3E423DA0AB0FB0C771B0_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CNestedEnumsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* FieldDescriptor_get_Extension_mF7D85E98A9357A689E821BE09497D970D440189D_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) 
{
	{
		Extension_t018320402D6776101851CAB78A7B81D89AEB45CD* L_0 = __this->___U3CExtensionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_mA39F8368309F1B9F4549415C16FC97D17A76E785_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CClrTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClrTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* GeneratedClrTypeInfo_get_Parser_m3D28CA17551D394EC13DDC2773AC6B10327E8796_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_t27E98EA3C43D6E25AD469A6C4CE8376C7D30BA4A* L_0 = __this->___U3CParserU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m8760BCA5D62B73A4FF7DAE8FB782F63E08B69C6D_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tDEACD5DB2A56117C8938DE66C85F0906BBA55F20* DescriptorProto_get_OneofDecl_m16312F7D125565170D0D9EECB6C03F299CCD5D64_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tDEACD5DB2A56117C8938DE66C85F0906BBA55F20* L_0 = __this->___oneofDecl__22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_mB36AC248D3195BCD4B2E3DF296648AF41852041B_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3COneofsU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OneofDescriptor_get_IsSynthetic_m3EBC2B8491206FAB6452FDFF837397162B485E3E_inline (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsSyntheticU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tEF2F54ED9A8ADDF0DCD8F00400EFC350A6FEAD1F* DescriptorProto_get_NestedType_m1C4908AC5CF02B379DB558FCACEA139540A3F26D_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tEF2F54ED9A8ADDF0DCD8F00400EFC350A6FEAD1F* L_0 = __this->___nestedType__13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t71A0AAE53E51734430BFDE14A6B8663D02F9D240* DescriptorProto_get_EnumType_m0FCCFAEF4ED4972C7A1F504F5AB594AEC2CAF251_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t71A0AAE53E51734430BFDE14A6B8663D02F9D240* L_0 = __this->___enumType__16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* GeneratedClrTypeInfo_get_Extensions_m93425C1090E8654C2D749D785623F15D82FCB82E_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		ExtensionU5BU5D_t810EF5D8E3FDC08E3C2E5DFAE312C42B87AAE110* L_0 = __this->___U3CExtensionsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA* DescriptorProto_get_Field_m1316408B55C4ACDD66F5F522BF41284642604645_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t151CFA4123ACAF41C11182E01D8712D045EBA2BA* L_0 = __this->___field__7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* FileDescriptor_get_DescriptorPool_m2C1286E7E296E11DD2604B4AD7D919CD747CBF06_inline (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) 
{
	{
		DescriptorPool_t5D7EF9B1013E2ED3A9835F467373226D6E884B3F* L_0 = __this->___U3CDescriptorPoolU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_JsonName_mE9AFE054721CFB786C8D421CD8E06225B5AA1342_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CJsonNameU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* MessageDescriptor_get_Proto_m8FF678DAE55C2F06D14F924BA9DCBEAA8E486D8D_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* L_0 = __this->___U3CProtoU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_mDA9150A9CDE6DBC665EDDC9D5592C8D377DEA0C8_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_mC6064EEB7FBC228247FE5150E8762BA7D04379D7_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEnumTypesU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620* DescriptorProto_get_ExtensionRange_m1F133A8F6C9C99E7FCCD40996F2782C5826FD166_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t88C257A5591D38C1D27FD8DC7A4C78D635033620* L_0 = __this->___extensionRange__19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mDE0A2FB92672D080739D93F8BF77E72C89D4956B_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* DescriptorBase_get_File_m41B67D1A7CA2EBA17C0DF5473B3EF1D37900B704_inline (DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* L_0 = __this->___U3CFileU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptorBase_get_FullName_mA48184ACD7737D0608F64040E4854024064FC2C4_inline (DescriptorBase_t96AA286BCA4BFF1C9DC4D6DDDD211CCDD5A74226* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFullNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* DescriptorProto_get_Options_mC750170555FF8C5E7C22602EC182FEB5299EC6A6_inline (DescriptorProto_tD48D6041FFF3571E11570E3DAE90610561092337* __this, const RuntimeMethod* method) 
{
	{
		MessageOptions_tC6ECD6C73A5640A2CED0E6A0BACA7A4C69C6A018* L_0 = __this->___options__24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* MessageDescriptor_get_Extensions_mC099F48F955CB4B01FA1617FAC6D398B75B213E9_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		ExtensionCollection_t9C778A815E03A39B60B9B477E36F91DB1CE21B2D* L_0 = __this->___U3CExtensionsU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_m99BDCF6A2E438F03AE9CFDD735A9C21AA1FC1790_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COneofNamesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m5CFFB4520E6AA5050893D38BAD18AE74D4BA8EC1_inline (GeneratedClrTypeInfo_tA01169F9A1C7CAB6D0EF52D65ECB15D85B1D585F* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CPropertyNamesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* MethodDescriptor_get_Proto_mBCCAB8F855DD004EAA6289C4EE21AED21D5F0691_inline (MethodDescriptor_tED41BB3CBE589BDCFA935B7616CDEBB5FF9F9DC4* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* L_0 = __this->___proto_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* MethodDescriptorProto_get_Options_m82072F67608D54843974E1F7080A28571B709D51_inline (MethodDescriptorProto_t4AF3ACD5A14768FA0ACD7BCBC7724C72EFE1DE79* __this, const RuntimeMethod* method) 
{
	{
		MethodOptions_t0DF426566E3F33F2EA8638C33ED8C22D22656333* L_0 = __this->___options__13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* OneofAccessor_get_Descriptor_mD49EC5D3EFBE29CB9C35EFCD240F972F998251C0_inline (OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_0 = __this->___U3CDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* OneofDescriptor_get_ContainingType_m7924C0CCDE65B9F36AD278ABDC1F626C2A82740E_inline (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* L_0 = __this->___containingType_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_mC655FCD01A24E61C49EB7A28F175A6C908EC58BE_inline (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___fields_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FieldDescriptor_get_Accessor_mA9F2054D50061283ED7524317D96942F4ADA8D65_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___accessor_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* OneofDescriptorProto_get_Options_mB8140ABB677F3D2DB21BD203EED211927504B63F_inline (OneofDescriptorProto_tCA4EDD9B53107B25A6CAC6955CAF5F67E57015C4* __this, const RuntimeMethod* method) 
{
	{
		OneofOptions_t92E434794CEB59C3F8BD8C292643FF5B72C69BFF* L_0 = __this->___options__6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* MessageDescriptor_get_Fields_m0605E8908D26B72265071D66F7D1798943E005B8_inline (MessageDescriptor_tB7E733558F2117F4A62ED60911C1F4604729E866* __this, const RuntimeMethod* method) 
{
	{
		FieldCollection_tEA71451E7CADACF6C5F9168101C8343745EAD007* L_0 = __this->___U3CFieldsU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* FieldDescriptor_get_ContainingOneof_mAD9A56A20B0FD569E496F3809EEA048A0B35BE12_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* L_0 = __this->___U3CContainingOneofU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m7AB2000F20A48610A7371031906FADF8F6F7673A_inline (OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_mBA1221E2C67E7CC561A3309C1CC18F540549368B_inline (OriginalNameAttribute_t6D1BE19AFFAE774B693ACEB0638933F168D8896F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPreferredAliasU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t23CA0F67040B1B1AA6C4498022BA5CD40FD87B85* ServiceDescriptorProto_get_Method_mB794C6E023EBA2C7832607851BAA9004DB2B5706_inline (ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t23CA0F67040B1B1AA6C4498022BA5CD40FD87B85* L_0 = __this->___method__7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* ServiceDescriptor_get_Proto_m4C9694FC0013513FFD4C339F481202DC6F54A9B1_inline (ServiceDescriptor_tCBB1F2B4F46EDD561F195B79F5677C4AA09BBE43* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* L_0 = __this->___proto_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* ServiceDescriptorProto_get_Options_m6DE652CD2E5E237A808257748339EEC422F0DB3A_inline (ServiceDescriptorProto_t16093D66C804C1142CCABA39F1B84184FFA6C5B7* __this, const RuntimeMethod* method) 
{
	{
		ServiceOptions_t6EAADA83B4F3866EA4A6E006496E6BD26CF53AD0* L_0 = __this->___options__9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldType_mA6AAE2D18452D92D0ED4292C12CF1787E838A170_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___fieldType_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* OneofDescriptor_get_Accessor_mFD8F72DCDD5290916D3EA15E1B61BE88A4615211_inline (OneofDescriptor_t6D97589A869B64080806BDE51D10927595E7D094* __this, const RuntimeMethod* method) 
{
	{
		OneofAccessor_t2A9865E508BFFF80A905567023DDC162ABDD861D* L_0 = __this->___accessor_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FileDescriptor_get_Syntax_mE2805A7CB3C2A521559E48369408101228694536_inline (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSyntaxU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* FieldDescriptor_get_Proto_mAF61ACC27177C740DAA6B48F87092257ACC7F334_inline (FieldDescriptor_tE414DD542471068CDF328DF49F880AB7135769A3* __this, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_tF962DB3AAECC54ED6443574B8EB17AA34A073B0C* L_0 = __this->___U3CProtoU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6* ByteString_get_Empty_m2803BB517EB2079F887E53869BE46899B2D9AB9F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_il2cpp_TypeInfo_var);
		ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6* L_0 = ((ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_StaticFields*)il2cpp_codegen_static_fields_for(ByteString_t721AA80C6C4E12A4D4E14DD8E5C5276807CC93A6_il2cpp_TypeInfo_var))->___empty_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_m50251A9E6576BB3E83F86357D803DDBF12C9ED71_inline (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDependenciesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_mAFA1FC569B22442C5D558E1D8C0D8F5B7AB58410_inline (FileDescriptor_tC9C9C686111E37A7E375D6D24E377056F3988AE2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mB3150FEFE28F0F8C8C1354C667DE61E1D5CD8104_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mA085AADB399D6B96D8F7634E99566599AAE681B8_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t7207842FD2F070C6EE1AF33A2A14CA1924694121_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m759EB5DCD1C2408B76905255B8EAF9019C4A40CD_gshared_inline (RepeatedField_1_t33BF0A8B0555D4DEC49FF383CDDE959709150A74* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___count_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* ExtensionSet_1_get_ValuesByNumber_m839D2F7D18061DC4D5B2D269B8EEC1D4D69498B5_gshared_inline (ExtensionSet_1_tA05358208E9C70D382AD4E4E52D8E69F9BF19EE4* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2* L_0 = (Dictionary_2_t2BC6BB7DBD5AAEF63705DC7265AEB6FD5FB971F2*)__this->___U3CValuesByNumberU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
