
#ifndef DEF_DEFS
#define DEF_DEFS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#ifdef _WIN32
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#endif

#include "coordonnees.h"
#include "terrain.h"
#include "simulation.h"
#include "simulation_ncurses.h"

// Taille de la fen�tre : 800x480 pixels
#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 1000

#endif
