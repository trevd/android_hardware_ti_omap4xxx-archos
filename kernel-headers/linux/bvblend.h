/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef BVBLEND_H
#define BVBLEND_H
#define BVBLENDDEF_FORMAT_SHIFT 28
#define BVBLENDDEF_FORMAT_MASK (0xF << BVBLENDDEF_FORMAT_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_FORMAT_CLASSIC (0x0 << BVBLENDDEF_FORMAT_SHIFT)
#define BVBLENDDEF_FORMAT_ESSENTIAL (0x1 << BVBLENDDEF_FORMAT_SHIFT)
#define BVBLENDDEF_MODE_SHIFT 4
#define BVBLENDDEF_INV_SHIFT 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_NORM_SHIFT 0
#define BVBLENDDEF_ONLY_A (0 << BVBLENDDEF_MODE_SHIFT)
#define BVBLENDDEF_MIN (1 << BVBLENDDEF_MODE_SHIFT)
#define BVBLENDDEF_MAX (2 << BVBLENDDEF_MODE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_ONLY_C (3 << BVBLENDDEF_MODE_SHIFT)
#define BVBLENDDEF_MODE_MASK (3 << BVBLENDDEF_MODE_SHIFT)
#define BVBLENDDEF_NORM_C1 (0 << BVBLENDDEF_NORM_SHIFT)
#define BVBLENDDEF_NORM_A1 (1 << BVBLENDDEF_NORM_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_NORM_C2 (2 << BVBLENDDEF_NORM_SHIFT)
#define BVBLENDDEF_NORM_A2 (3 << BVBLENDDEF_NORM_SHIFT)
#define BVBLENDDEF_NORM_MASK (3 << BVBLENDDEF_NORM_SHIFT)
#define BVBLENDDEF_INV_C1 (0 << BVBLENDDEF_INV_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_INV_A1 (1 << BVBLENDDEF_INV_SHIFT)
#define BVBLENDDEF_INV_C2 (2 << BVBLENDDEF_INV_SHIFT)
#define BVBLENDDEF_INV_A2 (3 << BVBLENDDEF_INV_SHIFT)
#define BVBLENDDEF_INV_MASK (3 << BVBLENDDEF_INV_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_ONLY_A_NORM_xx BVBLENDDEF_NORM_C1
#define BVBLENDDEF_ONLY_A_INV_xx BVBLENDDEF_INV_C1
#define BVBLENDDEF_ONLY_C_NORM_xx BVBLENDDEF_NORM_A2
#define BVBLENDDEF_ONLY_C_INV_xx BVBLENDDEF_INV_A2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_ZERO   (BVBLENDDEF_ONLY_A |   BVBLENDDEF_ONLY_A_NORM_xx |   BVBLENDDEF_ONLY_A_INV_xx)
#define BVBLENDDEF_C1   (BVBLENDDEF_ONLY_C |   BVBLENDDEF_NORM_C1 |   BVBLENDDEF_ONLY_C_INV_xx)
#define BVBLENDDEF_A1   (BVBLENDDEF_ONLY_A |   BVBLENDDEF_NORM_A1 |   BVBLENDDEF_ONLY_A_INV_xx)
#define BVBLENDDEF_C2   (BVBLENDDEF_ONLY_C |   BVBLENDDEF_NORM_C2 |   BVBLENDDEF_ONLY_C_INV_xx)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_A2   (BVBLENDDEF_ONLY_A |   BVBLENDDEF_NORM_A2 |   BVBLENDDEF_ONLY_A_INV_xx)
#define BVBLENDDEF_ONE_MINUS_C1   (BVBLENDDEF_ONLY_C |   BVBLENDDEF_ONLY_C_NORM_xx |   BVBLENDDEF_INV_C1)
#define BVBLENDDEF_ONE_MINUS_A1   (BVBLENDDEF_ONLY_A |   BVBLENDDEF_ONLY_A_NORM_xx |   BVBLENDDEF_INV_A1)
#define BVBLENDDEF_ONE_MINUS_C2   (BVBLENDDEF_ONLY_C |   BVBLENDDEF_ONLY_C_NORM_xx |   BVBLENDDEF_INV_C2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_ONE_MINUS_A2   (BVBLENDDEF_ONLY_A |   BVBLENDDEF_ONLY_A_NORM_xx |   BVBLENDDEF_INV_A2)
#define BVBLENDDEF_ONE   (BVBLENDDEF_ONLY_C |   BVBLENDDEF_ONLY_C_NORM_xx |   BVBLENDDEF_ONLY_C_INV_xx)
#define BVBLENDDEF_K_MASK   (BVBLENDDEF_MODE_MASK |   BVBLENDDEF_INV_MASK |   BVBLENDDEF_NORM_MASK)
#define BVBLENDDEF_K1_SHIFT 18
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_K2_SHIFT 12
#define BVBLENDDEF_K3_SHIFT 6
#define BVBLENDDEF_K4_SHIFT 0
#define BVBLENDDEF_K1_MASK   (BVBLENDDEF_K_MASK << BVBLENDDEF_K1_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_K2_MASK   (BVBLENDDEF_K_MASK << BVBLENDDEF_K2_SHIFT)
#define BVBLENDDEF_K3_MASK   (BVBLENDDEF_K_MASK << BVBLENDDEF_K3_SHIFT)
#define BVBLENDDEF_K4_MASK   (BVBLENDDEF_K_MASK << BVBLENDDEF_K4_SHIFT)
#define BVBLENDDEF_CLASSIC_EQUATION_MASK 0x00FFFFFF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_REMOTE 0x08000000
#define BVBLENDDEF_GLOBAL_SHIFT 24
#define BVBLENDDEF_GLOBAL_MASK (3 << BVBLENDDEF_GLOBAL_SHIFT)
#define BVBLENDDEF_GLOBAL_NONE (0 << BVBLENDDEF_GLOBAL_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BVBLENDDEF_GLOBAL_UCHAR (1 << BVBLENDDEF_GLOBAL_SHIFT)
#define BVBLENDDEF_GLOBAL_FLOAT (3 << BVBLENDDEF_GLOBAL_SHIFT)
union bvalpha {
 unsigned char size8;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 float fp;
};
enum bvblend {
 BVBLEND_CLEAR = BVBLENDDEF_FORMAT_CLASSIC |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ZERO << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_ZERO << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_ZERO << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_ZERO << BVBLENDDEF_K4_SHIFT),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_SRC1 = BVBLENDDEF_FORMAT_CLASSIC |
 (BVBLENDDEF_ONE << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_ZERO << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_ONE << BVBLENDDEF_K3_SHIFT) |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ZERO << BVBLENDDEF_K4_SHIFT),
 BVBLEND_SRC2 = BVBLENDDEF_FORMAT_CLASSIC |
 (BVBLENDDEF_ZERO << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_ONE << BVBLENDDEF_K2_SHIFT) |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ZERO << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_ONE << BVBLENDDEF_K4_SHIFT),
 BVBLEND_SRC1OVER = BVBLENDDEF_FORMAT_CLASSIC |
 (BVBLENDDEF_ONE << BVBLENDDEF_K1_SHIFT) |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ONE_MINUS_A1 << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_ONE << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_ONE_MINUS_A1 << BVBLENDDEF_K4_SHIFT),
 BVBLEND_SRC2OVER = BVBLENDDEF_FORMAT_CLASSIC |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ONE_MINUS_A2 << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_ONE << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_ONE_MINUS_A2 << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_ONE << BVBLENDDEF_K4_SHIFT),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_SRC1IN = BVBLENDDEF_FORMAT_CLASSIC |
 (BVBLENDDEF_A2 << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_ZERO << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_A2 << BVBLENDDEF_K3_SHIFT) |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ZERO << BVBLENDDEF_K4_SHIFT),
 BVBLEND_SRC2IN = BVBLENDDEF_FORMAT_CLASSIC |
 (BVBLENDDEF_ZERO << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_A1 << BVBLENDDEF_K2_SHIFT) |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ZERO << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_A1 << BVBLENDDEF_K4_SHIFT),
 BVBLEND_SRC1OUT = BVBLENDDEF_FORMAT_CLASSIC |
 (BVBLENDDEF_ONE_MINUS_A2 << BVBLENDDEF_K1_SHIFT) |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ZERO << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_ONE_MINUS_A2 << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_ZERO << BVBLENDDEF_K4_SHIFT),
 BVBLEND_SRC2OUT = BVBLENDDEF_FORMAT_CLASSIC |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ZERO << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_ONE_MINUS_A1 << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_ZERO << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_ONE_MINUS_A1 << BVBLENDDEF_K4_SHIFT),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_SRC1ATOP = BVBLENDDEF_FORMAT_CLASSIC |
 (BVBLENDDEF_A2 << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_ONE_MINUS_A1 << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_A2 << BVBLENDDEF_K3_SHIFT) |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ONE_MINUS_A1 << BVBLENDDEF_K4_SHIFT),
 BVBLEND_SRC2ATOP = BVBLENDDEF_FORMAT_CLASSIC |
 (BVBLENDDEF_ONE_MINUS_A2 << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_A1 << BVBLENDDEF_K2_SHIFT) |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ONE_MINUS_A2 << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_A1 << BVBLENDDEF_K4_SHIFT),
 BVBLEND_XOR = BVBLENDDEF_FORMAT_CLASSIC |
 (BVBLENDDEF_ONE_MINUS_A2 << BVBLENDDEF_K1_SHIFT) |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ONE_MINUS_A1 << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_ONE_MINUS_A2 << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_ONE_MINUS_A1 << BVBLENDDEF_K4_SHIFT),
 BVBLEND_PLUS = BVBLENDDEF_FORMAT_CLASSIC |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (BVBLENDDEF_ONE << BVBLENDDEF_K1_SHIFT) |
 (BVBLENDDEF_ONE << BVBLENDDEF_K2_SHIFT) |
 (BVBLENDDEF_ONE << BVBLENDDEF_K3_SHIFT) |
 (BVBLENDDEF_ONE << BVBLENDDEF_K4_SHIFT),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_NORMAL = BVBLENDDEF_FORMAT_ESSENTIAL + 0,
 BVBLEND_LIGHTEN = BVBLENDDEF_FORMAT_ESSENTIAL + 1,
 BVBLEND_DARKEN = BVBLENDDEF_FORMAT_ESSENTIAL + 2,
 BVBLEND_MULTIPLY = BVBLENDDEF_FORMAT_ESSENTIAL + 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_AVERAGE = BVBLENDDEF_FORMAT_ESSENTIAL + 4,
 BVBLEND_ADD = BVBLENDDEF_FORMAT_ESSENTIAL + 5,
 BVBLEND_LINEAR_DODGE = BVBLEND_ADD,
 BVBLEND_SUBTRACT = BVBLENDDEF_FORMAT_ESSENTIAL + 6,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_LINEAR_BURN = BVBLEND_SUBTRACT,
 BVBLEND_DIFFERENCE = BVBLENDDEF_FORMAT_ESSENTIAL + 7,
 BVBLEND_NEGATE = BVBLENDDEF_FORMAT_ESSENTIAL + 8,
 BVBLEND_SCREEN = BVBLENDDEF_FORMAT_ESSENTIAL + 9,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_EXCLUSION = BVBLENDDEF_FORMAT_ESSENTIAL + 10,
 BVBLEND_OVERLAY = BVBLENDDEF_FORMAT_ESSENTIAL + 11,
 BVBLEND_SOFT_LIGHT = BVBLENDDEF_FORMAT_ESSENTIAL + 12,
 BVBLEND_HARD_LIGHT = BVBLENDDEF_FORMAT_ESSENTIAL + 13,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_COLOR_DODGE = BVBLENDDEF_FORMAT_ESSENTIAL + 14,
 BVBLEND_COLOR_BURN = BVBLENDDEF_FORMAT_ESSENTIAL + 15,
 BVBLEND_LINEAR_LIGHT = BVBLENDDEF_FORMAT_ESSENTIAL + 16,
 BVBLEND_VIVID_LIGHT = BVBLENDDEF_FORMAT_ESSENTIAL + 17,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_PIN_LIGHT = BVBLENDDEF_FORMAT_ESSENTIAL + 18,
 BVBLEND_HARD_MIX = BVBLENDDEF_FORMAT_ESSENTIAL + 19,
 BVBLEND_REFLECT = BVBLENDDEF_FORMAT_ESSENTIAL + 20,
 BVBLEND_GLOW = BVBLENDDEF_FORMAT_ESSENTIAL + 21,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BVBLEND_PHOENIX = BVBLENDDEF_FORMAT_ESSENTIAL + 22,
#ifdef BVBLEND_EXTERNAL_INCLUDE
#define BVBLEND_EXTERNAL_INCLUDE
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif