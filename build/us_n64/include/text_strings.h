#ifndef TEXT_STRINGS_H
#define TEXT_STRINGS_H

#include "text_menu_strings.h"

#if defined(PUPPYCAM)
#define NC_CAMX_EN 				0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x21,0x9E,0x1C,0x28,0x31,0x36,0x2C,0x37,0x2C,0x39,0x2C,0x37,0x3C,0xFF
#define NC_CAMY_EN 				0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x22,0x9E,0x1C,0x28,0x31,0x36,0x2C,0x37,0x2C,0x39,0x2C,0x37,0x3C,0xFF
#define NC_INVERTX_EN			0x12,0x31,0x39,0x28,0x35,0x37,0x9E,0x21,0x9E,0x0A,0x3B,0x2C,0x36,0xFF
#define NC_INVERTY_EN			0x12,0x31,0x39,0x28,0x35,0x37,0x9E,0x22,0x9E,0x0A,0x3B,0x2C,0x36,0xFF
#define NC_CAMC_EN 				0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x0C,0x28,0x31,0x37,0x35,0x28,0x9E,0x1C,0x33,0x28,0x28,0x27,0xFF
#define NC_ANALOGUE_EN			0x0A,0x31,0x24,0x2F,0x32,0x2A,0x38,0x28,0x9E,0x0C,0x24,0x30,0x28,0x35,0x24,0xFF
#define NC_SCHEME_EN			0x0C,0x32,0x31,0x37,0x35,0x32,0x2F,0x9E,0x1C,0x26,0x2B,0x28,0x30,0x28,0xFF
#define OPTION_ENABLED_EN 		0x0E,0x31,0x24,0x25,0x2F,0x28,0x27,0xFF
#define OPTION_DISABLED_EN 		0x0D,0x2C,0x36,0x24,0x25,0x2F,0x28,0x27,0xFF
#define OPTION_SCHEME1_EN 		0x0D,0x32,0x38,0x25,0x2F,0x28,0x9E,0x1D,0x24,0x33,0xFF
#define OPTION_SCHEME2_EN 		0x1C,0x2C,0x31,0x2A,0x2F,0x28,0x9E,0x19,0x35,0x28,0x36,0x36,0xFF
#define OPTION_SCHEME3_EN 		0x0C,0x2F,0x24,0x36,0x36,0x2C,0x26,0xFF
#define OPTION_LANGUAGE_EN 		0x15,0x24,0x31,0x2A,0x38,0x24,0x2A,0x28,0xFF
#define NC_WIDE_EN	 			0x20,0x2C,0x27,0x28,0x36,0x26,0x35,0x28,0x28,0x31,0xFF
#define NC_HIGHLIGHT_L 			0x53,0xFF
#define NC_HIGHLIGHT_R 			0x52,0xFF
#define NC_BUTTON_EN 			0x58,0xE6,0x9E,0x18,0x33,0x37,0x2C,0x32,0x31,0x36,0xFF
#define NC_BUTTON2_EN 			0x58,0xE6,0x9E,0x1B,0x28,0x37,0x38,0x35,0x31,0xFF
#define NC_OPTION_EN 			0x18,0x19,0x1D,0x12,0x18,0x17,0x1C,0xFF

#if MULTILANG
#define NC_CAMX_FR 				0x1C,0x28,0x31,0x36,0x2C,0x25,0x2C,0x2F,0x2C,0x37,0x28,0x9E,0x36,0x38,0x35,0x9E,0x2F,0x3E,0x24,0x3B,0x28,0x9E,0x21,0xFF
#define NC_CAMY_FR 				0x1C,0x28,0x31,0x36,0x2C,0x25,0x2C,0x2F,0x2C,0x37,0x28,0x9E,0x36,0x38,0x35,0x9E,0x2F,0x3E,0x24,0x3B,0x28,0x9E,0x22,0xFF
#define NC_INVERTX_FR			0x12,0x31,0x39,0x28,0x35,0x37,0x2C,0x35,0x9E,0x0A,0x3B,0x28,0x9E,0x21,0xFF
#define NC_INVERTY_FR			0x12,0x31,0x39,0x28,0x35,0x37,0x2C,0x35,0x9E,0x0A,0x3B,0x28,0x9E,0x22,0xFF
#define NC_CAMC_FR 				0x1F,0x2C,0x37,0x28,0x36,0x36,0x28,0x9E,0x27,0x28,0x9E,0x0C,0x28,0x31,0x37,0x35,0x24,0x2A,0x28,0xFF
#define NC_ANALOGUE_FR			0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x0A,0x31,0x24,0x2F,0x32,0x2A,0x38,0x28,0xFF
#define NC_SCHEME_FR			0x0C,0x32,0x31,0x37,0x35,0x32,0x2F,0x9E,0x1C,0x26,0x2B,0x28,0x30,0x28,0xFF
#define OPTION_ENABLED_FR	    0x0A,0x26,0x37,0x2C,0x39,0x28,0xFF
#define OPTION_DISABLED_FR	    0x0D,0x28,0x36,0x24,0x26,0x37,0x2C,0x39,0x28,0xFF
#define OPTION_SCHEME1_FR 		0x0D,0x32,0x38,0x25,0x2F,0x28,0x9E,0x1D,0x24,0x33,0xFF
#define OPTION_SCHEME2_FR 		0x1C,0x2C,0x31,0x2A,0x2F,0x28,0x9E,0x19,0x35,0x28,0x36,0x36,0xFF
#define OPTION_SCHEME3_FR 		0x0C,0x2F,0x24,0x36,0x36,0x2C,0x26,0xFF
#define OPTION_LANGUAGE_FR 		0x15,0x24,0x31,0x2A,0x38,0x24,0x2A,0x28,0xFF
#define NC_WIDE_FR	 			0x20,0x2C,0x27,0x28,0x36,0x26,0x35,0x28,0x28,0x31,0xFF
#define NC_BUTTON_FR 			0x58,0xE6,0x9E,0x18,0x33,0x37,0x2C,0x32,0x31,0x36,0xFF
#define NC_BUTTON2_FR 			0x58,0xE6,0x9E,0x1B,0x28,0x37,0x32,0x38,0x35,0x31,0x28,0x3D,0xFF
#define NC_OPTION_FR 			0x18,0x19,0x1D,0x12,0x18,0x17,0x1C,0xFF

#define NC_CAMX_DE 				0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x21,0x9E,0x1C,0x28,0x31,0x36,0x2C,0x37,0x2C,0x39,0x2C,0x37,0x3C,0xFF
#define NC_CAMY_DE 				0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x22,0x9E,0x1C,0x28,0x31,0x36,0x2C,0x37,0x2C,0x39,0x2C,0x37,0x3C,0xFF
#define NC_INVERTY_DE			0x12,0x31,0x39,0x28,0x35,0x37,0x9E,0x22,0x9E,0x0A,0x3B,0x2C,0x36,0xFF
#define NC_INVERTX_DE			0x12,0x31,0x39,0x28,0x35,0x37,0x9E,0x21,0x9E,0x0A,0x3B,0x2C,0x36,0xFF
#define NC_CAMC_DE 				0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x0C,0x28,0x31,0x37,0x35,0x28,0x9E,0x1C,0x33,0x28,0x28,0x27,0xFF
#define NC_ANALOGUE_DE			0x0A,0x31,0x24,0x2F,0x32,0x2A,0x38,0x28,0x9E,0x0C,0x24,0x30,0x28,0x35,0x24,0xFF
#define NC_SCHEME_DE			0x0C,0x32,0x31,0x37,0x35,0x32,0x2F,0x9E,0x1C,0x26,0x2B,0x28,0x30,0x28,0xFF
#define OPTION_ENABLED_DE 		0x0E,0x31,0x24,0x25,0x2F,0x28,0x27,0xFF
#define OPTION_DISABLED_DE	    0x0D,0x2C,0x36,0x24,0x25,0x2F,0x28,0x27,0xFF
#define OPTION_SCHEME1_DE 		0x0D,0x32,0x38,0x25,0x2F,0x28,0x9E,0x1D,0x24,0x33,0xFF
#define OPTION_SCHEME2_DE 		0x1C,0x2C,0x31,0x2A,0x2F,0x28,0x9E,0x19,0x35,0x28,0x36,0x36,0xFF
#define OPTION_SCHEME3_DE 		0x0C,0x2F,0x24,0x36,0x36,0x2C,0x26,0xFF
#define OPTION_LANGUAGE_DE 		0x15,0x24,0x31,0x2A,0x38,0x24,0x2A,0x28,0xFF
#define NC_WIDE_DE	 			0x20,0x2C,0x27,0x28,0x36,0x26,0x35,0x28,0x28,0x31,0xFF
#define NC_BUTTON_DE 			0x58,0xE6,0x9E,0x18,0x33,0x37,0x2C,0x32,0x31,0x36,0xFF
#define NC_BUTTON2_DE 			0x58,0xE6,0x9E,0x1B,0x28,0x37,0x38,0x35,0x31,0xFF
#define NC_OPTION_DE 			0x18,0x19,0x1D,0x12,0x18,0x17,0x1C,0xFF
#endif
#endif

/**
 * Global Symbols
 */
#define TEXT_ZERO 0x00,0xFF
#define TEXT_COIN 0xF9,0xFF
#define TEXT_STAR 0xFA,0xFF
#define TEXT_COIN_X 0xF9,0xFB,0xFF
#define TEXT_STAR_X 0xFA,0xFB,0xFF
#define TEXT_VARIABLE_X 0xFB,0xFF
#define TEXT_UNFILLED_STAR 0xFD,0xFF

