
#include "columns.hpp"

#include <components/misc/stringops.hpp>

#include "universalid.hpp"

namespace CSMWorld
{
    namespace Columns
    {
        struct ColumnDesc
        {
            int mId;
            const char *mName;
        };

        const ColumnDesc sNames[] =
        {
            { ColumnId_Value, "Value" },
            { ColumnId_Id, "ID" },
            { ColumnId_Modification, "Modified" },
            { ColumnId_RecordType, "Record Type" },
            { ColumnId_ValueType, "Value Type" },
            { ColumnId_Description, "Description" },
            { ColumnId_Specialisation, "Specialisation" },
            { ColumnId_Attribute, "Attribute" },
            { ColumnId_Name, "Name" },
            { ColumnId_Playable, "Playable" },
            { ColumnId_Hidden, "Hidden" },
            { ColumnId_MaleWeight, "Male Weight" },
            { ColumnId_FemaleWeight, "Female Weight" },
            { ColumnId_MaleHeight, "Male Height" },
            { ColumnId_FemaleHeight, "Female Height" },
            { ColumnId_Volume, "Volume" },
            { ColumnId_MinRange, "Min Range" },
            { ColumnId_MaxRange, "Max Range" },
            { ColumnId_MinMagnitude, "Min Magnitude" },
            { ColumnId_MaxMagnitude, "Max Magnitude" },
            { ColumnId_SoundFile, "Sound File" },
            { ColumnId_MapColour, "Map Colour" },
            { ColumnId_SleepEncounter, "Sleep Encounter" },
            { ColumnId_Texture, "Texture" },
            { ColumnId_SpellType, "Spell Type" },
            { ColumnId_Cost, "Cost" },
            { ColumnId_ScriptText, "Script Text" },
            { ColumnId_Region, "Region" },
            { ColumnId_Cell, "Cell" },
            { ColumnId_Scale, "Scale" },
            { ColumnId_Owner, "Owner" },
            { ColumnId_Soul, "Soul" },
            { ColumnId_Faction, "Faction" },
            { ColumnId_FactionIndex, "Faction Index" },
            { ColumnId_Charges, "Charges" },
            { ColumnId_Enchantment, "Enchantment" },
            { ColumnId_CoinValue, "Coin Value" },
            { ColumnId_Teleport, "Teleport" },
            { ColumnId_TeleportCell, "Teleport Cell" },
            { ColumnId_LockLevel, "Lock Level" },
            { ColumnId_Key, "Key" },
            { ColumnId_Trap, "Trap" },
            { ColumnId_BeastRace, "Beast Race" },
            { ColumnId_AutoCalc, "Auto Calc" },
            { ColumnId_StarterSpell, "Starter Spell" },
            { ColumnId_AlwaysSucceeds, "Always Succeeds" },
            { ColumnId_SleepForbidden, "Sleep Forbidden" },
            { ColumnId_InteriorWater, "Interior Water" },
            { ColumnId_InteriorSky, "Interior Sky" },
            { ColumnId_Model, "Model" },
            { ColumnId_Script, "Script" },
            { ColumnId_Icon, "Icon" },
            { ColumnId_Weight, "Weight" },
            { ColumnId_EnchantmentPoints, "Enchantment Points" },
            { ColumnId_Quality, "Quality" },
            { ColumnId_Ai, "AI" },
            { ColumnId_AiHello, "AI Hello" },
            { ColumnId_AiFlee, "AI Flee" },
            { ColumnId_AiFight, "AI Fight" },
            { ColumnId_AiAlarm, "AI Alarm" },
            { ColumnId_BuysWeapons, "Buys Weapons" },
            { ColumnId_BuysArmor, "Buys Armor" },
            { ColumnId_BuysClothing, "Buys Clothing" },
            { ColumnId_BuysBooks, "Buys Books" },
            { ColumnId_BuysIngredients, "Buys Ingredients" },
            { ColumnId_BuysLockpicks, "Buys Lockpicks" },
            { ColumnId_BuysProbes, "Buys Probes" },
            { ColumnId_BuysLights, "Buys Lights" },
            { ColumnId_BuysApparati, "Buys Apparati" },
            { ColumnId_BuysRepairItems, "Buys Repair Items" },
            { ColumnId_BuysMiscItems, "Buys Misc Items" },
            { ColumnId_BuysPotions, "Buys Potions" },
            { ColumnId_BuysMagicItems, "Buys Magic Items" },
            { ColumnId_SellsSpells, "Sells Spells" },
            { ColumnId_Trainer, "Trainer" },
            { ColumnId_Spellmaking, "Spellmaking" },
            { ColumnId_EnchantingService, "Enchanting Service" },
            { ColumnId_RepairService, "Repair Service" },
            { ColumnId_ApparatusType, "Apparatus Type" },
            { ColumnId_ArmorType, "Armor Type" },
            { ColumnId_Health, "Health" },
            { ColumnId_ArmorValue, "Armor Value" },
            { ColumnId_Scroll, "Scroll" },
            { ColumnId_ClothingType, "Clothing Type" },
            { ColumnId_WeightCapacity, "Weight Capacity" },
            { ColumnId_OrganicContainer, "Organic Container" },
            { ColumnId_Respawn, "Respawn" },
            { ColumnId_CreatureType, "Creature Type" },
            { ColumnId_SoulPoints, "Soul Points" },
            { ColumnId_OriginalCreature, "Original Creature" },
            { ColumnId_Biped, "Biped" },
            { ColumnId_HasWeapon, "Has Weapon" },
            { ColumnId_Swims, "Swims" },
            { ColumnId_Flies, "Flies" },
            { ColumnId_Walks, "Walks" },
            { ColumnId_Essential, "Essential" },
            { ColumnId_SkeletonBlood, "Skeleton Blood" },
            { ColumnId_MetalBlood, "Metal Blood" },
            { ColumnId_OpenSound, "Open Sound" },
            { ColumnId_CloseSound, "Close Sound" },
            { ColumnId_Duration, "Duration" },
            { ColumnId_Radius, "Radius" },
            { ColumnId_Colour, "Colour" },
            { ColumnId_Sound, "Sound" },
            { ColumnId_Dynamic, "Dynamic" },
            { ColumnId_Portable, "Portable" },
            { ColumnId_NegativeLight, "Negative Light" },
            { ColumnId_Flickering, "Flickering" },
            { ColumnId_SlowFlickering, "Slow Flickering" },
            { ColumnId_Pulsing, "Pulsing" },
            { ColumnId_SlowPulsing, "Slow Pulsing" },
            { ColumnId_Fire, "Fire" },
            { ColumnId_OffByDefault, "Off by default" },
            { ColumnId_IsKey, "Is Key" },
            { ColumnId_Race, "Race" },
            { ColumnId_Class, "Class" },
            { Columnid_Hair, "Hair" },
            { ColumnId_Head, "Head" },
            { ColumnId_Female, "Female" },
            { ColumnId_WeaponType, "Weapon Type" },
            { ColumnId_WeaponSpeed, "Weapon Speed" },
            { ColumnId_WeaponReach, "Weapon Reach" },
            { ColumnId_MinChop, "Min Chop" },
            { ColumnId_MaxChip, "Max Chop" },
            { Columnid_MinSlash, "Min Slash" },
            { ColumnId_MaxSlash, "Max Slash" },
            { ColumnId_MinThrust, "Min Thrust" },
            { ColumnId_MaxThrust, "Max Thrust" },
            { ColumnId_Magical, "Magical" },
            { ColumnId_Silver, "Silver" },
            { ColumnId_Filter, "Filter" },
            { ColumnId_PositionXPos, "Pos X" },
            { ColumnId_PositionYPos, "Pos Y" },
            { ColumnId_PositionZPos, "Pos Z" },
            { ColumnId_PositionXRot, "Rot X" },
            { ColumnId_PositionYRot, "Rot Y" },
            { ColumnId_PositionZRot, "Rot Z" },
            { ColumnId_DoorPositionXPos, "Teleport Pos X" },
            { ColumnId_DoorPositionYPos, "Teleport Pos Y" },
            { ColumnId_DoorPositionZPos, "Teleport Pos Z" },
            { ColumnId_DoorPositionXRot, "Teleport Rot X" },
            { ColumnId_DoorPositionYRot, "Teleport Rot Y" },
            { ColumnId_DoorPositionZRot, "Teleport Rot Z" },
            { ColumnId_DialogueType, "Dialogue Type" },
            { ColumnId_QuestIndex, "Quest Index" },
            { ColumnId_QuestStatusType, "Quest Status" },
            { ColumnId_QuestDescription, "Quest Description" },
            { ColumnId_Topic, "Topic" },
            { ColumnId_Journal, "Journal" },
            { ColumnId_Actor, "Actor" },
            { ColumnId_PcFaction, "PC Faction" },
            { ColumnId_Response, "Response" },
            { ColumnId_Disposition, "Disposition" },
            { ColumnId_Rank, "Rank" },
            { ColumnId_Gender, "Gender" },
            { ColumnId_PcRank, "PC Rank" },
            { ColumnId_ReferenceableId, "Object ID" },

            { ColumnId_ContainerContent, "Content" },
            { ColumnId_ItemCount, "Count" },
            { ColumnId_InventoryItemId, "Item ID"},

            { ColumnId_CombatState, "Combat" },
            { ColumnId_MagicState, "Magic" },
            { ColumnId_StealthState, "Stealth" },
            { ColumnId_EnchantmentType, "Enchantment Type" },
            { ColumnId_Vampire, "Vampire" },
            { ColumnId_BodyPartType, "Bodypart Type" },
            { ColumnId_MeshType, "Mesh Type" },

            { ColumnId_ActorInventory, "Inventory" },
            { ColumnId_SpellList, "Spells" },
            { ColumnId_SpellId, "Spell ID"},

            { ColumnId_NpcDestinations, "Destinations" },
            { ColumnId_DestinationCell, "Dest Cell"},
            { ColumnId_PosX, "Dest X"},
            { ColumnId_PosY, "Dest Y"},
            { ColumnId_PosZ, "Dest Z"},
            { ColumnId_RotX, "Rotation X"},
            { ColumnId_RotY, "Rotation Y"},
            { ColumnId_RotZ, "Rotation Z"},

            { ColumnId_Skill, "Skill" },

            { ColumnId_OwnerGlobal, "Owner Global" },
            { ColumnId_DefaultProfile, "Default Profile" },
            { ColumnId_BypassNewGame, "Bypass New Game" },
            { ColumnId_GlobalProfile, "Global Profile" },
            { ColumnId_RefNumCounter, "RefNum Counter" },
            { ColumnId_RefNum, "RefNum" },
            { ColumnId_Creature, "Creature" },
            { ColumnId_SoundGeneratorType, "Sound Generator Type" },
            { ColumnId_AllowSpellmaking, "Allow Spellmaking" },
            { ColumnId_AllowEnchanting, "Allow Enchanting" },
            { ColumnId_BaseCost, "Base Cost" },
            { ColumnId_School, "School" },
            { ColumnId_Particle, "Particle" },
            { ColumnId_CastingObject, "Casting Object" },
            { ColumnId_HitObject, "Hit Object" },
            { ColumnId_AreaObject, "Area Object" },
            { ColumnId_BoltObject, "Bolt Object" },
            { ColumnId_CastingSound, "Casting Sound" },
            { ColumnId_HitSound, "Hit Sound" },
            { ColumnId_AreaSound, "Area Sound" },
            { ColumnId_BoltSound, "Bolt Sound" },

            { ColumnId_PathgridPoints, "Points" },
            { ColumnId_PathgridIndex, "pIndex" },
            { ColumnId_PathgridPosX, "X" },
            { ColumnId_PathgridPosY, "Y" },
            { ColumnId_PathgridPosZ, "Z" },
            { ColumnId_PathgridEdges, "Edges" },
            { ColumnId_PathgridEdgeIndex, "eIndex" },
            { ColumnId_PathgridEdge0, "Point 0" },
            { ColumnId_PathgridEdge1, "Point 1" },

            { ColumnId_RegionSounds, "Sounds" },
            { ColumnId_SoundName, "Sound Name" },
            { ColumnId_SoundChance, "Chance" },

            { ColumnId_FactionReactions, "Reactions" },
            //{ ColumnId_FactionID, "Faction ID" },
            { ColumnId_FactionReaction, "Reaction" },

            { ColumnId_EffectList, "Effects" },
            { ColumnId_EffectId, "Effect" },
            //{ ColumnId_EffectAttribute, "Attrib" },
            { ColumnId_EffectRange, "Range" },
            { ColumnId_EffectArea, "Area" },

            { ColumnId_AiPackageList, "Ai Packages" },
            { ColumnId_AiPackageType, "Package" },
            { ColumnId_AiWanderDist, "Wander Dist" },
            { ColumnId_AiDuration, "Ai Duration" },
            { ColumnId_AiWanderToD, "Wander ToD" },
            { ColumnId_AiWanderIdle, "Wander Idle" },
            { ColumnId_AiWanderRepeat, "Wander Repeat" },
            { ColumnId_AiActivateName, "Activate" },
            { ColumnId_AiTargetId, "Target ID" },
            { ColumnId_AiTargetCell, "Target Cell" },

            { ColumnId_PartRefList, "Part Reference" },
            { ColumnId_PartRefType, "Type" },
            { ColumnId_PartRefMale, "Male Part" },
            { ColumnId_PartRefFemale, "Female Part" },

            { ColumnId_LevelledList,"Levelled List" },
            { ColumnId_LevelledItemId,"Levelled Item" },
            { ColumnId_LevelledItemLevel,"Level" },
            { ColumnId_LevelledItemType, "Calculate all levels <= player" },
            { ColumnId_LevelledItemTypeEach, "Select a new item each instance" },
            { ColumnId_LevelledItemChanceNone, "Chance None" },

            { ColumnId_PowerList, "Powers" },
            { ColumnId_SkillImpact, "Skills" },

            { ColumnId_InfoList, "Info List" },
            { ColumnId_InfoCondition, "Info Conditions" },
            { ColumnId_InfoCondFunc, "Function" },
            { ColumnId_InfoCondVar, "Func/Variable" },
            { ColumnId_InfoCondComp, "Comp" },
            { ColumnId_InfoCondValue, "Values" },
            { ColumnId_OriginalCell, "Original Cell" },

            { ColumnId_NpcAttributes, "Attributes" },
            { ColumnId_NpcSkills, "Skills" },
            { ColumnId_UChar, "Value [0..255]" },
            { ColumnId_NpcMisc, "Misc" },
            { ColumnId_NpcLevel, "Level" },
            { ColumnId_NpcFactionID, "Faction ID" },
            { ColumnId_NpcHealth, "Health" },
            { ColumnId_NpcMana, "Mana" },
            { ColumnId_NpcFatigue, "Fatigue" },
            { ColumnId_NpcDisposition, "Disposition" },
            { ColumnId_NpcReputation, "Reputation" },
            { ColumnId_NpcRank, "Rank" },
            { ColumnId_NpcGold, "Gold" },
            { ColumnId_NpcPersistence, "Persistent" },

            { ColumnId_RaceAttributes, "Attributes" },
            { ColumnId_RaceMaleValue, "Male" },
            { ColumnId_RaceFemaleValue, "Female" },
            { ColumnId_RaceSkillBonus, "Skill Bonus" },
            { ColumnId_RaceSkill, "Skills" },
            { ColumnId_RaceBonus, "Bonus" },

            { ColumnId_Interior, "Interior" },
            { ColumnId_Ambient, "Ambient" },
            { ColumnId_Sunlight, "Sunlight" },
            { ColumnId_Fog, "Fog" },
            { ColumnId_FogDensity, "Fog Density" },
            { ColumnId_WaterLevel, "Water Level" },
            { ColumnId_MapColor, "Map Color" },

            { ColumnId_FileFormat, "File Format" },
            { ColumnId_FileDescription, "File Description" },
            { ColumnId_Author, "Author" },

            { ColumnId_UseValue1, "Use value 1" },
            { ColumnId_UseValue2, "Use value 2" },
            { ColumnId_UseValue3, "Use value 3" },
            { ColumnId_UseValue4, "Use value 4" },

            { ColumnId_Attribute1, "Attribute 1" },
            { ColumnId_Attribute2, "Attribute 2" },

            { ColumnId_MajorSkill1, "Major Skill 1" },
            { ColumnId_MajorSkill2, "Major Skill 2" },
            { ColumnId_MajorSkill3, "Major Skill 3" },
            { ColumnId_MajorSkill4, "Major Skill 4" },
            { ColumnId_MajorSkill5, "Major Skill 5" },

            { ColumnId_MinorSkill1, "Minor Skill 1" },
            { ColumnId_MinorSkill2, "Minor Skill 2" },
            { ColumnId_MinorSkill3, "Minor Skill 3" },
            { ColumnId_MinorSkill4, "Minor Skill 4" },
            { ColumnId_MinorSkill5, "Minor Skill 5" },

            { ColumnId_Skill1, "Skill 1" },
            { ColumnId_Skill2, "Skill 2" },
            { ColumnId_Skill3, "Skill 3" },
            { ColumnId_Skill4, "Skill 4" },
            { ColumnId_Skill5, "Skill 5" },
            { ColumnId_Skill6, "Skill 6" },
            { ColumnId_Skill7, "Skill 7" },

            { -1, 0 } // end marker
        };
    }
}

