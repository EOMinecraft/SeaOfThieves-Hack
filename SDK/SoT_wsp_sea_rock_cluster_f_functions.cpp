// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_sea_rock_cluster_f_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_sea_rock_cluster_f.wsp_sea_rock_cluster_f_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_sea_rock_cluster_f_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_sea_rock_cluster_f.wsp_sea_rock_cluster_f_C.UserConstructionScript");

	Awsp_sea_rock_cluster_f_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
