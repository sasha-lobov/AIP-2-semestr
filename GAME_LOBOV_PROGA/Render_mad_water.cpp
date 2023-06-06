#include "Render_mad_water.h"
#include <cmath>

bool flag_static_pos_water = false;
bool flag_dynamic_pos_water = true;
GLfloat lightning_crystalls = 0.0;

void light_crystalls(GLfloat& lightning_crystalls)
{
    if (hero_water.pos.x > 0)
        lightning_crystalls += 0.02;
    else if (lightning_crystalls > 0)
        lightning_crystalls -= 0.3;
}

void animate_for_water(Figure& hero_water)
{
    //анимация персонажа
    if (hero_water.attack == false)
    {
        if (flag_static_pos_water == true)
        {
            hero_water.pos.y += 2;
            if (hero_water.pos.y == 32)
            {
                flag_static_pos_water = false;
            }
        }
        if (flag_static_pos_water == false)
        {
            hero_water.pos.y -= 2;
            if (hero_water.pos.y <= -2)
            {
                flag_static_pos_water = true;
            }
        }
    }
    if (hero_water.attack == true)
    {
        if (flag_dynamic_pos_water == true)
        {
            hero_water.pos.x += 60;
            if (hero_water.pos.x >= 1000)
            {
                flag_dynamic_pos_water = false;
            }
        }
        else
        {
            if (ice_decorate.health < 1)
                ice_decorate.health += 0.05;
            else
            {
                hero_water.pos.x -= 40;

                if (hero_water.pos.x < 50)
                {
                    hero_water.pos.x = 0;
                    ice_decorate.health = 0;
                    flag_dynamic_pos_water = true;
                    if (score_attack_water >= 1)
                    {
                        hero_water.attack = false;
                    }
                    score_attack_water++;
                    hero_damaged = true;
                    damage_func(hero_demon, hero_water, hero_fire, hero_earth);
                }
            }
        }

    }
}

