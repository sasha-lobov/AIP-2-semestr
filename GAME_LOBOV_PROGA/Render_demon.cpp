#include "Render_demon.h"

bool flag_static_pos_demon = false;
bool flag_dynamic_pos_demon = true;
GLfloat demon_blend = 1;
GLfloat lightning_demon_eye = 0.0;

void light_demon(GLfloat& lightnind_demon_eye)
{
    if (hero_demon.pos.x != 0)
        lightning_demon_eye += 0.01;
    else if (lightning_demon_eye > 0)
        lightning_demon_eye -= 0.02;
}

void animate_for_demon(Figure& hero_demon)
{
    if ((flag_attack_water == true && hero_water.attack == false) || (flag_attack_fire == true && hero_fire.attack == false) || (flag_attack_earth == true && hero_earth.attack == false))
    {
        if (hero_demon.timer < 30)
            hero_demon.timer += 1;
        else
        {
            if (flag_dynamic_pos_demon == true)
            {
                hero_demon.pos.x -= 60;
                demon_blend -= 0.1;
                if (hero_demon.pos.x <= -1000)
                    flag_dynamic_pos_demon = false;
            }
            else
            {
                if (hero_demon.pos.x < -50)
                {
                    demon_blend += 0.1;
                    hero_demon.pos.x += 60;
                }
                else
                {
                    demon_blend = 1.5;
                    hero_demon.pos.x = 0;

                    //damage_func();

                    if (score_attack_demon >= 1)
                    {
                        flag_attack_water = false;
                        flag_attack_fire = false;
                        flag_attack_earth = false;
                    }
                    score_attack_demon++;
                    flag_dynamic_pos_demon = true;
                    hero_demon.timer = 0;
                    demon_rand_card = true;
                    demon_damaged = true;
                    damage_func(hero_demon, hero_water, hero_fire, hero_earth);
                }
            }
        }
    }
    else
    {
        if (flag_static_pos_demon == true)
        {
            hero_demon.pos.y += 2;
            if (hero_demon.pos.y == 32)
            {
                flag_static_pos_demon = false;
            }
        }
        if (flag_static_pos_demon == false)
        {
            hero_demon.pos.y -= 2;
            if (hero_demon.pos.y <= -2)
            {
                flag_static_pos_demon = true;
            }
        }
    }
}
void render_demon(Figure& hero_demon)
{
    animate_for_demon(hero_demon);

    glPushMatrix();
    glScalef(0.8, 0.8, 0.8);
    glTranslatef(600, 100, 0);
    glTranslatef(hero_demon.pos.x, hero_demon.pos.y, 0);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);

    GLfloat light0_position[] = { 0.1, 0.1, lightning_demon_eye + 0.15, 0.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, light0_position);

    //крыло правое
    glPushMatrix();
    glTranslatef(0, hero_demon.pos.y * (-0.5), 0);
    glRotatef(hero_demon.pos.y / (20), 0, 0, 1);
    glBegin(GL_QUADS);
    glColor4f(0.8, 0, 0, demon_blend);
    glVertex2f(1037, 378);
    glVertex2f(1038, 433);
    glVertex2f(1137, 431);
    glVertex2f(1118, 343);

    glVertex2f(1137, 431);
    glVertex2f(1118, 343);
    glVertex2f(1177, 327);
    glVertex2f(1211, 461);

    glVertex2f(1177, 327);
    glVertex2f(1211, 461);
    glVertex2f(1252, 443);
    glVertex2f(1205, 297);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1211, 461);
    glVertex2f(1252, 443);
    glVertex2f(1235, 471);

    glVertex2f(1211, 461);
    glVertex2f(1235, 471);
    glVertex2f(1231, 503);

    glVertex2f(1252, 443);
    glVertex2f(1329, 440);
    glVertex2f(1200, 287);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1200, 287);
    glVertex2f(1329, 440);
    glVertex2f(1343, 425);
    glVertex2f(1346, 374);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1329, 440);
    glVertex2f(1343, 425);
    glVertex2f(1356, 462);

    glVertex2f(1200, 287);
    glVertex2f(1346, 374);
    glVertex2f(1387, 346);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1200, 287);
    glVertex2f(1387, 346);
    glVertex2f(1417, 329);
    glVertex2f(1412, 284);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1387, 346);
    glVertex2f(1417, 329);
    glVertex2f(1435, 352);

    glVertex2f(1200, 287);
    glVertex2f(1412, 284);
    glVertex2f(1431, 243);

    glVertex2f(1176, 269);
    glVertex2f(1168, 228);
    glVertex2f(1150, 270);

    glVertex2f(1123, 289);
    glVertex2f(1168, 228);
    glVertex2f(1150, 270);

    glVertex2f(1480, 207);
    glVertex2f(1486, 164);
    glVertex2f(1548, 198);

    glVertex2f(1557, 48);
    glVertex2f(1528, 74);
    glVertex2f(1515, 62);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1528, 74);
    glVertex2f(1515, 62);
    glVertex2f(1445, 101);
    glVertex2f(1492, 124);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1200, 287);
    glVertex2f(1431, 243);
    glVertex2f(1480, 207);
    glVertex2f(1492, 124);
    glVertex2f(1445, 101);
    glVertex2f(1282, 157);
    glVertex2f(1228, 184);
    glVertex2f(1168, 228);
    glVertex2f(1176, 269);
    glEnd();
    glPopMatrix();

    //крыло левое
    glPushMatrix();
    glScalef(-1, 1, 1);
    glTranslatef(-1885, 0, 0);
    glTranslatef(0, hero_demon.pos.y * (-0.5), 0);
    glRotatef(hero_demon.pos.y / 20, 0, 0, 1);
    glBegin(GL_QUADS);
    glColor4f(0.8, 0, 0, demon_blend);
    glVertex2f(1037, 378);
    glVertex2f(1038, 433);
    glVertex2f(1137, 431);
    glVertex2f(1118, 343);

    glVertex2f(1137, 431);
    glVertex2f(1118, 343);
    glVertex2f(1177, 327);
    glVertex2f(1211, 461);

    glVertex2f(1177, 327);
    glVertex2f(1211, 461);
    glVertex2f(1252, 443);
    glVertex2f(1205, 297);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1211, 461);
    glVertex2f(1252, 443);
    glVertex2f(1235, 471);

    glVertex2f(1211, 461);
    glVertex2f(1235, 471);
    glVertex2f(1231, 503);

    glVertex2f(1252, 443);
    glVertex2f(1329, 440);
    glVertex2f(1200, 287);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1200, 287);
    glVertex2f(1329, 440);
    glVertex2f(1343, 425);
    glVertex2f(1346, 374);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1329, 440);
    glVertex2f(1343, 425);
    glVertex2f(1356, 462);

    glVertex2f(1200, 287);
    glVertex2f(1346, 374);
    glVertex2f(1387, 346);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1200, 287);
    glVertex2f(1387, 346);
    glVertex2f(1417, 329);
    glVertex2f(1412, 284);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1387, 346);
    glVertex2f(1417, 329);
    glVertex2f(1435, 352);

    glVertex2f(1200, 287);
    glVertex2f(1412, 284);
    glVertex2f(1431, 243);

    glVertex2f(1176, 269);
    glVertex2f(1168, 228);
    glVertex2f(1150, 270);

    glVertex2f(1123, 289);
    glVertex2f(1168, 228);
    glVertex2f(1150, 270);

    glVertex2f(1480, 207);
    glVertex2f(1486, 164);
    glVertex2f(1548, 198);

    glVertex2f(1557, 48);
    glVertex2f(1528, 74);
    glVertex2f(1515, 62);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1528, 74);
    glVertex2f(1515, 62);
    glVertex2f(1445, 101);
    glVertex2f(1492, 124);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1200, 287);
    glVertex2f(1431, 243);
    glVertex2f(1480, 207);
    glVertex2f(1492, 124);
    glVertex2f(1445, 101);
    glVertex2f(1282, 157);
    glVertex2f(1228, 184);
    glVertex2f(1168, 228);
    glVertex2f(1176, 269);
    glEnd();
    glPopMatrix();

    glDisable(GL_LIGHTING);

    glEnable(GL_BLEND);
    glBlendFunc(GL_ONE_MINUS_SRC_COLOR, GL_ONE_MINUS_SRC_ALPHA);

    //туловище
    glColor4f(0, 10.0, 0, demon_blend);
    glBegin(GL_QUADS);
    glVertex2f(905, 227);
    glVertex2f(972, 227);
    glVertex2f(992, 249);
    glVertex2f(887, 249);

    glVertex2f(992, 249);
    glVertex2f(887, 249);
    glVertex2f(869, 280);
    glVertex2f(1011, 280);

    glVertex2f(869, 280);
    glVertex2f(1011, 280);
    glVertex2f(1025, 333);
    glVertex2f(855, 333);

    glVertex2f(1025, 333);
    glVertex2f(855, 333);
    glVertex2f(843, 380);
    glVertex2f(1038, 380);

    glVertex2f(843, 380);
    glVertex2f(1038, 380);
    glVertex2f(1039, 432);
    glVertex2f(840, 432);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1039, 432);
    glVertex2f(840, 432);
    glVertex2f(837, 502);
    glVertex2f(876, 529);
    glVertex2f(909, 526);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1039, 432);
    glVertex2f(909, 526);
    glVertex2f(950, 546);
    glVertex2f(976, 548);
    glVertex2f(1010, 498);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(837, 502);
    glVertex2f(876, 529);
    glVertex2f(833, 649);

    glVertex2f(884, 726);
    glVertex2f(870, 529);
    glVertex2f(909, 526);

    glVertex2f(950, 546);
    glVertex2f(921, 659);
    glVertex2f(909, 526);

    glVertex2f(950, 546);
    glVertex2f(976, 548);
    glVertex2f(964, 616);

    glVertex2f(1010, 498);
    glVertex2f(976, 548);
    glVertex2f(1004, 714);

    glVertex2f(1000, 498);
    glVertex2f(1039, 432);
    glVertex2f(1057, 684);
    glEnd();
    glDisable(GL_BLEND);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);

    if (hero_demon.pos.x != 0)
        lightning_demon_eye += 0.02;
    else if (lightning_demon_eye > 0)
        lightning_demon_eye -= 0.05;

    glLightfv(GL_LIGHT0, GL_POSITION, light0_position);

    //рог правый
    glColor4f(0.8, 0, 0, demon_blend);
    glBegin(GL_TRIANGLES);
    glVertex2f(972, 227);
    glVertex2f(992, 249);
    glVertex2f(1010, 221);

    glVertex2f(1034, 34);
    glVertex2f(1037, 155);
    glVertex2f(1059, 165);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1011, 280);
    glVertex2f(992, 249);
    glVertex2f(1021, 191);
    glVertex2f(1051, 202);

    glVertex2f(1059, 165);
    glVertex2f(1037, 155);
    glVertex2f(1021, 191);
    glVertex2f(1051, 202);
    glEnd();

    //рог левый
    glBegin(GL_TRIANGLES);
    glVertex2f(905, 227);
    glVertex2f(887, 249);
    glVertex2f(870, 221);

    glVertex2f(844, 34);
    glVertex2f(842, 155);
    glVertex2f(820, 165);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(869, 280);
    glVertex2f(887, 249);
    glVertex2f(858, 191);
    glVertex2f(830, 202);

    glVertex2f(820, 165);
    glVertex2f(842, 155);
    glVertex2f(858, 191);
    glVertex2f(830, 202);
    glEnd();

    //глаз
    glPushMatrix();
    glScalef(0.7, 0.7, 0.7);
    glTranslatef(360, 100, 0);
    glColor3ub(204, 28, 36);
    glBegin(GL_TRIANGLES);
    glVertex2f(1016, 279);
    glVertex2f(1073, 245);
    glVertex2f(1016, 319);

    glVertex2f(1016, 319);
    glVertex2f(1092, 366);
    glVertex2f(1009, 347);

    glVertex2f(952, 282);
    glVertex2f(889, 245);
    glVertex2f(951, 319);

    glVertex2f(951, 319);
    glVertex2f(872, 366);
    glVertex2f(958, 347);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(981, 157);
    glVertex2f(1017, 277);
    glVertex2f(1021, 318);
    glVertex2f(981, 472);
    glVertex2f(941, 325);
    glVertex2f(945, 270);
    glEnd();

    glColor3ub(255, 250, 140);
    glBegin(GL_POLYGON);
    glVertex2f(982, 259);
    glVertex2f(998, 310);
    glVertex2f(982, 362);
    glVertex2f(968, 310);
    glEnd();

    glDisable(GL_LIGHTING);

    glPopMatrix();
    glPopMatrix();
}