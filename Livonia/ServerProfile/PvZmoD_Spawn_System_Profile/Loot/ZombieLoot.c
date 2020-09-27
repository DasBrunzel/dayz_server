/// zombieList_XX : List of zeds categories concerned
/// You can find zombies list in Zombie_Type_All variable in ZombiesCategories.c file
/// if you want set an entier family (all color skin of a zombie type) just replace the "_color" by "_base" in the name

/// item/vest/back/headgearList_XX	  : First entry : All => the zed always loot all the item in the list / 1.0 => 100% chance to loot one item in the list / 0.3 => 30% to loot one item in the list / 2 => loot 2.0 random item in the list / 3.0 => loot 3 random item in the list...
/// itemList_XX	  : Second entry : 
/// ////////////////////////////// Random 			=> items with random health 
/// ////////////////////////////// Normal/Pristine 	=> items pristine 
/// ////////////////////////////// Worn 			=> items worn
/// ////////////////////////////// Damaged 			=> items damaged 
/// ////////////////////////////// BadlyDamaged 	=> items badly damaged 
/// ////////////////////////////// Ruined 			=> items ruined
/// itemList_XX	  : other entries : list of item the zed can loot
/// You can find items names in the types.xml file

////// IF YOU ADD YOUR OWN CONFIGURATIONS, REMEMBER THE FIRST CONFIGURATION MATCHING THE ZOMBIE CONCERNED IS SELECTED 
////// (except "TheOther" which is selected if zombie is not found in any configuration)

ref TStringArray zombieList_00 	= {"TheOthers",}; 
ref TStringArray itemList_00 	= {"0.2","Pristine","Kiwi","Apple","Pear","Plum","Tomato","GreenBellPepper","Zucchini","SewingKit","WaterBottle","Rag",};
ref TStringArray vestList_00 	= {"0.0","Random","",};
ref TStringArray backList_00 	= {"0.0","Random","",};
ref TStringArray headgearList_00= {"0.0","Random","",}; 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref TStringArray zombieList_01 	= {"ZmbM_HermitSkinny_Black","ZmbM_HermitSkinny_Green","ZmbM_HermitSkinny_Red",};
ref TStringArray itemList_01 	= {"0.3","Pristine","SmallStone","Rag","SmallStone","Worm","Worm","Worm","Worm","Worm","Worm","Worm","Worm","Worm","AuriculariaMushroom","LactariusMushroom","MacrolepiotaMushroom","PleurotusMushroom","PsilocybeMushroom","SambucusBerry","CaninaBerry",}; 
ref TStringArray vestList_01 	= {"0.0","Random","",};
ref TStringArray backList_01 	= {"0.1","BadlyDamaged","CourierBag",};
ref TStringArray headgearList_01= {"0.2","Random","FlatCap_Black","FlatCap_Brown","FlatCap_Grey","BeanieHat_Black","BeanieHat_Brown","BeanieHat_Green","BeanieHat_Grey","BeanieHat_Beige",};

ref TStringArray zombieList_02 	= {"ZmbF_DoctorSkinny_Base","ZmbF_NurseFat_Base","ZmbM_ParamedicNormal_Base","ZmbF_ParamedicNormal_Base",}; 
ref TStringArray itemList_02 	= {"0.5","Pristine","BloodTestKit","CharcoalTablets","Rag","SalineBagIV","TetracyclineAntibiotics","Thermometer","VitaminBottle","Epinephrine", "Morphine", "PainkillerTablets", "CharcoalTablets",}; 
ref TStringArray vestList_02 	= {"0.0","Random","",};
ref TStringArray backList_02 	= {"0.0","Random","",};
ref TStringArray headgearList_02= {"0.0","Random","",};

ref TStringArray zombieList_03 	= {"ZmbM_PrisonerSkinny_Base",}; 
ref TStringArray itemList_03 	= {"0.3","Pristine","Lockpick","Potato","Potato","Potato","Potato","Potato","ChernarusMap","CigarettePack_Partyzanka","Rope",};
ref TStringArray vestList_03 	= {"0.0","Random","",};
ref TStringArray backList_03 	= {"0.0","Random","",};
ref TStringArray headgearList_03= {"0.0","Random","",};