void render_for_water(Figure& hero_water)
{
    animate_for_water(hero_water);

    //отрисовка персонажа
    glPushMatrix();
    glTranslatef(0, 70, 0);
    glTranslatef(0, hero_water.pos.y, 0);
    // туловище
    glColor3ub(1, 20, 38);
    glBegin(GL_QUADS);

    glVertex2f(191, 205);
    glVertex2f(217, 205);
    glVertex2f(245, 220);
    glVertex2f(160, 220);

    glVertex2f(245, 220);
    glVertex2f(160, 220);
    glVertex2f(165, 294);
    glVertex2f(240, 294);
    glEnd();

    glColor3ub(77, 101, 240);
    glBegin(GL_TRIANGLES);

    glVertex2f(218, 386);
    glVertex2f(242, 475);
    glVertex2f(257, 411);

    glVertex2f(178, 386);
    glVertex2f(166, 475);
    glVertex2f(142, 411);
    glEnd();

    glColor3ub(1, 20, 38);
    glBegin(GL_QUADS);

    glVertex2f(238, 292);
    glVertex2f(322, 379);
    glVertex2f(305, 403);
    glVertex2f(260, 379);

    glVertex2f(165, 292);
    glVertex2f(80, 379);
    glVertex2f(96, 403);
    glVertex2f(152, 379);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(322, 379);
    glVertex2f(305, 403);
    glVertex2f(352, 475);

    glVertex2f(80, 379);
    glVertex2f(96, 403);
    glVertex2f(42, 475);
    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(247, 313);
    glVertex2f(326, 324);
    glVertex2f(337, 345);
    glVertex2f(290, 359);

    glVertex2f(172, 313);
    glVertex2f(86, 324);
    glVertex2f(74, 345);
    glVertex2f(104, 359);
    glEnd();

    glColor3ub(1, 20, 38);
    glBegin(GL_TRIANGLES);

    glVertex2f(326, 324);
    glVertex2f(337, 345);
    glVertex2f(358, 306);

    glVertex2f(86, 324);
    glVertex2f(74, 345);
    glVertex2f(55, 306);

    glVertex2f(282, 459);
    glVertex2f(197, 404);
    glVertex2f(240, 294);

    glVertex2f(116, 459);
    glVertex2f(165, 294);
    glVertex2f(197, 404);

    glVertex2f(240, 294);
    glVertex2f(165, 294);
    glVertex2f(197, 404);
    glEnd();

    glColor3ub(153, 155, 168);
    glBegin(GL_QUADS);
    glVertex2f(242, 274);
    glVertex2f(163, 274);
    glVertex2f(165, 294);
    glVertex2f(240, 294);
    glEnd();

    glColor3ub(1, 20, 94);
    glBegin(GL_TRIANGLES);

    glVertex2f(282, 459);
    glVertex2f(197, 404);
    glVertex2f(203, 293);

    glVertex2f(116, 459);
    glVertex2f(197, 404);
    glVertex2f(203, 293);

    glVertex2f(203, 273);
    glVertex2f(228, 211);
    glVertex2f(175, 211);
    glEnd();

    //голова
    glColor3ub(1, 20, 38);
    glBegin(GL_QUADS);
    glVertex2f(201, 249);
    glVertex2f(241, 187);
    glVertex2f(201, 133);
    glVertex2f(164, 187);
    glEnd();

    glColor3ub(1, 20, 38);
    glBegin(GL_TRIANGLES);
    glVertex2f(201, 133);
    glVertex2f(241, 187);
    glVertex2f(221, 120);

    glVertex2f(201, 133);
    glVertex2f(164, 187);
    glVertex2f(182, 120);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(221, 120);
    glVertex2f(241, 187);
    glVertex2f(251, 17);

    glVertex2f(182, 120);
    glVertex2f(164, 187);
    glVertex2f(154, 17);
    glEnd();

    glColor3ub(4, 0, 240);
    glBegin(GL_QUADS);
    glVertex2f(201, 219);
    glVertex2f(221, 187);
    glVertex2f(201, 163);
    glVertex2f(184, 187);
    glEnd();

    // рука правая
    glColor3ub(1, 20, 38);
    glBegin(GL_QUADS);
    glVertex2f(244, 219);
    glVertex2f(277, 269);
    glVertex2f(282, 303);
    glVertex2f(241, 273);

    glVertex2f(310, 265);
    glVertex2f(277, 269);
    glVertex2f(282, 303);
    glVertex2f(320, 279);
    glEnd();

    // рука левая
    glColor3ub(1, 20, 38);
    glBegin(GL_QUADS);
    glVertex2f(179, 210);
    glVertex2f(142, 216);
    glVertex2f(118, 241);
    glVertex2f(165, 274);

    glVertex2f(122, 190);
    glVertex2f(142, 216);
    glVertex2f(118, 241);
    glVertex2f(107, 195);
    glEnd();

    //кисть праввая
    glColor3ub(77, 101, 240);
    glBegin(GL_QUADS);

    glVertex2f(310, 265);
    glVertex2f(319, 253);
    glVertex2f(328, 267);
    glVertex2f(320, 279);

    //кисть левая
    glVertex2f(122, 190);
    glVertex2f(107, 195);
    glVertex2f(104, 182);
    glVertex2f(119, 177);
    glEnd();

    //ледяные кристаллы (порядок наименования против часовой стрелки начиная с кристалла на 4 часа)
    glPushMatrix();
    glTranslatef(hero_water.pos.x, hero_water.pos.y * (-0.5), 0);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);

    light_crystalls(lightning_crystalls);
    GLfloat light0_position[] = { 0.1, 0.1, lightning_crystalls, 0.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, light0_position);

    //1й кристалл
    glColor3ub(52, 222, 235);
    glBegin(GL_QUADS);
    glVertex2f(362, 390);
    glVertex2f(375, 363);
    glVertex2f(391, 390);
    glVertex2f(375, 415);
    glEnd();

    //2й кристалл
    glBegin(GL_QUADS);
    glVertex2f(394, 227);
    glVertex2f(379, 253);
    glVertex2f(394, 276);
    glVertex2f(409, 252);
    glEnd();

    //3й кристалл
    glBegin(GL_QUADS);
    glVertex2f(332, 101);
    glVertex2f(315, 139);
    glVertex2f(332, 170);
    glVertex2f(348, 139);
    glEnd();

    //4й кристалл
    glBegin(GL_QUADS);
    glVertex2f(66, 97);
    glVertex2f(48, 132);
    glVertex2f(66, 163);
    glVertex2f(82, 132);
    glEnd();

    //5й кристалл
    glBegin(GL_QUADS);
    glVertex2f(34, 330);
    glVertex2f(19, 369);
    glVertex2f(34, 411);
    glVertex2f(51, 369);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    glDisable(GL_LIGHTING);

    render_ice_decorate(hero_water);
}

