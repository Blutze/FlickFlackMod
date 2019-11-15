#include "\hlc_core\script_macros.hpp"

#define __556NATO_RHS_BELTS_EXTRA "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW", "rhs_200rnd_556x45_B_SAW"

#define __12G8RND_RHS_MAGS "rhsusf_8Rnd_00Buck", "rhsusf_8rnd_doomsday_buck", "rhsusf_8Rnd_Slug", "rhsusf_8Rnd_HE", "rhsusf_8Rnd_FRAG"
#define __12G8RND_3CB_MAGS "UK3CB_BAF_12G_Slugs", "UK3CB_BAF_12G_Pellets"

#define __76220RND_FAL_3CB_MAGS "UK3CB_BAF_762_20Rnd", "UK3CB_BAF_762_20Rnd_Blank", "UK3CB_BAF_762_20Rnd_T"
#define __76220RND_SR25_3CB_MAGS "UK3CB_BAF_762_L42A1_20Rnd", "UK3CB_BAF_762_L42A1_20Rnd_Blank", "UK3CB_BAF_762_L42A1_20Rnd_T"
#define __76220RND_ACE_MAGS "ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mag_SD","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M118LR_Mag"

#define __9MMMP5_3CB_MAGS "UK3CB_BAF_9_30Rnd", "30Rnd_9x21_Mag" //the 3cb guns use the wrong vanilla mag. not gonna fix that for now. have reported to them; will clean up after they fix it.
#define __9MMMP5_HLC_MAGS "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_SD_MP5"
#define __9MMMP5_BI_MAGS "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30Rnd_9x21_Mag_SMG_02_Tracer_Green"

#define __792MM_MG42_RHS_BELTS "rhsgref_50Rnd_792x57_SmE_drum","rhsgref_50Rnd_792x57_SmE_notracers_drum","rhsgref_50Rnd_792x57_SmK_drum","rhsgref_50Rnd_792x57_SmK_alltracers_drum","rhsgref_296Rnd_792x57_SmE_belt","rhsgref_296Rnd_792x57_SmE_notracers_belt","rhsgref_296Rnd_792x57_SmK_belt","rhsgref_296Rnd_792x57_SmK_alltracers_belt"


class CfgPatches {
    class HLC_COMPAT_RHS_AR15 {
        units[] = { };
        weapons[] = { };
        requiredVersion = 0.100000;
        requiredAddons[] = { 
            "A3_Weapons_F",
            "ace_ballistics",
            "ace_common",
            "cba_jam",
            "hlcweapons_core",
            "hlcweapons_acr",
            "hlcweapons_SAW",
            "hlcweapons_M134",
            "hlcweapons_MG3s",
            "hlcweapons_FN3011",
            "rhsusf_c_weapons",
            "rhsgref_c_weapons",
            "rhssaf_c_weapons",
            "UK3CB_BAF_Weapons_SmallArms",
            "UK3CB_BAF_Weapons_Launchers",
            "UK3CB_BAF_Weapons_L110",
            "UK3CB_BAF_Weapons_Ammo",
            "RKSL_PMII",
            "RKSL_PMII_525",
            "RKSL_RMR",
            "milgp_vests",
            "milgp_vests_cfg",
            "bwa3_loadorder",
            "UK3CB_Factions_Weapons_FNFAL",
            "UK3CB_Factions_Weapons_RPK",
            "UK3CB_Factions_Headgear",
            "UK3CB_Factions_TKA_B",
            "UK3CB_Factions_TKA_I",
            "UK3CB_Factions_TKA_O",
            "UK3CB_Factions_TKC_C",
            "UK3CB_Factions_ANA_B",
            "po_factions_me",
            "A3_Characters_F",
            "A3_Characters_F_beta",
            "A3_Characters_F_epa",
            "A3_Characters_F_epb",
            "A3_Characters_F_epc",
            "A3_Characters_F_exp"
        };
        version = "1";
        projectName = "HLCmod";
        author = "Toadie";
    };
};

class asdg_SlotInfo;
class asdg_OpticRail : asdg_SlotInfo{};
class asdg_OpticRail1913 : asdg_OpticRail {
    class compatibleItems {
        optic_mrd = 1;
        optic_mrd_black = 1;
    };
};
class asdg_MuzzleSlot;
// Prepared for next CBA release
// class asdg_MuzzleSlot_46 : asdg_MuzzleSlot {
    // class compatibleItems {
        // rhsusf_acc_rotex_mp7 = 1;
        // rhsusf_acc_rotex_mp7_aor1 = 1;
        // rhsusf_acc_rotex_mp7_desert = 1;
        // rhsusf_acc_rotex_mp7_winter = 1;
        // bwa3_muzzle_snds_rotex_ii = 1;
    // };
// };
class rhs_western_46mmsmg_muzzle_slot : asdg_MuzzleSlot {
    class compatibleItems {
        bwa3_muzzle_snds_rotex_ii = 1;
    };
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_muzzle_snds_M14 = 1;
    };
};
class nia_rifle_gripod_slot;
class nia_rifle_grips_slot : nia_rifle_gripod_slot {
    class compatibleItems {
        hlc_grip_AFG2 = 1;
        hlc_grip_PMVFG = 1;
    };
};
class UnderBarrelSlot;
class rhs_rifle_gripod_slot : UnderBarrelSlot {
    class compatibleItems {
        hlc_grip_AFG2 = 1;
        hlc_grip_PMVFG = 1;
    };
};

class CfgMagazineWells {
    class CBA_9x19_P226 {
        UK3CB_Magazines[] = {
            "UK3CB_BAF_9_15Rnd"
        };
    };
    class CBA_9x19_P228 {
        UK3CB_Magazines[] = {
            "UK3CB_BAF_9_13Rnd"
        };
    };
    