ref TStringArray zombieList_04 	= {"ZmbM_FirefighterNormal_Base","ZmbM_HeavyIndustryWorker_Base",}; 
ref TStringArray itemList_04 	= {"0.4","Pristine","LeatherSewingKit","Megaphone","CigarettePack_Partyzanka","Rag","Rag","Rag","Rag","FirefighterAxe",}; 
ref TStringArray vestList_04 	= {"0.1","Random","GP5GasMask",};
ref TStringArray backList_04 	= {"0.0","Random","",};
ref TStringArray headgearList_04= {"0.8","Random","FirefightersHelmet_Red","FirefightersHelmet_White","FirefightersHelmet_Yellow",};

ref TStringArray zombieList_05 	= {"ZmbF_MechanicNormal_Base","ZmbM_ConstrWorkerNormal_Base","ZmbM_HandymanNormal_Base","ZmbM_OffshoreWorker_Base",}; 
ref TStringArray itemList_05 	= {"0.7","Random","NailBox","NailBox","NailBox","BurlapSack","DuctTape","Hammer","Pliers","SparkPlug","EngineOil","CarBattery","CanisterGasoline","PipeWrench","Pipe",}; 
ref TStringArray vestList_05 	= {"0.0","Random","",};
ref TStringArray backList_05 	= {"0.0","Random","",};
ref TStringArray headgearList_05= {"0.7","Random","WeldingMask","ConstructionHelmet_Lime","ConstructionHelmet_Orange","ConstructionHelmet_Red","ConstructionHelmet_White","ConstructionHelmet_Yellow","ConstructionHelmet_Blue",};

ref TStringArray zombieList_06 	= {"ZmbM_PolicemanFat_Base",}; 
ref TStringArray itemList_06 	= {"0.5","BadlyDamaged","MakarovIJ70","Mag_IJ70_8Rnd","Mag_IJ70_8Rnd","Mag_IJ70_8Rnd","PoliceBaton",};
ref TStringArray vestList_06 	= {"0.0","Random","",};
ref TStringArray backList_06 	= {"0.5","Random","AviatorGlasses",};
ref TStringArray headgearList_06= {"0.5","Random","PoliceCap","PoliceCap","PoliceCap","DirtBikeHelmet_Police",};

ref TStringArray zombieList_07 	= {"ZmbF_PoliceWomanNormal_Base",};
ref TStringArray itemList_07 	= {"0.7","Random","Ammo_22","Megaphone","Handcuffs","HandcuffKeys","Handcuffs","HandcuffKeys","Ammo_45ACP","Ammo_380","MP5_Compensator","PistolOptic","PistolSuppressor",};
ref TStringArray vestList_07 	= {"0.0","Random","",};
ref TStringArray backList_07 	= {"0.3","Random","AviatorGlasses",};
ref TStringArray headgearList_07= {"0.2","Random","PoliceCap","PoliceCap","PoliceCap","DirtBikeHelmet_Police",};

ref TStringArray zombieList_08 	= {"ZmbM_PatrolNormal_Base",};
ref TStringArray itemList_08 	= {"0.5","Pristine","Ammo_9x19","Ammo_9x39","AK_Suppressor","PistolSuppressor",};
ref TStringArray vestList_08 	= {"0.1","Random","BaseRadio",};
ref TStringArray backList_08 	= {"0.3","Random","GP5GasMask",};
ref TStringArray headgearList_08= {"0.5","Random","Ssh68Helmet","Ssh68Helmet","Ssh68Helmet","ZSh3PilotHelmet_Black","ZSh3PilotHelmet_Green",};