std::string CSMWorld::Columns::getName (ColumnId column)
{
    for (int i=0; sNames[i].mName; ++i)
        if (column==sNames[i].mId)
            return sNames[i].mName;

    return "";
}

int CSMWorld::Columns::getId (const std::string& name)
{
    std::string name2 = Misc::StringUtils::lowerCase (name);

    for (int i=0; sNames[i].mName; ++i)
        if (Misc::StringUtils::ciEqual(sNames[i].mName, name2))
            return sNames[i].mId;

    return -1;
}

namespace
{
    static const char *sSpecialisations[] =
    {
        "Combat", "Magic", "Stealth", 0
    };

    // see ESM::Attribute::AttributeID in <component/esm/attr.hpp>
    static const char *sAttributes[] =
    {
        "Strength", "Intelligence", "Willpower", "Agility", "Speed", "Endurance", "Personality",
        "Luck", 0
    };

    static const char *sSpellTypes[] =
    {
        "Spell", "Ability", "Blight", "Disease", "Curse", "Power", 0
    };

    static const char *sApparatusTypes[] =
    {
        "Mortar & Pestle", "Albemic", "Calcinator", "Retort", 0
    };

    static const char *sArmorTypes[] =
    {
        "Helmet", "Cuirass", "Left Pauldron", "Right Pauldron", "Greaves", "Boots", "Left Gauntlet",
        "Right Gauntlet", "Shield", "Left Bracer", "Right Bracer", 0
    };