    class CBA_9x19_Glock_Full {
        UK3CB_Magazines[] = {
            "UK3CB_BAF_9_17Rnd"
        };
    };
    
    class STANAG_556x45 {
        BI_Magazines[] += {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green"}; //missing in the vanilla magwell
        UK3CB_Magazines[] = {
            "UK3CB_BAF_556_30Rnd",
            "UK3CB_BAF_556_30Rnd_Blank",
            "UK3CB_BAF_556_30Rnd_T"
        };
        UK3CB_Factions_20rnd_magazines[] = { 
            "UK3CB_M16_20Rnd_Mag",
            "UK3CB_M16_20Rnd_Mag_T"
        };
    };
    class CBA_556x45_STANAG {
        UK3CB_Magazines[] = {
            "UK3CB_BAF_556_30Rnd",
            "UK3CB_BAF_556_30Rnd_Blank",
            "UK3CB_BAF_556_30Rnd_T"
        };
        UK3CB_Factions_20rnd_magazines[] = { 
            "UK3CB_M16_20Rnd_Mag",
            "UK3CB_M16_20Rnd_Mag_T"
        };
    };
    class CBA_556x45_STANAG_2D_XL {
        BI_mags[] += {"150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_Tracer_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F"};
    };
    class CBA_556x45_MINIMI {
        RHS_boxes_extra[] = {__556NATO_RHS_BELTS_EXTRA};
        UK3CB_boxes[] = { "UK3CB_BAF_556_100Rnd", "UK3CB_BAF_556_100Rnd_T", "UK3CB_BAF_556_100Rnd_Blank", "UK3CB_BAF_556_200Rnd", "UK3CB_BAF_556_200Rnd_Blank", "UK3CB_BAF_556_200Rnd_T" };
        BWA3_boxes[] = {
            "BWA3_200Rnd_556x45",
            "BWA3_200Rnd_556x45_Tracer"
        };
    };
    class CBA_556x45_SG550 {
        NIA_mags[] = { __556SG550_MAGS };
    };
    class CBA_762x51_LINKS {
        RHS_belts[] = { __762NATO_RHS_BELTS };
        NIA_MG3_belts[] = { __762MG3_MAGS };
        UK3CB_belts[] = { "UK3CB_BAF_762_100Rnd", "UK3CB_BAF_762_100Rnd_T", "UK3CB_BAF_762_100Rnd_Blank", "UK3CB_BAF_762_200Rnd", "UK3CB_BAF_762_200Rnd_T", "UK3CB_BAF_762_200Rnd_Blank" };
        BWA3_boxes[] = {
            "BWA3_120Rnd_762x51_soft",
            "BWA3_120Rnd_762x51_Tracer_soft",
            "BWA3_120Rnd_762x51",
            "BWA3_120Rnd_762x51_Tracer"
        };
        UK3CB_Factions_belts[] = {
            "UK3CB_100Rnd_762x51_B_M60",
            "UK3CB_100Rnd_762x51_T_M60"
        };
    };
    class CBA_792x57_LINKS {
        RHS_belts[] = { __792MM_MG42_RHS_BELTS };
    };
    
    // CBA adds too many magwells to class UGL_F, and BI adds too many mags to it. Base should be only 203, MXs should only have 3GL, and anything using the 203 magwell that is not sliding breech should then add the EGLM magwell.
    // But that is BI/CBA scope, and currently doesn't really affect anything because there is no EGLM-only ammo until PabstMirror's Pike goes live.
    class CBA_40mm_M203 {
        UK3CB_grenades[] = {
            "UK3CB_BAF_1Rnd_HE_Grenade_Shell",
            "UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
            "UK3CB_BAF_1Rnd_Blank_Grenade_Shell",
            "UK3CB_BAF_UGL_FlareWhite_F",
            "UK3CB_BAF_UGL_FlareRed_F",
            "UK3CB_BAF_UGL_FlareGreen_F",
            "UK3CB_BAF_UGL_FlareYellow_F",
            "UK3CB_BAF_UGL_FlareCIR_F",
            "UK3CB_BAF_1Rnd_Smoke_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeBlue_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell"
        };
        RHS_grenades[] = { __40MM_M203_RHS_GRENADES };
    };
    
    class CBA_46x30_MP7 {
        BWA3_magazines[] = {
            "BWA3_40Rnd_46x30_MP7",
            "BWA3_40Rnd_46x30_MP7_SD"
        };
    };
    
    class CBA_762x51_HK417 {
        BWA3_10Rnd_magazines[] = {
            "BWA3_10Rnd_762x51_G28",
            "BWA3_10Rnd_762x51_G28_Tracer",
            "BWA3_10Rnd_762x51_G28_Tracer_Dim",
            "BWA3_10Rnd_762x51_G28_SD",
            "BWA3_10Rnd_762x51_G28_AP",
            "BWA3_10Rnd_762x51_G28_LR"
        };
        BWA3_20Rnd_magazines[] = {
            "BWA3_20Rnd_762x51_G28",
            "BWA3_20Rnd_762x51_G28_Tracer",
            "BWA3_20Rnd_762x51_G28_Tracer_Dim",
            "BWA3_20Rnd_762x51_G28_SD",
            "BWA3_20Rnd_762x51_G28_AP"
        };
    };
    class CBA_50BMG_M107 {
        UK3CB_Magazines[] = {
            "UK3CB_BAF_127_10Rnd",
            "UK3CB_BAF_127_10Rnd_AP"
        };
        BWA3_magazines[] = {
            "BWA3_10Rnd_127x99_G82",
            "BWA3_10Rnd_127x99_G82_Tracer",
            "BWA3_10Rnd_127x99_G82_Tracer_Dim",
            "BWA3_10Rnd_127x99_G82_SD",
            "BWA3_10Rnd_127x99_G82_AP",
            "BWA3_10Rnd_127x99_G82_AP_Tracer",
            "BWA3_10Rnd_127x99_G82_Raufoss",
            "BWA3_10Rnd_127x99_G82_Raufoss_Tracer",
            "BWA3_10Rnd_127x99_G82_Raufoss_Tracer_Dim"
        };
    };
    class CBA_556x45_G36 {
        BWA3_magazines[] = {
            "BWA3_30Rnd_556x45_G36",
            "BWA3_30Rnd_556x45_G36_Tracer",
            "BWA3_30Rnd_556x45_G36_Tracer_Dim",
            "BWA3_30Rnd_556x45_G36_SD",
            "BWA3_30Rnd_556x45_G36_AP"
        };
    };
    class CBA_762x39_AK {
        UK3CB_magazines[] = {
            "UK3CB_RPK_75Rnd_Drum",
            "UK3CB_RPK_75Rnd_Drum_T"
        };
    };

