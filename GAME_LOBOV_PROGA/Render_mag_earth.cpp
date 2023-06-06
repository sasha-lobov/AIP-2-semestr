#include "Render_mag_earth.h"

bool flag_static_pos_earth = false;
bool flag_dynamic_pos_earth = true;

void animate_for_earth(Figure& hero_earth)
{
    //анимация персонажа
    if (hero_earth.attack == false)
    {
        if (flag_static_pos_earth == true)
        {
            hero_earth.pos.y += 0.2;
            if (hero_earth.pos.y >= 3)
            {
                flag_static_pos_earth = false;
            }
        }
        if (flag_static_pos_earth == false)
        {
            hero_earth.pos.y -= 0.2;
            if (hero_earth.pos.y <= -2)
            {
                flag_static_pos_earth = true;
            }
        }
    }
    if (hero_earth.attack == true)
    {


        if (flag_dynamic_pos_earth == true)
        {
            stone_decorate.pos.x += 1.5;
            if (stone_decorate.pos.x >= 40)
            {
                flag_dynamic_pos_earth = false;
            }
        }
        else
        {
            if (stone_decorate.pos.x > 0)
                stone_decorate.pos.x -= 1;
            else
            {
                stone_decorate.pos.x = 0;
                flag_dynamic_pos_earth = true;
                if (score_attack_earth >= 1)
                {
                    hero_earth.attack = false;
                }
                score_attack_earth++;
                hero_damaged = true;
                damage_func(hero_demon,hero_water,hero_fire,hero_earth);
            }
        }

    }

}