void render_ice_decorate(Figure& hero_water)
{
    // ледяные глыбы

    glPushMatrix();
    //глыба темная 1я
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE);
    glTranslatef(850, -50, 0);
    glColor4f(0, 123, 176, ice_decorate.health);
    glBegin(GL_TRIANGLES);
    glVertex2f(102, 25);
    glVertex2f(232, 27);
    glVertex2f(236, 249);

    glVertex2f(102, 25);
    glVertex2f(313, 27);
    glVertex2f(495, 452);
    //1я светлая
    glColor4f(153, 217, 234, ice_decorate.health);
    glVertex2f(376, 248);
    glVertex2f(288, 49);
    glVertex2f(150, 44);

    glVertex2f(227, 54);
    glVertex2f(204, 150);
    glVertex2f(150, 44);
    glEnd();

    //глыба темная 2я
    glTranslatef(-500, 300, 0);
    glColor4f(0, 123, 176, ice_decorate.health);
    glBegin(GL_TRIANGLES);
    glVertex2f(672, 320);
    glVertex2f(841, 739);
    glVertex2f(610, 738);

    glVertex2f(610, 738);
    glVertex2f(810, 71);
    glVertex2f(841, 739);

    glVertex2f(610, 738);
    glVertex2f(968, 368);
    glVertex2f(870, 737);

    glVertex2f(610, 738);
    glVertex2f(1162, 462);
    glVertex2f(905, 744);
    //2я светлый
    glColor4f(153, 217, 234, ice_decorate.health);
    glVertex2f(684, 425);
    glVertex2f(818, 705);
    glVertex2f(652, 700);

    glVertex2f(686, 701);
    glVertex2f(789, 288);
    glVertex2f(818, 705);

    glVertex2f(915, 460);
    glVertex2f(818, 705);
    glVertex2f(652, 700);

    glVertex2f(982, 600);
    glVertex2f(896, 707);
    glVertex2f(652, 700);
    glEnd();

    //глыба темная 3я
    glTranslatef(0, -100, 0);
    glColor4f(0, 123, 176, ice_decorate.health);
    glBegin(GL_TRIANGLES);
    glVertex2f(1395, 541);
    glVertex2f(1334, 404);
    glVertex2f(1563, 463);

    glVertex2f(1563, 279);
    glVertex2f(1015, 371);
    glVertex2f(1563, 463);

    glVertex2f(1563, 335);
    glVertex2f(1229, 267);
    glVertex2f(1563, 231);
    //светлая 3я
    glColor4f(153, 217, 234, ice_decorate.health);
    glVertex2f(1411, 474);
    glVertex2f(1392, 384);
    glVertex2f(1529, 398);

    glVertex2f(1529, 398);
    glVertex2f(1206, 370);
    glVertex2f(1529, 306);

    glVertex2f(1529, 256);
    glVertex2f(1364, 277);
    glVertex2f(1529, 329);
    glEnd();
    glDisable(GL_BLEND);
    glPopMatrix();
}