    class CBA_303B_LeeEn {
        UK3CB_magazines[] = {
            "UK3CB_Enfield_Mag"
        };
        PO_magazines[] = {
            "LOP_10rnd_77mm_mag"
        };
    };
    
    class CBA_762x51_M14 {
        BI_magazines[] = {
            "20Rnd_762x51_Mag",
            "10Rnd_Mk14_762x51_Mag"
        };
        UK3CB_Factions_magazines[] = { 
            "UK3CB_20Rnd_762x51_B_M14",
            "UK3CB_20Rnd_762x51_T_M14"
        };
    };
    
    class CBA_762x51_AR10 {
        BI_magazines[] = { "20Rnd_762x51_Mag" };
        ace_ballistics[] = { __76220RND_ACE_MAGS };
        UK3CB_magazines[] = { __76220RND_SR25_3CB_MAGS };
    };
    
    class CBA_9x19_MP5 {
        UK3CB_magazines[] = { __9MMMP5_3CB_MAGS };
        UK3CB_Factions_magazines[] = { "UK3CB_9x30Rnd" };
    };
    
    class CBA_762x51_FAL {
        UK3CB_magazines[] = { __76220RND_FAL_3CB_MAGS };
        UK3CB_Factions_magazines[] = { "UK3CB_FNFAL_762_20Rnd", "UK3CB_FNFAL_762_20Rnd_T" };
    };
    
    class CBA_300WM_AI {
        RHS_magazines[] = {"rhsusf_5Rnd_300winmag_xm2010"};
    };
};

class Mode_FullAuto;
class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Long_Base_F;
    class arifle_Mk20_plain_F;
    class arifle_MX_Base_F;
    class EBR_base_F;
    class srifle_EBR_F;
    class DMR_03_base_F;
    class GM6_base_F;
    class srifle_GM6_F;
    class LMG_RCWS;
    class SMG_02_base_F;
    class SMG_02_F;
    class Pistol;
    class Pistol_Base_F : Pistol {
        class WeaponSlotsInfo;
    };
    class hgun_P07_F;
    class UGL_F;
    class LMG_Zafir_F;
    
    class ItemCore;
    class InventoryOpticsItem_Base_F;

    /*
    ========================================
    BIS GUNS (bonus compat)
    ========================================
    */

    // marksman rifles
    class srifle_DMR_03_F : DMR_03_base_F {
        magazineWell[] = { "CBA_762x51_AR10", "CBA_762x51_AR10_L", "CBA_762x51_AR10_XL" };
    }
    
    /*
    ========================================
    RHS GUNS
    ========================================
    */

    // shotguns
    class rhs_weap_M590_5RD;
    class rhs_weap_M590_8RD : rhs_weap_M590_5RD {
        magazines[] += { __12G8RND_3CB_MAGS };
    };
    
    // gpmg
    class rhs_weap_M249_base;
    class rhs_weap_m240_base : rhs_weap_M249_base {
        magazineWell[] = { "CBA_762x51_LINKS" }; // original: magazineWell[] = {"M240_762x51"};
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa"; // ShackTac/SquadRadar compat
    };
    
    // grenade launcher
    class rhs_weap_m79 : Rifle_Base_F {
        magazineWell[] = {"CBA_40mm_M203","CBA_40mm_EGLM"};
    };
    
    // maschinengewehr zweiundvierzig
    class rhs_weap_mg42_base : Rifle_Base_F {
        magazineWell[] = { "CBA_792x57_LINKS" };
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa"; // ShackTac/SquadRadar compat
    };

    class rhs_weap_XM2010_Base_F : Rifle_Base_F {
        magazineWell[] = {"CBA_300WM_AI"};
    };
    class rhs_weap_m24sws : rhs_weap_XM2010_Base_F {
        magazineWell[] = {};
    };
    class rhs_weap_m40a5 : rhs_weap_XM2010_Base_F {
        magazineWell[] = {};
    };
    
    // mp7
    class rhsusf_weap_MP7A1_base_f : SMG_02_base_F {
        inertia = 0.3;
    };
    
    // g36
    class rhs_weap_vhs2_base : Rifle_Base_F {
        class VHS_BG : UGL_F {
            magazineWell[] = {"CBA_40mm_M203","CBA_40mm_EGLM"};
        }
    };
    
    /*
    ========================================
    RHS PILOT HELMETS - inheriting from a fucking FAST instead of any vanilla pilot helmet. #justrussiandeveloperthings
    ========================================
    */	
    
    class rhsusf_opscore_01;
    class H_HelmetB;
    
    class RHS_jetpilot_usaf: H_HelmetB {
        ACE_Protection = 1;
    };
    