    static const char *sClothingTypes[] =
    {
        "Pants", "Shoes", "Shirt", "Belt", "Robe", "Right Glove", "Left Glove", "Skirt", "Ring",
        "Amulet", 0
    };

    static const char *sCreatureTypes[] =
    {
        "Creature", "Daedra", "Undead", "Humanoid", 0
    };

    static const char *sWeaponTypes[] =
    {
        "Short Blade 1H", "Long Blade 1H", "Long Blade 2H", "Blunt 1H", "Blunt 2H Close",
        "Blunt 2H Wide", "Spear 2H", "Axe 1H", "Axe 2H", "Bow", "Crossbow", "Thrown", "Arrow",
        "Bolt", 0
    };

    static const char *sModificationEnums[] =
    {
        "Base", "Modified", "Added", "Deleted", "Deleted", 0
    };

    static const char *sVarTypeEnums[] =
    {
        "unknown", "none", "short", "integer", "long", "float", "string", 0
    };

    static const char *sDialogueTypeEnums[] =
    {
        "Topic", "Voice", "Greeting", "Persuasion", 0
    };

    static const char *sQuestStatusTypes[] =
    {
        "None", "Name", "Finished", "Restart", 0
    };

    static const char *sGenderEnums[] =
    {
        "Male", "Female", 0
    };

