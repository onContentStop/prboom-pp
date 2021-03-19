//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 1993-2008 Raven Software
// Copyright(C) 2005-2014 Simon Howard
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

#include "doomtype.hh"
#include "sounds.hh"

musicinfo_t heretic_S_music[] = {
    {nullptr},       {"MUS_E1M1", 0}, // 1-1
    {"MUS_E1M2", 0}, {"MUS_E1M3", 0}, {"MUS_E1M4", 0}, {"MUS_E1M5", 0},
    {"MUS_E1M6", 0}, {"MUS_E1M7", 0}, {"MUS_E1M8", 0}, {"MUS_E1M9", 0},

    {"MUS_E2M1", 0}, // 2-1
    {"MUS_E2M2", 0}, {"MUS_E2M3", 0}, {"MUS_E2M4", 0}, {"MUS_E1M4", 0},
    {"MUS_E2M6", 0}, {"MUS_E2M7", 0}, {"MUS_E2M8", 0}, {"MUS_E2M9", 0},

    {"MUS_E1M1", 0}, // 3-1
    {"MUS_E3M2", 0}, {"MUS_E3M3", 0}, {"MUS_E1M6", 0}, {"MUS_E1M3", 0},
    {"MUS_E1M2", 0}, {"MUS_E1M5", 0}, {"MUS_E1M9", 0}, {"MUS_E2M6", 0},

    {"MUS_E1M6", 0}, // 4-1
    {"MUS_E1M2", 0}, {"MUS_E1M3", 0}, {"MUS_E1M4", 0}, {"MUS_E1M5", 0},
    {"MUS_E1M1", 0}, {"MUS_E1M7", 0}, {"MUS_E1M8", 0}, {"MUS_E1M9", 0},

    {"MUS_E2M1", 0}, // 5-1
    {"MUS_E2M2", 0}, {"MUS_E2M3", 0}, {"MUS_E2M4", 0}, {"MUS_E1M4", 0},
    {"MUS_E2M6", 0}, {"MUS_E2M7", 0}, {"MUS_E2M8", 0}, {"MUS_E2M9", 0},

    {"MUS_E3M2", 0}, // 6-1
    {"MUS_E3M3", 0}, {"MUS_E1M6", 0},

    {"MUS_TITL", 0}, {"MUS_INTR", 0}, {"MUS_CPTD", 0}};

sfxinfo_t heretic_S_sfx[] = {
    {{}, false, 0, nullptr, -1, -1, nullptr, 0},
    {{"gldhit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"gntful"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, -1},
    {{"gnthit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, -1},
    {{"gntpow"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, -1},
    {{"gntact"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, -1},
    {{"gntuse"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, -1},
    {{"phosht"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"phohit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, -1},
    {{"-phopow"},
     false,
     32,
     &heretic_S_sfx[heretic_sfx_hedat1],
     0,
     0,
     nullptr,
     0,
     {-1},
     1},
    {{"lobsht"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"lobhit"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"lobpow"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"hrnsht"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"hrnhit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"hrnpow"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"ramphit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"ramrain"}, false, 10, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"bowsht"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"stfhit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"stfpow"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"stfcrk"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"impsit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"impat1"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"impat2"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"impdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"-impact"},
     false,
     20,
     &heretic_S_sfx[heretic_sfx_impsit],
     0,
     0,
     nullptr,
     0,
     {-1},
     2},
    {{"imppai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"mumsit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"mumat1"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"mumat2"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"mumdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"-mumact"},
     false,
     20,
     &heretic_S_sfx[heretic_sfx_mumsit],
     0,
     0,
     nullptr,
     0,
     {-1},
     2},
    {{"mumpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"mumhed"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"bstsit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"bstatk"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"bstdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"bstact"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"bstpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"clksit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"clkatk"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"clkdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"clkact"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"clkpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"snksit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"snkatk"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"snkdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"snkact"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"snkpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"kgtsit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"kgtatk"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"kgtat2"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"kgtdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"-kgtact"},
     false,
     20,
     &heretic_S_sfx[heretic_sfx_kgtsit],
     0,
     0,
     nullptr,
     0,
     {-1},
     2},
    {{"kgtpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"wizsit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"wizatk"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"wizdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"wizact"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"wizpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"minsit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"minat1"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"minat2"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"minat3"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"mindth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"minact"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"minpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"hedsit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"hedat1"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"hedat2"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"hedat3"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"heddth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"hedact"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"hedpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"sorzap"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"sorrise"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"sorsit"}, false, 200, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"soratk"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"soract"}, false, 200, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"sorpai"}, false, 200, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"sordsph"}, false, 200, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"sordexp"}, false, 200, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"sordbon"}, false, 200, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"-sbtsit"},
     false,
     32,
     &heretic_S_sfx[heretic_sfx_bstsit],
     0,
     0,
     nullptr,
     0,
     {-1},
     2},
    {{"-sbtatk"},
     false,
     32,
     &heretic_S_sfx[heretic_sfx_bstatk],
     0,
     0,
     nullptr,
     0,
     {-1},
     2},
    {{"sbtdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"sbtact"}, false, 20, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"sbtpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"plroof"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"plrpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"plrdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"gibdth"}, false, 100, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"plrwdth"}, false, 80, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"plrcdth"}, false, 100, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"itemup"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"wpnup"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"telept"}, false, 50, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"doropn"}, false, 40, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"dorcls"}, false, 40, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"dormov"}, false, 40, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"artiup"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"switch"}, false, 40, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"pstart"}, false, 40, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"pstop"}, false, 40, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"stnmov"}, false, 40, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"chicpai"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"chicatk"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"chicdth"}, false, 40, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"chicact"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"chicpk1"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"chicpk2"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"chicpk3"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"keyup"}, false, 50, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"ripslop"}, false, 16, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"newpod"}, false, 16, nullptr, -1, -1, nullptr, 0, {-1}, -1},
    {{"podexp"}, false, 40, nullptr, -1, -1, nullptr, 0, {-1}, -1},
    {{"bounce"}, false, 16, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"-volsht"},
     false,
     16,
     &heretic_S_sfx[heretic_sfx_bstatk],
     0,
     0,
     nullptr,
     0,
     {-1},
     2},
    {{"-volhit"},
     false,
     16,
     &heretic_S_sfx[heretic_sfx_lobhit],
     0,
     0,
     nullptr,
     0,
     {-1},
     2},
    {{"burn"}, false, 10, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"splash"}, false, 10, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"gloop"}, false, 10, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"respawn"}, false, 10, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"blssht"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"blshit"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 2},
    {{"chat"}, false, 100, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"artiuse"}, false, 32, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"gfrag"}, false, 100, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"waterfl"}, false, 16, nullptr, -1, -1, nullptr, 0, {-1}, 2},

    // Monophonic sounds

    {{"wind"}, false, 16, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb1"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb2"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb3"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb4"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb5"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb6"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb7"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb8"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb9"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb10"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 1},
    {{"amb11"}, false, 1, nullptr, -1, -1, nullptr, 0, {-1}, 0}};