/**
 * Global Text
 */
// File Select
#define TEXT_NEW 0x17,0x0E,0x20,0xFF // New File Text
#define TEXT_4DASHES 0x9F,0x9F,0x9F,0x9F,0xFF // Used in Score File Menu

// Ingame Menu
#define TEXT_PAUSE 0x19,0x0A,0x1E,0x1C,0x0E,0xFF // Pause text, Castle Courses
#define TEXT_HUD_CONGRATULATIONS 0x0C,0x18,0x17,0x10,0x1B,0x0A,0x1D,0x1E,0x15,0x0A,0x1D,0x12,0x18,0x17,0x1C,0xFF // Course Complete Text, Bowser Courses

//Widescreen stuff
#if defined(WIDE) && !defined(PUPPYCAM)
#define TEXT_HUD_CURRENT_RATIO_43 0x0A,0x1C,0x19,0x0E,0x0C,0x1D,0x9E,0x1B,0x0A,0x1D,0x12,0x18,0xE6,0x9E,0x04,0xE6,0x03,0xFF
#define TEXT_HUD_CURRENT_RATIO_169 0x0A,0x1C,0x19,0x0E,0x0C,0x1D,0x9E,0x1B,0x0A,0x1D,0x12,0x18,0xE6,0x9E,0x01,0x06,0xE6,0x09,0xFF
#define TEXT_HUD_PRESS_L 0x19,0x1B,0x0E,0x1C,0x1C,0x9E,0x15,0x9E,0x1D,0x18,0x9E,0x1C,0x20,0x12,0x1D,0x0C,0x11,0xFF
#endif

#if defined(VERSION_JP) || defined(VERSION_SH)

/**
 * File Select Text
 */
// Main Screens
// JPHUD menu strings are defined in "text_menu_strings.h.in"
#define TEXT_MARIO TEXT_JPHUD_MARIO // View Score Menu
#define TEXT_SELECT_FILE TEXT_JPHUD_SELECT_FILE
#define TEXT_CHECK_FILE TEXT_JPHUD_CHECK_FILE
#define TEXT_COPY_FILE TEXT_JPHUD_COPY_FILE
#define TEXT_ERASE_FILE TEXT_JPHUD_ERASE_FILE
#define TEXT_SOUND_SELECT TEXT_JPHUD_SOUND_SELECT

#define TEXT_FILE_MARIO_A 0x8E,0x97,0x74,0x0A,0xFF
#define TEXT_FILE_MARIO_B 0x8E,0x97,0x74,0x0B,0xFF
#define TEXT_FILE_MARIO_C 0x8E,0x97,0x74,0x0C,0xFF
#define TEXT_FILE_MARIO_D 0x8E,0x97,0x74,0x0D,0xFF

// Menu Options
#define TEXT_SCORE 0x7C,0x79,0x70,0xFF
#define TEXT_COPY 0x79,0xF1,0x8A,0x9F,0xFF
#define TEXT_ERASE 0x48,0x4C,0xFF

// Sound Options
#define TEXT_STEREO 0x7C,0x82,0x99,0x74,0xFF
#define TEXT_MONO 0x92,0x88,0x96,0x98,0xFF
#define TEXT_HEADSET 0x8C,0xD1,0xF0,0x83,0x8D,0x9D,0xFF

// Misc Menu Text
#define TEXT_SAVED_DATA_EXISTS 0x8B,0xD5,0x71,0x98,0x55,0xF0,0x82,0x9F,0x7F,0xF0,0x45,0x59,0x41,0xA1,0x52,0x5E,0x4C,0xFF
#define TEXT_NO_SAVED_DATA_EXISTS 0x8B,0xD5,0x71,0x98,0x55,0xF0,0x82,0x9F,0x7F,0xF0,0x45,0x40,0x67,0x5E,0x4D,0x6D,0xFF

// Inside a Menu
#define TEXT_RETURN 0x62,0xF0,0x53,0x68,0xFF
#define TEXT_CHECK_SCORE 0x7C,0x79,0x70,0x6C,0x5F,0x68,0xFF
#define TEXT_COPY_FILE_BUTTON 0x8B,0xD5,0x71,0x98,0x79,0xF1,0x8A,0x9F,0xFF
#define TEXT_ERASE_FILE_BUTTON 0x8B,0xD5,0x71,0x98,0x48,0x4C,0xFF

// Score Menu
#define TEXT_HI_SCORE 0x89,0x71,0x7C,0x79,0x70,0xFF
#define TEXT_MY_SCORE 0x8E,0x71,0x7C,0x79,0x70,0xFF
#define TEXT_SCORE_MARIO_A 0x8E,0x97,0x74,0x0A,0xFF
#define TEXT_SCORE_MARIO_B 0x8E,0x97,0x74,0x0B,0xFF
#define TEXT_SCORE_MARIO_C 0x8E,0x97,0x74,0x0C,0xFF
#define TEXT_SCORE_MARIO_D 0x8E,0x97,0x74,0x0D,0xFF

// Copy Menu
#define TEXT_COPY_IT_TO_WHERE 0xF0,0x53,0x49,0x55,0x79,0xF1,0x8A,0x9F,0x4B,0x5E,0x4C,0x45,0xF4,0xFF
#define TEXT_COPYING_COMPLETED 0x79,0xF1,0x8A,0x9F,0x44,0x6B,0x67,0x5E,0x4B,0x4F,0xFF
#define TEXT_NO_FILE_TO_COPY_FROM 0x45,0x66,0x58,0x8B,0xD5,0x71,0x98,0xF0,0x45,0x40,0x67,0x5E,0x4D,0x6D,0xFF

// Erase Menu
#define TEXT_SURE 0x5D,0x6D,0x53,0xF4,0xFF
#define TEXT_YES 0x59,0x41,0xFF
#define TEXT_NO 0x41,0x41,0x43,0xFF
#define TEXT_FILE_MARIO_A_JUST_ERASED 0x8E,0x97,0x74,0x0A,0x6C,0x48,0x4B,0x5E,0x4B,0x4F,0xFF

/**
 * Menus Text (Pause, Course Completed)
 */
// Main Courses
#define TEXT_COURSE 0x79,0x9F,0x7C,0xFF
#define TEXT_MYSCORE 0x8E,0x71,0x7C,0x79,0x70,0xFF
#define TEXT_CONTINUE 0x51,0xF0,0x51,0x48,0x52,0x9E,0x8E,0x97,0x74,0x4C,0x68,0xF4,0xFF
#define TEXT_EXIT_COURSE 0x79,0x9F,0x7C,0x45,0x66,0xF0,0x52,0x68,0xF4,0xFF
#define TEXT_CAMERA_ANGLE_R 0x1B,0xF0,0x8D,0x7F,0x9D,0x58,0x75,0x91,0x96,0x46,0x67,0x45,0x43,0xFF

// Camera Options
#define TEXT_LAKITU_MARIO 0xF0,0x7B,0xD3,0xF0,0x78,0x90,0xE4,0x8E,0x97,0x74,0xFF
#define TEXT_LAKITU_STOP 0xF0,0x7B,0xD3,0xF0,0x78,0x90,0xE4,0x7C,0x83,0xD1,0xF1,0x8B,0xFF
#define TEXT_NORMAL_UPCLOSE 0xE1,0x44,0x4C,0x4C,0x61,0xE2,0x97,0x70,0x98,0xE3,0xFF
#define TEXT_NORMAL_FIXED 0xE1,0x44,0x4C,0x4C,0x61,0xE2,0x53,0x5E,0x68,0xE3,0xFF

// Course Completed Misc Text
#define TEXT_CATCH 0x76,0xD2,0xD1,0x80,0xF2,0xFF
#define TEXT_CLEAR 0x77,0x97,0x70,0xF2,0xFF
#define TEXT_HUD_HI_SCORE 0x11,0x12,0x1C,0x0C,0x18,0x1B,0x0E,0xFF

// Save Options
#define TEXT_SAVE_AND_CONTINUE 0x7D,0x9F,0xF0,0x8B,0x4B,0x52,0x51,0xF0,0x51,0x48,0x68,0xF4,0xFF
#define TEXT_SAVE_AND_QUIT 0x7D,0x9F,0xF0,0x8B,0x4B,0x52,0x44,0x6B,0x68,0xF4,0xFF
#define TEXT_CONTINUE_WITHOUT_SAVING 0x7D,0x9F,0xF0,0x8B,0x4B,0x54,0x41,0xF0,0x52,0x51,0xF0,0x51,0x48,0x68,0xF4,0xFF

/**
 * Ending Peach cutscene text.
 */
