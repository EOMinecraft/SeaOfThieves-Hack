#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AthenaGameState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AthenaGameState.BP_AthenaGameState_C
// 0x0008 (0x08C8 - 0x08C0)
class ABP_AthenaGameState_C : public AAthenaGameState
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AthenaGameState.BP_AthenaGameState_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