    // class rhsusf_ihadss : rhsusf_opscore_01 {
        // HEARING_PROTECTION_VICCREW
    // };
    class rhsusf_ihadss : rhsusf_opscore_01 {
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
    };
    
    
    class rhsusf_hgu56p;
    class rhsusf_hgu56p_visor : rhsusf_hgu56p {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_black;
    class rhsusf_hgu56p_visor_black : rhsusf_hgu56p_black {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_green;
    class rhsusf_hgu56p_visor_green : rhsusf_hgu56p_green {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_visor_mask : rhsusf_hgu56p {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_visor_mask_black : rhsusf_hgu56p_black {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_visor_mask_Empire_black : rhsusf_hgu56p_black {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_visor_mask_green : rhsusf_hgu56p_green {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_mask_smiley;
    class rhsusf_hgu56p_visor_mask_smiley : rhsusf_hgu56p_mask_smiley {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_pink;
    class rhsusf_hgu56p_visor_mask_pink : rhsusf_hgu56p_pink {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_visor_pink : rhsusf_hgu56p_pink {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_saf;
    class rhsusf_hgu56p_visor_saf : rhsusf_hgu56p_saf {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_usa;
    class rhsusf_hgu56p_visor_usa : rhsusf_hgu56p_usa {
        ACE_Protection = 1;
    };
    class rhsusf_hgu56p_white;
    class rhsusf_hgu56p_visor_white : rhsusf_hgu56p_white {
        ACE_Protection = 1;
    };
    
    class rhsusf_hgu56p_visor_mask_black_skull;
    class rhsusf_hgu56p_mask_black_skull : rhsusf_hgu56p_visor_mask_black_skull {
        ACE_Protection = 0;
    };

    class rhs_zsh7a;
    class rhs_zsh7a_alt : rhs_zsh7a {
        ACE_Protection = 1;
    };
    class rhs_zsh7a_mike;
    class rhs_zsh7a_mike_alt : rhs_zsh7a_mike {
        ACE_Protection = 1;
    };
    class rhs_zsh7a_mike_green;
    class rhs_zsh7a_mike_green_alt : rhs_zsh7a_mike_green {
        ACE_Protection = 1;
    };
    
    /*
    ========================================
    HLC GUNS
    ========================================
    */

    class hlc_rifle_G36KV;
    class hlc_rifle_G36KA1KSK : hlc_rifle_G36KV {
        class WeaponSlotsInfo;
    };
    class HLC_Rifle_G36KSKAG36 : hlc_rifle_G36KA1KSK {
        baseWeapon = "HLC_Rifle_G36KSKAG36";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class GripodSlot {};
        };
    };
    
    class bipod_01_F_snd : ItemCore {
        class ItemInfo;
    };
    class HLC_bipod_UTGShooters : bipod_01_F_snd {};
    class hlc_grip_AFG2 : HLC_bipod_UTGShooters {
        weaponInfoType = "RHS_Gripod2";
        inertia = -0.2;
        class ItemInfo : ItemInfo {
            mass = 1.58125;
        };
    };
    class hlc_grip_PMVFG : HLC_bipod_UTGShooters {
        weaponInfoType = "RHS_Gripod3";
        inertia = -0.2;
        class ItemInfo : ItemInfo {
            mass = 1.58125;
        };
    };
    
    class hlc_grip_SAW_Grip1 : bipod_01_F_snd {
        weaponInfoType = "RHS_Gripod1";
        inertia = -0.2;
        class ItemInfo : ItemInfo {
            mass = 1.58125;
        };
    };
    class hlc_grip_SAW_Grip2 : hlc_grip_SAW_Grip1 {
        displayName = "SAW Pistol Grip (Tan)";
    };
    
    class HLC_wp_M134Painless : Rifle_Base_F {
        class FullAuto : Mode_FullAuto {
            textureType = "fastAuto";
        };
    };
    
    class hlc_rifle_SAMR;
    class hlc_rifle_samr2 : hlc_rifle_SAMR {
        class nia_magSwitch {
            default = "hlc_rifle_samr2";
            hlc_50rnd_556x45_EPR = "hlc_rifle_samr2_x15";
            hlc_50rnd_556x45_M = "hlc_rifle_samr2_x15";
            hlc_50rnd_556x45_MDim = "hlc_rifle_samr2_x15";
            hlc_50rnd_556x45_SOST = "hlc_rifle_samr2_x15";
            hlc_50rnd_556x45_SPR = "hlc_rifle_samr2_x15";
        };
    };
    
    /*
    ========================================
    HLC NON-ACE SCOPES
    ========================================
    */
    
    // Searching for their config callstack:
    
    //hlc_optic_artel_m14 : optic_dms //m14
    //hlc_optic_LeupoldM3A : optic_LRPS //core //no compat
    //hlc_optic_VOMZ : optic_lrps //core //no compat
    //hlc_optic_ZF95Base : optic_lrps //core //no compat
    //hlc_optic_accupoint_g3 : HLC_Optic_ZFSG1 //g3 config //compat
    //hlc_optic_stanagzfsd_g3 : hlc_optic_ZF4xBase //g3 config
    //hlc_optic_zfsg1 : optic_dms //g3 config //compat
    //hlc_optic_angschutz : optic_hamr //3011 config //built in incomplete config, but works for some reason?
    //hlc_optic_DiavariZ_5501 : optic_lrps //550
    
    //kern //from fucking where? //compat
    
    class optic_dms;
    class hlc_optic_artel_m14 : optic_dms {
        ACE_ScopeAdjust_Vertical[] = { 0, 0 };
        ACE_ScopeAdjust_Horizontal[] = { 0, 0 };
        ACE_ScopeAdjust_VerticalIncrement = 0;
        ACE_ScopeAdjust_HorizontalIncrement = 0;
    };
    