#define TEXT_FILE_MARIO_EXCLAMATION 0x8E,0x97,0x74,0xF2,0xF2,0xFF
#define TEXT_POWER_STARS_RESTORED 0x44,0x4B,0x6A,0x55,0x7C,0x7F,0x9F,0xF0,0x45,0x9E,0x62,0xF0,0x53,0xA1,0x4F,0x58,0x57,0xFF
#define TEXT_THANKS_TO_YOU 0x5F,0x6D,0x54,0x9E,0x40,0x54,0x4F,0x58,0x44,0x45,0xF0,0x48,0xF0,0x4F,0x6B,0xF2,0xFF
#define TEXT_THANK_YOU_MARIO 0x40,0x67,0xF0,0x45,0x53,0x42,0x9E,0x8E,0x97,0x74,0xFF
#define TEXT_SOMETHING_SPECIAL 0x54,0x55,0x45,0x9E,0x44,0x69,0x41,0x6C,0x4B,0x54,0x47,0x50,0xA2,0xFC,0xFC,0xFF
#define TEXT_LISTEN_EVERYBODY 0x4A,0x40,0x9E,0x5F,0x6D,0x54,0xFF
#define TEXT_LETS_HAVE_CAKE 0x44,0x41,0x4B,0x41,0x78,0x9F,0x76,0x6C,0x9E,0x63,0x46,0x5E,0x4B,0xA4,0x42,0xFF
#define TEXT_FOR_MARIO 0x8E,0x97,0x74,0x58,0x9E,0x4F,0x61,0x55,0xFC,0xFC,0xFC,0xFF
#define TEXT_FILE_MARIO_QUESTION 0x8E,0x97,0x74,0xF4,0xFF

#endif

#if defined(VERSION_US) || defined(VERSION_EU)

/**
 * File Select Text
 */
// Main Screens
#define TEXT_MARIO 0x16,0x0A,0x1B,0x12,0x18,0xFF // View Score Menu
#define TEXT_SELECT_FILE 0x1C,0x0E,0x15,0x0E,0x0C,0x1D,0x9E,0x0F,0x12,0x15,0x0E,0xFF
#define TEXT_CHECK_FILE 0x0C,0x11,0x0E,0x0C,0x14,0x9E,0x0F,0x12,0x15,0x0E,0xFF
#define TEXT_COPY_FILE 0x0C,0x18,0x19,0x22,0x9E,0x0F,0x12,0x15,0x0E,0xFF
#define TEXT_ERASE_FILE 0x0E,0x1B,0x0A,0x1C,0x0E,0x9E,0x0F,0x12,0x15,0x0E,0xFF
#define TEXT_SOUND_SELECT 0x1C,0x18,0x1E,0x17,0x0D,0x9E,0x1C,0x0E,0x15,0x0E,0x0C,0x1D,0xFF
#define TEXT_FILE_MARIO_A 0x16,0x0A,0x1B,0x12,0x18,0x9E,0x0A,0xFF
#define TEXT_FILE_MARIO_B 0x16,0x0A,0x1B,0x12,0x18,0x9E,0x0B,0xFF
#define TEXT_FILE_MARIO_C 0x16,0x0A,0x1B,0x12,0x18,0x9E,0x0C,0xFF
#define TEXT_FILE_MARIO_D 0x16,0x0A,0x1B,0x12,0x18,0x9E,0x0D,0xFF

// Menu Options
#define TEXT_SCORE 0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_COPY 0x0C,0x18,0x19,0x22,0xFF
#define TEXT_ERASE 0x0E,0x1B,0x0A,0x1C,0x0E,0xFF

// Sound Options
#define TEXT_STEREO 0x1C,0x1D,0x0E,0x1B,0x0E,0x18,0xFF
#define TEXT_MONO 0x16,0x18,0x17,0x18,0xFF
#define TEXT_HEADSET 0x11,0x0E,0x0A,0x0D,0x1C,0x0E,0x1D,0xFF

// Misc Menu Text
#define TEXT_SAVED_DATA_EXISTS 0x1C,0x0A,0x1F,0x0E,0x0D,0x9E,0x0D,0x0A,0x1D,0x0A,0x9E,0x0E,0x21,0x12,0x1D,0x1C,0xFF // Misspell
#define TEXT_NO_SAVED_DATA_EXISTS 0x17,0x18,0x9E,0x1C,0x0A,0x1F,0x0E,0x0D,0x9E,0x0D,0x0A,0x1D,0x0A,0x9E,0x0E,0x21,0x12,0x1C,0x1D,0x1C,0xFF

// Inside a Menu
#define TEXT_RETURN 0x1B,0x0E,0x1D,0x1E,0x1B,0x17,0xFF
#define TEXT_CHECK_SCORE 0x0C,0x11,0x0E,0x0C,0x14,0x9E,0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_COPY_FILE_BUTTON 0x0C,0x18,0x19,0x22,0x9E,0x0F,0x12,0x15,0x0E,0xFF
#define TEXT_ERASE_FILE_BUTTON 0x0E,0x1B,0x0A,0x1C,0x0E,0x9E,0x0F,0x12,0x15,0x0E,0xFF

// Score Menu
#define TEXT_HI_SCORE 0x11,0x12,0x9E,0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_MY_SCORE 0x16,0x22,0x9E,0x1C,0x0C,0x18,0x1B,0x0E,0xFF
// Score Mario Text ("☺" is the Mario face defined in the US/EU menu char table)
#define TEXT_SCORE_MARIO_A 0x40,0x41,0x0A,0xFF
#define TEXT_SCORE_MARIO_B 0x40,0x41,0x0B,0xFF
#define TEXT_SCORE_MARIO_C 0x40,0x41,0x0C,0xFF
#define TEXT_SCORE_MARIO_D 0x40,0x41,0x0D,0xFF

// Copy Menu
#define TEXT_COPY_IT_TO_WHERE 0x0C,0x18,0x19,0x22,0x9E,0x12,0x1D,0x9E,0x1D,0x18,0x9E,0x20,0x11,0x0E,0x1B,0x0E,0xF4,0xFF
#define TEXT_COPYING_COMPLETED 0x0C,0x18,0x19,0x22,0x12,0x17,0x10,0x9E,0x0C,0x18,0x16,0x19,0x15,0x0E,0x1D,0x0E,0x0D,0xFF
#define TEXT_NO_FILE_TO_COPY_FROM 0x17,0x18,0x9E,0x0E,0x16,0x19,0x1D,0x22,0x9E,0x0F,0x12,0x15,0x0E,0xFF

// Erase Menu
#define TEXT_SURE 0x1C,0x1E,0x1B,0x0E,0xF4,0xFF
#define TEXT_YES 0x22,0x0E,0x1C,0xFF
#define TEXT_NO 0x17,0x18,0xFF
#define TEXT_FILE_MARIO_A_JUST_ERASED 0x16,0x0A,0x1B,0x12,0x18,0x9E,0x0A,0x9E,0x13,0x1E,0x1C,0x1D,0x9E,0x0E,0x1B,0x0A,0x1C,0x0E,0x0D,0xFF

/**
 * Menus Text (Pause, Course Completed)
 */
// Main Courses
#define TEXT_COURSE 0x0C,0x18,0x1E,0x1B,0x1C,0x0E,0xFF
#define TEXT_MYSCORE 0x16,0x22,0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_CONTINUE 0x0C,0x18,0x17,0x1D,0x12,0x17,0x1E,0x0E,0xFF
#define TEXT_EXIT_COURSE 0x0E,0x21,0x12,0x1D,0x9E,0x0C,0x18,0x1E,0x1B,0x1C,0x0E,0xFF
#ifndef VERSION_EU // "R" text is different in EU
#define TEXT_CAMERA_ANGLE_R 0x1C,0x0E,0x1D,0x9E,0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0x9E,0x0A,0x17,0x10,0x15,0x0E,0x9E,0x20,0x12,0x1D,0x11,0x9E,0x1B,0xFF
#endif

// Camera Options
#define TEXT_LAKITU_MARIO 0x15,0x0A,0x14,0x12,0x1D,0x1E,0x9E,0xE4,0x9E,0x16,0x0A,0x1B,0x12,0x18,0xFF
#define TEXT_LAKITU_STOP 0x15,0x0A,0x14,0x12,0x1D,0x1E,0x9E,0xE4,0x9E,0x1C,0x1D,0x18,0x19,0xFF
#define TEXT_NORMAL_UPCLOSE 0xE1,0x17,0x18,0x1B,0x16,0x0A,0x15,0xE3,0xE1,0x1E,0x19,0x9F,0x0C,0x15,0x18,0x1C,0x0E,0xE3,0xFF
#define TEXT_NORMAL_FIXED 0xE1,0x17,0x18,0x1B,0x16,0x0A,0x15,0xE3,0xE1,0x0F,0x12,0x21,0x0E,0x0D,0xE3,0xFF

// Course Completed Misc Text
#define TEXT_CATCH 0x0C,0x0A,0x1D,0x0C,0x11,0xFF
#define TEXT_CLEAR 0x0C,0x15,0x0E,0x0A,0x1B,0xFF
#define TEXT_HUD_HI_SCORE 0x11,0x12,0x9E,0x1C,0x0C,0x18,0x1B,0x0E,0xFF

// Save Options
#define TEXT_SAVE_AND_CONTINUE 0x1C,0x0A,0x1F,0x0E,0x9E,0xE5,0x9E,0x0C,0x18,0x17,0x1D,0x12,0x17,0x1E,0x0E,0xFF
#define TEXT_SAVE_AND_QUIT 0x1C,0x0A,0x1F,0x0E,0x9E,0xE5,0x9E,0x1A,0x1E,0x12,0x1D,0xFF
#define TEXT_CONTINUE_WITHOUT_SAVING 0x0C,0x18,0x17,0x1D,0x12,0x17,0x1E,0x0E,0x6F,0x9E,0x0D,0x18,0x17,0x3E,0x1D,0x9E,0x1C,0x0A,0x1F,0x0E,0xFF

/**
 * Ending Peach cutscene text.
 */
