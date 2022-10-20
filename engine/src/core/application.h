#pragma once

#include "defines.h"

struct game;

typedef struct application_config {
    // Window's starting x pos, if applicable
    i16 start_pos_x;

    // Window's starting y pos, if applicable
    i16 start_pos_y;

    // Window's starting width, if applicable
    i16 start_width;

    // Window's starting height, if applicable
    i16 start_height;

    // App name used in windowing, if applicable
    char* name;
} application_config;

KAPI b8 application_create(struct game* game_inst);

KAPI b8 application_run();