    class optic_lrps;
    class hlc_optic_ZF95Base : optic_lrps {
        ACE_ScopeAdjust_Vertical[] = { 0, 0 };
        ACE_ScopeAdjust_Horizontal[] = { 0, 0 };
        ACE_ScopeAdjust_VerticalIncrement = 0;
        ACE_ScopeAdjust_HorizontalIncrement = 0;
        class ItemInfo;
    };
    class hlc_optic_ATACR_Offset : hlc_optic_ZF95Base {
        ACE_ScopeAdjust_Vertical[] = { 0, 30 };
        ACE_ScopeAdjust_Horizontal[] = { -15, 15 };
        ACE_ScopeAdjust_VerticalIncrement = 0.1;
        ACE_ScopeAdjust_HorizontalIncrement = 0.1;
        class ItemInfo : ItemInfo {
            class OpticsModes {
                class Snip {
                    discreteDistance[] = { 100 };
                };
            };
        }
    };
    
    class hlc_optic_VOMZ : optic_dms {
        ACE_ScopeAdjust_Vertical[] = { 0, 0 };
        ACE_ScopeAdjust_Horizontal[] = { 0, 0 };
        ACE_ScopeAdjust_VerticalIncrement = 0;
        ACE_ScopeAdjust_HorizontalIncrement = 0;
    };
    
    class optic_hamr;
    class hlc_optic_angschutz : optic_hamr {
        //ACE_ScopeZeroRange = 500; dat isset nich
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    // cameradir = "";
                    // usemodeloptics = 0;
                    // __OPTICSZOOM_1X;
                    // opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    discreteDistance[] = { 100 };
                    // discreteDistanceInitIndex = 0;
                    // distanceZoomMin = 100;
                    // distanceZoomMax = 600;
                    // memoryPointCamera = "eye2";
                    // visionMode[] = { "Normal" };
                    // opticsFlare = 1;
                    // opticsid = 1;
                    // opticsDisablePeripherialVision = 1;
                };
            };
        };
    };
    
    /*
    ========================================
    BWMOD GUNS & HELMETS
    ========================================
    */
    
    // mp7
    class BWA3_MP7 : Pistol_Base_F {
        magazineWell[] = {"CBA_46x30_MP7"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : rhs_western_46mmsmg_muzzle_slot {};
            //class MuzzleSlot : asdg_MuzzleSlot_46 {};
        };
    };
    
    // hk417
    class BWA3_G28 : Rifle_Long_Base_F {
        magazineWell[] = {"CBA_762x51_HK417"};
    };
    
    // assault rifles
    class BWA3_G38 : Rifle_Base_F {
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class BWA3_G36A1 : Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_G36"};
    };
    
    // barrett
    class BWA3_G82 : Rifle_Long_Base_F {
        magazineWell[] = {"CBA_50BMG_M107"};
    }
    
    // not a minimi
    class BWA3_MG4 : Rifle_Long_Base_F {
        magazineWell[] = {"CBA_556x45_MINIMI"};
    };
    
    // not a gpmg
    class BWA3_MG3 : Rifle_Long_Base_F {
        magazineWell[] = {"CBA_762x51_LINKS","CBA_762x51_MG3"};
    };
    class BWA3_MG5 : Rifle_Long_Base_F {
        magazineWell[] = {"CBA_762x51_LINKS"};
    };
    
    /*
    ========================================
    3CB GUNS
    ========================================
    */
    
    // minimis
    class UK3CB_BAF_L110_Base : Rifle_Long_Base_F {
        ACE_Overheating_allowSwapBarrel = 1;
    };
    class UK3CB_BAF_L110_556_Base : UK3CB_BAF_L110_Base {
        magazineWell[] = { "CBA_556x45_MINIMI", "STANAG_556x45" };
    };
    class UK3CB_BAF_L110_762_Base : UK3CB_BAF_L110_Base {
        magazineWell[] = { "CBA_762x51_LINKS" };
    };
    
    // assault rifles
    class UK3CB_BAF_L85A2 : arifle_Mk20_plain_F {
        magazineWell[] = { "STANAG_556x45" };
    };
    class UK3CB_BAF_L119_Base : arifle_Mk20_plain_F {
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    
    // pistols
    class UK3CB_BAF_L105A1 : hgun_P07_F {
        magazineWell[] = { "CBA_9x19_P226" };
    };
    class UK3CB_BAF_L107A1 : UK3CB_BAF_L105A1 {
        magazineWell[] = { "CBA_9x19_P226", "CBA_9x19_P228" };
    };
    class UK3CB_BAF_L105A2;
    class UK3CB_BAF_L117A2 : UK3CB_BAF_L105A2 {
        magazineWell[] = { "CBA_9x19_P226", "CBA_9x19_P228" };
    };
    
    class UK3CB_BAF_L131A1 : hgun_P07_F {
        magazineWell[] = { "CBA_9x19_Glock_Full" };
    }
    
    // fal
    class UK3CB_BAF_L1A1 : Rifle_Base_F {
        magazineWell[] += { "CBA_762x51_FAL" };
    };
    
    // sr-25
    class UK3CB_BAF_L129A1 : srifle_EBR_F {
        magazineWell[] = { "CBA_762x51_AR10", "CBA_762x51_AR10_L", "CBA_762x51_AR10_XL" };
    };
    
    // barrett
    class UK3CB_BAF_L135A1 : srifle_GM6_F {
        magazineWell[] = { "CBA_50BMG_M107" };
    };
    
    // shotguns
    class UK3CB_BAF_L128A1 : srifle_EBR_F {
        magazines[] += { __12G8RND_RHS_MAGS };
    };
    
    // mp5s
    class UK3CB_BAF_L91A1 : SMG_02_F {
        magazineWell[] = { "CBA_9x19_MP5" };
    };
    
