#include "heath_bars.h"

bool max_bar_flag = true;
double bar_water_max=hero_water.health;
double bar_fire_max=hero_fire.health;
double bar_earth_max=hero_earth.health;
double bar_demon_max;

void animate_health_bars(Position& bar1, Position& bar2)
{
    if (max_bar_flag == true && read_flag == false)
    {
        bar_water_max = hero_water.health;
        bar_fire_max = hero_fire.health;
        bar_earth_max = hero_earth.health;
        bar_demon_max = hero_demon.health;
        max_bar_flag = false;
    }
        damage_func(hero_demon, hero_water, hero_fire, hero_earth);

        if (hero_demon.health <= bar_demon_max)
        {
            if (bar_demon.x <= 550 / bar_demon_max * (bar_demon_max - hero_demon.health))
                bar_demon.x += 3;
            if (bar_demon.x >= 550 / bar_demon_max * (bar_demon_max - hero_demon.health))
                bar_demon.x -= 3;
            bar_demon.y = 0;
            damage_func(hero_demon, hero_water, hero_fire, hero_earth);
        }
        if (hero_demon.health > bar_demon_max)
        {
            bar_demon.x = 0;
            if (bar_demon.y <= 550 / bar_demon_max * (hero_demon.health - bar_demon_max))
                bar_demon.y += 3;
            if (bar_demon.y > 550 / bar_demon_max * (hero_demon.health - bar_demon_max))
                bar_demon.y -= 3;
        }

        damage_func(hero_demon, hero_water, hero_fire, hero_earth);

        if (keyoard_key == '1')
        {
            if (hero_water.health <= bar_water_max)
            {
                if (bar_hero.x <= 550 / bar_water_max * (bar_water_max - hero_water.health))
                    bar_hero.x += 3;
                if (bar_hero.x > 550 / bar_water_max * (bar_water_max - hero_water.health))
                    bar_hero.x -= 3;
                bar_hero.y = 0;
                damage_func(hero_demon, hero_water, hero_fire, hero_earth);
            }
            if (hero_water.health > bar_water_max)
            {
                bar_hero.x = 0;
                if (bar_hero.y <= 550 / bar_water_max * (hero_water.health - bar_water_max))
                    bar_hero.y += 3;
                if (bar_hero.y > 550 / bar_water_max * (hero_water.health - bar_water_max))
                    bar_hero.y -= 3;
            }
        }

        damage_func(hero_demon, hero_water, hero_fire, hero_earth);

        if (keyoard_key == '2')
        {
            if (hero_fire.health <= bar_fire_max)
            {
                if (bar_hero.x <= 550 / bar_fire_max * (bar_fire_max - hero_fire.health))
                    bar_hero.x += 3;
                if (bar_hero.x > 550 / bar_fire_max * (bar_fire_max - hero_fire.health))
                    bar_hero.x -= 3;
                bar_hero.y = 0;
                damage_func(hero_demon, hero_water, hero_fire, hero_earth);
            }
            else
            {
                bar_hero.x = 0;
                if (bar_hero.y <= 550 / bar_fire_max * (hero_fire.health - bar_fire_max))
                    bar_hero.y += 3;
                if (bar_hero.y > 550 / bar_fire_max * (hero_fire.health - bar_fire_max))
                    bar_hero.y -= 3;

            }
        }

        damage_func(hero_demon, hero_water, hero_fire, hero_earth);

        if (keyoard_key == '3')
        {
            if (hero_earth.health <= bar_earth_max)
            {
                if (bar_hero.x <= 550 / bar_earth_max * (bar_earth_max - hero_earth.health))
                    bar_hero.x += 3;
                if (bar_hero.x > 550 / bar_earth_max * (bar_earth_max - hero_earth.health))
                    bar_hero.x -= 3;
                bar_hero.y = 0;
                damage_func(hero_demon, hero_water, hero_fire, hero_earth);
            }
            else
            {
                bar_hero.x = 0;
                if (bar_hero.y <= 550 / bar_earth_max * (hero_earth.health - bar_earth_max))
                    bar_hero.y += 3;
                if (bar_hero.y > 550 / bar_earth_max * (hero_earth.health - bar_earth_max))
                    bar_hero.y -= 3;
            }
        }

        damage_func(hero_demon, hero_water, hero_fire, hero_earth);
}

void health_bars(Position& bar1, Position& bar2)
{
    animate_health_bars(bar_hero, bar_demon);

    //шкала здоровья ГЕРОЯ
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 20);
    glVertex2f(560, 20);
    glVertex2f(560, 100);
    glVertex2f(0, 100);

    glColor3ub(150, 150, 150);
    glVertex2f(0, 30);
    glVertex2f(550, 30);
    glVertex2f(550, 90);
    glVertex2f(0, 90);
    glEnd();

    //красная полоска
    glPushMatrix();
    glTranslatef(-bar_hero.x, 0, 0);
    glBegin(GL_QUADS);
    glColor3ub(230, 0, 0);
    glVertex2f(0, 30);
    glVertex2f(550, 30);
    glVertex2f(550, 90);
    glVertex2f(0, 90);
    glEnd();
    glPopMatrix();

    //золотая полоска
    glPushMatrix();
    glTranslatef(-550, 0, 0);
    glTranslatef(bar_hero.y, 0, 0);
    glBegin(GL_QUADS);
    glColor3ub(255, 242, 0);
    glVertex2f(0, 30);
    glVertex2f(550, 30);
    glVertex2f(550, 90);
    glVertex2f(0, 90);
    glEnd();
    glPopMatrix();

    //шкала здоровья ДЕМОНА
    glPushMatrix();
    glTranslatef(1040, 0, 0);
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 20);
    glVertex2f(560, 20);
    glVertex2f(560, 100);
    glVertex2f(0, 100);

    glColor3ub(150, 150, 150);
    glVertex2f(10, 30);
    glVertex2f(560, 30);
    glVertex2f(560, 90);
    glVertex2f(10, 90);
    glEnd();

    //красная полоска
    glPushMatrix();
    glTranslatef(bar_demon.x, 0, 0);
    glBegin(GL_QUADS);
    glColor3ub(230, 0, 0);
    glVertex2f(10, 30);
    glVertex2f(560, 30);
    glVertex2f(560, 90);
    glVertex2f(10, 90);
    glEnd();
    glPopMatrix();

    //золотая полоска
    glPushMatrix();
    glTranslatef(560, 0, 0);
    glTranslatef(-bar_demon.y, 0, 0);
    glBegin(GL_QUADS);
    glColor3ub(255, 242, 0);
    glVertex2f(0, 30);
    glVertex2f(550, 30);
    glVertex2f(550, 90);
    glVertex2f(0, 90);
    glEnd();
    glPopMatrix();
    glPopMatrix();
}