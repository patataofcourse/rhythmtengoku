asm(".include \"include/gba.inc\""); // Temporary

#include "engines/showtime.h"

#include "src/code_08001360.h"
#include "src/bitmap_font.h"
#include "src/code_08007468.h"
#include "src/code_0800b778.h"
#include "src/scenes/gameplay.h"
#include "src/lib_0804ca80.h"

// For readability.
#define gShowtime ((struct ShowtimeEngineData *)gCurrentEngineData)


/* SHOWTIME */


void showtime_init_gfx3(void) {
    func_0800c604(0);
    gameplay_start_screen_fade_in();
}


void showtime_init_gfx2(void) {
    s32 task;

    func_0800c604(0);
    task = func_08002ee0(get_current_mem_id(), showtime_gfx_tables[gShowtime->version], 0x2000);
    run_func_after_task(task, showtime_init_gfx3, 0);
}


void showtime_init_gfx1(void) {
    s32 task;

    func_0800c604(0);
    task = start_new_texture_loader(get_current_mem_id(), showtime_buffered_textures);
    run_func_after_task(task, showtime_init_gfx2, 0);
}


void showtime_engine_start(u32 version) {
    struct PrintedTextAnim *textAnim;

    gShowtime->version = version;
    showtime_init_gfx1();
    scene_show_obj_layer();
    scene_set_bg_layer_display(BG_LAYER_1, TRUE, 0, 0, 0, 29, BG_PRIORITY_LOW);
    scene_set_bg_layer_display(BG_LAYER_2, TRUE, 0, 0, 0, 30, BG_PRIORITY_HIGHEST);
    func_0802d96c();
    gShowtime->unk0 = func_0800c660(0x340, 2);
    textAnim = bmp_font_obj_print_c(gShowtime->unk0, D_0805a3cc, 0, 0);
    gShowtime->unk4 = func_0804d160(D_03005380, textAnim->frames, 0, 120, 56, 0, 0, 0, 0);
    gameplay_set_input_buttons(A_BUTTON, 0);
    func_0802c23c();    
    func_0802d104();
    func_0802c40c();
    func_0802d394();
    func_0802da84();
    gShowtime->unk3C0 = 0;
    gShowtime->unk3C8[0] = 0;
    gShowtime->unk3C8[1] = 0;
    gShowtime->unk3D0 = 0;
}


void showtime_engine_event_stub() {
}


void showtime_engine_update(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (gShowtime->unk3C8[i] != 0) {
            if (i == 0) {
                func_0804d160(D_03005380, anim_showtime_splash_ball, 0, gShowtime->unk3C8[i]-4, 0x9c, 0, 1, 0, 3);
            } else {
                func_0804d160(D_03005380, anim_showtime_splash_penguin, 0, gShowtime->unk3C8[i]+8, 0x88, 0, 1, 0, 3);
            }
            gShowtime->unk3C8[i] = 0;
        }
    }
    func_0802c334();
    func_0802d43c();
    func_0802c5c8();
    func_0802d250();
    func_0802d9fc();
    func_0802db08();
    if (gShowtime->unk3C0 > 0) {
        gShowtime->unk3C0 -= 1;
    }
}


void func_0802be10(u8 arg0) {
    gShowtime->unk3D0 = arg0;
}


void showtime_engine_stop() {
    D_03004b10.BLDMOD = BLDMOD_BLEND_MODE(BLEND_MODE_OFF);
    D_03004b10.DISPCNT &= ~DISPCNT_ENABLE_WINDOW0;
}


void showtime_cue_spawn_gray(struct Cue *cue, struct ShowtimeCue *info, u32 unused) {
    info->unk4 = func_0802ce70(0);
    func_0802d38c();
}


u32 showtime_cue_update_gray(struct Cue *cue, struct ShowtimeCue *info, u32 runningTime, u32 duration) {
    if (runningTime > beats_to_ticks(0x78)) {
        return TRUE;
    } else {
        return FALSE;
    }
}


void showtime_cue_despawn_gray(struct Cue *cue, struct ShowtimeCue *info) {
}


void showtime_cue_spawn_black(struct Cue * cue, struct ShowtimeCue * info, u32 unused) {
    info->unk4 = func_0802ce70(1);
    func_0802d38c();
}


u32 showtime_cue_update_black(struct Cue *cue, struct ShowtimeCue *info, u32 runningTime, u32 duration) {
    if (runningTime > beats_to_ticks(0x90)) {
        return TRUE;
    } else {
        return FALSE;
    }
}


void showtime_cue_despawn_black(struct Cue *cue, struct ShowtimeCue *info) {
}


