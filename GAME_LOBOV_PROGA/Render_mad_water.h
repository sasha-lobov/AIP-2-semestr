#ifndef RENDER_MAD_WATER_H
#define RENDER_MAD_WATER_H

#include <glut.h>
#include "Logic.h"

void render_for_water(Figure& hero_water);
void render_ice_decorate(Figure& hero_water);
void animate_for_water(Figure& hero_water);
void light_crystalls(GLfloat& lightning_crystalls);
#endif