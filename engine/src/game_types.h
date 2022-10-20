#pragma once

#include "core/application.h"

/**
 * Represents the basic game state.
 * Called for creation by the app.
*/
typedef struct game {
    application_config app_config;

    // Function ptr to game's initialize function
    b8 (*initialize)(struct game* game_inst);

    // Function ptr to game's update function
    b8 (*update)(struct game* game_inst, f32 delta_time);

    // Function ptr to game's render function
    b8 (*render)(struct game* game_inst, f32 delta_time);

    // Function ptr to handle resizes, if applicable
    void (*on_resize)(struct game* game_inst, u32 width, u32 height);

    // Game-specific game state. Created and managed by the game
    void* state;
} game;