    static const char *sEnchantmentTypes[] =
    {
        "Cast Once", "When Strikes", "When Used", "Constant Effect", 0
    };

    static const char *sBodyPartTypes[] =
    {
        "Head", "Hair", "Neck", "Chest", "Groin", "Hand", "Wrist", "Forearm", "Upper Arm",
        "Foot", "Ankle", "Knee", "Upper Leg", "Clavicle", "Tail", 0
    };

    static const char *sMeshTypes[] =
    {
        "Skin", "Clothing", "Armour", 0
    };

    static const char *sSoundGeneratorType[] =
    {
        "Left Foot", "Right Foot", "Swim Left", "Swim Right", "Moan", "Roar", "Scream",
        "Land", 0
    };

    static const char *sSchools[] =
    {
        "Alteration", "Conjuration", "Destruction", "Illusion", "Mysticism", "Restoration", 0
    };

    // impact from magic effects, see ESM::Skill::SkillEnum in <component/esm/loadskil.hpp>
    static const char *sSkills[] =
    {
        "Block", "Armorer", "MediumArmor", "HeavyArmor", "BluntWeapon",
        "LongBlade", "Axe", "Spear", "Athletics", "Enchant",
        "Destruction", "Alteration", "Illusion", "Conjuration", "Mysticism",
        "Restoration", "Alchemy", "Unarmored", "Security", "Sneak",
        "Acrobatics", "LightArmor", "ShortBlade", "Marksman", "Mercantile",
        "Speechcraft", "HandToHand", 0
    };