#define TEXT_FILE_MARIO_EXCLAMATION 0x16,0x24,0x35,0x2C,0x32,0xF2,0xFF
#define TEXT_POWER_STARS_RESTORED 0x1D,0x2B,0x28,0x9E,0x33,0x32,0x3A,0x28,0x35,0x9E,0x32,0x29,0x9E,0x37,0x2B,0x28,0x9E,0x1C,0x37,0x24,0x35,0x36,0x9E,0x2C,0x36,0x9E,0x35,0x28,0x36,0x37,0x32,0x35,0x28,0x27,0x9E,0x37,0x32,0x9E,0x37,0x2B,0x28,0x9E,0x26,0x24,0x36,0x37,0x2F,0x28,0x3F,0x3F,0x3F,0xFF
#define TEXT_THANKS_TO_YOU 0x3F,0x3F,0x3F,0x24,0x31,0x27,0x9E,0x2C,0x37,0x3E,0x36,0x9E,0x24,0x2F,0x2F,0x9E,0x37,0x2B,0x24,0x31,0x2E,0x36,0x9E,0x37,0x32,0x9E,0x3C,0x32,0x38,0xF2,0xFF
#define TEXT_THANK_YOU_MARIO 0x1D,0x2B,0x24,0x31,0x2E,0x9E,0x3C,0x32,0x38,0x6F,0x9E,0x16,0x24,0x35,0x2C,0x32,0xF2,0xFF
#define TEXT_SOMETHING_SPECIAL 0x20,0x28,0x9E,0x2B,0x24,0x39,0x28,0x9E,0x37,0x32,0x9E,0x27,0x32,0x9E,0x36,0x32,0x30,0x28,0x37,0x2B,0x2C,0x31,0x2A,0x9E,0x36,0x33,0x28,0x26,0x2C,0x24,0x2F,0x9E,0x29,0x32,0x35,0x9E,0x3C,0x32,0x38,0x3F,0x3F,0x3F,0xFF
#define TEXT_LISTEN_EVERYBODY 0x15,0x2C,0x36,0x37,0x28,0x31,0x6F,0x9E,0x28,0x39,0x28,0x35,0x3C,0x25,0x32,0x27,0x3C,0x6F,0xFF
#define TEXT_LETS_HAVE_CAKE 0x2F,0x28,0x37,0x3E,0x36,0x9E,0x25,0x24,0x2E,0x28,0x9E,0x24,0x9E,0x27,0x28,0x2F,0x2C,0x26,0x2C,0x32,0x38,0x36,0x9E,0x26,0x24,0x2E,0x28,0x3F,0x3F,0x3F,0xFF
#define TEXT_FOR_MARIO 0x3F,0x3F,0x3F,0x29,0x32,0x35,0x9E,0x16,0x24,0x35,0x2C,0x32,0x3F,0x3F,0x3F,0xFF
#define TEXT_FILE_MARIO_QUESTION 0x16,0x24,0x35,0x2C,0x32,0xF2,0xFF

#endif


#define TEXT_ENGLISH 0x0E,0x17,0x10,0x15,0x12,0x1C,0x11,0xFF
#define TEXT_FRENCH 0x0F,0x1B,0x0A,0x17,0xED,0x0A,0x12,0x1C,0xFF
#define TEXT_GERMAN 0x0D,0x0E,0x1E,0x1D,0x1C,0x0C,0x11,0xFF

#if MULTILANG

/**
 * File Select Text
 */
#define TEXT_RETURN_FR 0x1B,0x0E,0x1D,0x18,0x1E,0x1B,0xFF
#define TEXT_RETURN_DE 0x23,0x1E,0x1B,0x86,0x0C,0x14,0xFF

#define TEXT_CHECK_SCORE_FR 0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_CHECK_SCORE_DE 0x15,0x0E,0x12,0x1C,0x1D,0x1E,0x17,0x10,0xFF

#define TEXT_COPY_FILE_FR 0x0C,0x18,0x19,0x12,0x0E,0x1B,0xFF
#define TEXT_COPY_FILE_DE 0x14,0x18,0x19,0x12,0x0E,0x1B,0x0E,0x17,0xFF

#define TEXT_ERASE_FILE_FR 0x0E,0x0F,0x0F,0x0A,0x0C,0x0E,0x1B,0xFF
#define TEXT_ERASE_FILE_DE 0x15,0x96,0x1C,0x0C,0x11,0x0E,0x17,0xFF

#define TEXT_SELECT_FILE_FR 0x0C,0x11,0x18,0x12,0x1C,0x12,0x1B,0x9E,0x9E,0x0F,0x12,0x0C,0x11,0x12,0x0E,0x1B,0xFF
#define TEXT_SELECT_FILE_DE 0x20,0x3A,0x11,0x15,0x0E,0x9E,0x1C,0x19,0x12,0x0E,0x15,0xFF

#define TEXT_SCORE_FR 0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_SCORE_DE 0x15,0x0E,0x12,0x1C,0x1D,0x1E,0x17,0x10,0xFF

#define TEXT_COPY_FR 0x0C,0x18,0x19,0x12,0x0E,0x1B,0xFF
#define TEXT_COPY_DE 0x14,0x18,0x19,0x12,0x0E,0x1B,0x0E,0x17,0xFF

#define TEXT_ERASE_FR 0x0E,0x0F,0x0F,0x0A,0x0C,0x0E,0x1B,0xFF
#define TEXT_ERASE_DE 0x15,0x96,0x1C,0x0C,0x11,0x0E,0x17,0xFF

#define TEXT_OPTION 0x18,0x19,0x1D,0x12,0x18,0x17,0xFF  // new in EU
#define TEXT_OPTION_FR 0x18,0x19,0x1D,0x12,0x18,0x17,0xFF
#define TEXT_OPTION_DE 0x18,0x19,0x1D,0x12,0x18,0x17,0x0E,0x17,0xFF

#define TEXT_CHECK_FILE_FR 0x1F,0x18,0x12,0x1B,0x9E,0x9E,0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_CHECK_FILE_DE 0x1F,0x18,0x17,0x9E,0x20,0x0E,0x15,0x0C,0x11,0x0E,0x16,0x9E,0x1C,0x19,0x12,0x0E,0x15,0xFF

#define TEXT_NO_SAVED_DATA_EXISTS_FR 0x0A,0x1E,0x0C,0x1E,0x17,0x0E,0x9E,0x1C,0x0A,0x1E,0x1F,0x0E,0x10,0x0A,0x1B,0x0D,0x0E,0x9E,0x0D,0x12,0x1C,0x19,0x18,0x17,0x12,0x0B,0x15,0x0E,0xFF
#define TEXT_NO_SAVED_DATA_EXISTS_DE 0x14,0x0E,0x12,0x17,0x9E,0x1C,0x19,0x12,0x0E,0x15,0x9E,0x1F,0x18,0x1B,0x11,0x0A,0x17,0x0D,0x0E,0x17,0xFF

#define TEXT_COPY_FILE_BUTTON_FR 0x0C,0x18,0x19,0x12,0x0E,0x1B,0x9E,0x9E,0x0F,0x12,0x0C,0x11,0x12,0x0E,0x1B,0xFF
#define TEXT_COPY_FILE_BUTTON_DE 0x1C,0x19,0x12,0x0E,0x15,0x9E,0x14,0x18,0x19,0x12,0x0E,0x1B,0x0E,0x17,0xFF

#define TEXT_COPY_IT_TO_WHERE_FR 0x0C,0x18,0x19,0x12,0x0E,0x1B,0x9E,0x1C,0x1E,0x1B,0xF4,0xFF
#define TEXT_COPY_IT_TO_WHERE_DE 0x20,0x18,0x11,0x12,0x17,0x9E,0x14,0x18,0x19,0x12,0x0E,0x1B,0x0E,0x17,0xF4,0xFF

#define TEXT_COPYING_COMPLETED_FR 0x0C,0x18,0x19,0x12,0x0E,0x9E,0x0A,0x0C,0x11,0x0E,0x1F,0x0E,0x77,0xFF
#define TEXT_COPYING_COMPLETED_DE 0x1C,0x19,0x12,0x0E,0x15,0x9E,0x14,0x18,0x19,0x12,0x0E,0x1B,0x1D,0xFF

#define TEXT_SAVED_DATA_EXISTS_FR 0x1C,0x0A,0x1F,0x0E,0x10,0x0A,0x1B,0x0D,0x0E,0x9E,0x0E,0x21,0x12,0x1C,0x1D,0x0A,0x17,0x1D,0x0E,0xFF
#define TEXT_SAVED_DATA_EXISTS_DE 0x0B,0x0E,0x1B,0x0E,0x12,0x1D,0x1C,0x9E,0x0B,0x0E,0x15,0x0E,0x10,0x1D,0xFF

#define TEXT_NO_FILE_TO_COPY_FROM_FR 0x0A,0x1E,0x0C,0x1E,0x17,0x9E,0x0F,0x12,0x0C,0x11,0x12,0x0E,0x1B,0x9E,0x1F,0x12,0x0D,0x0E,0xFF
#define TEXT_NO_FILE_TO_COPY_FROM_DE 0x14,0x0E,0x12,0x17,0x9E,0x19,0x15,0x0A,0x1D,0x23,0x9E,0x1F,0x18,0x1B,0x11,0x0A,0x17,0x0D,0x0E,0x17,0xFF

#define TEXT_YES_FR 0x18,0x1E,0x12,0xFF
#define TEXT_YES_DE 0x13,0x0A,0xFF

#define TEXT_NO_FR 0x17,0x18,0x17,0xFF
#define TEXT_NO_DE 0x17,0x0E,0x12,0x17,0xFF

