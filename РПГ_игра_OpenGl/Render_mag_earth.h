#pragma once
#include <cstdlib>
#include <glut.h>
#include <iostream>

void render_for_earth(void);

void render_for_earth(void)
{
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
    glColor3ub(34, 177, 76);
    glBegin(GL_QUADS);
    glVertex2f(1219, 336);
    glVertex2f(1221, 365);
    glVertex2f(1214, 366);
    glVertex2f(1210, 339);

    glVertex2f(1232, 336);
    glVertex2f(1236, 364);
    glVertex2f(1230, 365);
    glVertex2f(1226, 337);
    glEnd();
    
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

    //ноги
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

    //левая рука
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

    //правая рука
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
}