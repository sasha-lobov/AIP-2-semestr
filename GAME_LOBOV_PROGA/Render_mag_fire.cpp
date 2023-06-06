#include "Render_mag_fire.h"

bool flag_static_pos_fire = false;
bool flag_dynamic_pos_fire = true;

void animate_for_fire(Figure& hero_fire)
{
    //анимация персонажа
    if (hero_fire.attack == false)
    {
        if (flag_static_pos_fire == true)
        {
            hero_fire.pos.y += 0.2;
            if (hero_fire.pos.y >= 3)
            {
                flag_static_pos_fire = false;
            }
        }
        if (flag_static_pos_fire == false)
        {
            hero_fire.pos.y -= 0.2;
            if (hero_fire.pos.y <= -2)
            {
                flag_static_pos_fire = true;
            }
        }
    }
    if (hero_fire.attack == true)
    {


        if (flag_dynamic_pos_fire == true)
        {
            flash_decorate.health += 1;
            if (flash_decorate.health >= 25)
            {
                flag_dynamic_pos_fire = false;
            }
        }
        else
        {
            if (flash_decorate.health > -25)
                flash_decorate.health -= 1;
            else
            {
                flash_decorate.health = 0;
                flag_dynamic_pos_fire = true;
                if (score_attack_fire >= 1)
                {
                    hero_fire.attack = false;
                }
                score_attack_fire++;
                hero_damaged = true;
                damage_func(hero_demon,hero_water,hero_fire,hero_earth);
            }
        }

    }
}
void render_for_fire(Figure& hero_fire)
{
    animate_for_fire(hero_fire);

    glPushMatrix();
    glTranslatef(-520, 30, 0);
    glTranslatef(hero_fire.pos.x, hero_fire.pos.y, 0);

    glPushMatrix();
    glTranslatef(0, hero_fire.pos.y * (-0.5), 0);
    //левая рука
    glPushMatrix();
    glTranslatef(5, 0, 0);
    glRotatef(hero_fire.pos.y / 5, 0, 0, 1);
    glColor3ub(255, 115, 11);
    glBegin(GL_QUADS);

    glVertex2f(643, 442);
    glVertex2f(609, 466);
    glVertex2f(616, 476);
    glVertex2f(643, 462);

    glVertex2f(643, 442);
    glVertex2f(609, 466);
    glVertex2f(616, 476);
    glVertex2f(643, 462);

    glVertex2f(593, 501);
    glVertex2f(599, 499);
    glVertex2f(589, 529);
    glVertex2f(584, 526);
    glEnd();

    glColor3ub(195, 195, 195);
    glBegin(GL_QUADS);

    glVertex2f(607, 460);
    glVertex2f(624, 485);
    glVertex2f(603, 509);
    glVertex2f(588, 500);

    glVertex2f(573, 515);
    glVertex2f(592, 528);
    glVertex2f(569, 548);
    glVertex2f(555, 544);

    glVertex2f(585, 523);
    glVertex2f(602, 533);
    glVertex2f(588, 561);
    glVertex2f(574, 554);
    glEnd();
    glPopMatrix();

    //правая рука
    glPushMatrix();
    glTranslatef(-10, 0, 0);
    glTranslatef(hero_fire.pos.y * (1.5), 0, 0);
    glRotatef(hero_fire.pos.y / 5, 0, 0, 1);
    glColor3ub(255, 115, 11);
    glBegin(GL_QUADS);

    glVertex2f(805, 443);
    glVertex2f(848, 468);
    glVertex2f(842, 476);
    glVertex2f(805, 464);

    glVertex2f(871, 490);
    glVertex2f(890, 507);
    glVertex2f(887, 510);
    glVertex2f(865, 494);
    glEnd();

    glColor3ub(195, 195, 195);
    glBegin(GL_QUADS);

    glVertex2f(851, 462);
    glVertex2f(873, 484);
    glVertex2f(862, 502);
    glVertex2f(832, 482);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(894, 500);
    glVertex2f(879, 517);
    glVertex2f(898, 529);

    glVertex2f(894, 500);
    glVertex2f(879, 517);
    glVertex2f(911, 515);
    glEnd();
    glPopMatrix();

    //туловище
    glColor3ub(127, 127, 127);
    glBegin(GL_POLYGON);

    glVertex2f(668, 413);
    glVertex2f(780, 413);
    glVertex2f(774, 495);
    glVertex2f(673, 495);
    glEnd();

    glColor3ub(195, 195, 195);
    glBegin(GL_POLYGON);

    glVertex2f(750, 385);
    glVertex2f(698, 385);
    glVertex2f(668, 413);
    glVertex2f(724, 439);
    glVertex2f(780, 413);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(780, 413);
    glVertex2f(774, 495);
    glVertex2f(804, 482);
    glVertex2f(805, 434);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(668, 413);
    glVertex2f(673, 495);
    glVertex2f(642, 480);
    glVertex2f(643, 431);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(774, 495);
    glVertex2f(673, 495);
    glVertex2f(665, 511);
    glVertex2f(780, 510);
    glEnd();

    glColor3ub(127, 127, 127);
    glBegin(GL_POLYGON);

    glVertex2f(774, 495);
    glVertex2f(673, 495);
    glVertex2f(639, 565);
    glVertex2f(806, 565);
    glEnd();

    // голова
    glPushMatrix();
    glTranslatef(0, 10, 0);
    glTranslatef(0, hero_fire.pos.y * 1.5, 0);
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(698, 305);
    glVertex2f(750, 305);
    glVertex2f(773, 345);
    glVertex2f(750, 385);
    glVertex2f(698, 385);
    glVertex2f(675, 345);
    glEnd();

    //глаз
    glColor3ub(255, 11, 17);
    glBegin(GL_TRIANGLES);

    glVertex2f(706, 329);
    glVertex2f(740, 329);
    glVertex2f(724, 357);
    glEnd();
    //правый рог
    glColor3ub(255, 115, 11);
    glBegin(GL_POLYGON);

    glVertex2f(750, 305);
    glVertex2f(773, 345);
    glVertex2f(815, 321);
    glVertex2f(817, 243);
    glVertex2f(778, 249);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(817, 243);
    glVertex2f(778, 249);
    glVertex2f(755, 187);
    glVertex2f(788, 205);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(755, 187);
    glVertex2f(788, 205);
    glVertex2f(798, 162);
    glVertex2f(775, 159);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(798, 162);
    glVertex2f(775, 159);
    glVertex2f(776, 93);
    glEnd();

    glColor3ub(248, 188, 7);
    glBegin(GL_POLYGON);

    glVertex2f(773, 345);
    glVertex2f(750, 385);
    glVertex2f(808, 370);
    glVertex2f(815, 321);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(808, 370);
    glVertex2f(815, 321);
    glVertex2f(912, 408);
    glEnd();
    //левый рог
    glColor3ub(255, 115, 11);
    glBegin(GL_POLYGON);

    glVertex2f(698, 305);
    glVertex2f(675, 345);
    glVertex2f(633, 321);
    glVertex2f(631, 243);
    glVertex2f(674, 249);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(631, 243);
    glVertex2f(674, 249);
    glVertex2f(694, 189);
    glVertex2f(661, 206);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(694, 189);
    glVertex2f(661, 206);
    glVertex2f(650, 162);
    glVertex2f(674, 160);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(650, 162);
    glVertex2f(674, 160);
    glVertex2f(674, 94);
    glEnd();

    glColor3ub(248, 188, 7);
    glBegin(GL_POLYGON);

    glVertex2f(698, 385);
    glVertex2f(675, 345);
    glVertex2f(633, 321);
    glVertex2f(637, 370);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(633, 321);
    glVertex2f(637, 370);
    glVertex2f(534, 410);
    glEnd();
    glPopMatrix();

    //пояс
    glColor3ub(195, 195, 195);
    glBegin(GL_POLYGON);

    glVertex2f(774, 495);
    glVertex2f(673, 495);
    glVertex2f(665, 511);
    glVertex2f(781, 510);
    glEnd();

    //ноги
    glColor3ub(255, 115, 11);
    glBegin(GL_TRIANGLES);

    glVertex2f(703, 564);
    glVertex2f(664, 564);
    glVertex2f(651, 631);

    glVertex2f(744, 564);
    glVertex2f(785, 564);
    glVertex2f(793, 629);
    glEnd();
    glPopMatrix();

    animate_fiery_flash(hero_fire);
}