#define TEXT_ERASE_FILE_BUTTON_FR 0x0E,0x0F,0x0F,0x0A,0x0C,0x0E,0x1B,0x9E,0x9E,0x0F,0x12,0x0C,0x11,0x12,0x0E,0x1B,0xFF
#define TEXT_ERASE_FILE_BUTTON_DE 0x1C,0x19,0x12,0x0E,0x15,0x9E,0x15,0x3B,0x1C,0x0C,0x11,0x0E,0x17,0xFF

#define TEXT_SURE_FR 0x18,0x14,0xF4,0xFF
#define TEXT_SURE_DE 0x1C,0x12,0x0C,0x11,0x0E,0x1B,0xF4,0xFF

#define TEXT_FILE_MARIO_A_JUST_ERASED_FR 0x16,0x0A,0x1B,0x12,0x18,0x9E,0x0A,0x9E,0x0E,0x0F,0x0F,0x0A,0x0C,0x77,0xFF
#define TEXT_FILE_MARIO_A_JUST_ERASED_DE 0x16,0x0A,0x1B,0x12,0x18,0x9E,0x0A,0x9E,0x10,0x0E,0x15,0x96,0x1C,0x0C,0x11,0x1D,0xFF

#define TEXT_SOUND_SELECT_FR 0x1C,0x18,0x17,0xFF
#define TEXT_SOUND_SELECT_DE 0x1C,0x18,0x1E,0x17,0x0D,0xFF

#define TEXT_LANGUAGE_SELECT 0x15,0x0A,0x17,0x10,0x1E,0x0A,0x10,0x0E,0x9E,0x1C,0x0E,0x15,0x0E,0x0C,0x1D,0xFF  // new in EU
#define TEXT_LANGUAGE_SELECT_FR 0x1C,0x0E,0x15,0x0E,0x0C,0x1D,0x12,0x18,0x17,0x9E,0x15,0x0A,0x17,0x10,0x1E,0x0E,0xFF
#define TEXT_LANGUAGE_SELECT_DE 0x20,0x3A,0x11,0x15,0x0E,0x9E,0x1C,0x19,0x1B,0x0A,0x0C,0x11,0x0E,0xFF

#define TEXT_STEREO_FR 0x1C,0x1D,0x77,0x1B,0x77,0x18,0xFF
#define TEXT_MONO_FR 0x16,0x18,0x17,0x18,0xFF
#define TEXT_HEADSET_FR 0x0C,0x0A,0x1C,0x1A,0x1E,0x0E,0xFF

#define TEXT_STEREO_DE 0x1C,0x1D,0x0E,0x1B,0x0E,0x18,0xFF
#define TEXT_MONO_DE 0x16,0x18,0x17,0x18,0xFF
#define TEXT_HEADSET_DE 0x19,0x11,0x18,0x17,0x0E,0x1C,0xFF

#define TEXT_HI_SCORE_FR 0x16,0x0E,0x12,0x15,0x15,0x0E,0x1E,0x1B,0x9E,0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_HI_SCORE_DE 0x0B,0x0E,0x1C,0x1D,0x15,0x0E,0x12,0x1C,0x1D,0x1E,0x17,0x10,0xFF

#define TEXT_MY_SCORE_FR 0x16,0x18,0x17,0x9E,0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_MY_SCORE_DE 0x15,0x0E,0x12,0x1C,0x1D,0x1E,0x17,0x10,0xFF

#define TEXT_NEW_FR 0x1F,0x12,0x0D,0x0E,0xFF
#define TEXT_NEW_DE 0x0F,0x1B,0x0E,0x12,0xFF


/**
 * Menus Text (Pause, Course Completed)
 */
// Main Courses
// English, "R" text is different
#define TEXT_CAMERA_ANGLE_R             0x1C,0x0E,0x1D,0x9E,0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0x9E,0x0A,0x17,0x10,0x15,0x0E,0x9E,0x20,0x12,0x1D,0x11,0x9E,0x58,0xFF
// French
#define TEXT_COURSE_FR                  0x17,0x12,0x1F,0x0E,0x0A,0x1E,0xFF
#define TEXT_MY_SCORE_FR                0x16,0x18,0x17,0x9E,0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_CONTINUE_FR                0x0C,0x18,0x17,0x1D,0x12,0x17,0x1E,0x0E,0x1B,0xFF
#define TEXT_EXIT_COURSE_FR             0x1A,0x1E,0x12,0x1D,0x1D,0x0E,0x1B,0x9E,0x17,0x12,0x1F,0x0E,0x0A,0x1E,0xFF
#define TEXT_CAMERA_ANGLE_R_FR          0x1B,0x77,0x10,0x15,0x0A,0x10,0x0E,0x9E,0x0C,0x0A,0x16,0x77,0x1B,0x0A,0x9E,0x0A,0x1F,0x0E,0x0C,0x9E,0x58,0xFF
// German
#define TEXT_COURSE_DE                  0x14,0x1E,0x1B,0x1C,0xFF
#define TEXT_MY_SCORE_DE                0x15,0x0E,0x12,0x1C,0x1D,0x1E,0x17,0x10,0xFF
#define TEXT_CONTINUE_DE                0x20,0x0E,0x12,0x1D,0x0E,0x1B,0xFF
#define TEXT_EXIT_COURSE_DE             0x14,0x1E,0x1B,0x1C,0x9E,0x1F,0x0E,0x1B,0x15,0x0A,0x1C,0x1C,0x0E,0x17,0xFF
#define TEXT_CAMERA_ANGLE_R_DE          0x14,0x0A,0x16,0x0E,0x1B,0x0A,0x9E,0x16,0x12,0x1D,0x9E,0x58,0x9E,0x1F,0x0E,0x1B,0x1C,0x1D,0x0E,0x15,0x15,0x0E,0x17,0xFF

// Camera Options
// French
#define TEXT_NORMAL_UPCLOSE_FR          0xE1,0x17,0x18,0x1B,0x16,0x0A,0x15,0xE3,0xE1,0x10,0x1B,0x18,0x1C,0x9F,0x19,0x15,0x0A,0x17,0xE3,0xFF
#define TEXT_NORMAL_FIXED_FR            0xE1,0x17,0x18,0x1B,0x16,0x0A,0x15,0xE3,0xE1,0x0F,0x12,0x21,0x0E,0xE3,0xFF
// German
#define TEXT_NORMAL_UPCLOSE_DE          0xE1,0x17,0x18,0x1B,0x16,0x0A,0x15,0xE3,0xE1,0x20,0x0E,0x12,0x1D,0x9F,0x23,0x18,0x18,0x16,0xE3,0xFF
#define TEXT_NORMAL_FIXED_DE            0xE1,0x17,0x18,0x1B,0x16,0x0A,0x15,0xE3,0xE1,0x1C,0x1D,0x0A,0x1D,0x12,0x1F,0xE3,0xFF

// Course Completed Misc Text
// French
#define TEXT_HUD_HI_SCORE_FR            0x16,0x0E,0x12,0x15,0x15,0x0E,0x1E,0x1B,0x9E,0x1C,0x0C,0x18,0x1B,0x0E,0xFF
#define TEXT_HUD_CONGRATULATIONS_FR     0x0F,0x0E,0x15,0x12,0x0C,0x12,0x1D,0x0A,0x1D,0x12,0x18,0x17,0x1C,0xFF
// German
#define TEXT_HUD_HI_SCORE_DE            0x0B,0x0E,0x1C,0x1D,0x15,0x0E,0x12,0x1C,0x1D,0x1E,0x17,0x10,0xFF
#define TEXT_HUD_CONGRATULATIONS_DE     0x10,0x1B,0x0A,0x1D,0x1E,0x15,0x0A,0x1D,0x12,0x18,0x17,0xFF

// Save Options
// French
#define TEXT_SAVE_AND_CONTINUE_FR       0x1C,0x0A,0x1E,0x1F,0x0E,0x10,0x0A,0x1B,0x0D,0x0E,0x1B,0x9E,0xE5,0x9E,0x0C,0x18,0x17,0x1D,0x12,0x17,0x1E,0x0E,0x1B,0xFF
#define TEXT_SAVE_AND_QUIT_FR           0x1C,0x0A,0x1E,0x1F,0x0E,0x10,0x0A,0x1B,0x0D,0x0E,0x1B,0x9E,0xE5,0x9E,0x1A,0x1E,0x12,0x1D,0x1D,0x0E,0x1B,0xFF
#define TEXT_CONTINUE_WITHOUT_SAVING_FR 0x0C,0x18,0x17,0x1D,0x12,0x17,0x1E,0x0E,0x1B,0x9E,0x1C,0x0A,0x17,0x1C,0x9E,0x1C,0x0A,0x1E,0x1F,0x0E,0x10,0x0A,0x1B,0x0D,0x0E,0x1B,0xFF
// German
#define TEXT_SAVE_AND_CONTINUE_DE       0x1C,0x19,0x0E,0x12,0x0C,0x11,0x0E,0x1B,0x17,0x9E,0xE5,0x9E,0x20,0x0E,0x12,0x1D,0x0E,0x1B,0xFF
#define TEXT_SAVE_AND_QUIT_DE           0x1C,0x19,0x0E,0x12,0x0C,0x11,0x0E,0x1B,0x17,0x9E,0xE5,0x9E,0x0E,0x17,0x0D,0x0E,0xFF
#define TEXT_CONTINUE_WITHOUT_SAVING_DE 0x20,0x0E,0x12,0x1D,0x0E,0x1B,0x9E,0x18,0x11,0x17,0x0E,0x9E,0x23,0x1E,0x9E,0x1C,0x19,0x0E,0x12,0x0C,0x11,0x0E,0x1B,0x17,0xFF

