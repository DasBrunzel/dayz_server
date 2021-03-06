// These lists are used to spawn loot on zombies
// It is useful for night zombies that need special items (Guillie on invisible zombies for example)
// and to spawn loot on Master to reward the players that defeat the horde

/// zombieList_DH_XX : List of zeds class

/// item/vest/back/headgearList_DH_XX	  : First entry : All => the zed always loot all the item in the list / 1.0 => 100% chance to loot one item in the list / 0.3 => 30% to loot one item in the list / 2.0 => loot 2 random items in the list / 3.0 => loot 3 random item in the list...
/// itemList_DH_XX	  : Second entry : 
/// ////////////////////////////// Random 			=> items with random health 
/// ////////////////////////////// Normal/Pristine 	=> items pristine 
/// ////////////////////////////// Worn 			=> items worn
/// ////////////////////////////// Damaged 			=> items damaged 
/// ////////////////////////////// BadlyDamaged 	=> items badly damaged 
/// ////////////////////////////// Ruined 			=> items ruined
/// itemList_DH_XX	  : other entries : list of item the zed can loot
/// You can find items names in the types.xml file

////// IF YOU ADD YOUR OWN CONFIGURATIONS, REMEMBER THE FIRST CONFIGURATION MATCHING THE ZOMBIE CONCERNED IS SELECTED 
////// (except "TheOther" which is selected if zombie is not found in any configuration)

ref TStringArray zombieList_DH_00 	= {"TheOthers",}; 
ref TStringArray itemList_DH_00 	= {"0.0","Pristine","",};
ref TStringArray vestList_DH_00 	= {"0.0","Random","",};
ref TStringArray backList_DH_00 	= {"0.0","Random","",};
ref TStringArray headgearList_DH_00 = {"0.0","Random","",}; 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref TStringArray zombieList_DH_01 	= {"ZmbM_DH_Master_Day"};
ref TStringArray itemList_DH_01 	= {"30.0","Pristine","Guts","HumanSteakMeat","Bone"}; /// Add REWARD for player that defeat the horde
ref TStringArray vestList_DH_01 	= {"0.0","Random","",};
ref TStringArray backList_DH_01 	= {"0.0","Random","",};
ref TStringArray headgearList_DH_01 = {"1.0","Random","Poncho_Red",}; // "Poncho_Red" is active only if you use @WindstridesClothingPack mod

ref TStringArray zombieList_DH_02 	= {"ZmbM_DH_Master_Night",}; 
ref TStringArray itemList_DH_02 	= {"30.0","Pristine","Guts","HumanSteakMeat","Bone"}; /// Add REWARD for player that defeat the horde
ref TStringArray vestList_DH_02 	= {"0.0","Random","",};
ref TStringArray backList_DH_02 	= {"0.0","Random","",};
ref TStringArray headgearList_DH_02 = {"1.0","Random","Poncho_Red",}; // "Poncho_Red" is active only if you use @WindstridesClothingPack mod

ref TStringArray zombieList_DH_03 	= {"ZmbM_DH_Invisible_Guillie",}; 	
ref TStringArray itemList_DH_03 	= {"0.0","Random","",};
ref TStringArray vestList_DH_03 	= {"0.0","Random","",};
ref TStringArray backList_DH_03 	= {"1.0","Ruined","GhillieSuit_Mossy","GhillieSuit_Woodland",};
ref TStringArray headgearList_DH_03 = {"0.0","Random","",}; 

ref TStringArray zombieList_DH_04 	= {"ZmbM_DH_Invisible_RedEye",}; 
ref TStringArray itemList_DH_04 	= {"0.0","Random","",}; 	
ref TStringArray vestList_DH_04 	= {"0.0","Random","",};
ref TStringArray backList_DH_04 	= {"1.0","Ruined","GhillieSuit_Mossy","GhillieSuit_Woodland",};  // you can replace Guillie by "poncho_mung" if you use @MunghardsItempack mod
ref TStringArray headgearList_DH_04 = {"1.0","BadlyDamaged","Red_Eye",}; 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// The following lists are not used yet, you can use them if you need (if you use zombies from other mods for example)

ref TStringArray zombieList_DH_05 	= {"",}; 
ref TStringArray itemList_DH_05 	= {"0.0","Random","",}; 	
ref TStringArray vestList_DH_05 	= {"0.0","Random","",};
ref TStringArray backList_DH_05 	= {"0.0","Random","",};
ref TStringArray headgearList_DH_05 = {"0.0","Random","",};

ref TStringArray zombieList_DH_06 	= {"",}; 
ref TStringArray itemList_DH_06 	= {"0.0","Random","",}; 	
ref TStringArray vestList_DH_06 	= {"0.0","Random","",};
ref TStringArray backList_DH_06 	= {"0.0","Random","",};
ref TStringArray headgearList_DH_06 = {"0.0","Random","",};

ref TStringArray zombieList_DH_07 	= {"",}; 
ref TStringArray itemList_DH_07 	= {"0.0","Random","",}; 	
ref TStringArray vestList_DH_07 	= {"0.0","Random","",};
ref TStringArray backList_DH_07 	= {"0.0","Random","",};
ref TStringArray headgearList_DH_07 = {"0.0","Random","",};

ref TStringArray zombieList_DH_08 	= {"",}; 
ref TStringArray itemList_DH_08 	= {"0.0","Random","",}; 	
ref TStringArray vestList_DH_08 	= {"0.0","Random","",};
ref TStringArray backList_DH_08 	= {"0.0","Random","",};
ref TStringArray headgearList_DH_08 = {"0.0","Random","",};

ref TStringArray zombieList_DH_09 	= {"",}; 
ref TStringArray itemList_DH_09 	= {"0.0","Random","",}; 	
ref TStringArray vestList_DH_09 	= {"0.0","Random","",};
ref TStringArray backList_DH_09 	= {"0.0","Random","",};
ref TStringArray headgearList_DH_09 = {"0.0","Random","",};

ref TStringArray zombieList_DH_10 	= {"",}; 
ref TStringArray itemList_DH_10 	= {"0.0","Random","",}; 	
ref TStringArray vestList_DH_10 	= {"0.0","Random","",};
ref TStringArray backList_DH_10 	= {"0.0","Random","",};
ref TStringArray headgearList_DH_10 = {"0.0","Random","",}; 
