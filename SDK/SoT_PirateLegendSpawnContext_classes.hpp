#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PirateLegendSpawnContext_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PirateLegendSpawnContext.PirateLegendSpawnContext_C
// 0x0000 (0x0028 - 0x0028)
class UPirateLegendSpawnContext_C : public UAISpawnContextId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PirateLegendSpawnContext.PirateLegendSpawnContext_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
