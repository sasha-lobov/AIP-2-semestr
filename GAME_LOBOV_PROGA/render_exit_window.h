#ifndef RENDER_EXIT_WINDOW
#define RENDER_EXIT_WINDOW

#include <glut.h>
#include "Render_mad_water.h"
#include "Render_mag_earth.h"
#include "Render_mag_fire.h"

void render_begin_window(void);
void render_died(double& alpha_window);
void render_win(double& alpha_window);
void render_exit_window(double& alpha_window);

#endif