ref TStringArray zombieList_09 	= {"ZmbM_PolicemanSpecForce_Base",}; 
ref TStringArray itemList_09 	= {"1.0","BadlyDamaged","FNX45","PistolSuppressor",};
ref TStringArray vestList_09 	= {"0.3","BadlyDamaged","PoliceVest",};
ref TStringArray backList_09 	= {"0.3","Random","GasMask",};
ref TStringArray headgearList_09= {"0.0","Random","",};

ref TStringArray zombieList_10 	= {"ZmbM_HunterOld_Base",}; 
ref TStringArray itemList_10 	= {"1.0","Random","Heatpack","PurificationTablets","Ammo_12gaSlug","Ammo_12gaPellets","Ammo_12gaPellets","Whetstone","Lard","Mackerel","Machete","HuntingKnife","PortableGasLamp","PortableGasStove","Tripod","Compass","Canteen","ChernarusMap",};//"gp_crossbow","gp_Ammo_ArrowBolt","gp_Ammo_ArrowBolt",}; 
ref TStringArray vestList_10 	= {"0.01","BadlyDamaged","GreatHelm","Headtorch_Black","Headtorch_Grey",};
ref TStringArray backList_10 	= {"0.2","Ruined","HuntingBag","HuntingBag","HuntingBag","GhillieBushrag_Tan"};
ref TStringArray headgearList_10= {"0.3","Random","BaseballCap_Camo","CowboyHat_black","CowboyHat_Brown","CowboyHat_darkBrown","CowboyHat_green"};

ref TStringArray zombieList_11 	= {"ZmbM_priestPopSkinny_Base",}; 
ref TStringArray itemList_11 	= {"1.0","Random","Cannabis","Cannabis","Marmalade","Bear_Pink","BookDeadSouls",};
ref TStringArray vestList_11 	= {"1.0","Random","",};
ref TStringArray backList_11 	= {"0.0","Random","",};
ref TStringArray headgearList_11= {"0.5","Random","",};

ref TStringArray zombieList_12 	= {"ZmbM_DoctorFat_Base",}; 
ref TStringArray itemList_12 	= {"10.0","Random","Guts","HumanSteakMeat","Bone","Guts","HumanSteakMeat","Bone",};
ref TStringArray vestList_12 	= {"0.05","Random","MeatTenderizer",};
ref TStringArray backList_12 	= {"0.0","Random","",};
ref TStringArray headgearList_12= {"1.0","Random","HockeyMask",};

ref TStringArray zombieList_13 	= {"ZmbM_usSoldier_normal_Base",};
ref TStringArray itemList_13 	= {"0.5","Pristine","Ammo_9x19","Ammo_9x39","AK_Suppressor","PistolSuppressor",};
ref TStringArray vestList_13 	= {"0.0","Random","",};
ref TStringArray backList_13 	= {"0.5","Random","AviatorGlasses",};
ref TStringArray headgearList_13= {"1.0","Random","MilitaryBeret_CDF","MilitaryBeret_ChDKZ","MilitaryBeret_NZ","MilitaryBeret_Red","MilitaryBeret_UN","OfficerHat",};

ref TStringArray zombieList_14 	= {"ZmbM_SoldierNormal_Base",}; 
ref TStringArray itemList_14 	= {"0.5","BadlyDamaged","AKM","Mag_AKM_30Rnd","Mag_AKM_30Rnd","Mag_AKM_30Rnd",};
ref TStringArray vestList_14 	= {"0.3","Random","HighCapacityVest_Black","PlateCarrierVest", "SmershVest","UKAssVest_Black","UKAssVest_Camo",};
ref TStringArray backList_14 	= {"0.3","Random","AssaultBag_Black","AssaultBag_Green","AssaultBag_Ttsko","DesignerGlasses",};
ref TStringArray headgearList_14= {"0.3","Random","GasMask",};

