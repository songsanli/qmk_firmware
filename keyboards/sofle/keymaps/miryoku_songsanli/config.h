// boilerplate code to overwrite settings set by previous config.h
#pragma once

#define TAPPING_FORCE_HOLD
#ifdef TAPPING_TERM
  // Then to override a setting from the previous config.h file you must #undef and then #define the setting again.
  #undef TAPPING_TERM
  #define TAPPING_TERM 200
#endif

#define IGNORE_MOD_TAP_INTERRUPT

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
// #define MASTER_LEFT
#define SPLIT_HAND_PIN B7

#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 4