void render_for_earth(Figure& hero_earth)
{
    animate_for_earth(hero_earth);
    render_stone_decorate(stone_decorate);

   // glPushMatrix();

    glPushMatrix();
    glTranslatef(-970, 40, 0);
    glPushMatrix();
    glTranslatef(0, hero_earth.pos.y, 0);

    glPushMatrix();
    glTranslatef(0, hero_earth.pos.y, 0);
    // голова
    glColor3ub(214, 204, 175);
    glBegin(GL_POLYGON);
    glVertex2f(1209, 312);
    glVertex2f(1227, 310);
    glVertex2f(1242, 324);
    glVertex2f(1249, 364);
    glVertex2f(1232, 379);
    glVertex2f(1217, 376);
    glVertex2f(1200, 352);
    glVertex2f(1201, 328);
    glEnd();

    //глаза
    glPushMatrix();
    glScalef(0.75, 0.75, 0.75);
    glTranslatef(407, 115, 0);
    glColor3ub(0, 133, 9);
    glBegin(GL_POLYGON);
    glVertex2f(1209, 312);
    glVertex2f(1227, 310);
    glVertex2f(1242, 324);
    glVertex2f(1249, 364);
    glVertex2f(1232, 379);
    glVertex2f(1217, 376);
    glVertex2f(1200, 352);
    glVertex2f(1201, 328);
    glEnd();
    glPopMatrix();

    //верхнее туловище
    glColor3ub(167, 148, 88);
    glBegin(GL_QUADS);
    glVertex2f(1217, 253);
    glVertex2f(1218, 301);
    glVertex2f(1255, 321);
    glVertex2f(1272, 301);
    glEnd();

    glColor3ub(167, 148, 88);
    glBegin(GL_POLYGON);
    glVertex2f(1255, 321);
    glVertex2f(1272, 301);
    glVertex2f(1300, 336);
    glVertex2f(1297, 393);
    glVertex2f(1261, 367);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1297, 393);
    glVertex2f(1261, 367);
    glVertex2f(1230, 391);
    glVertex2f(1216, 422);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1220, 392);
    glVertex2f(1206, 423);
    glVertex2f(1174, 395);
    glVertex2f(1200, 378);

    glVertex2f(1174, 395);
    glVertex2f(1200, 378);
    glVertex2f(1186, 326);
    glVertex2f(1128, 341);

    glVertex2f(1186, 326);
    glVertex2f(1162, 278);
    glVertex2f(1208, 254);
    glVertex2f(1209, 303);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1186, 326);
    glVertex2f(1128, 341);
    glVertex2f(1162, 278);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1229, 257);
    glVertex2f(1291, 305);
    glVertex2f(1312, 284);
    glVertex2f(1281, 192);
    glVertex2f(1227, 221);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1153, 276);
    glVertex2f(1120, 330);
    glVertex2f(1053, 280);
    glVertex2f(1039, 224);
    glVertex2f(1059, 200);
    glVertex2f(1136, 237);
    glVertex2f(1152, 276);
    glEnd();

    glColor3ub(214, 204, 175);
    glBegin(GL_POLYGON);
    glVertex2f(1281, 213);
    glVertex2f(1298, 277);
    glVertex2f(1286, 293);
    glVertex2f(1244, 258);
    glVertex2f(1242, 230);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1136, 276);
    glVertex2f(1117, 311);
    glVertex2f(1070, 276);
    glVertex2f(1062, 214);
    glVertex2f(1125, 243);
    glEnd();

    //живот
    glColor3ub(167, 148, 88);
    glBegin(GL_TRIANGLES);
    glVertex2f(1240, 482);
    glVertex2f(1228, 572);
    glVertex2f(1211, 513);

    glVertex2f(1150, 482);
    glVertex2f(1201, 511);
    glVertex2f(1211, 565);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(1270, 411);
    glVertex2f(1282, 441);
    glVertex2f(1217, 495);
    glVertex2f(1209, 439);

    glVertex2f(1198, 439);
    glVertex2f(1157, 397);
    glVertex2f(1129, 434);
    glVertex2f(1202, 504);
    glEnd();

    //левая рука
    glPushMatrix();
    glTranslatef(0, hero_earth.pos.y * (-3), 0);
    glRotatef(hero_earth.pos.y / 5, 0, 0, 1);
    glColor3ub(167, 148, 88);
    glBegin(GL_QUADS);
    glVertex2f(1109, 342);
    glVertex2f(1148, 394);
    glVertex2f(1107, 435);
    glVertex2f(1072, 398);

    glVertex2f(1061, 415);
    glVertex2f(1095, 438);
    glVertex2f(1078, 450);
    glVertex2f(1057, 435);
    glEnd();

    glColor3ub(214, 204, 175);
    glBegin(GL_QUADS);
    glVertex2f(1028, 435);
    glVertex2f(1111, 498);
    glVertex2f(1092, 527);
    glVertex2f(1023, 509);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1092, 527);
    glVertex2f(1023, 509);
    glVertex2f(996, 560);
    glVertex2f(1039, 636);
    glVertex2f(1065, 633);
    glVertex2f(1103, 594);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1000, 601);
    glVertex2f(1019, 631);
    glVertex2f(993, 636);
    glVertex2f(980, 627);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1096, 610);
    glVertex2f(1109, 636);
    glVertex2f(1073, 634);
    glEnd();
    glPopMatrix();

    //правая рука
    glPushMatrix();
    glTranslatef(hero_earth.pos.y * (0.5), hero_earth.pos.y * (3), 0);
    glRotatef(hero_earth.pos.y / -5, 0, 0, 1);
    glColor3ub(167, 148, 88);
    glBegin(GL_POLYGON);
    glVertex2f(1308, 340);
    glVertex2f(1335, 335);
    glVertex2f(1361, 375);
    glVertex2f(1337, 410);
    glVertex2f(1312, 396);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1337, 410);
    glVertex2f(1307, 401);
    glVertex2f(1286, 405);
    glVertex2f(1296, 446);
    glVertex2f(1359, 480);
    glVertex2f(1374, 460);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1337, 410);
    glVertex2f(1312, 396);
    glVertex2f(1307, 401);
    glEnd();

    glColor3ub(214, 204, 175);
    glBegin(GL_POLYGON);
    glVertex2f(1379, 436);
    glVertex2f(1428, 447);
    glVertex2f(1448, 492);
    glVertex2f(1370, 527);
    glVertex2f(1339, 501);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1448, 492);
    glVertex2f(1370, 527);
    glVertex2f(1411, 609);
    glVertex2f(1495, 638);
    glVertex2f(1522, 589);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(1413, 619);
    glVertex2f(1461, 640);
    glVertex2f(1416, 641);

    glVertex2f(1530, 609);
    glVertex2f(1516, 641);
    glVertex2f(1546, 640);
    glEnd();
    glPopMatrix();

    glPopMatrix();

    //ноги
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2f(1246, 547);
    glVertex2f(1237, 579);
    glVertex2f(1281, 596);
    glVertex2f(1298, 577);

    glVertex2f(1171, 540);
    glVertex2f(1200, 570);
    glVertex2f(1168, 600);
    glVertex2f(1144, 592);
    glEnd();

    glColor3ub(214, 204, 175);
    glBegin(GL_TRIANGLES);
    glVertex2f(1308, 593);
    glVertex2f(1289, 605);
    glVertex2f(1330, 640);

    glVertex2f(1164, 610);
    glVertex2f(1145, 606);
    glVertex2f(1147, 638);
    glEnd();
    glPopMatrix();
    glPopMatrix();
}