    // gpmg
    class UK3CB_BAF_L7A2 : Rifle_Long_Base_F {
        ACE_Overheating_allowSwapBarrel = 1;
        magazineWell[] = { "CBA_762x51_LINKS" };
    };
    
    // awp
    class srifle_LRR_F;
    class UK3CB_BAF_L115_Base : srifle_LRR_F {
        magazineWell[] = {};
    };
    
    // javelin - broken after ace #6732
    class launch_B_Titan_short_F;
    class UK3CB_BAF_Javelin_Launcher : launch_B_Titan_short_F {
        modes[] = {"Single","TopDown"};
    };
    
    // schmidt & bender scopes - ACE zeroing (same stats as 3CB's compat mod as of 20190321)
    class RKSL_optic_PMII_312 : ItemCore {
        ace_ScopeAdjust_Horizontal[] = {-6,6};
        ace_ScopeAdjust_HorizontalIncrement = 0.1;
        ace_ScopeAdjust_Vertical[] = {-1,22};
        ace_ScopeAdjust_VerticalIncrement = 0.1;
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class RKSL_optic_PMII_525 : ItemCore {
        ace_ScopeAdjust_Horizontal[] = {-6,6};
        ace_ScopeAdjust_HorizontalIncrement = 0.1;
        ace_ScopeAdjust_Vertical[] = {0,30};
        ace_ScopeAdjust_VerticalIncrement = 0.1;
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    
    /*
    ========================================
    3CB Factions Guns
    ========================================
    */
    
    class UK3CB_M79 : Rifle_Base_F {
        magazineWell[] = {"CBA_40mm_M203","CBA_40mm_EGLM"};
    };
    class UK3CB_FNFAL_Base;
    class UK3CB_FNFAL_PARA : UK3CB_FNFAL_Base {
        magazineWell[] += { "CBA_762x51_FAL" };
    };
    class UK3CB_FNFAL_FULL : UK3CB_FNFAL_PARA {
        magazineWell[] += { "CBA_762x51_FAL" };
    };
    class UK3CB_RPK : LMG_Zafir_F {
        magazineWell[] = { "CBA_762x39_AK","CBA_762x39_RPK"};
    };
    
    class LOP_Weap_LeeEnfield : EBR_base_F {
        magazineWell[] = {"CBA_303B_LeeEn"};
    };
    class UK3CB_Enfield : rhs_weap_XM2010_Base_F {
        magazineWell[] = {"CBA_303B_LeeEn"};
    };
    
    class rhs_weap_m16a4_carryhandle;
    class UK3CB_M16a2_Base : rhs_weap_m16a4_carryhandle {
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class UK3CB_M16_Carbine : UK3CB_M16a2_Base {
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class UK3CB_M16A1_Base;
    class UK3CB_M16 : UK3CB_M16A1_Base {
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class UK3CB_M16A1 : UK3CB_M16A1_Base {
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class UK3CB_M16A1_LSW : UK3CB_M16A1_Base {
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class rhs_weap_m16a4_carryhandle_M203;
    class UK3CB_M16A2_UGL : rhs_weap_m16a4_carryhandle_M203 {
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class UK3CB_M14_base : Rifle_Base_F { //suppressor + mount? uk3cb_muzzle_snds_M14
        magazines[] = {"UK3CB_20Rnd_762x51_B_M14"};
        magazineWell[] = { "CBA_762x51_M14" };
    };
    class UK3CB_M60_base;
    class UK3CB_M60 : UK3CB_M60_base {
        magazineWell[] = { "CBA_762x51_LINKS" };
    };
    class UK3CB_M60_mounted : LMG_RCWS {
        magazines[] += { __762NATO_RHS_BELTS, __762NATO_BELTS, __762NATO_BI_BELTS, __762MG3_MAGS, BWA3_120Rnd_762x51_soft /*, BWA3_120Rnd_762x51_Tracer_soft, BWA3_120Rnd_762x51, BWA3_120Rnd_762x51_Tracer */ };
        magazineWell[] = { "CBA_762x51_LINKS" };
    };
    class UK3CB_MP5 : SMG_02_F {
        magazineWell[] = { "CBA_9x19_MP5" };
    };
    
    /*
    ========================================
    3CB Factions M14 Optics
    ========================================
    */
    
    class uk3cb_optic_artel_m14 : optic_DMS {
        ACE_ScopeAdjust_Vertical[] = { 0, 0 };
        ACE_ScopeAdjust_Horizontal[] = { 0, 0 };
        ACE_ScopeAdjust_VerticalIncrement = 0;
        ACE_ScopeAdjust_HorizontalIncrement = 0;
    }
    
    /*
    ========================================
    3CB Factions Helmets and Uniforms
    ========================================
    */
    
    class HelmetBase;
    class UK3CB_TKC_H_Pilot_Turban_01_1 : HelmetBase {
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
    };
    class UK3CB_H_Pilot_Helmet : HelmetBase {
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
    };
    class UK3CB_H_Crew_Helmet : HelmetBase {
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
        ACE_Protection = 1;
    };
    
    class Uniform_Base;
    class UK3CB_TKC_C_U_Pilot_A : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    class UK3CB_TKC_C_U_Pilot_B : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    // class UK3CB_TKC_C_U_Overall : Uniform_Base {
        // ACE_GForceCoef = 0.8;
    // };
    class UK3CB_TKA_O_U_J_Pilot_DIGI : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    class UK3CB_TKA_I_U_J_Pilot_DES : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    class UK3CB_TKA_B_U_J_Pilot_NATO : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    class UK3CB_TKA_B_U_H_Pilot_DES : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    class UK3CB_ANA_B_U_H_Pilot_DES : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    class UK3CB_ANA_B_U_J_Pilot_NATO : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };

    class UK3CB_CW_SOV_O_Early_U_J_Pilot_Uniform_01_GRY : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    class UK3CB_CW_SOV_O_LATE_U_J_Pilot_Uniform_01_OLI : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    class UK3CB_CW_US_B_Early_U_J_Pilot_Uniform_01_NATO : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };
    class UK3CB_CW_US_B_LATE_U_J_Pilot_Uniform_01_NATO : Uniform_Base {
        ACE_GForceCoef = 0.8;
    };

    /*
    ========================================
    Project Opfor Uniforms
    ========================================
    */
    
    class Uniform_Base;
    class LOP_U_IRA_Fatigue_DPM_GNSW : Uniform_Base {
        displayName = "Guerilla Coveralls (IRA/DPM+Sweater Green)";
    };

    /*
    ========================================
    3CB CREW SERVED WEAPONS
    ========================================
    */
    
    // unreliable as client side mod. might be some locality issue, with ownership of the vehicle being transferred to the server or a zeus without the mod.
    class UK3CB_BAF_L7A2_veh : LMG_RCWS {
        magazineWell[] = { "CBA_762x51_LINKS" };
        magazines[] += { __762NATO_RHS_BELTS, __762NATO_BELTS, __762NATO_BI_BELTS, __762MG3_MAGS, BWA3_120Rnd_762x51_soft /*, BWA3_120Rnd_762x51_Tracer_soft, BWA3_120Rnd_762x51, BWA3_120Rnd_762x51_Tracer */ };
    };
    class UK3CB_BAF_L112A1_veh : LMG_RCWS {
        //magazineWell[] = { CBA_762x51_LINKS }; //works on the tripod mounted reloading script, but not on the from-cargo-reloading script
        magazines[] += { __762NATO_RHS_BELTS, __762NATO_BELTS, __762NATO_BI_BELTS, __762MG3_MAGS, BWA3_120Rnd_762x51_soft /*, BWA3_120Rnd_762x51_Tracer_soft, BWA3_120Rnd_762x51, BWA3_120Rnd_762x51_Tracer  */ };
    }
    class UK3CB_BAF_Slung_Static_Weapon_Base;
    class UK3CB_BAF_Tripod : UK3CB_BAF_Slung_Static_Weapon_Base {
        magazineWell[] = { "CBA_762x51_LINKS" };
    };
    class UK3CB_BAF_L16_Tripod : UK3CB_BAF_Tripod {
        magazineWell[] = { };
    }
    
    class UK3CB_BAF_L16 : UK3CB_BAF_Slung_Static_Weapon_Base {
        magazines[] += { "UK3CB_BAF_1Rnd_81mm_Mo_AB_Shells" };
    };
};
class CfgMagazines {
    class 100Rnd_127x99_mag;
    class UK3CB_BAF_127_10Rnd : 100Rnd_127x99_mag {
        type = 256;
    };
    class 100Rnd_127x99_mag_Tracer_Red;
    class UK3CB_BAF_127_100Rnd : 100Rnd_127x99_mag_Tracer_Red {
        ace_arsenal_hide = -1;
    };
    
    class 8Rnd_82mm_Mo_shells;
    class 8Rnd_82mm_Mo_Flare_white;
    // class 8Rnd_82mm_Mo_guided; // guided rounds are not fully implemented in 3cb
    // class 8Rnd_82mm_Mo_LG;
    class 8Rnd_82mm_Mo_Smoke_white;
    class UK3CB_BAF_1Rnd_81mm_Mo_AB_Shells : 8Rnd_82mm_Mo_shells {
        ace_arsenal_hide = -1;
    };
    class UK3CB_BAF_1Rnd_81mm_Mo_Flare_White : 8Rnd_82mm_Mo_Flare_white {
        ace_arsenal_hide = -1;
    };
    // class UK3CB_BAF_1Rnd_81mm_Mo_Guided : 8Rnd_82mm_Mo_guided {
        // ace_arsenal_hide = -1;
    // };
    class UK3CB_BAF_1Rnd_81mm_Mo_IRFlare_White : 8Rnd_82mm_Mo_Flare_white {
        ace_arsenal_hide = -1;
    };
    // class UK3CB_BAF_1Rnd_81mm_Mo_LG : 8Rnd_82mm_Mo_LG {
        // ace_arsenal_hide = -1;
    // };
    class UK3CB_BAF_1Rnd_81mm_Mo_Shells : 8Rnd_82mm_Mo_shells {
        ace_arsenal_hide = -1;
    };
    class UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White : 8Rnd_82mm_Mo_Smoke_white {
        ace_arsenal_hide = -1;
    };
    class UK3CB_BAF_1Rnd_81mm_Mo_WPSmoke_White : 8Rnd_82mm_Mo_Smoke_white {
        ace_arsenal_hide = -1;
    };
    
    class 32Rnd_40mm_G_belt;
    class UK3CB_BAF_32Rnd_40mm_G_Box : 32Rnd_40mm_G_belt {
        ace_arsenal_hide = -1;
    };
    
    /*
    ========================================
    3CB 7.62x51 20 round magazines renamed, because there are in fact two different sets
    ========================================
    */
    
    class 20Rnd_762x51_Mag;
    class UK3CB_BAF_762_L42A1_20Rnd : 20Rnd_762x51_Mag {
        displayname = "7.62mm 20rnd SR-25 L42A1 Mag";
    };
    class UK3CB_BAF_762_L42A1_20Rnd_Blank : UK3CB_BAF_762_L42A1_20Rnd {
        displayname = "7.62mm 20rnd SR-25 Blank Mag";
    };
    class UK3CB_BAF_762_L42A1_20Rnd_T : 20Rnd_762x51_Mag {
        displayname = "7.62mm 20rnd SR-25 Tracer Mag";
    };
    class UK3CB_BAF_762_20Rnd : UK3CB_BAF_762_L42A1_20Rnd {
        displayname = "7.62mm 20rnd FAL L2A1 Mag";
    };
    class UK3CB_BAF_762_20Rnd_Blank : UK3CB_BAF_762_L42A1_20Rnd_Blank {
        displayname = "7.62mm 20rnd FAL Blank Mag";
    };
    class UK3CB_BAF_762_20Rnd_T : UK3CB_BAF_762_L42A1_20Rnd_T {
        displayname = "7.62mm 20rnd FAL Tracer Mag";
    };
    
    
    /*
    ========================================
    3CB Factions 20 round 5.56 mags - use correct RHS proxy model
    ========================================
    */
    
    // Better to just inherit from RHS 20rnd mags...
    
    class rhs_mag_30Rnd_556x45_Mk318_Stanag;
    class UK3CB_M16_20Rnd_Mag : rhs_mag_30Rnd_556x45_Mk318_Stanag {
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa"};
        model = "rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd";
    };
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;
    class UK3CB_M16_20Rnd_Mag_T : rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m196_co.paa"};
        model = "rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd";
    };

    /*
    ========================================
    RHS BELTS
    ========================================
    */
    
    // this one has the wrong ammo
    class rhsusf_200rnd_556x45_M855_box;
    class rhsusf_200rnd_556x45_M855_mixed_box : rhsusf_200rnd_556x45_M855_box {
        ammo = "rhs_ammo_556x45_M855_Ball_Red";
    };
    // gib full tracers
    class rhs_200rnd_556x45_M_SAW;
    class rhs_200rnd_556x45_T_SAW : rhs_200rnd_556x45_M_SAW {
        scope = 2;
        scopeArsenal = 2;
    };
    
    /*
    ========================================
    RHS SMAW SPOTTING ROUNDS - inheriting from launcher ammo, vest/uniform have to be manually added
    ========================================
    */
    
    class CA_LauncherMagazine;
    class rhs_mag_smaw_SR : CA_LauncherMagazine {
        allowedSlots[] = {701, 801, 901};
    };
    
    /*
    ========================================
    NIArms Belt names
    ========================================
    */
    
    class hlc_100Rnd_762x51_B_M60E4;
    class hlc_100Rnd_762x51_Barrier_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        displayName = "7.62mm SOST 100Rnd M13-linked belt (Tracers Every 4)";
    };
    class hlc_200Rnd_762x51_B_M60E4;
    class hlc_200Rnd_762x51_Barrier_M60E4 : hlc_200Rnd_762x51_B_M60E4 {
        displayName = "7.62mm SOST 200Rnd M13-linked belt (Tracers Every 4)";
    };
};
class CfgAmmo {
    class M_NLAW_AT_F;
    class UK3CB_M_NLAW_AT : M_NLAW_AT_F {
        class ace_missileguidance {
            useModeForAttackProfile = 1;
        };
    };
    
    class B_762x51_Ball;
    class HLC_GP11_FMJ : B_762x51_Ball {
        ACE_bulletLength = 35.0012;
    };
    class HLC_GP11_APBT : B_762x51_Ball {
        ACE_bulletLength = 35.0012;
    };
};
class CfgVehicles {
    /*
    ========================================
    MILGP <-> ACE Wirecutters
    ========================================
    */
    
    /*
    milgp_data
    milgp_headgear
    milgp_headgear_cfg
    milgp_uniforms
    milgp_uniforms_cfg
    milgp_vests
    milgp_vests_cfg
    */
    
    class milgp_Bag_Base;
    class milgp_bp_Breacher_cb : milgp_Bag_Base {
        ace_logistics_wirecutter_hasWirecutter = 1;
    };
    class milgp_bp_Breacher_khk : milgp_Bag_Base {
        ace_logistics_wirecutter_hasWirecutter = 1;
    };
    class milgp_bp_Breacher_mc : milgp_Bag_Base {
        ace_logistics_wirecutter_hasWirecutter = 1;
    };
    class milgp_bp_Breacher_rgr : milgp_Bag_Base {
        ace_logistics_wirecutter_hasWirecutter = 1;
    };
}
class CfgFaces {
    class Default;
    class Man_A3 : Default {
        class Default;
        class Kerry : Default {
            disabled = 0;
            displayname = "Kerry";
        };
        class Kerry_A_F : Kerry {
            disabled = 1;
        };
        class kerry_B1_F : Kerry {
            disabled = 0;
            displayname = "Kerry (2)";
        };
        class kerry_B2_F : Kerry {
            disabled = 0;
            displayname = "Kerry (3)";
        };
        class Kerry_C_F : Kerry {
            disabled = 0;
            displayname = "Kerry (4)";
        };
        class Miller : Default {
            disabled = 0;
            displayname = "Miller";
        };
        class IG_Leader : Default {
            disabled = 0;
            displayname = "Stavrou";
        };
        class O_Colonel : Default {
            disabled = 0;
            displayname = "Namdar";
        };
        class GreekHead_A3_01;
        class Nikos : GreekHead_A3_01 {
            disabled = 0;
            displayname = "Panagopoulos";
        };
        class TanoanHead_A3_01;
        class TanoanBossHead : TanoanHead_A3_01 {
            disabled = 0;
            displayname = "Solomon Maru";
        };
        class Dwarden : Default {
            disabled = 0;
        };
        class Hladas : Default {
            disabled = 0;
        };
        class Ivan : Default {
            disabled = 0;
        };
        class Jay : Default {
            disabled = 0;
        };
        class Pettka : Default {
            disabled = 0;
        };
    };
}