ref TStringArray zombieList_15 	= {"ZmbM_HermitSkinny_Beige",};
ref TStringArray itemList_15 	= {"1.0","Ruined","Worm","AthleticShoes_Blue","CombatBoots_Grey","HikingBootsLow_Blue","JoggingShoes_Violet","JungleBoots_Brown","Sneakers_Red","Wellies_Brown","WorkingBoots_Yellow",};  
ref TStringArray vestList_15 	= {"0.0","Ruined","",};  /// GhillieHood_Tan (tete) / GhillieBushrag_Tan (epaules) / GhillieTop_Tan (buste) / GhillieSuit_Tan (total)
ref TStringArray backList_15 	= {"0.9","Ruined","GhillieBushrag_Tan","GhillieSuit_Tan","GhillieTop_Tan","GhillieBushrag_Mossy","GhillieSuit_Mossy","GhillieTop_Mossy","GhillieBushrag_Woodland","GhillieSuit_Woodland","GhillieTop_Woodland","GhillieBushrag_Tan","GhillieBushrag_Mossy","GhillieBushrag_Woodland","GhillieBushrag_Tan","GhillieBushrag_Mossy","GhillieBushrag_Woodland",}; 
ref TStringArray headgearList_15= {"0.75","Ruined","GhillieHood_Tan","GhillieHood_Mossy","GhillieHood_Woodland",}; 

ref TStringArray zombieList_16 	= {"ZmbM_SkaterYoung_Base",}; 
ref TStringArray itemList_16 	= {"0.2","Pristine","Kiwi","Apple","Pear","Plum","Tomato","GreenBellPepper","Zucchini","SewingKit","WaterBottle","Rag",};
ref TStringArray vestList_16 	= {"1.0","Random","SportGlasses_Black","SportGlasses_Blue","SportGlasses_Green","SportGlasses_Orange",};
ref TStringArray backList_16 	= {"0.2","Ruined","ChildBag_Blue","ChildBag_Green","ChildBag_Red",};
ref TStringArray headgearList_16= {"0.7","Random","BaseballCap_Beige","BaseballCap_Black","BaseballCap_CMMG_Black","BaseballCap_Olive","SkateHelmet_Black","SkateHelmet_Blue","SkateHelmet_Gray","SkateHelmet_Green","SkateHelmet_Red",};

ref TStringArray zombieList_17 	= {"ZmbF_SkaterYoung_Base",}; 
ref TStringArray itemList_17 	= {"0.2","Pristine","HockeyStick","Apple","Pear","Plum","Tomato","GreenBellPepper","Zucchini","SewingKit","WaterBottle","Rag",};
ref TStringArray vestList_17 	= {"0.0","Random","",};
ref TStringArray backList_17 	= {"0.2","Ruined","ChildBag_Blue","ChildBag_Green","ChildBag_Red",};
ref TStringArray headgearList_17= {"0.5","Random","BaseballCap_CMMG_Pink","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Blue",};

ref TStringArray zombieList_18 	= {"ZmbM_Jacket_Base",}; 	
ref TStringArray itemList_18 	= {"0.2","Pristine","Kiwi","Apple","Pear","Plum","Tomato","GreenBellPepper","Zucchini","SewingKit","WaterBottle","Rag",};
ref TStringArray vestList_18 	= {"0.0","Random","",};
ref TStringArray backList_18 	= {"0.0","Random","",};
ref TStringArray headgearList_18= {"0.3","Random","",};

ref TStringArray zombieList_19 	= {"ZmbF_ShortSkirt_Base",}; 	
ref TStringArray itemList_19 	= {"0.2","Pristine","Kiwi","Apple","Pear","Plum","Tomato","GreenBellPepper","Zucchini","SewingKit","WaterBottle","Rag",};
ref TStringArray vestList_19 	= {"0.0","Random","",};
ref TStringArray backList_19 	= {"0.0","Random","",};
ref TStringArray headgearList_19= {"0.8","Random","ThinFramesGlasses","ThickFramesGlasses",};

ref TStringArray zombieList_20 	= {"ZmbM_MechanicSkinny_Base","ZmbF_BlueCollarFat_Blue",}; 				
ref TStringArray itemList_20 	= {"0.7","SparkPlug","EngineOil","CarBattery","CanisterGasoline","LugWrench",}; 	
ref TStringArray vestList_20 	= {"0.0","Random","",};
ref TStringArray backList_20 	= {"0.0","Random","",};
ref TStringArray headgearList_20= {"0.0","Random","",};