    // range of magic effects, see ESM::RangeType in <component/esm/defs.hpp>
    static const char *sEffectRange[] =
    {
        "Self", "Touch", "Target", 0
    };

    // magic effect names, see ESM::MagicEffect::Effects in <component/esm/loadmgef.hpp>
    static const char *sEffectId[] =
    {
        "WaterBreathing", "SwiftSwim", "WaterWalking", "Shield", "FireShield",
        "LightningShield", "FrostShield", "Burden", "Feather", "Jump",
        "Levitate", "SlowFall", "Lock", "Open", "FireDamage",
        "ShockDamage", "FrostDamage", "DrainAttribute", "DrainHealth", "DrainMagicka",
        "DrainFatigue", "DrainSkill", "DamageAttribute", "DamageHealth", "DamageMagicka",
        "DamageFatigue", "DamageSkill", "Poison", "WeaknessToFire", "WeaknessToFrost",
        "WeaknessToShock", "WeaknessToMagicka", "WeaknessToCommonDisease", "WeaknessToBlightDisease", "WeaknessToCorprusDisease",
        "WeaknessToPoison", "WeaknessToNormalWeapons", "DisintegrateWeapon", "DisintegrateArmor", "Invisibility",
        "Chameleon", "Light", "Sanctuary", "NightEye", "Charm",
        "Paralyze", "Silence", "Blind", "Sound", "CalmHumanoid",
        "CalmCreature", "FrenzyHumanoid", "FrenzyCreature", "DemoralizeHumanoid", "DemoralizeCreature",
        "RallyHumanoid", "RallyCreature", "Dispel", "Soultrap", "Telekinesis",
        "Mark", "Recall", "DivineIntervention", "AlmsiviIntervention", "DetectAnimal",
        "DetectEnchantment", "DetectKey", "SpellAbsorption", "Reflect", "CureCommonDisease",
        "CureBlightDisease", "CureCorprusDisease", "CurePoison", "CureParalyzation", "RestoreAttribute",
        "RestoreHealth", "RestoreMagicka", "RestoreFatigue", "RestoreSkill", "FortifyAttribute",
        "FortifyHealth", "FortifyMagicka", "FortifyFatigue", "FortifySkill", "FortifyMaximumMagicka",
        "AbsorbAttribute", "AbsorbHealth", "AbsorbMagicka", "AbsorbFatigue", "AbsorbSkill",
        "ResistFire", "ResistFrost", "ResistShock", "ResistMagicka", "ResistCommonDisease",
        "ResistBlightDisease", "ResistCorprusDisease", "ResistPoison", "ResistNormalWeapons", "ResistParalysis",
        "RemoveCurse", "TurnUndead", "SummonScamp", "SummonClannfear", "SummonDaedroth",
        "SummonDremora", "SummonAncestralGhost", "SummonSkeletalMinion", "SummonBonewalker", "SummonGreaterBonewalker",
        "SummonBonelord", "SummonWingedTwilight", "SummonHunger", "SummonGoldenSaint", "SummonFlameAtronach",
        "SummonFrostAtronach", "SummonStormAtronach", "FortifyAttack", "CommandCreature", "CommandHumanoid",
        "BoundDagger", "BoundLongsword", "BoundMace", "BoundBattleAxe", "BoundSpear",
        "BoundLongbow", "ExtraSpell", "BoundCuirass", "BoundHelm", "BoundBoots",
        "BoundShield", "BoundGloves", "Corprus", "Vampirism", "SummonCenturionSphere",
        "SunDamage", "StuntedMagicka", "SummonFabricant", "SummonWolf", "SummonBear",
        "SummonBonewolf", "SummonCreature04", "SummonCreature05", 0
    };

