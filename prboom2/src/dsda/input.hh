//
// Copyright(C) 2020 by Ryan Krafnick
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//	DSDA Input
//

#ifndef __DSDA_INPUT__
#define __DSDA_INPUT__

#include "doomtype.hh"
#include "d_event.hh"

#define DSDA_INPUT_PROFILE_COUNT 3
#define NUMKEYS 512
#define MAX_MOUSE_BUTTONS 8
#define MAX_JOY_BUTTONS 8

extern int dsda_input_profile;

using dsda_input_identifier_t = enum
{
    dsda_input_null,
    dsda_input_forward,
    dsda_input_backward,
    dsda_input_turnleft,
    dsda_input_turnright,
    dsda_input_speed,
    dsda_input_strafeleft,
    dsda_input_straferight,
    dsda_input_strafe,
    dsda_input_autorun,
    dsda_input_reverse,
    dsda_input_use, // note - joyb use doubles as join demo
    dsda_input_flyup,
    dsda_input_flydown,
    dsda_input_flycenter,
    dsda_input_mlook,
    dsda_input_novert,
    dsda_input_weapon1,
    dsda_input_weapon2,
    dsda_input_weapon3,
    dsda_input_weapon4,
    dsda_input_weapon5,
    dsda_input_weapon6,
    dsda_input_weapon7,
    dsda_input_weapon8,
    dsda_input_weapon9,
    dsda_input_nextweapon,
    dsda_input_prevweapon,
    dsda_input_toggleweapon,
    dsda_input_fire,
    dsda_input_lookup,
    dsda_input_lookdown,
    dsda_input_lookcenter,
    dsda_input_use_artifact,
    dsda_input_arti_tome,
    dsda_input_arti_quartz,
    dsda_input_arti_urn,
    dsda_input_arti_bomb,
    dsda_input_arti_ring,
    dsda_input_arti_chaosdevice,
    dsda_input_arti_shadowsphere,
    dsda_input_arti_wings,
    dsda_input_arti_torch,
    dsda_input_arti_morph,
    dsda_input_invleft,
    dsda_input_invright,
    dsda_input_spy,
    dsda_input_join_demo,
    dsda_input_pause,
    dsda_input_setup,
    dsda_input_map,
    dsda_input_soundvolume,
    dsda_input_hud,
    dsda_input_messages,
    dsda_input_gamma,
    dsda_input_zoomin,
    dsda_input_zoomout,
    dsda_input_screenshot,
    dsda_input_savegame,
    dsda_input_loadgame,
    dsda_input_quicksave,
    dsda_input_quickload,
    dsda_input_endgame,
    dsda_input_quit,
    dsda_input_store_quick_key_frame,
    dsda_input_restore_quick_key_frame,
    dsda_input_rewind,
    dsda_input_map_follow,
    dsda_input_map_zoomin,
    dsda_input_map_zoomout,
    dsda_input_map_up,
    dsda_input_map_down,
    dsda_input_map_left,
    dsda_input_map_right,
    dsda_input_map_mark,
    dsda_input_map_clear,
    dsda_input_map_gobig,
    dsda_input_map_grid,
    dsda_input_map_rotate,
    dsda_input_map_overlay,
    dsda_input_map_textured,
    dsda_input_chat,
    dsda_input_chat_dest0,
    dsda_input_chat_dest1,
    dsda_input_chat_dest2,
    dsda_input_chat_dest3,
    dsda_input_chat_backspace,
    dsda_input_chat_enter,
    dsda_input_speed_up,
    dsda_input_speed_down,
    dsda_input_speed_default,
    dsda_input_demo_skip,
    dsda_input_demo_endlevel,
    dsda_input_walkcamera,
    dsda_input_restart,
    dsda_input_nextlevel,
    dsda_input_showalive,
    dsda_input_menu_down,
    dsda_input_menu_up,
    dsda_input_menu_left,
    dsda_input_menu_right,
    dsda_input_menu_backspace,
    dsda_input_menu_enter,
    dsda_input_menu_escape,
    dsda_input_menu_clear,
    dsda_input_help,
    dsda_input_escape,
    dsda_input_cycle_profile,
    dsda_input_iddqd,
    dsda_input_idkfa,
    dsda_input_idfa,
    dsda_input_idclip,
    dsda_input_idbeholdh,
    dsda_input_idbeholdm,
    dsda_input_idbeholdv,
    dsda_input_idbeholds,
    dsda_input_idbeholdi,
    dsda_input_idbeholdr,
    dsda_input_idbeholda,
    dsda_input_idbeholdl,
    dsda_input_idmypos,
    dsda_input_idrate,
    dsda_input_iddt,
    dsda_input_cycle_palette,
    DSDA_INPUT_IDENTIFIER_COUNT
};

struct dsda_input_t
{
    int *key;
    int num_keys;
    int mouseb;
    int joyb;
};

struct dsda_input_default_t
{
    int key = 0;
    int mouseb = 0;
    int joyb = 0;
};

void dsda_InputFlushTick();
void dsda_InputTrackEvent(event_t *ev);
void dsda_InputTrackGameEvent(event_t *ev);
dboolean dsda_InputActivated(int identifier);
dboolean dsda_InputTickActivated(int identifier);
dboolean dsda_InputDeactivated(int identifier);
dsda_input_t *dsda_Input(int identifier);
void dsda_InputFlush();
void dsda_InputCopy(int identifier,
                    dsda_input_t *input[DSDA_INPUT_PROFILE_COUNT]);
int dsda_InputMatchKey(int identifier, int value);
int dsda_InputMatchMouseB(int identifier, int value);
int dsda_InputMatchJoyB(int identifier, int value);
void dsda_InputReset(int identifier);
void dsda_InputResetSpecific(int config_index, int identifier);
void dsda_InputSet(int identifier, dsda_input_default_t input);
void dsda_InputSetSpecific(int config_index, int identifier,
                           dsda_input_default_t input);
void dsda_InputAddKey(int identifier, int value);
void dsda_InputAddSpecificKey(int config_index, int identifier, int value);
void dsda_InputAddMouseB(int identifier, int value);
void dsda_InputAddSpecificMouseB(int config_index, int identifier, int value);
void dsda_InputAddJoyB(int identifier, int value);
void dsda_InputAddSpecificJoyB(int config_index, int identifier, int value);
void dsda_InputRemoveKey(int identifier, int value);
void dsda_InputRemoveMouseB(int identifier, int value);
void dsda_InputRemoveJoyB(int identifier, int value);
dboolean dsda_InputActive(int identifer);
dboolean dsda_InputKeyActive(int identifier);
dboolean dsda_InputMouseBActive(int identifier);
dboolean dsda_InputJoyBActive(int identifier);
void dsda_InputCycleProfile();

#endif
