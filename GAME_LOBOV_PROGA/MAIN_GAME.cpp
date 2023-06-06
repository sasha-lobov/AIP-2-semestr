//карточная рпг игра Лобова Александра Витальевича группа УТС/б-22-1-о

#include <glut.h>
#include <ctime>
#include <cmath>
#include <fstream>
#include <string>
#include <iostream>
#include "Logic.h"
#include "animate.h"
#include "cards.h"
#include "heath_bars.h"
#include "Render_demon.h"
#include "Render_fon.h"
#include "Render_mad_water.h"
#include "Render_mag_earth.h"
#include "Render_mag_fire.h"
#include "render_exit_window.h"

void render_scene(void);
void read_params(Figure& hero_demon, Figure& hero_water, Figure& hero_fire, Figure& hero_earth, bool& read_flag);

const int WIDTH = 1600, HEIGHT = 900;
bool flag_window_win = true;
bool flag_window_died = true;
std::string line;
int line_score = 1;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
    srand(time(NULL));
	read_params(hero_demon,hero_water, hero_fire, hero_earth, read_flag);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("Game");
	glutDisplayFunc(render_scene);
	glutKeyboardFunc(processKeys);
	glutTimerFunc(25, update_display, 0);
	glClearColor(65.0f / 255.0f, 79.0f / 255.0f, 90.0f / 255.0f, 1.0f);
	glutMainLoop();

	return 0;
}

void render_scene(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0f, 1600, 900, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	if (!(keyoard_key == '1' || keyoard_key == '2' || keyoard_key == '3'))
		render_begin_window();
	else
	{
		render_fon();
		if (keyoard_key == '1')
		{
			render_demon(hero_demon);
			render_for_water(hero_water);
			render_cards(card);
			health_bars(bar_hero, bar_demon);
		}
		if (keyoard_key == '2')
		{
			render_demon(hero_demon);
			render_for_fire(hero_fire);
			render_cards(card);
			health_bars(bar_hero, bar_demon);
		}
		if (keyoard_key == '3')
		{
			render_demon(hero_demon);
			render_for_earth(hero_earth);
			render_cards(card);
			health_bars(bar_hero, bar_demon);
		}
		render_exit_window(alpha_window);
		if (hero_demon.health <= 0 && flag_window_win == true)
		{
			render_win(alpha_window);
			flag_window_died = false;
		}
		if ((hero_water.health <= 0 || hero_fire.health <= 0 || hero_earth.health <= 0) && flag_window_died == true)
		{
			render_died(alpha_window);
			flag_window_win = false;
		}
	}
	glutSwapBuffers();
}

void read_params(Figure& hero_demon,Figure& hero_water,Figure& hero_fire,Figure& hero_earth, bool& read_flag)
{
	std::fstream file_in("Params.txt", std::ios::in);

	if (file_in.is_open() && read_flag == true)
	{
		std::getline(file_in, line);
		std::cout << line << '\n';
		file_in >> hero_demon.health >> hero_water.health >> hero_fire.health >> hero_earth.health;
		std::cout << hero_demon.health << " " << hero_water.health << " " << hero_fire.health << " " << hero_earth.health << '\n';
		std::getline(file_in, line);
		std::getline(file_in, line);
		std::cout << line << '\n';
		file_in >> hero_demon.daqmage >> hero_water.daqmage >> hero_fire.daqmage >> hero_earth.daqmage;
		std::cout << hero_demon.daqmage << " " << hero_water.daqmage << " " << hero_fire.daqmage << " " << hero_earth.daqmage;

		read_flag = false;
	}
	file_in.close();
}