    // see ESM::PartReferenceType in <component/esm/loadarmo.hpp>
    static const char *sPartRefType[] =
    {
        "Head", "Hair", "Neck", "Cuirass", "Groin",
        "Skirt", "Right Hand", "Left Hand", "Right Wrist", "Left Wrist",
        "Shield", "Right Forearm", "Left Forearm", "Right Upperarm", "Left Upperarm",
        "Right Foot", "Left Foot", "Right Ankle", "Left Ankle", "Right Knee",
        "Left Knee", "Right Leg", "Left Leg", "Right Pauldron", "Left Pauldron",
        "Weapon", "Tail", 0
    };

    // see the enums in <component/esm/aipackage.hpp>
    static const char *sAiPackageType[] =
    {
        "AI Wander", "AI Travel", "AI Follow", "AI Escort", "AI Activate", 0
    };

    static const char *sAiWanderRepeat[] =
    {
        "No", "Yes", 0
    };

    static const char *sInfoCondFunc[] =
    {
        " ", "Function", "Global", "Local", "Journal",
        "Item", "Dead", "Not ID", "Not Faction", "Not Class",
        "Not Race", "Not Cell", "Not Local", 0
    };

    static const char *sInfoCondComp[] =
    {
        "!=", "<", "<=", "=", ">", ">=", 0
    };

