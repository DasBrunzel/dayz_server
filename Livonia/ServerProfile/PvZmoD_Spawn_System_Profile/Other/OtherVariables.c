/// Safe Zone Objects ///

ref TStringArray safeZoneObjects = {
	"BarrelHoles",
};

// You can add (or remove) items that generate zombie safe zone
// You can set a part of the class name of the objects if it have different variants

// For example "BarrelHoles" includes "BarrelHoles_Green", "BarrelHoles_Blue", "BarrelHoles_Red", "BarrelHoles_Yellow"
// because their class name contains "BarrelHoles"

// The items you choose MUST HAVE A COLLIDER if not it will not be detected by the system and will not generate a safe zone.


/// -------------------------------------------------------------------------------------------------------------------------- ///


/// Spawn with AI ///

ref TStringArray spawnWithAI = {
	"Zmb",
	"Animal",
	"skeleman",
	"FS",
    "MSFC",
	"BPZMB",
	"jdo_Mutant",
};

// You can add (or remove) items that will spawn with an active Artificial Intelligence

// It is useful if you add mods that add new AIs that do not contain "Zmb" in their class name
// If you do not that, the new AIs will spawn but will not move

// You can set a part of the class name of the objects if it have different variants
// For example "Zmb" includes all vanilla zombies because their class name contains "Zmb"


/// -------------------------------------------------------------------------------------------------------------------------- ///


/// Loot Container ///

string lootContainer = "LootChest";

// You can change the container in which the static hordes loot spawn

// It is highly recommended to set the lifetime of this container to 3600 (one hour) in types.xml file

// If the object have no lifetime it will never disappear
// If lifetime is too high, many container can accumulate
// If lifetime is too low, the container can disappear before the players loot it

// Note that the lifetime is only important if the server restart (or crash) when the loot Container is activated
// In normal condition, the loot Container appear and disappear depending on players proximity (as the zombies)

// The default loot container is "LootChest" (it is a copy of vanilla seachest I made to set an appropriate lifetime without needed to modify the vanilla object)

/// -------------------------------------------------------------------------------------------------------------------------- ///


/// Mission Name ///

string missionNamePvz   = "dayzOffline.enoch"; /// LIVONIA

// Change this name and adapt DynamicSpawnZones.c and StaticSpawnDatas.c coordinates to use the system on other maps

/// -------------------------------------------------------------------------------------------------------------------------- ///