void animate_fiery_flash(Figure& hero_fire)
{
    //тут рисуем огненную молнию м через прозрачность анимируем как атаку
    glPushMatrix();
    glScalef(0.9, 0.9, 0.9);
    glTranslatef(90, 50, 0);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glColor4f(255, 0, 0, flash_decorate.health);
    glBegin(GL_QUADS);
    glVertex2f(133, 368);
    glVertex2f(138, 381);
    glColor4f(1, 0.24, 0.152, flash_decorate.health);
    glVertex2f(244, 296);
    glVertex2f(217, 282);
    glEnd();

    glColor4f(1, 0.24, 0.152, flash_decorate.health * 0.9);
    glBegin(GL_QUADS);
    glVertex2f(244, 296);
    glVertex2f(217, 282);
    glColor4f(1, 0.56, 0.152, flash_decorate.health * 0.9);
    glVertex2f(321, 262);
    glVertex2f(318, 282);
    glEnd();

    glColor4f(1, 0.56, 0.152, flash_decorate.health * 0.7);
    glBegin(GL_QUADS);
    glVertex2f(321, 262);
    glVertex2f(318, 282);
    glColor4f(1, 0.78, 0.152, flash_decorate.health * 0.7);
    glVertex2f(438, 209);
    glVertex2f(431, 192);
    glEnd();

    glColor4f(1, 0.78, 0.152, flash_decorate.health * 0.5);
    glBegin(GL_QUADS);
    glVertex2f(438, 209);
    glVertex2f(431, 192);
    glColor4f(1, 1, 0, flash_decorate.health * 0.5);
    glVertex2f(552, 152);
    glVertex2f(558, 176);
    glEnd();

    glColor4f(1, 1, 0, flash_decorate.health * 0.3);
    glBegin(GL_QUADS);
    glVertex2f(552, 152);
    glVertex2f(558, 176);
    glColor4f(0.47, 1, 0.937, flash_decorate.health * 0.3);
    glVertex2f(683, 225);
    glVertex2f(677, 183);
    glEnd();

    glColor4f(0.47, 1, 0.937, flash_decorate.health * 0.1);
    glBegin(GL_QUADS);
    glVertex2f(683, 225);
    glVertex2f(677, 183);
    glColor4f(0.854, 1, 0.937, flash_decorate.health * 0.1);
    glVertex2f(798, 102);
    glVertex2f(799, 132);
    glEnd();

    glColor4f(0.854, 1, 0.937, flash_decorate.health * 0.1);
    glBegin(GL_QUADS);
    glVertex2f(798, 102);
    glVertex2f(799, 132);
    glColor4f(1, 1, 1, flash_decorate.health * 0.1);
    glVertex2f(975, 155);
    glVertex2f(980, 125);
    glEnd();

    glColor4f(1, 1, 1, flash_decorate.health * 0.1);
    glBegin(GL_QUADS);
    glVertex2f(975, 155);
    glVertex2f(980, 125);
    glVertex2f(1053, 226);
    glVertex2f(1029, 245);
    glEnd();

    glColor4f(1, 1, 1, flash_decorate.health * 0.1);
    glBegin(GL_QUADS);
    glVertex2f(1053, 226);
    glVertex2f(1029, 245);
    glVertex2f(1180, 283);
    glVertex2f(1184, 259);
    glEnd();

    glColor4f(1, 1, 1, flash_decorate.health * 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2f(1292, 303);
    glVertex2f(1180, 283);
    glVertex2f(1184, 259);

    glVertex2f(1184, 259);
    glVertex2f(1292, 303);
    glVertex2f(1136, 218);

    glVertex2f(1180, 283);
    glVertex2f(1292, 303);
    glVertex2f(1128, 312);
    glEnd();

    glDisable(GL_BLEND);
    glPopMatrix();
}