    const char **getEnumNames (CSMWorld::Columns::ColumnId column)
    {
        switch (column)
        {
            case CSMWorld::Columns::ColumnId_Specialisation: return sSpecialisations;
            case CSMWorld::Columns::ColumnId_Attribute: return sAttributes;
            case CSMWorld::Columns::ColumnId_SpellType: return sSpellTypes;
            case CSMWorld::Columns::ColumnId_ApparatusType: return sApparatusTypes;
            case CSMWorld::Columns::ColumnId_ArmorType: return sArmorTypes;
            case CSMWorld::Columns::ColumnId_ClothingType: return sClothingTypes;
            case CSMWorld::Columns::ColumnId_CreatureType: return sCreatureTypes;
            case CSMWorld::Columns::ColumnId_WeaponType: return sWeaponTypes;
            case CSMWorld::Columns::ColumnId_Modification: return sModificationEnums;
            case CSMWorld::Columns::ColumnId_ValueType: return sVarTypeEnums;
            case CSMWorld::Columns::ColumnId_DialogueType: return sDialogueTypeEnums;
            case CSMWorld::Columns::ColumnId_QuestStatusType: return sQuestStatusTypes;
            case CSMWorld::Columns::ColumnId_Gender: return sGenderEnums;
            case CSMWorld::Columns::ColumnId_EnchantmentType: return sEnchantmentTypes;
            case CSMWorld::Columns::ColumnId_BodyPartType: return sBodyPartTypes;
            case CSMWorld::Columns::ColumnId_MeshType: return sMeshTypes;
            case CSMWorld::Columns::ColumnId_SoundGeneratorType: return sSoundGeneratorType;
            case CSMWorld::Columns::ColumnId_School: return sSchools;
            case CSMWorld::Columns::ColumnId_SkillImpact: return sSkills;
            case CSMWorld::Columns::ColumnId_EffectRange: return sEffectRange;
            case CSMWorld::Columns::ColumnId_EffectId: return sEffectId;
            case CSMWorld::Columns::ColumnId_PartRefType: return sPartRefType;
            case CSMWorld::Columns::ColumnId_AiPackageType: return sAiPackageType;
            case CSMWorld::Columns::ColumnId_AiWanderRepeat: return sAiWanderRepeat;
            case CSMWorld::Columns::ColumnId_InfoCondFunc: return sInfoCondFunc;
            // FIXME: don't have dynamic value enum delegate, use Display_String for now
            //case CSMWorld::Columns::ColumnId_InfoCond: return sInfoCond;
            case CSMWorld::Columns::ColumnId_InfoCondComp: return sInfoCondComp;
            case CSMWorld::Columns::ColumnId_RaceSkill: return sSkills;

            default: return 0;
        }
    }
}

bool CSMWorld::Columns::hasEnums (ColumnId column)
{
    return getEnumNames (column)!=0 || column==ColumnId_RecordType;
}

std::vector<std::string> CSMWorld::Columns::getEnums (ColumnId column)
{
    std::vector<std::string> enums;

    if (const char **table = getEnumNames (column))
        for (int i=0; table[i]; ++i)
            enums.push_back (table[i]);
    else if (column==ColumnId_RecordType)
    {
        enums.push_back (""); // none

        for (int i=UniversalId::Type_None+1; i<UniversalId::NumberOfTypes; ++i)
            enums.push_back (UniversalId (static_cast<UniversalId::Type> (i)).getTypeName());
    }

    return enums;
}
