#ifndef LOGIC_H
#define LOGIC_H

#include <glut.h>
#include <ctime>

extern unsigned char keyoard_key;
extern bool flag_selection;
extern bool flag_attack_water;
extern bool flag_attack_fire;
extern bool flag_attack_earth;
extern bool demon_rand_card;
extern int score_attack_fire;
extern int score_attack_earth;
extern int score_attack_water;
extern int score_attack_demon;
extern bool demon_damaged;
extern bool hero_damaged;
extern bool read_flag;
extern double alpha_window;
//extern clock_t start_exit;

struct Position
{
    GLfloat x, y;
};
struct Figure
{
    Position pos; bool attack;
    GLfloat health;
    GLfloat daqmage;
    GLfloat timer;
};
struct Parametrs
{
    Position pos;
    GLfloat blend;
    bool used;
};
struct Cards
{
    Parametrs random_damage_hero;
    Parametrs health_points_hero;
    Parametrs block_attack_hero;
    Parametrs rand_damage_demon;
    Parametrs health_points_demon;
    Parametrs block_attack_demon;
};

extern Figure hero_demon;
extern Figure hero_water;
extern Figure hero_fire;
extern Figure hero_earth;

extern Figure ice_decorate;
extern Figure flash_decorate;
extern Figure stone_decorate;

extern Cards card;

extern Position bar_hero;
extern Position bar_demon;

//extern bool read_flag;

void processKeys(unsigned char key, int x, int y);
void damage_func(Figure& hero_demon, Figure& hero_water, Figure& hero_fire, Figure& hero_earth);

#endif