/**
 * Ending Peach cutscene text.
 */
// French
#define TEXT_POWER_STARS_RESTORED_FR 0x10,0x35,0x61,0x26,0x28,0x9E,0x24,0x38,0x3B,0x9E,0x73,0x37,0x32,0x2C,0x2F,0x28,0x36,0x6F,0x9E,0x2F,0x28,0x9E,0x26,0x2B,0x61,0x37,0x28,0x24,0x38,0x9E,0x24,0x9E,0x35,0x28,0x37,0x35,0x32,0x38,0x39,0x73,0x9E,0x36,0x28,0x36,0x9E,0x33,0x32,0x38,0x39,0x32,0x2C,0x35,0x36,0x3F,0x3F,0x3F,0xFF
#define TEXT_THANKS_TO_YOU_FR        0x3F,0x3F,0x3F,0x28,0x37,0x9E,0x26,0x28,0x26,0x2C,0x9E,0x2A,0x35,0x61,0x26,0x28,0x9E,0x60,0x9E,0x37,0x32,0x2C,0xF2,0xFF
#define TEXT_THANK_YOU_MARIO_FR      0x16,0x28,0x35,0x26,0x2C,0x6F,0x9E,0x16,0x24,0x35,0x2C,0x32,0xF2,0xFF
#define TEXT_SOMETHING_SPECIAL_FR    0x1D,0x38,0x9E,0x30,0x73,0x35,0x2C,0x37,0x28,0x36,0x9E,0x38,0x31,0x28,0x9E,0x35,0x73,0x26,0x32,0x30,0x33,0x28,0x31,0x36,0x28,0x3F,0x3F,0x3F,0xFF
#define TEXT_COME_ON_EVERYBODY_FR    0x1F,0x28,0x31,0x28,0x3D,0x9E,0x2F,0x28,0x36,0x9E,0x24,0x30,0x2C,0x36,0x3F,0x3F,0x3F,0xFF
#define TEXT_LETS_HAVE_CAKE_FR       0x0A,0x2F,0x2F,0x32,0x31,0x36,0x9E,0x33,0x35,0x73,0x33,0x24,0x35,0x28,0x35,0x9E,0x38,0x31,0x9E,0x27,0x73,0x2F,0x2C,0x26,0x2C,0x28,0x38,0x3B,0x9E,0x2A,0x61,0x37,0x28,0x24,0x38,0x3F,0x3F,0x3F,0xFF
#define TEXT_FOR_MARIO_FR            0x3F,0x3F,0x3F,0x33,0x32,0x38,0x35,0x9E,0x16,0x24,0x35,0x2C,0x32,0x3F,0x3F,0x3F,0xFF
// German
#define TEXT_POWER_STARS_RESTORED_DE 0x0D,0x2C,0x28,0x9E,0x16,0x24,0x26,0x2B,0x37,0x9E,0x27,0x28,0x35,0x9E,0x1C,0x37,0x28,0x35,0x31,0x28,0x9E,0x35,0x38,0x2B,0x37,0x9E,0x3A,0x2C,0x28,0x27,0x28,0x35,0x9E,0x36,0x2C,0x26,0x2B,0x28,0x35,0x9E,0x2C,0x30,0x9E,0x1C,0x26,0x2B,0x2F,0x32,0x36,0x36,0x3F,0x3F,0x3F,0xFF
#define TEXT_THANKS_TO_YOU_DE        0x3F,0x3F,0x3F,0x38,0x31,0x27,0x9E,0x24,0x2F,0x2F,0x28,0x36,0x9E,0x27,0x24,0x31,0x2E,0x9E,0x0D,0x28,0x2C,0x31,0x28,0x35,0x9E,0x11,0x2C,0x2F,0x29,0x28,0xF2,0xFF
#define TEXT_THANK_YOU_MARIO_DE      0x1F,0x2C,0x28,0x2F,0x28,0x31,0x9E,0x0D,0x24,0x31,0x2E,0x6F,0x9E,0x16,0x24,0x35,0x2C,0x32,0xF2,0xFF
#define TEXT_SOMETHING_SPECIAL_DE    0x20,0x2C,0x35,0x9E,0x2B,0x24,0x25,0x28,0x31,0x9E,0x28,0x2C,0x31,0x28,0x9E,0x86,0x25,0x28,0x35,0x35,0x24,0x36,0x26,0x2B,0x38,0x31,0x2A,0x9E,0x29,0x82,0x35,0x9E,0x0D,0x2C,0x26,0x2B,0x3F,0x3F,0x3F,0xFF
#define TEXT_COME_ON_EVERYBODY_DE    0x11,0x92,0x35,0x37,0x9E,0x24,0x2F,0x2F,0x28,0x9E,0x2B,0x28,0x35,0x3F,0x3F,0x3F,0xFF
#define TEXT_LETS_HAVE_CAKE_DE       0x15,0x24,0xEC,0x37,0x9E,0x38,0x31,0x36,0x9E,0x28,0x2C,0x31,0x28,0x31,0x9E,0x2F,0x28,0x26,0x2E,0x28,0x35,0x28,0x31,0x9E,0x14,0x38,0x26,0x2B,0x28,0x31,0x9E,0x25,0x24,0x26,0x2E,0x28,0x31,0x3F,0x3F,0x3F,0xFF
#define TEXT_FOR_MARIO_DE            0x3F,0x3F,0x3F,0x29,0x82,0x35,0x9E,0x16,0x24,0x35,0x2C,0x32,0x3F,0x3F,0x3F,0xFF

/**
 * Course Table names for Score Menu Save view
 */
#define TEXT_MENU_BOB 0x9E,0x01,0x9E,0x0B,0x18,0x0B,0x9F,0x18,0x16,0x0B,0x9E,0x0B,0x0A,0x1D,0x1D,0x15,0x0E,0x0F,0x12,0x0E,0x15,0x0D,0xFF
#define TEXT_MENU_WF 0x9E,0x02,0x9E,0x20,0x11,0x18,0x16,0x19,0x3E,0x1C,0x9E,0x0F,0x18,0x1B,0x1D,0x1B,0x0E,0x1C,0x1C,0xFF
#define TEXT_MENU_JRB 0x9E,0x03,0x9E,0x13,0x18,0x15,0x15,0x22,0x9E,0x1B,0x18,0x10,0x0E,0x1B,0x9E,0x0B,0x0A,0x22,0xFF
#define TEXT_MENU_CCM 0x9E,0x04,0x9E,0x0C,0x18,0x18,0x15,0x6F,0x9E,0x0C,0x18,0x18,0x15,0x9E,0x16,0x18,0x1E,0x17,0x1D,0x0A,0x12,0x17,0xFF
#define TEXT_MENU_BBH 0x9E,0x05,0x9E,0x0B,0x12,0x10,0x9E,0x0B,0x18,0x18,0x3E,0x1C,0x9E,0x11,0x0A,0x1E,0x17,0x1D,0xFF
#define TEXT_MENU_HMC 0x9E,0x06,0x9E,0x11,0x0A,0x23,0x22,0x9E,0x16,0x0A,0x23,0x0E,0x9E,0x0C,0x0A,0x1F,0x0E,0xFF
#define TEXT_MENU_LLL 0x9E,0x07,0x9E,0x15,0x0E,0x1D,0x11,0x0A,0x15,0x9E,0x15,0x0A,0x1F,0x0A,0x9E,0x15,0x0A,0x17,0x0D,0xFF
#define TEXT_MENU_SSL 0x9E,0x08,0x9E,0x1C,0x11,0x12,0x0F,0x1D,0x12,0x17,0x10,0x9E,0x1C,0x0A,0x17,0x0D,0x9E,0x15,0x0A,0x17,0x0D,0xFF
#define TEXT_MENU_DDD 0x9E,0x09,0x9E,0x0D,0x12,0x1B,0x0E,0x6F,0x9E,0x0D,0x12,0x1B,0x0E,0x9E,0x0D,0x18,0x0C,0x14,0x1C,0xFF
#define TEXT_MENU_SL 0x01,0x00,0x9E,0x1C,0x17,0x18,0x20,0x16,0x0A,0x17,0x3E,0x1C,0x9E,0x15,0x0A,0x17,0x0D,0xFF
#define TEXT_MENU_WDW 0x01,0x01,0x9E,0x20,0x0E,0x1D,0x9F,0x0D,0x1B,0x22,0x9E,0x20,0x18,0x1B,0x15,0x0D,0xFF
#define TEXT_MENU_TTM 0x01,0x02,0x9E,0x1D,0x0A,0x15,0x15,0x6F,0x9E,0x1D,0x0A,0x15,0x15,0x9E,0x16,0x18,0x1E,0x17,0x1D,0x0A,0x12,0x17,0xFF
#define TEXT_MENU_THI 0x01,0x03,0x9E,0x1D,0x12,0x17,0x22,0x9F,0x11,0x1E,0x10,0x0E,0x9E,0x12,0x1C,0x15,0x0A,0x17,0x0D,0xFF
#define TEXT_MENU_TTC 0x01,0x04,0x9E,0x1D,0x12,0x0C,0x14,0x9E,0x1D,0x18,0x0C,0x14,0x9E,0x0C,0x15,0x18,0x0C,0x14,0xFF
#define TEXT_MENU_RR 0x01,0x05,0x9E,0x1B,0x0A,0x12,0x17,0x0B,0x18,0x20,0x9E,0x1B,0x12,0x0D,0x0E,0xFF
#define TEXT_MENU_BITDW 0x9E,0x9E,0x9E,0x0B,0x18,0x20,0x1C,0x0E,0x1B,0x9E,0x12,0x17,0x9E,0x1D,0x11,0x0E,0x9E,0x0D,0x0A,0x1B,0x14,0x9E,0x20,0x18,0x1B,0x15,0x0D,0xFF
#define TEXT_MENU_BITFS 0x9E,0x9E,0x9E,0x0B,0x18,0x20,0x1C,0x0E,0x1B,0x9E,0x12,0x17,0x9E,0x1D,0x11,0x0E,0x9E,0x0F,0x12,0x1B,0x0E,0x9E,0x1C,0x0E,0x0A,0xFF
#define TEXT_MENU_BITS 0x9E,0x9E,0x9E,0x0B,0x18,0x20,0x1C,0x0E,0x1B,0x9E,0x12,0x17,0x9E,0x1D,0x11,0x0E,0x9E,0x1C,0x14,0x22,0xFF
#define TEXT_MENU_PSS 0x9E,0x9E,0x9E,0x1D,0x11,0x0E,0x9E,0x19,0x1B,0x12,0x17,0x0C,0x0E,0x1C,0x1C,0x3E,0x1C,0x9E,0x1C,0x0E,0x0C,0x1B,0x0E,0x1D,0x9E,0x1C,0x15,0x12,0x0D,0x0E,0xFF
#define TEXT_MENU_COTMC 0x9E,0x9E,0x9E,0x0C,0x0A,0x1F,0x0E,0x1B,0x17,0x9E,0x18,0x0F,0x9E,0x1D,0x11,0x0E,0x9E,0x16,0x0E,0x1D,0x0A,0x15,0x9E,0x0C,0x0A,0x19,0xFF
#define TEXT_MENU_TOTWC 0x9E,0x9E,0x9E,0x1D,0x18,0x20,0x0E,0x1B,0x9E,0x18,0x0F,0x9E,0x1D,0x11,0x0E,0x9E,0x20,0x12,0x17,0x10,0x9E,0x0C,0x0A,0x19,0xFF
#define TEXT_MENU_VCUTM 0x9E,0x9E,0x9E,0x1F,0x0A,0x17,0x12,0x1C,0x11,0x9E,0x0C,0x0A,0x19,0x9E,0x1E,0x17,0x0D,0x0E,0x1B,0x9E,0x1D,0x11,0x0E,0x9E,0x16,0x18,0x0A,0x1D,0xFF
#define TEXT_MENU_WMOTR 0x9E,0x9E,0x9E,0x20,0x12,0x17,0x10,0x9E,0x16,0x0A,0x1B,0x12,0x18,0x9E,0x18,0x1F,0x0E,0x1B,0x9E,0x1D,0x11,0x0E,0x9E,0x1B,0x0A,0x12,0x17,0x0B,0x18,0x20,0xFF
#define TEXT_MENU_SA 0x9E,0x9E,0x9E,0x1D,0x11,0x0E,0x9E,0x1C,0x0E,0x0C,0x1B,0x0E,0x1D,0x9E,0x0A,0x1A,0x1E,0x0A,0x1B,0x12,0x1E,0x16,0xFF
#define TEXT_MENU_NONE 0xFF
#define TEXT_MENU_STARS 0x9E,0x9E,0x9E,0x0C,0x0A,0x1C,0x1D,0x15,0x0E,0x9E,0x1C,0x0E,0x0C,0x1B,0x0E,0x1D,0x9E,0x1C,0x1D,0x0A,0x1B,0x1C,0xFF

