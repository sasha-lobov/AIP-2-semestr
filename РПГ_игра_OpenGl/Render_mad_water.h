#pragma once
#include <cstdlib>
#include <glut.h>
#include <iostream>
void render_for_water(void);

void render_for_water(void)
{
    // туловище и крылья
 

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

    //ледяные кристаллы под анимацию(порядок наименования против часовой стрелки начиная с кристалла на 4 часа)

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
}