void showtime_cue_spawn_white_fast(struct Cue * cue, struct ShowtimeCue * info, u32 unused) {
    info->unk4 = func_0802ce70(2);
    func_0802d38c();
}


u32 showtime_cue_update_white_fast(struct Cue * cue, struct ShowtimeCue * info, u32 runningTime, u32 duration) {
    if (runningTime > beats_to_ticks(0x78)) {
        return TRUE;
    } else {
        return FALSE;
    }
}


void showtime_cue_despawn_white_fast(struct Cue *cue, struct ShowtimeCue *info) {
}


#include "asm/engines/showtime/asm_0802bee8.s"


u32 showtime_cue_update_white_fast_swing(struct Cue *cue, struct ShowtimeCue *info, u32 runningTime, u32 duration) {
    if (runningTime > beats_to_ticks(0x78)) {
        return TRUE;
    } else {
        return FALSE;
    }
}


void showtime_cue_despawn_white_fast_swing(struct Cue *cue, struct ShowtimeCue *info) {
}


void showtime_cue_spawn_white(struct Cue *cue, struct ShowtimeCue *info, u32 unused) {
    info->unk4 = func_0802ce70(4);
    func_0802d38c();
}


u32 showtime_cue_update_white(struct Cue *cue, struct ShowtimeCue *info, u32 runningTime, u32 duration) {
    if (runningTime > beats_to_ticks(0x78)){
        return TRUE;
    } else {
        return FALSE;
    }
}


void showtime_cue_despawn_white(struct Cue *cue, struct ShowtimeCue *info) {
}


void showtime_cue_hit(struct Cue *cue, struct ShowtimeCue *info, u32 pressed, u32 released) {
    func_0802cf8c(info->unk4);
    func_0802d81c(info->unk4);
    func_0802d2bc();
    gShowtime->unk3C0 = beats_to_ticks(0x14);
}


#include "asm/engines/showtime/asm_0802bf88.s"


void showtime_cue_miss(struct Cue * cue, struct ShowtimeCue * info) {
    beatscript_enable_loops();
}


void showtime_input_event(u32 pressed, u32 released) {
    if (gShowtime->unk3C0 == 0) {
        func_0802d918(-1);
        func_0802d2bc();
        gShowtime->unk3C0 = beats_to_ticks(0x1E);
        play_sound(&s_block_hit_seqData);
    }
}


void showtime_common_beat_animation(void) {
    if (gShowtime->unk170 == 0 && gShowtime->unk168 == 0) {
        s16 temp = gShowtime->unk168;
        func_0804d8f8(D_03005380, gShowtime->unk160, anim_showtime_monkey_beat2, 0, 1, 0x7f, temp);
        func_0804cebc(D_03005380, gShowtime->unk160, 0);
        func_0804dcb8(D_03005380, gShowtime->unk160, (INT_TO_FIXED(get_beatscript_tempo()) / 0x8cu));
    }
}


void showtime_common_display_text(char* text) {
    struct PrintedTextAnim* printedText;
    if (text == NULL) {
        func_0804d770(D_03005380, gShowtime->unk4, 0);
        return;
    }
    printedText = bmp_font_obj_print_c(gShowtime->unk0, text, 1, 0xC);
    delete_bmp_font_obj_text_anim(gShowtime->unk0, gShowtime->unk4);
    func_0804d8f8(D_03005380, gShowtime->unk4, printedText->frames, 0, 0, 0, 0);
    func_0804d770(D_03005380, gShowtime->unk4, 1);
}


#include "asm/engines/showtime/asm_0802c1cc.s"


void func_0802c1f0(u32 unused, s16 sprite, u32 arg2) {
    switch (gShowtime->unk8[arg2].unk4) {
        case 0:
            break;
        case 1:
            gShowtime->unk8[arg2].unk4 = 0;
            func_0804cebc(D_03005380, sprite, 3);
            func_0804dcb8(D_03005380, sprite, 0);
    }
}


void func_0802c23c() {
    s32 i;

    for (i = 0; i < 2; i++) {
        gShowtime->unk8[i].unk4 = 0;

        if (gShowtime->version != SHOWTIME_VER_REMIX_3) {
            gShowtime->unk8[i].sprite = func_0804d160(D_03005380, anim_showtime_block, 0, 64, 64, 0x4800, 1, 0, 4);
        } else {
            gShowtime->unk8[i].sprite = func_0804d160(D_03005380, anim_showtime_block_pink, 0, 64, 64, 0x4800, 1, 0, 4);
        }

        gShowtime->unk8[i].unk8 = 0;

        func_0804daa8(D_03005380, gShowtime->unk8[i].sprite, &func_0802c1f0, i);
        func_0804cebc(D_03005380, gShowtime->unk8[i].sprite, 3);
        func_0804dcb8(D_03005380, gShowtime->unk8[i].sprite, 0);
    }

    func_0804d5d4(D_03005380, gShowtime->unk8[0].sprite, 200, 128);
    func_0804d5d4(D_03005380, gShowtime->unk8[1].sprite, 184, 144);
}