#define TEXT_MENU_BOB_FR 0x9E,0x01,0x9E,0x0B,0x0A,0x1D,0x0A,0x12,0x15,0x15,0x0E,0x9E,0x0D,0x0E,0x9E,0x0B,0x18,0x0B,0x9F,0x18,0x16,0x0B,0xFF
#define TEXT_MENU_WF_FR 0x9E,0x02,0x9E,0x0F,0x18,0x1B,0x1D,0x0E,0x1B,0x0E,0x1C,0x1C,0x0E,0x9E,0x0D,0x0E,0x9E,0x20,0x11,0x18,0x16,0x19,0xFF
#define TEXT_MENU_JRB_FR 0x9E,0x03,0x9E,0x0B,0x0A,0x12,0x0E,0x9E,0x0D,0x0E,0x1C,0x9E,0x19,0x12,0x1B,0x0A,0x1D,0x0E,0x1C,0xFF
#define TEXT_MENU_CCM_FR 0x9E,0x04,0x9E,0x16,0x18,0x17,0x1D,0x0A,0x10,0x17,0x0E,0x9E,0x10,0x15,0x0A,0x9F,0x10,0x15,0x0A,0xFF
#define TEXT_MENU_BBH_FR 0x9E,0x05,0x9E,0x16,0x0A,0x17,0x18,0x12,0x1B,0x9E,0x0D,0x0E,0x9E,0x0B,0x12,0x10,0x9E,0x0B,0x18,0x18,0xFF
#define TEXT_MENU_HMC_FR 0x9E,0x06,0x9E,0x0C,0x0A,0x1F,0x0E,0x1B,0x17,0x0E,0x9E,0x0B,0x1B,0x1E,0x16,0x0E,0x1E,0x1C,0x0E,0xFF
#define TEXT_MENU_LLL_FR 0x9E,0x07,0x9E,0x15,0x0A,0x1F,0x0E,0x1C,0x9E,0x0F,0x0A,0x1D,0x0A,0x15,0x0E,0x1C,0xFF
#define TEXT_MENU_SSL_FR 0x9E,0x08,0x9E,0x1C,0x0A,0x0B,0x15,0x0E,0x1C,0x9E,0x1D,0x1B,0x18,0x19,0x9E,0x16,0x18,0x1E,0x1F,0x0A,0x17,0x1D,0x1C,0xFF
#define TEXT_MENU_DDD_FR 0x9E,0x09,0x9E,0x0A,0x0F,0x0F,0x1B,0x0E,0x1E,0x21,0x9E,0x0B,0x0A,0x1C,0x1C,0x12,0x17,0xFF
#define TEXT_MENU_SL_FR 0x01,0x00,0x9E,0x0C,0x11,0x0E,0x23,0x9E,0x15,0x0E,0x9E,0x1B,0x18,0x12,0x9E,0x0D,0x0E,0x1C,0x9E,0x17,0x0E,0x12,0x10,0x0E,0x1C,0xFF
#define TEXT_MENU_WDW_FR 0x01,0x01,0x9E,0x16,0x18,0x17,0x0D,0x0E,0x9E,0x1D,0x1B,0x0E,0x16,0x19,0x0E,0x9F,0x1C,0x0E,0x0C,0x11,0x0E,0xFF
#define TEXT_MENU_TTM_FR 0x01,0x02,0x9E,0x1D,0x1B,0x18,0x19,0x9E,0x11,0x0A,0x1E,0x1D,0x0E,0x9E,0x16,0x18,0x17,0x1D,0x0A,0x10,0x17,0x0E,0xFF
#define TEXT_MENU_THI_FR 0x01,0x03,0x9E,0x12,0x15,0x0E,0x9E,0x10,0x1B,0x0A,0x17,0x0D,0x1C,0x9F,0x19,0x0E,0x1D,0x12,0x1D,0x1C,0xFF
#define TEXT_MENU_TTC_FR 0x01,0x04,0x9E,0x11,0x18,0x1B,0x15,0x18,0x10,0x0E,0x9E,0x1D,0x12,0x0C,0x9F,0x1D,0x0A,0x0C,0xFF
#define TEXT_MENU_RR_FR 0x01,0x05,0x9E,0x0C,0x18,0x1E,0x1B,0x1C,0x0E,0x9E,0x0A,0x1B,0x0C,0x9F,0x0E,0x17,0x9F,0x0C,0x12,0x0E,0x15,0xFF
#define TEXT_MENU_BITDW_FR 0x9E,0x9E,0x9E,0x0B,0x18,0x20,0x1C,0x0E,0x1B,0x9E,0x0D,0x0E,0x1C,0x9E,0x1D,0x0E,0x17,0x0E,0x0B,0x1B,0x0E,0x1C,0xFF
#define TEXT_MENU_BITFS_FR 0x9E,0x9E,0x9E,0x0B,0x18,0x20,0x1C,0x0E,0x1B,0x9E,0x0D,0x0E,0x1C,0x9E,0x15,0x0A,0x1F,0x0E,0x1C,0xFF
#define TEXT_MENU_BITS_FR 0x9E,0x9E,0x9E,0x0B,0x18,0x20,0x1C,0x0E,0x1B,0x9E,0x0D,0x0E,0x1C,0x9E,0x0C,0x12,0x0E,0x1E,0x21,0xFF
#define TEXT_MENU_PSS_FR 0x9E,0x9E,0x9E,0x10,0x15,0x12,0x1C,0x1C,0x0A,0x0D,0x0E,0x9E,0x0D,0x0E,0x9E,0x15,0x0A,0x9E,0x19,0x1B,0x12,0x17,0x0C,0x0E,0x1C,0x1C,0x0E,0xFF
#define TEXT_MENU_COTMC_FR 0x9E,0x9E,0x9E,0x16,0x12,0x17,0x0E,0x9E,0x0D,0x0E,0x1C,0x9E,0x0C,0x0A,0x1C,0x1A,0x1E,0x0E,0x1D,0x1D,0x0E,0x1C,0x9F,0x16,0x0E,0x1D,0x0A,0x15,0xFF
#define TEXT_MENU_TOTWC_FR 0x9E,0x9E,0x9E,0x12,0x17,0x1D,0x0E,0x1B,0x1B,0x1E,0x19,0x1D,0x0E,0x1E,0x1B,0x9E,0x0D,0x0E,0x9E,0x15,0x0A,0x9E,0x1D,0x18,0x1E,0x1B,0x9E,0x0A,0x12,0x15,0x0E,0x0E,0xFF
#define TEXT_MENU_VCUTM_FR 0x9E,0x9E,0x9E,0x12,0x17,0x1F,0x12,0x1C,0x12,0x0B,0x15,0x0E,0x9E,0x1C,0x18,0x1E,0x1C,0x9E,0x15,0x0E,0x1C,0x9E,0x0D,0x18,0x1E,0x1F,0x0E,0x1C,0xFF
#define TEXT_MENU_WMOTR_FR 0x9E,0x9E,0x9E,0x0A,0x1E,0x9F,0x0D,0x0E,0x15,0x0A,0x9E,0x0D,0x0E,0x9E,0x15,0x3E,0x0A,0x1B,0x0C,0x9F,0x0E,0x17,0x9F,0x0C,0x12,0x0E,0x15,0xFF
#define TEXT_MENU_SA_FR 0x9E,0x9E,0x9E,0x0A,0x1A,0x1E,0x0A,0x1B,0x12,0x1E,0x16,0x9E,0x1C,0x0E,0x0C,0x1B,0x0E,0x1D,0xFF
#define TEXT_MENU_NONE_FR 0xFF
#define TEXT_MENU_STARS_FR 0x9E,0x9E,0x9E,0x0E,0x1D,0x18,0x12,0x15,0x0E,0x1C,0x9E,0x1C,0x0E,0x0C,0x1B,0x0E,0x1D,0x0E,0x1C,0xFF

