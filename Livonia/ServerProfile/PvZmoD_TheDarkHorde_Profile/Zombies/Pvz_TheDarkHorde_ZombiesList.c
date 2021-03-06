
/// If a player KILL THE MASTER, the horde is defeated, the other zombies disappear and the horde will spawn in another place

string theHordeMasterName_Day 	= "ZmbM_DH_Master_Day"; 	// used at day time
string theHordeMasterName_Night = "ZmbM_DH_Master_Night"; 	// used at night time (if "50" is set to 1 in the json file)

// MASTER is used to lead the horde to hunt the players
// The default Masters have a very good hear so he can hunt player at long distance (300-400m) and he have a lot of health points
// When the horde is defeated the player can loot the Master

// List of class of zombies that can spawn in the dark horde during day time
ref TStringArray zombiesListDayTime = {
	// Naked
	"ZmbM_HermitSkinny_Beige",
	"ZmbM_HermitSkinny_Black",
	"ZmbM_HermitSkinny_Green",
	"ZmbM_HermitSkinny_Red",

	// Skinny
	"ZmbF_CitizenBSkinny",

	"ZmbF_SkaterYoung_Brown",

	"ZmbF_MilkMaidOld_Beige",
	"ZmbF_MilkMaidOld_Black",
	"ZmbF_MilkMaidOld_Green",
	"ZmbF_MilkMaidOld_Grey",

	////// Normals
	"ZmbM_FarmerFat_Blue",
	"ZmbM_FarmerFat_Brown",
	"ZmbM_FarmerFat_Green",

	"ZmbM_VillagerOld_Blue",
	"ZmbM_VillagerOld_Green",
	"ZmbM_VillagerOld_White",

	"ZmbF_VillagerOld_Blue",
	"ZmbF_VillagerOld_Green",
	"ZmbF_VillagerOld_Red",

	"ZmbF_SurvivorNormal_Blue",
	"ZmbF_SurvivorNormal_Orange",
	"ZmbF_SurvivorNormal_Red",

	"ZmbM_FishermanOld_Blue",
	"ZmbM_FishermanOld_Green",
	"ZmbM_FishermanOld_Red",

	"ZmbF_CitizenANormal_Brown",
	"ZmbF_CitizenANormal_Blue",

	"ZmbM_CitizenASkinny_Blue",
	"ZmbM_CitizenASkinny_Brown",

	"ZmbM_CitizenBFat_Green",

	"ZmbM_HikerSkinny_Blue",
	"ZmbM_HikerSkinny_Green",

	"ZmbF_HikerSkinny_Green",

	"ZmbF_JournalistNormal_Blue",
	"ZmbF_JournalistNormal_Green",
	"ZmbF_JournalistNormal_Red",
	"ZmbF_JournalistNormal_White",

	"ZmbM_CommercialPilotOld_Blue",
	"ZmbM_CommercialPilotOld_Olive",
	"ZmbM_CommercialPilotOld_Brown",

	"ZmbM_MotobikerFat_Black",
	"ZmbM_MotobikerFat_Blue",
	
	"ZmbF_BlueCollarFat_Blue",
	"ZmbF_BlueCollarFat_Green",

	"ZmbM_ClerkFat_Brown",
	"ZmbM_ClerkFat_Khaki",

	"ZmbF_Clerk_Normal_Blue",
	"ZmbF_Clerk_Normal_Green",

	"ZmbF_ClerkFat_Black",

	// Workers - Normals
	"ZmbF_MechanicNormal_Beige",

	"ZmbM_MechanicSkinny_Grey",

	"ZmbM_ConstrWorkerNormal_Black",
	"ZmbM_ConstrWorkerNormal_Grey",

	"ZmbM_HandymanNormal_Grey",

	//Workers-Strong
	"ZmbM_HeavyIndustryWorker",

	//Medic-Strongs
	"ZmbM_ParamedicNormal_Black",


	//Strongs 
	"ZmbM_PrisonerSkinny",

	// Slow
	"ZmbM_Jacket_black",
	"ZmbM_Jacket_blue",
	"ZmbM_Jacket_brown",
	"ZmbM_Jacket_grey",
	"ZmbM_Jacket_khaki",

	"ZmbF_ShortSkirt_black",
	"ZmbF_ShortSkirt_brown",
	"ZmbF_ShortSkirt_grey",

	// Police
	"ZmbM_PolicemanFat",

	"ZmbF_PoliceWomanNormal",

	"ZmbM_HunterOld_Autumn",
	"ZmbM_HunterOld_Spring",
	"ZmbM_HunterOld_Summer",

	// Military
	"ZmbM_PolicemanSpecForce",

	"ZmbM_SoldierNormal",

	"ZmbM_usSoldier_normal_Woodland",
	"ZmbM_usSoldier_normal_Desert",

	"ZmbM_PatrolNormal_PautRev",
	"ZmbM_PatrolNormal_Autumn",
	"ZmbM_PatrolNormal_Flat",
	"ZmbM_PatrolNormal_Summer",

	//Specials
	"ZmbM_DoctorFat",
};	

// List of class of zombies that can spawn in the dark horde during night time (if "50" is set to 1 in the json file. If set to 0, day zombies will always spawn)
ref TStringArray zombiesListNightTime = {
	"ZmbF_DH_WhiteLady",
	"ZmbF_DH_WhiteLady",
	"ZmbF_DH_WhiteLady",
	"ZmbF_DH_WhiteLady",
	
	"ZmbM_DH_Invisible_Guillie",
	"ZmbM_DH_Invisible_Guillie",
	"ZmbM_DH_Invisible_Guillie",
	"ZmbM_DH_Invisible_Guillie",
	"ZmbM_DH_Invisible_Guillie",
	"ZmbM_DH_Invisible_Guillie",

	"ZmbM_DH_NightWalker",
	"ZmbM_DH_NightWalker",
	"ZmbM_DH_NightWalker",
	"ZmbM_DH_NightWalker",

	"ZmbM_DH_Invisible_RedEye",
	"ZmbM_DH_Invisible_RedEye",
	"ZmbM_DH_Invisible_RedEye",
	
/// PSR2
///Sprinter=====	
	 // "PSR2_ZmbM_Murder_FastZMB",		
	 // "PSR2_ZmbM_Golovastik",
	 // "PSR2_ZmbM_Plague",
	 // "PSR2_ZmbM_krovosos", 	
	 // "PSR2_ZmbM_krovosos_black",
///Hard=========
	 // "PSR2_ZmbM_Kleshna",
	 // "PSR2_ZmbM_Zubastik",		
	 // "PSR2_ZmbM_Zubastik1",		
	 // "PSR2_ZmbM_Zubastik2",		
///Medium=======
	 // "PSR2_ZmbM_Mymia_SlowZMB",  		
	 // "PSR2_ZmbM_Tank1_BigZMB",//  (скоро)		
	 // "PSR2_ZmbM_BioHazardZMB",//  (скоро)						
	 // "PSR2_ZmbM_ZombieCivil",// 	 (скоро)
	 
// Be careful Chemlights are resource consuming for clients
	// "Chemlight_Red",
	// "Chemlight_Yellow",
	// "Chemlight_Blue",
	// "Chemlight_Green",
	// "Chemlight_White",
};	