void func_0802c334() {
    s32 i;

    for (i = 0; i < 2; i++) {
        if (gShowtime->unk8[i].unk4 == 0) {
            continue;
        }

        if (gShowtime->unk8[i].unk4 == 1) {
            gShowtime->unk8[i].unk8++;
        }
    }
}


void func_0802c36c(u32 arg0) {
    gShowtime->unk8[arg0].unk4 = 1;
    gShowtime->unk8[arg0].unk8 = 0;
    func_0804cebc(D_03005380, gShowtime->unk8[arg0].sprite, 0);
    func_0804dcb8(D_03005380, gShowtime->unk8[arg0].sprite, get_beatscript_tempo() * 256 / 140);
}


u32 func_0802c3d0(u32 arg) {
    switch (gShowtime->unk8[arg].unk8 / 4) {
        case 1:
            return 3;
        case 0:
            return 0;
        case 2:
            return 2;
        default:
            return 0;
    }
}


void func_0802c40c(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        gShowtime->unk20[i].unk4 = 0;
        gShowtime->unk20[i].unk0 = func_0804d160(D_03005380, anim_showtime_penguin_beat, 0, 0x40, 0x40, 0, 1, 0, 0);
        gShowtime->unk20[i].unk8 = 0;
        gShowtime->unk20[i].unk1C = 1;
        gShowtime->unk20[i].unk20 = 0;
        func_0804d770(D_03005380, gShowtime->unk20[i].unk0, 0);
        func_0804d5d4(D_03005380, gShowtime->unk20[i].unk0, 0x100, 0x50);
    }
}


#include "asm/engines/showtime/asm_0802c4b0.s"


void func_0802c4c0(s32 arg0) {
    switch(arg0) {
        case 0:
            play_sound(&s_esa_pengin1_1_seqData);
            break;
        case 1:
            play_sound(&s_esa_pengin2_1_seqData);
            break;
        case 2:
        case 3:
        case 4:
            play_sound(&s_esa_pengin3_1_seqData);
    }
}


void func_0802c4f4(s32 arg0) {
    switch(arg0) {
        case 0:
            play_sound(&s_esa_pengin1_2_seqData);
            break;
        case 1:
            play_sound(&s_esa_pengin2_2_seqData);
            break;
        case 2:
        case 3:
        case 4:
            play_sound(&s_esa_pengin3_2_seqData);
    }
}


void func_0802c528(s32 arg0) {
    switch(arg0) {
        case 0:
            play_sound(&s_esa_pengin1_3_seqData);
            break;
        case 1:
            play_sound(&s_esa_pengin2_3_seqData);
            break;
        case 2:
        case 3:
        case 4:
            play_sound(&s_esa_pengin3_3_seqData);
    }
}


void func_0802c55c(u32 arg0, u32 arg1, u32 arg2, u32 arg3, s32 arg_sp1C, u32 arg_sp20, u32 arg_sp24, s32* arg_sp28, s32* arg_sp2C) {
    s32 temp_r5 = math_lerp(INT_TO_FIXED(arg0), INT_TO_FIXED(arg2), arg_sp20, arg_sp24);
    s32 temp_r2 = (INT_TO_FIXED(arg0 + arg2) >> 1) - temp_r5;
    s32 temp_r1 = INT_TO_FIXED(arg2 - arg0) >> 1;
    s32 temp_r4;
    temp_r2 = FIXED_POINT_MUL(temp_r2, temp_r2);
    temp_r1 = FIXED_POINT_MUL(temp_r1, temp_r1);
    temp_r4 = arg_sp1C * temp_r2 / temp_r1 - arg_sp1C;
    temp_r4 += math_lerp(arg1, arg3, arg_sp20, arg_sp24);
    *arg_sp28 = FIXED_TO_INT(temp_r5);
    *arg_sp2C = temp_r4;
}


#include "asm/engines/showtime/asm_0802c5c8.s"


