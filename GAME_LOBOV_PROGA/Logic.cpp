#include "Logic.h"
#include <cstdlib>
#include <fstream>

unsigned char keyoard_key;
bool flag_selection = true;
bool flag_attack_water = false;
bool flag_attack_fire = false;
bool flag_attack_earth = false;
bool demon_rand_card = false;
int score_attack_fire = 1;
int score_attack_earth = 1;
int score_attack_water = 1;
int score_attack_demon = 1;
bool demon_damaged = false;
bool hero_damaged = false;
bool read_flag = true;
double alpha_window = 0;

//clock_t start_exit;
clock_t time_now;

Figure hero_demon = { {0,0},false,50,rand() % 15 + 10,0 };
Figure hero_water = { {0,0},false,30,rand() % 20 + 2,0 };
Figure hero_fire = { {0,0},false,35,rand() % 3 + 3,0 };
Figure hero_earth = { {0,0},false,45,rand() % 15 + 1,0 };

Figure ice_decorate = { {0,0},false,0,0 };
Figure flash_decorate = { {0,0},false,0,0 };
Figure stone_decorate = { {0,0},false,0,0 };

Cards card = { {{0,0},0,false},{{0,0},0,false},{{0,0},0,false},{{0,0},0,false},{{0,0},0,false},{{0,0},0,false} };

Position bar_hero = { 0,0 };
Position bar_demon = { 0,0 };

void processKeys(unsigned char key, int x, int y)
{
    if (key == '1' && flag_selection == true)
    {
        keyoard_key = '1';
        flag_selection = false;
    }
    if (key == '2' && flag_selection == true)
    {
        keyoard_key = '2';
        flag_selection = false;
    }
    if (key == '3' && flag_selection == true)
    {
        keyoard_key = '3';
        flag_selection = false;
    }
    if (key == 'a' && (flag_attack_water == false && flag_attack_fire == false && flag_attack_earth == false) && flag_selection == false && !((hero_earth.health < 0 || hero_fire.health < 0 || hero_water.health < 0 || hero_demon.health < 0) && (bar_hero.x >= 550 || bar_demon.x >= 550)))
    {
        if (keyoard_key == '1')
        {
            flag_attack_water = true;
            hero_water.attack = true;
        }
        if (keyoard_key == '2')
        {
            flag_attack_fire = true;
            hero_fire.attack = true;
        }
        if (keyoard_key == '3')
        {
            flag_attack_earth = true;
            hero_earth.attack = true;
        }
    }

    //раздел с картами

    //карты героя
    if (key == 'q' && card.block_attack_hero.used == false && flag_selection == false)
    {
        card.block_attack_hero.used = true;
        score_attack_water = 0;
        score_attack_fire = 0;
        score_attack_earth = 0;
    }
    if (key == 'w' && card.random_damage_hero.used == false && flag_selection == false)
    {
        card.random_damage_hero.used = true;
        hero_water.daqmage += 0.01 * (rand() % 20) * hero_water.daqmage;
        hero_fire.daqmage += 0.01 * (rand() % 15) * hero_fire.daqmage;
        hero_earth.daqmage += 0.01 * (rand() % 10) * hero_earth.daqmage;
    }
    if (key == 'e' && card.health_points_hero.used == false && flag_selection == false)
    {
        card.health_points_hero.used = true;
        hero_water.health += 0.01*(rand() % 40)*hero_water.health;
        hero_fire.health += 0.01 * (rand() % 35) * hero_fire.health;
        hero_earth.health += 0.01 * (rand() % 30) * hero_earth.health;
    }

    //карты демона
    if (demon_rand_card == true)
    {
        int demon_choose_card = rand()% 15;

        if (demon_choose_card >= 0 && demon_choose_card <= 2 && card.block_attack_demon.used == false)
        {
            card.block_attack_demon.used = true;
            score_attack_demon = 0;
        }
        if (demon_choose_card >= 3 && demon_choose_card <= 5 && card.rand_damage_demon.used == false)
        {
            card.rand_damage_demon.used = true;
            hero_demon.daqmage += 0.01*(rand() % 35)*hero_demon.daqmage;
        }
        if (demon_choose_card >= 0 && demon_choose_card <= 15 && card.health_points_demon.used == false)
        {
            card.health_points_demon.used = true;
            hero_demon.health += 0.01 * (rand() % 60) * hero_demon.health;
        }

        demon_rand_card = false;
    }
    glutPostRedisplay();
}

//нанесение урона
void damage_func(Figure& hero_demon,Figure& hero_water, Figure& hero_fire, Figure& hero_earth)
{
    //атака демона
    if (demon_damaged == true)
    {
        if (keyoard_key == '1')
        {
            hero_water.health -= hero_demon.daqmage;
            demon_damaged = false;
        }
        if (keyoard_key == '2')
        {
            hero_fire.health -= hero_demon.daqmage;
            demon_damaged = false;
        }
        if (keyoard_key == '3')
        {
            hero_earth.health -= hero_demon.daqmage;
            demon_damaged = false;
        }
    }
    //атака героев
    if (hero_damaged == true)
    {
        if (keyoard_key == '1')
        {
            hero_demon.health -= hero_water.daqmage;
            hero_damaged = false;
        }
        if (keyoard_key == '2')
        {
            hero_demon.health -= hero_fire.daqmage;
            hero_damaged = false;
        }
        if (keyoard_key == '3')
        {
            hero_demon.health -= hero_earth.daqmage;
            hero_damaged = false;
        }
    }
    //закрытие программы
    if ((hero_earth.health < 0 || hero_fire.health < 0 || hero_water.health < 0 || hero_demon.health < 0) && (bar_hero.x >= 520 || bar_demon.x >= 520))
    {
        static clock_t start_exit = clock();

        if (alpha_window >= 10)
        {
            if (clock() - start_exit >= 8000)
            {
                glutDestroyWindow(glutGetWindow()); // Закрытие окна OpenGL
                exit(0); // Выход из программы
            }
        }
        else
            alpha_window += 0.03;
    }
}