/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ref TStringArray zombieList_21 	= {"ZmbM_LivenTest_02",}; 				// you can use to create new Z category
ref TStringArray itemList_21 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_21 	= {"0.0","Random","",};
ref TStringArray backList_21 	= {"1.0","Ruined","GhillieSuit_Mossy","GhillieSuit_Woodland",}; 
ref TStringArray headgearList_21= {"1.0","BadlyDamaged","Headtorch_Black_Invisible",}; 

ref TStringArray zombieList_22 	= {"","","",}; 				// you can use to create new Z category
ref TStringArray itemList_22 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_22 	= {"0.0","Random","",};
ref TStringArray backList_22 	= {"0.0","Random","",};
ref TStringArray headgearList_22= {"0.0","Random","",};

ref TStringArray zombieList_23 	= {"","","",}; 				// you can use to create new Z category
ref TStringArray itemList_23 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_23 	= {"0.0","Random","",};
ref TStringArray backList_23 	= {"0.0","Random","",};
ref TStringArray headgearList_23= {"0.0","Random","",};

ref TStringArray zombieList_24 	= {"","","",}; 				// you can use to create new Z category
ref TStringArray itemList_24 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_24 	= {"0.0","Random","",};
ref TStringArray backList_24 	= {"0.0","Random","",};
ref TStringArray headgearList_24= {"0.0","Random","",};

ref TStringArray zombieList_25 	= {"","","",}; 				// you can use to create new Z category
ref TStringArray itemList_25 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_25 	= {"0.0","Random","",};
ref TStringArray backList_25 	= {"0.0","Random","",};
ref TStringArray headgearList_25= {"0.0","Random","",};

ref TStringArray zombieList_26 	= {"","","",}; 				// you can use to create new Z category
ref TStringArray itemList_26 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_26 	= {"0.0","Random","",};
ref TStringArray backList_26 	= {"0.0","Random","",};
ref TStringArray headgearList_26= {"0.0","Random","",};

ref TStringArray zombieList_27 	= {"","","",}; 				// you can use to create new Z category
ref TStringArray itemList_27 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_27 	= {"0.0","Random","",};
ref TStringArray backList_27 	= {"0.0","Random","",};
ref TStringArray headgearList_27= {"0.0","Random","",};

ref TStringArray zombieList_28 	= {"","","",}; 				// you can use to create new Z category
ref TStringArray itemList_28 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_28 	= {"0.0","Random","",};
ref TStringArray backList_28 	= {"0.0","Random","",};
ref TStringArray headgearList_28= {"0.0","Random","",};

ref TStringArray zombieList_29 	= {"","","",}; 				// you can use to create new Z category
ref TStringArray itemList_29 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_29 	= {"0.0","Random","",};
ref TStringArray backList_29 	= {"0.0","Random","",};
ref TStringArray headgearList_29= {"0.0","Random","",};

ref TStringArray zombieList_30  = {"ZmbM_JournalistSkinny_Base","ZmbF_PatientOld_Base",};                 /// NO LOOT (zombie base used for PvZmoD Dark Horde)
ref TStringArray itemList_30 	= {"0.0","Pristine","",}; 	// you can use to create item list for this category
ref TStringArray vestList_30 	= {"0.0","Random","",};
ref TStringArray backList_30 	= {"0.0","Random","",};
ref TStringArray headgearList_30= {"0.0","Random","",};


// "GasMask","GP5GasMask",
// "HockeyMask","GreatHelm","NBCHoodGray"
// "Ushanka_Black","Ushanka_Blue","Ushanka_Green",
// "Headtorch_Black","Headtorch_Grey"

// "SportGlasses_Black","SportGlasses_Blue","SportGlasses_Green","SportGlasses_Orange",
// "ThickFramesGlasses","ThinFramesGlasses","AviatorGlasses","DesignerGlasses",