s32 func_0802ce70(s32 arg0) {
    s32 i;

    if (arg0 > 4) {
        arg0 = 0;
    }

    for (i = 0; i < 8; i++) {
        if (gShowtime->unk20[i].unk4 == 0) {
            gShowtime->unk20[i].unk4 = 1;
            func_0804d8f8(D_03005380, gShowtime->unk20[i].unk0, showtime_penguin_beat_anim[arg0], 0, 1, 0, 0);
            func_0804d770(D_03005380, gShowtime->unk20[i].unk0, 1);
            gShowtime->unk20[i].unk20 = arg0;
            func_0804d8c4(D_03005380, gShowtime->unk20[i].unk0, 0);

            switch (arg0) {
                case 2:
                    func_0804d8c4(D_03005380, gShowtime->unk20[i].unk0, 4);
                    break;

                case 4:
                    func_0802c4c0(4);
                case 3:
                    func_0804d8c4(D_03005380, gShowtime->unk20[i].unk0, 4);
                    break;

                default:
                    break;
            }

            func_0804dcb8(D_03005380, gShowtime->unk20[i].unk0, 0);
            gShowtime->unk20[i].unk24 = 0;
            return i;
        }
    }

    return -1;
}


#include "asm/engines/showtime/asm_0802cf8c.s"


void func_0802cfa4(u32 arg) {
    gShowtime->unk20[arg].unk1C = 0;
    gShowtime->unk20[arg].unk24 = 1;
}


#include "asm/engines/showtime/asm_0802cfc8.s"

#include "asm/engines/showtime/asm_0802cfe0.s"


u32 func_0802d068(u32 arg) {
    return gShowtime->unk20[arg].unkC;
}


u32 func_0802d080(u32 arg) {
    if (gShowtime->unk20[arg].unk4 == 8) {
        return gShowtime->unk20[arg].unk10 + 13;
    } else {
        return gShowtime->unk20[arg].unk10;
    }
}


void func_0802d0b8() {
    if (gShowtime->unk168 != 0) {
        if (gShowtime->unk168 == 2) {
            gShowtime->unk168 = 0;
            }
    }
}


void func_0802d0dc(u32 arg0, s16 sprite) {
    func_0804cebc(D_03005380, sprite, 8);
    func_0804dcb8(D_03005380, sprite, 0);
}


#include "asm/engines/showtime/asm_0802d104.s"

#include "asm/engines/showtime/asm_0802d250.s"

#include "asm/engines/showtime/asm_0802d2bc.s"


// stack pointer moment
void func_0802d38c(void) {
    u8 unused_temp[0xC]; // has to be a data type 0xC bytes long
}


#include "asm/engines/showtime/asm_0802d394.s"

#include "asm/engines/showtime/asm_0802d43c.s"

void func_0802d81c(u32 arg0) {
    s32 i;
    for (i = 0; i < 8;  i++) {
        if (gShowtime->unk174[i].unk4 == 1) {
            gShowtime->unk174[i].unk4 = 2;
            gShowtime->unk174[i].unkC = arg0;
            gShowtime->unk174[i].unk8 = 0;
            func_0804d770(D_03005380, gShowtime->unk174[i].sprite, 1);
            return;
        }
    }
    for (i = 0; i < 8; i++) {
        if (gShowtime->unk174[i].unk4 == 0) {
            gShowtime->unk174[i].unk4 = 2;
            gShowtime->unk174[i].unkC = arg0;
            gShowtime->unk174[i].unk8 = 0;
            func_0804d770(D_03005380, gShowtime->unk174[i].sprite, 1);
            return;
        }
    }
}


void func_0802d8bc(u32 arg) {
    s32 i;

    for (i = 0; i < 8; i++) {
        if (gShowtime->unk174[i].unk4 == 0) {
            gShowtime->unk174[i].unk4 = 4;
            gShowtime->unk174[i].unkC = arg;
            gShowtime->unk174[i].unk8 = 0;
            func_0804d770(D_03005380, gShowtime->unk174[i].sprite, TRUE);
            return;
        }
    }
}


#include "asm/engines/showtime/asm_0802d918.s"


void func_0802d96c(void) {
    gShowtime->unk3C4 = 8;
    D_03004b10.BLDMOD = 0x3a44;
    D_03004b10.COLEV = gShowtime->unk3C4 << 8 | (0x10 - gShowtime->unk3C4);
    D_03004b10.WIN0H = 0xf0;
    D_03004b10.WIN1H = 0xf0;
    D_03004b10.WIN0V = 0x80a0;
    D_03004b10.WIN1V = 0xa0;
    D_03004b10.WININ = 0x3337;
    D_03004b10.WINOUT = 0x2033;
    D_03004b10.DISPCNT |= 0x2000;
    gShowtime->unk1F4 = 0;
    gShowtime->unk1F8 = 0;
    gShowtime->unk1FC = 0;
}


#include "asm/engines/showtime/asm_0802d9fc.s"

#include "asm/engines/showtime/asm_0802da84.s"

#include "asm/engines/showtime/asm_0802db08.s"

#include "asm/engines/showtime/asm_0802dc54.s"
