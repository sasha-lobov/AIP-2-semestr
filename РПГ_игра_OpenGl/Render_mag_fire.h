#pragma once
#include <cstdlib>
#include <glut.h>
#include <iostream>
void render_for_fire(void);

void render_for_fire(void)
{
    // голова
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
    
    //левая рука
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

    //правая рука
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
}