void render_stone_decorate(Figure& stone_decorate)
{
    // 1й камень
    glPushMatrix();
    glScalef(0.25, 0.25, 0.25);
    glTranslatef(400, 200, 0);
    glTranslatef(stone_decorate.pos.x * stone_decorate.pos.x * 2, hero_earth.pos.y * (-10), 0);
    glColor3ub(204, 182, 129);
    glBegin(GL_POLYGON);
    glVertex2f(1108, 304);
    glVertex2f(1166, 364);
    glVertex2f(1162, 454);
    glVertex2f(1062, 521);
    glVertex2f(920, 538);
    glVertex2f(769, 471);
    glVertex2f(681, 289);
    glVertex2f(787, 226);
    glEnd();

    glColor3ub(255, 227, 161);
    glBegin(GL_POLYGON);
    glVertex2f(787, 226);
    glVertex2f(1108, 304);
    glVertex2f(1110, 225);
    glVertex2f(907, 112);
    glEnd();

    glColor3ub(211, 188, 134);
    glBegin(GL_POLYGON);
    glVertex2f(1110, 225);
    glVertex2f(1108, 304);
    glVertex2f(1166, 364);
    glEnd();

    glColor3ub(161, 143, 102);
    glBegin(GL_POLYGON);
    glVertex2f(907, 112);
    glVertex2f(787, 226);
    glVertex2f(681, 289);
    glEnd();

    glColor3ub(161, 143, 102);
    glBegin(GL_POLYGON);
    glVertex2f(1108, 304);
    glVertex2f(1166, 364);
    glVertex2f(1162, 454);
    glVertex2f(1062, 521);
    glEnd();

    glColor3ub(129, 115, 82);
    glBegin(GL_POLYGON);
    glVertex2f(769, 471);
    glVertex2f(681, 289);
    glVertex2f(787, 226);
    glVertex2f(1062, 521);
    glEnd();

    glColor3ub(108, 96, 69);
    glBegin(GL_POLYGON);
    glVertex2f(769, 471);
    glVertex2f(681, 289);
    glVertex2f(787, 226);
    glEnd();

    glColor3ub(129, 115, 82);
    glBegin(GL_POLYGON);
    glVertex2f(1062, 521);
    glVertex2f(920, 538);
    glVertex2f(769, 471);
    glEnd();
    glPopMatrix();

    //2й камень
    glPushMatrix();
    glScalef(0.5, 0.5, 0.5);
    glTranslatef(-350, -50, 0);
    glTranslatef(stone_decorate.pos.x * stone_decorate.pos.x, hero_earth.pos.y * 5, 0);
    glColor3ub(204, 182, 129);
    glBegin(GL_POLYGON);
    glVertex2f(1289, 513);
    glVertex2f(1353, 586);
    glVertex2f(1304, 682);
    glVertex2f(1238, 604);
    glEnd();

    glColor3ub(255, 227, 161);
    glBegin(GL_POLYGON);
    glVertex2f(1289, 513);
    glVertex2f(1353, 586);
    glVertex2f(1389, 525);
    glVertex2f(1339, 467);
    glEnd();

    glColor3ub(166, 148, 105);
    glBegin(GL_POLYGON);
    glVertex2f(1353, 586);
    glVertex2f(1304, 682);
    glVertex2f(1381, 695);
    glVertex2f(1421, 649);
    glEnd();

    glColor3ub(110, 98, 70);
    glBegin(GL_POLYGON);
    glVertex2f(1304, 682);
    glVertex2f(1238, 604);
    glVertex2f(1189, 636);
    glVertex2f(1207, 703);
    glEnd();

    glColor3ub(129, 115, 82);
    glBegin(GL_POLYGON);
    glVertex2f(1238, 604);
    glVertex2f(1289, 513);
    glVertex2f(1241, 505);
    glVertex2f(1218, 573);
    glEnd();

    glColor3ub(152, 135, 97);
    glBegin(GL_POLYGON);
    glVertex2f(1238, 604);
    glVertex2f(1189, 636);
    glVertex2f(1218, 573);
    glEnd();

    glColor3ub(161, 143, 102);
    glBegin(GL_POLYGON);
    glVertex2f(1289, 513);
    glVertex2f(1241, 505);
    glVertex2f(1339, 467);
    glEnd();

    glColor3ub(211, 188, 134);
    glBegin(GL_POLYGON);
    glVertex2f(1353, 586);
    glVertex2f(1389, 525);
    glVertex2f(1421, 649);
    glEnd();
    glPopMatrix();

    //3й камень
    glPushMatrix();
    glScalef(0.5, 0.5, 0.5);
    glTranslatef(-200, 300, 0);
    glTranslatef(stone_decorate.pos.x * stone_decorate.pos.x, hero_earth.pos.y * (-5), 0);
    glColor3ub(204, 182, 129);
    glBegin(GL_POLYGON);
    glVertex2f(1289, 513);
    glVertex2f(1353, 586);
    glVertex2f(1304, 682);
    glVertex2f(1238, 604);
    glEnd();

    glColor3ub(255, 227, 161);
    glBegin(GL_POLYGON);
    glVertex2f(1289, 513);
    glVertex2f(1353, 586);
    glVertex2f(1389, 525);
    glVertex2f(1339, 467);
    glEnd();

    glColor3ub(166, 148, 105);
    glBegin(GL_POLYGON);
    glVertex2f(1353, 586);
    glVertex2f(1304, 682);
    glVertex2f(1381, 695);
    glVertex2f(1421, 649);
    glEnd();

    glColor3ub(110, 98, 70);
    glBegin(GL_POLYGON);
    glVertex2f(1304, 682);
    glVertex2f(1238, 604);
    glVertex2f(1189, 636);
    glVertex2f(1207, 703);
    glEnd();

    glColor3ub(129, 115, 82);
    glBegin(GL_POLYGON);
    glVertex2f(1238, 604);
    glVertex2f(1289, 513);
    glVertex2f(1241, 505);
    glVertex2f(1218, 573);
    glEnd();

    glColor3ub(152, 135, 97);
    glBegin(GL_POLYGON);
    glVertex2f(1238, 604);
    glVertex2f(1189, 636);
    glVertex2f(1218, 573);
    glEnd();

    glColor3ub(161, 143, 102);
    glBegin(GL_POLYGON);
    glVertex2f(1289, 513);
    glVertex2f(1241, 505);
    glVertex2f(1339, 467);
    glEnd();

    glColor3ub(211, 188, 134);
    glBegin(GL_POLYGON);
    glVertex2f(1353, 586);
    glVertex2f(1389, 525);
    glVertex2f(1421, 649);
    glEnd();
    glPopMatrix();

    // 4й камень
    glPushMatrix();
    glScalef(0.25, 0.25, 0.25);
    glTranslatef(-500, 300, 0);
    glTranslatef(stone_decorate.pos.x * stone_decorate.pos.x * 3, hero_earth.pos.y * 15, 0);
    glColor3ub(204, 182, 129);
    glBegin(GL_POLYGON);
    glVertex2f(1108, 304);
    glVertex2f(1166, 364);
    glVertex2f(1162, 454);
    glVertex2f(1062, 521);
    glVertex2f(920, 538);
    glVertex2f(769, 471);
    glVertex2f(681, 289);
    glVertex2f(787, 226);
    glEnd();

    glColor3ub(255, 227, 161);
    glBegin(GL_POLYGON);
    glVertex2f(787, 226);
    glVertex2f(1108, 304);
    glVertex2f(1110, 225);
    glVertex2f(907, 112);
    glEnd();

    glColor3ub(211, 188, 134);
    glBegin(GL_POLYGON);
    glVertex2f(1110, 225);
    glVertex2f(1108, 304);
    glVertex2f(1166, 364);
    glEnd();

    glColor3ub(161, 143, 102);
    glBegin(GL_POLYGON);
    glVertex2f(907, 112);
    glVertex2f(787, 226);
    glVertex2f(681, 289);
    glEnd();

    glColor3ub(161, 143, 102);
    glBegin(GL_POLYGON);
    glVertex2f(1108, 304);
    glVertex2f(1166, 364);
    glVertex2f(1162, 454);
    glVertex2f(1062, 521);
    glEnd();

    glColor3ub(129, 115, 82);
    glBegin(GL_POLYGON);
    glVertex2f(769, 471);
    glVertex2f(681, 289);
    glVertex2f(787, 226);
    glVertex2f(1062, 521);
    glEnd();

    glColor3ub(108, 96, 69);
    glBegin(GL_POLYGON);
    glVertex2f(769, 471);
    glVertex2f(681, 289);
    glVertex2f(787, 226);
    glEnd();

    glColor3ub(129, 115, 82);
    glBegin(GL_POLYGON);
    glVertex2f(1062, 521);
    glVertex2f(920, 538);
    glVertex2f(769, 471);
    glEnd();
    glPopMatrix();

    // 5й камень
    glPushMatrix();
    glScalef(0.25, 0.25, 0.25);
    glTranslatef(-850, 1200, 0);
    glTranslatef(stone_decorate.pos.x * stone_decorate.pos.x * 3.5, hero_earth.pos.y * 10, 0);
    glColor3ub(204, 182, 129);
    glBegin(GL_POLYGON);
    glVertex2f(1108, 304);
    glVertex2f(1166, 364);
    glVertex2f(1162, 454);
    glVertex2f(1062, 521);
    glVertex2f(920, 538);
    glVertex2f(769, 471);
    glVertex2f(681, 289);
    glVertex2f(787, 226);
    glEnd();

    glColor3ub(255, 227, 161);
    glBegin(GL_POLYGON);
    glVertex2f(787, 226);
    glVertex2f(1108, 304);
    glVertex2f(1110, 225);
    glVertex2f(907, 112);
    glEnd();

    glColor3ub(211, 188, 134);
    glBegin(GL_POLYGON);
    glVertex2f(1110, 225);
    glVertex2f(1108, 304);
    glVertex2f(1166, 364);
    glEnd();

    glColor3ub(161, 143, 102);
    glBegin(GL_POLYGON);
    glVertex2f(907, 112);
    glVertex2f(787, 226);
    glVertex2f(681, 289);
    glEnd();

    glColor3ub(161, 143, 102);
    glBegin(GL_POLYGON);
    glVertex2f(1108, 304);
    glVertex2f(1166, 364);
    glVertex2f(1162, 454);
    glVertex2f(1062, 521);
    glEnd();

    glColor3ub(129, 115, 82);
    glBegin(GL_POLYGON);
    glVertex2f(769, 471);
    glVertex2f(681, 289);
    glVertex2f(787, 226);
    glVertex2f(1062, 521);
    glEnd();

    glColor3ub(108, 96, 69);
    glBegin(GL_POLYGON);
    glVertex2f(769, 471);
    glVertex2f(681, 289);
    glVertex2f(787, 226);
    glEnd();

    glColor3ub(129, 115, 82);
    glBegin(GL_POLYGON);
    glVertex2f(1062, 521);
    glVertex2f(920, 538);
    glVertex2f(769, 471);
    glEnd();
    glPopMatrix();
}