#define TEXT_MENU_BOB_DE 0x9E,0x01,0x9E,0x0B,0x18,0x0B,0x9F,0x18,0x16,0x0B,0x1C,0x9E,0x0B,0x18,0x16,0x0B,0x0E,0x17,0x0B,0x0E,0x1B,0x10,0xFF
#define TEXT_MENU_WF_DE 0x9E,0x02,0x9E,0x20,0x1E,0x16,0x16,0x19,0x1C,0x9E,0x20,0x1E,0x0C,0x11,0x1D,0x20,0x0A,0x15,0x15,0xFF
#define TEXT_MENU_JRB_DE 0x9E,0x03,0x9E,0x19,0x12,0x1B,0x0A,0x1D,0x0E,0x17,0x0B,0x1E,0x0C,0x11,0x1D,0x9E,0x19,0x0A,0x17,0x12,0x14,0xFF
#define TEXT_MENU_CCM_DE 0x9E,0x04,0x9E,0x0B,0x12,0x0B,0x0B,0x0E,0x1B,0x0B,0x0E,0x1B,0x10,0x9E,0x0B,0x18,0x0B,0xFF
#define TEXT_MENU_BBH_DE 0x9E,0x05,0x9E,0x0B,0x12,0x10,0x9E,0x0B,0x18,0x18,0x1C,0x9E,0x0B,0x1E,0x1B,0x10,0xFF
#define TEXT_MENU_HMC_DE 0x9E,0x06,0x9E,0x10,0x1B,0x86,0x17,0x0E,0x9E,0x10,0x12,0x0F,0x1D,0x10,0x1B,0x18,0x1D,0x1D,0x0E,0xFF
#define TEXT_MENU_LLL_DE 0x9E,0x07,0x9E,0x15,0x0A,0x1F,0x0A,0x9E,0x15,0x0A,0x10,0x1E,0x17,0x0E,0xFF
#define TEXT_MENU_SSL_DE 0x9E,0x08,0x9E,0x20,0x18,0x0B,0x12,0x20,0x0A,0x0B,0x0A,0x9E,0x20,0x86,0x1C,0x1D,0x0E,0xFF
#define TEXT_MENU_DDD_DE 0x9E,0x09,0x9E,0x20,0x12,0x15,0x0D,0x0E,0x9E,0x20,0x0A,0x1C,0x1C,0x0E,0x1B,0x20,0x0E,0x1B,0x0F,0x1D,0xFF
#define TEXT_MENU_SL_DE 0x01,0x00,0x9E,0x0F,0x1B,0x18,0x1C,0x1D,0x0B,0x0E,0x1E,0x15,0x0E,0x17,0x9E,0x0F,0x1B,0x1E,0x1C,0x1D,0xFF
#define TEXT_MENU_WDW_DE 0x01,0x01,0x9E,0x0A,0x1D,0x15,0x0A,0x17,0x1D,0x12,0x1C,0x9E,0x0A,0x1A,0x1E,0x0A,0x1B,0x12,0x0A,0xFF
#define TEXT_MENU_TTM_DE 0x01,0x02,0x9E,0x0F,0x15,0x12,0x0E,0x10,0x0E,0x17,0x19,0x12,0x15,0x23,0x9E,0x0F,0x12,0x0A,0x1C,0x14,0x18,0xFF
#define TEXT_MENU_THI_DE 0x01,0x03,0x9E,0x10,0x1E,0x15,0x15,0x12,0x1F,0x0E,0x1B,0x9E,0x10,0x1E,0x16,0x0B,0x0A,0xFF
#define TEXT_MENU_TTC_DE 0x01,0x04,0x9E,0x1D,0x12,0x0C,0x14,0x9E,0x1D,0x0A,0x0C,0x14,0x9E,0x1D,0x1B,0x0A,0x1E,0x16,0x0A,0xFF
#define TEXT_MENU_RR_DE 0x01,0x05,0x9E,0x1B,0x0E,0x10,0x0E,0x17,0x0B,0x18,0x10,0x0E,0x17,0x9E,0x1B,0x0A,0x1C,0x0E,0x1B,0x0E,0x12,0xFF
#define TEXT_MENU_BITDW_DE 0x9E,0x9E,0x9E,0x0B,0x18,0x20,0x1C,0x0E,0x1B,0x1C,0x9E,0x1C,0x0C,0x11,0x0A,0x1D,0x1D,0x0E,0x17,0x20,0x0E,0x15,0x1D,0xFF
#define TEXT_MENU_BITFS_DE 0x9E,0x9E,0x9E,0x0B,0x18,0x20,0x1C,0x0E,0x1B,0x1C,0x9E,0x15,0x0A,0x1F,0x0A,0x1C,0x0E,0x0E,0xFF
#define TEXT_MENU_BITS_DE 0x9E,0x9E,0x9E,0x0B,0x18,0x20,0x1C,0x0E,0x1B,0x1C,0x9E,0x15,0x1E,0x0F,0x1D,0x1C,0x0C,0x11,0x15,0x18,0x1C,0x1C,0xFF
#define TEXT_MENU_PSS_DE 0x9E,0x9E,0x9E,0x1D,0x18,0x0A,0x0D,0x1C,0x1D,0x18,0x18,0x15,0x1C,0x9E,0x1B,0x1E,0x1D,0x1C,0x0C,0x11,0x0B,0x0A,0x11,0x17,0xFF
#define TEXT_MENU_COTMC_DE 0x9E,0x9E,0x9E,0x10,0x1B,0x86,0x17,0x0E,0x1B,0x9E,0x1C,0x0C,0x11,0x0A,0x15,0x1D,0x0E,0x1B,0x19,0x0A,0x15,0x0A,0x1C,0x1D,0xFF
#define TEXT_MENU_TOTWC_DE 0x9E,0x9E,0x9E,0x1B,0x18,0x1D,0x0E,0x1B,0x9E,0x1C,0x0C,0x11,0x0A,0x15,0x1D,0x0E,0x1B,0x19,0x0A,0x15,0x0A,0x1C,0x1D,0xFF
#define TEXT_MENU_VCUTM_DE 0x9E,0x9E,0x9E,0x0B,0x15,0x0A,0x1E,0x0E,0x1B,0x9E,0x1C,0x0C,0x11,0x0A,0x15,0x1D,0x0E,0x1B,0x19,0x0A,0x15,0x0A,0x1C,0x1D,0xFF
#define TEXT_MENU_WMOTR_DE 0x9E,0x9E,0x9E,0x1B,0x0E,0x10,0x0E,0x17,0x0B,0x18,0x10,0x0E,0x17,0x9E,0x0F,0x0E,0x1E,0x0E,0x1B,0x20,0x0E,0x1B,0x14,0xFF
#define TEXT_MENU_SA_DE 0x9E,0x9E,0x9E,0x1F,0x0E,0x1B,0x1C,0x1D,0x0E,0x0C,0x14,0x1D,0x0E,0x1C,0x9E,0x0A,0x1A,0x1E,0x0A,0x1B,0x12,0x1E,0x16,0xFF
#define TEXT_MENU_NONE_DE 0xFF
#define TEXT_MENU_STARS_DE 0x9E,0x9E,0x9E,0x10,0x0E,0x11,0x0E,0x12,0x16,0x0E,0x9E,0x1C,0x1D,0x0E,0x1B,0x17,0x0E,0xFF
#endif // VERSION_EU

#endif // TEXT_STRINGS_H
