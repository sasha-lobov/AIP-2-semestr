#pragma once
#include <cstdlib>
#include <glut.h>
#include <iostream>
#include "Render_mad_water.h"
#include "Render_mag_fire.h"
#include "Render_mag_earth.h"

void render_fon(void);

void render_fon(void)
{
    double cnvCoordX(double x);
    double cnvCoordY(double y);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0f, 1600, 900, 0.0f, 0.0f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //фон
    glClearColor(65.0f / 255.0f, 79.0f / 255.0f, 90.0f / 255.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //верхние треугольники
    glColor3ub(37, 51, 60);
    glBegin(GL_TRIANGLES);
    glVertex2f(64, 0);
    glVertex2f(56, 27);
    glVertex2f(137, 0);

    glVertex2f(354, 0);
    glVertex2f(384, 26);
    glVertex2f(424, 0);

    glVertex2f(384, 26);
    glVertex2f(397, 77);
    glVertex2f(424, 0);

    glVertex2f(503, 0);
    glVertex2f(515, 10);
    glVertex2f(401, 28);

    glVertex2f(503, 0);
    glVertex2f(401, 28);
    glVertex2f(424, 0);

    glVertex2f(616, 0);
    glVertex2f(681, 38);
    glVertex2f(735, 0);

    glVertex2f(910, 0);
    glVertex2f(976, 84);
    glVertex2f(1028, 0);

    glVertex2f(976, 84);
    glVertex2f(974, 156);
    glVertex2f(1024, 85);

    glVertex2f(1028, 0);
    glVertex2f(976, 84);
    glVertex2f(1024, 85);

    glVertex2f(1024, 85);
    glVertex2f(979, 0);
    glVertex2f(1117, 0);

    glVertex2f(1242, 0);
    glVertex2f(1349, 96);
    glVertex2f(1344, 0);

    glVertex2f(1242, 0);
    glVertex2f(1349, 96);
    glVertex2f(1313, 124);

    glVertex2f(1313, 124);
    glVertex2f(1349, 96);
    glVertex2f(1340, 269);

    glVertex2f(1510, 0);
    glVertex2f(1597, 66);
    glVertex2f(1571, 0);
    glEnd();

    //побочные камни задний план
    glColor3ub(93, 109, 124);
    glBegin(GL_TRIANGLES);

    glVertex2f(182, 0);
    glVertex2f(287, 25);
    glVertex2f(247, 0);

    glVertex2f(182, 0);
    glVertex2f(287, 25);
    glVertex2f(355, 96);
    glEnd();

    glColor3ub(56, 72, 82);
    glBegin(GL_TRIANGLES);

    glVertex2f(143, 69);
    glVertex2f(249, 37);
    glVertex2f(355, 96);
    glEnd();
    //более светлые задние камни
    glColor3ub(93, 109, 124);
    glBegin(GL_QUADS);
    glVertex2f(1397, 0);
    glVertex2f(1450, 0);
    glVertex2f(1503, 27);
    glVertex2f(1365, 46);
    glEnd();

    glColor3ub(93, 109, 124);
    glBegin(GL_TRIANGLES);
    glVertex2f(1404, 160);
    glVertex2f(1503, 27);
    glVertex2f(1365, 46);

    glVertex2f(1404, 160);
    glVertex2f(1503, 27);
    glVertex2f(1600, 188);

    glVertex2f(1600, 188);
    glVertex2f(1404, 160);
    glVertex2f(1384, 461);

    glVertex2f(1369, 152);
    glVertex2f(1404, 160);
    glVertex2f(1384, 461);

    glVertex2f(1600, 188);
    glVertex2f(1384, 461);
    glVertex2f(1600, 622);

    glVertex2f(1368, 519);
    glVertex2f(1384, 461);
    glVertex2f(1600, 622);

    glVertex2f(1368, 519);
    glVertex2f(1323, 573);
    glVertex2f(1600, 622);

    glVertex2f(1384, 461);
    glVertex2f(1368, 519);
    glVertex2f(1321, 375);

    glVertex2f(1323, 573);
    glVertex2f(1600, 622);
    glVertex2f(1346, 623);

    glVertex2f(1250, 101);
    glVertex2f(1190, 12);
    glVertex2f(1236, 139);

    glVertex2f(1250, 101);
    glVertex2f(1232, 148);
    glVertex2f(1276, 178);

    glVertex2f(1258, 139);
    glVertex2f(1280, 128);
    glVertex2f(1276, 178);

    glVertex2f(1316, 325);
    glVertex2f(1280, 128);
    glVertex2f(1276, 178);

    glVertex2f(1236, 328);
    glVertex2f(1280, 128);
    glVertex2f(1323, 327);

    glVertex2f(1091, 517);
    glVertex2f(1168, 321);
    glVertex2f(1273, 310);
    glEnd();

    glColor3ub(93, 109, 124);
    glBegin(GL_QUADS);

    glVertex2f(1092, 312);
    glVertex2f(1105, 597);
    glVertex2f(1122, 597);
    glVertex2f(1111, 300);
    glEnd();

    glColor3ub(93, 109, 124);
    glBegin(GL_TRIANGLES);

    glVertex2f(1190, 12);
    glVertex2f(1199, 142);
    glVertex2f(1093, 338);

    glVertex2f(1092, 312);
    glVertex2f(1193, 143);
    glVertex2f(1093, 338);

    glVertex2f(1092, 312);
    glVertex2f(1017, 376);
    glVertex2f(1093, 338);

    glVertex2f(1165, 126);
    glVertex2f(1190, 12);
    glVertex2f(1117, 109);

    glVertex2f(1165, 126);
    glVertex2f(1041, 149);
    glVertex2f(1117, 109);

    glVertex2f(1165, 126);
    glVertex2f(1041, 149);
    glVertex2f(1046, 159);

    glVertex2f(957, 163);
    glVertex2f(1041, 149);
    glVertex2f(1046, 159);

    glVertex2f(957, 163);
    glVertex2f(1067, 47);
    glVertex2f(1034, 162);

    glVertex2f(957, 163);
    glVertex2f(1067, 47);
    glVertex2f(1026, 76);

    glVertex2f(1044, 120);
    glVertex2f(1067, 47);
    glVertex2f(1100, 36);

    glVertex2f(973, 163);
    glVertex2f(975, 110);
    glVertex2f(946, 90);

    glVertex2f(957, 164);
    glVertex2f(947, 90);
    glVertex2f(976, 142);

    glVertex2f(976, 142);
    glVertex2f(907, 85);
    glVertex2f(874, 103);

    glVertex2f(976, 142);
    glVertex2f(909, 161);
    glVertex2f(874, 103);

    glVertex2f(820, 171);
    glVertex2f(909, 161);
    glVertex2f(842, 0);

    glVertex2f(820, 169);
    glVertex2f(833, 169);
    glVertex2f(814, 199);


    glVertex2f(820, 169);
    glVertex2f(788, 207);
    glVertex2f(814, 199);

    glVertex2f(820, 169);
    glVertex2f(788, 207);
    glVertex2f(803, 78);

    glVertex2f(747, 129);
    glVertex2f(788, 207);
    glVertex2f(803, 78);

    glVertex2f(747, 129);
    glVertex2f(772, 11);
    glVertex2f(803, 78);
    glEnd();

    glColor3ub(93, 109, 124);
    glBegin(GL_QUADS);

    glVertex2f(953, 144);
    glVertex2f(614, 308);
    glVertex2f(549, 623);
    glVertex2f(1112, 617);

    glVertex2f(603, 0);
    glVertex2f(568, 0);
    glVertex2f(377, 115);
    glVertex2f(586, 167);
    glEnd();

    glColor3ub(93, 109, 124);
    glBegin(GL_TRIANGLES);

    glVertex2f(377, 115);
    glVertex2f(586, 167);
    glVertex2f(548, 271);

    glVertex2f(377, 115);
    glVertex2f(345, 350);
    glVertex2f(548, 271);

    glVertex2f(576, 286);
    glVertex2f(345, 350);
    glVertex2f(548, 271);

    glVertex2f(576, 286);
    glVertex2f(345, 350);
    glVertex2f(589, 377);

    glVertex2f(581, 430);
    glVertex2f(345, 350);
    glVertex2f(589, 377);

    glVertex2f(581, 430);
    glVertex2f(345, 350);
    glVertex2f(617, 616);

    glVertex2f(281, 632);
    glVertex2f(345, 350);
    glVertex2f(617, 616);

    glVertex2f(70, 54);
    glVertex2f(111, 125);
    glVertex2f(0, 157);

    glVertex2f(81, 240);
    glVertex2f(111, 125);
    glVertex2f(0, 157);

    glVertex2f(0, 201);
    glVertex2f(189, 395);
    glVertex2f(198, 529);

    glVertex2f(0, 201);
    glVertex2f(0, 647);
    glVertex2f(198, 529);

    glVertex2f(208, 422);
    glVertex2f(254, 422);
    glVertex2f(220, 287);

    glVertex2f(243, 251);
    glVertex2f(254, 422);
    glVertex2f(220, 287);

    glVertex2f(243, 393);
    glVertex2f(254, 422);
    glVertex2f(292, 191);

    glVertex2f(243, 393);
    glVertex2f(340, 213);
    glVertex2f(292, 191);

    glVertex2f(330, 161);
    glVertex2f(340, 213);
    glVertex2f(292, 191);
    glEnd();

    //затемнения



    glColor3ub(56, 73, 83);
    glBegin(GL_TRIANGLES);

    glVertex2f(1388, 176);
    glVertex2f(1389, 296);
    glVertex2f(1458, 204);

    glVertex2f(1442, 434);
    glVertex2f(1389, 296);
    glVertex2f(1416, 254);

    glVertex2f(1442, 434);
    glVertex2f(1389, 296);
    glVertex2f(1400, 543);

    glVertex2f(1231, 148);
    glVertex2f(1275, 178);
    glVertex2f(1187, 328);

    glVertex2f(1243, 313);
    glVertex2f(1275, 178);
    glVertex2f(1187, 328);

    glVertex2f(1107, 473);
    glVertex2f(1114, 326);
    glVertex2f(1174, 306);

    glVertex2f(1160, 125);
    glVertex2f(1088, 177);
    glVertex2f(1106, 291);

    glVertex2f(1092, 309);
    glVertex2f(1088, 177);
    glVertex2f(1106, 291);

    glVertex2f(773, 8);
    glVertex2f(747, 129);
    glVertex2f(714, 201);

    glVertex2f(824, 270);
    glVertex2f(747, 129);
    glVertex2f(714, 201);


    glVertex2f(824, 270);
    glVertex2f(656, 244);
    glVertex2f(714, 201);

    glVertex2f(589, 193);
    glVertex2f(589, 374);
    glVertex2f(606, 258);

    glVertex2f(589, 193);
    glVertex2f(589, 374);
    glVertex2f(573, 231);

    glVertex2f(377, 118);
    glVertex2f(331, 234);
    glVertex2f(345, 349);

    glVertex2f(180, 273);
    glVertex2f(202, 268);
    glVertex2f(191, 395);

    glVertex2f(78, 317);
    glVertex2f(22, 254);
    glVertex2f(46, 442);

    glVertex2f(115, 319);
    glVertex2f(72, 342);
    glVertex2f(59, 299);
    glEnd();

    //светлые передние камни


    glColor3ub(148, 160, 174);
    glBegin(GL_TRIANGLES);

    glVertex2f(1447, 344);
    glVertex2f(1526, 113);
    glVertex2f(1600, 153);

    glVertex2f(1600, 83);
    glVertex2f(1526, 113);
    glVertex2f(1600, 153);

    glVertex2f(1447, 344);
    glVertex2f(1526, 113);
    glVertex2f(1410, 185);

    glVertex2f(1437, 36);
    glVertex2f(1526, 113);
    glVertex2f(1410, 185);

    glVertex2f(1600, 464);
    glVertex2f(1547, 444);
    glVertex2f(1600, 309);

    glVertex2f(1583, 229);
    glVertex2f(1547, 444);
    glVertex2f(1600, 309);
    glEnd();

    glColor3ub(148, 160, 174);
    glBegin(GL_QUADS);

    glVertex2f(1600, 505);
    glVertex2f(1600, 566);
    glVertex2f(1522, 494);
    glVertex2f(1543, 465);

    glVertex2f(1309, 326);
    glVertex2f(1257, 327);
    glVertex2f(1110, 496);
    glVertex2f(1117, 553);

    glVertex2f(1178, 365);
    glVertex2f(1151, 342);
    glVertex2f(1197, 142);
    glVertex2f(1235, 137);
    glEnd();

    glColor3ub(148, 160, 174);
    glBegin(GL_TRIANGLES);

    glVertex2f(1191, 11);
    glVertex2f(1197, 142);
    glVertex2f(1235, 137);

    glVertex2f(1172, 0);
    glVertex2f(1111, 87);
    glVertex2f(1111, 16);

    glVertex2f(1052, 95);
    glVertex2f(1111, 87);
    glVertex2f(1111, 16);

    glVertex2f(1052, 95);
    glVertex2f(1111, 87);
    glVertex2f(1035, 149);

    glVertex2f(1160, 125);
    glVertex2f(1043, 158);
    glVertex2f(977, 271);

    glVertex2f(959, 162);
    glVertex2f(1043, 158);
    glVertex2f(977, 271);

    glVertex2f(959, 162);
    glVertex2f(835, 276);
    glVertex2f(977, 271);
    glEnd();

    glColor3ub(148, 160, 174);
    glBegin(GL_QUADS);

    glVertex2f(833, 169);
    glVertex2f(915, 159);
    glVertex2f(822, 273);
    glVertex2f(750, 269);

    glVertex2f(956, 125);
    glVertex2f(941, 67);
    glVertex2f(877, 0);
    glVertex2f(910, 90);

    glVertex2f(1052, 558);
    glVertex2f(983, 515);
    glVertex2f(975, 561);
    glVertex2f(1038, 578);

    glVertex2f(966, 292);
    glVertex2f(768, 300);
    glVertex2f(760, 398);
    glVertex2f(891, 373);
    glEnd();

    glColor3ub(148, 160, 174);
    glBegin(GL_TRIANGLES);

    glVertex2f(872, 471);
    glVertex2f(760, 398);
    glVertex2f(891, 373);

    glVertex2f(872, 471);
    glVertex2f(760, 398);
    glVertex2f(761, 552);

    glVertex2f(872, 471);
    glVertex2f(813, 593);
    glVertex2f(761, 552);
    glEnd();

    glColor3ub(148, 160, 174);
    glBegin(GL_QUADS);

    glVertex2f(754, 301);
    glVertex2f(714, 320);
    glVertex2f(590, 570);
    glVertex2f(658, 583);

    glVertex2f(131, 346);
    glVertex2f(51, 504);
    glVertex2f(60, 552);
    glVertex2f(133, 494);

    glVertex2f(0, 510);
    glVertex2f(21, 521);
    glVertex2f(39, 603);
    glVertex2f(0, 573);
    glEnd();

    glColor3ub(148, 160, 174);
    glBegin(GL_TRIANGLES);

    glVertex2f(0, 469);
    glVertex2f(36, 496);
    glVertex2f(0, 317);

    glVertex2f(0, 158);
    glVertex2f(71, 55);
    glVertex2f(0, 82);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_QUADS);

    glVertex2f(1584, 231);
    glVertex2f(1542, 263);
    glVertex2f(1461, 496);
    glVertex2f(1549, 443);

    glVertex2f(1116, 554);
    glVertex2f(1329, 574);
    glVertex2f(1369, 516);
    glVertex2f(1311, 316);

    glVertex2f(1321, 374);
    glVertex2f(1385, 462);
    glVertex2f(1333, 234);
    glVertex2f(1311, 316);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_TRIANGLES);

    glVertex2f(1333, 234);
    glVertex2f(1311, 316);
    glVertex2f(1281, 128);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_QUADS);

    glVertex2f(1196, 145);
    glVertex2f(1165, 326);
    glVertex2f(1110, 407);
    glVertex2f(1111, 305);

    glVertex2f(1091, 337);
    glVertex2f(1017, 377);
    glVertex2f(970, 485);
    glVertex2f(1028, 530);

    glVertex2f(893, 471);
    glVertex2f(878, 512);
    glVertex2f(925, 512);
    glVertex2f(971, 485);

    glVertex2f(893, 471);
    glVertex2f(898, 394);
    glVertex2f(1096, 204);
    glVertex2f(1095, 320);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_TRIANGLES);

    glVertex2f(1017, 377);
    glVertex2f(971, 485);
    glVertex2f(893, 471);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_QUADS);

    glVertex2f(960, 163);
    glVertex2f(835, 275);
    glVertex2f(953, 258);
    glVertex2f(1049, 196);
    glEnd();

    glColor3ub(148, 160, 174);
    glBegin(GL_TRIANGLES);

    glVertex2f(952, 262);
    glVertex2f(965, 227);
    glVertex2f(910, 266);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_QUADS);

    glVertex2f(796, 259);
    glVertex2f(954, 143);
    glVertex2f(764, 216);
    glVertex2f(747, 253);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_TRIANGLES);

    glVertex2f(796, 259);
    glVertex2f(747, 253);
    glVertex2f(659, 297);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_QUADS);

    glVertex2f(785, 475);
    glVertex2f(929, 305);
    glVertex2f(769, 300);
    glVertex2f(760, 399);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_TRIANGLES);

    glVertex2f(785, 475);
    glVertex2f(760, 399);
    glVertex2f(761, 553);
    glEnd();

    glColor3ub(148, 160, 174);
    glBegin(GL_TRIANGLES);

    glVertex2f(818, 361);
    glVertex2f(884, 362);
    glVertex2f(902, 339);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_QUADS);

    glVertex2f(704, 300);
    glVertex2f(618, 336);
    glVertex2f(582, 524);
    glVertex2f(695, 334);

    glVertex2f(727, 255);
    glVertex2f(673, 282);
    glVertex2f(618, 245);
    glVertex2f(690, 173);

    glVertex2f(618, 245);
    glVertex2f(690, 173);
    glVertex2f(621, 109);
    glVertex2f(605, 164);

    glVertex2f(621, 109);
    glVertex2f(690, 173);
    glVertex2f(739, 106);
    glVertex2f(761, 13);

    glVertex2f(593, 24);
    glVertex2f(537, 48);
    glVertex2f(482, 96);
    glVertex2f(568, 83);

    glVertex2f(532, 276);
    glVertex2f(372, 228);
    glVertex2f(482, 96);
    glVertex2f(568, 83);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_TRIANGLES);

    glVertex2f(482, 96);
    glVertex2f(372, 228);
    glVertex2f(463, 84);

    glVertex2f(366, 330);
    glVertex2f(372, 228);
    glVertex2f(532, 276);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_QUADS);

    glVertex2f(532, 276);
    glVertex2f(452, 298);
    glVertex2f(578, 402);
    glVertex2f(565, 293);

    glVertex2f(452, 298);
    glVertex2f(512, 535);
    glVertex2f(430, 557);
    glVertex2f(364, 384);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_TRIANGLES);

    glVertex2f(452, 298);
    glVertex2f(578, 402);
    glVertex2f(512, 535);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_QUADS);

    glVertex2f(337, 433);
    glVertex2f(384, 436);
    glVertex2f(364, 542);
    glVertex2f(329, 488);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_TRIANGLES);

    glVertex2f(364, 384);
    glVertex2f(384, 436);
    glVertex2f(337, 433);

    glVertex2f(347, 392);
    glVertex2f(224, 470);
    glVertex2f(325, 183);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_QUADS);

    glVertex2f(347, 392);
    glVertex2f(224, 470);
    glVertex2f(246, 521);
    glVertex2f(274, 503);

    glVertex2f(85, 32);
    glVertex2f(146, 31);
    glVertex2f(378, 109);
    glVertex2f(275, 191);

    glVertex2f(275, 191);
    glVertex2f(189, 110);
    glVertex2f(139, 155);
    glVertex2f(182, 177);

    glVertex2f(139, 155);
    glVertex2f(255, 210);
    glVertex2f(204, 269);
    glVertex2f(120, 288);
    glEnd();

    glColor3ub(164, 173, 188);
    glBegin(GL_TRIANGLES);

    glVertex2f(139, 155);
    glVertex2f(120, 288);
    glVertex2f(83, 238);
    glEnd();

    //СУПЕР СВЕТЛЫЕ КАМНИ
    glColor3ub(216, 220, 229);
    glBegin(GL_QUADS);

    glVertex2f(1600, 362);
    glVertex2f(1600, 410);
    glVertex2f(1561, 371);
    glVertex2f(1570, 317);

    glVertex2f(1561, 274);
    glVertex2f(1491, 467);
    glVertex2f(1389, 576);
    glVertex2f(1447, 411);

    glVertex2f(1525, 112);
    glVertex2f(1569, 132);
    glVertex2f(1600, 110);
    glVertex2f(1600, 82);

    glVertex2f(1554, 208);
    glVertex2f(1503, 181);
    glVertex2f(1453, 184);
    glVertex2f(1507, 267);
    glEnd();

    glColor3ub(216, 220, 229);
    glBegin(GL_TRIANGLES);

    glVertex2f(1503, 181);
    glVertex2f(1453, 184);
    glVertex2f(1437, 36);

    glVertex2f(1333, 390);
    glVertex2f(1273, 374);
    glVertex2f(1322, 424);
    glEnd();

    glColor3ub(216, 220, 229);
    glBegin(GL_QUADS);

    glVertex2f(1273, 374);
    glVertex2f(1322, 424);
    glVertex2f(1240, 512);
    glVertex2f(1142, 540);
    glEnd();

    glColor3ub(216, 220, 229);
    glBegin(GL_TRIANGLES);

    glVertex2f(1322, 424);
    glVertex2f(1240, 512);
    glVertex2f(1298, 497);

    glVertex2f(1298, 497);
    glVertex2f(1240, 512);
    glVertex2f(1328, 574);
    glEnd();

    glColor3ub(44, 56, 68);
    glBegin(GL_TRIANGLES);

    glVertex2f(1560, 580);
    glVertex2f(1593, 620);
    glVertex2f(1550, 622);

    glVertex2f(1380, 617);
    glVertex2f(1472, 540);
    glVertex2f(1451, 638);
    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(1525, 626);
    glVertex2f(1505, 610);
    glVertex2f(1450, 607);
    glVertex2f(1450, 634);

    glVertex2f(1175, 603);
    glVertex2f(1316, 603);
    glVertex2f(1327, 633);
    glVertex2f(1163, 630);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(1326, 575);
    glVertex2f(1340, 608);
    glVertex2f(1260, 610);

    glVertex2f(1133, 610);
    glVertex2f(1180, 576);
    glVertex2f(1052, 594);

    glVertex2f(1098, 464);
    glVertex2f(1109, 590);
    glVertex2f(1052, 594);

    glVertex2f(967, 490);
    glVertex2f(956, 583);
    glVertex2f(913, 584);

    glVertex2f(861, 561);
    glVertex2f(956, 583);
    glVertex2f(822, 582);

    glVertex2f(861, 561);
    glVertex2f(865, 487);
    glVertex2f(817, 585);

    glVertex2f(731, 528);
    glVertex2f(796, 582);
    glVertex2f(711, 588);

    glVertex2f(630, 601);
    glVertex2f(532, 560);
    glVertex2f(364, 626);

    glVertex2f(581, 430);
    glVertex2f(532, 560);
    glVertex2f(570, 590);

    glVertex2f(380, 506);
    glVertex2f(431, 610);
    glVertex2f(380, 640);

    glVertex2f(332, 535);
    glVertex2f(411, 624);
    glVertex2f(318, 634);

    glVertex2f(116, 501);
    glVertex2f(70, 620);
    glVertex2f(41, 628);

    glVertex2f(29, 547);
    glVertex2f(71, 604);
    glVertex2f(47, 633);

    glVertex2f(12, 590);
    glVertex2f(52, 617);
    glVertex2f(0, 626);
    glEnd();

    glColor3ub(51, 65, 76);
    glBegin(GL_TRIANGLES);

    glVertex2f(0, 612);
    glVertex2f(0, 900);
    glVertex2f(1600, 707);

    glVertex2f(227, 587);
    glVertex2f(0, 641);
    glVertex2f(580, 900);

    glVertex2f(250, 608);
    glVertex2f(405, 623);
    glVertex2f(0, 900);

    glVertex2f(341, 635);
    glVertex2f(534, 587);
    glVertex2f(721, 643);
    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(380, 631);
    glVertex2f(658, 582);
    glVertex2f(977, 575);
    glVertex2f(1370, 650);

    glVertex2f(1175, 603);
    glVertex2f(1316, 603);
    glVertex2f(1327, 633);
    glVertex2f(1163, 630);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(1207, 642);
    glVertex2f(1341, 596);
    glVertex2f(1544, 650);

    glVertex2f(1600, 613);
    glVertex2f(1416, 620);
    glVertex2f(1600, 900);
    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(1600, 635);
    glVertex2f(0, 635);
    glVertex2f(0, 900);
    glVertex2f(1600, 900);
    glEnd();

    glColor3ub(93, 109, 124);
    glBegin(GL_POLYGON);

    glVertex2f(162, 632);
    glVertex2f(291, 636);
    glVertex2f(320, 658);
    glVertex2f(282, 745);
    glVertex2f(206, 779);
    glVertex2f(74, 767);
    glVertex2f(50, 721);
    glVertex2f(102, 658);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(1227, 679);
    glVertex2f(1300, 654);
    glVertex2f(1408, 657);
    glVertex2f(1472, 680);
    glVertex2f(1440, 730);
    glVertex2f(1368, 766);
    glVertex2f(1248, 769);
    glVertex2f(1211, 746);
    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(346, 672);
    glVertex2f(402, 715);
    glVertex2f(434, 790);
    glVertex2f(306, 754);

    glVertex2f(422, 713);
    glVertex2f(595, 646);
    glVertex2f(571, 730);
    glVertex2f(449, 788);

    glVertex2f(604, 655);
    glVertex2f(742, 658);
    glVertex2f(692, 762);
    glVertex2f(582, 724);

    glVertex2f(750, 663);
    glVertex2f(819, 689);
    glVertex2f(858, 745);
    glVertex2f(715, 764);

    glVertex2f(835, 690);
    glVertex2f(1068, 648);
    glVertex2f(1043, 724);
    glVertex2f(870, 735);

    glVertex2f(1082, 648);
    glVertex2f(1213, 681);
    glVertex2f(1203, 743);
    glVertex2f(1054, 728);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(3);
    glBegin(GL_LINE_STRIP);

    glVertex2f(0, 614);
    glVertex2f(86, 618);
    glVertex2f(225, 588);
    glVertex2f(256, 609);
    glVertex2f(393, 622);
    glVertex2f(541, 585);
    glVertex2f(568, 596);
    glVertex2f(658, 583);
    glVertex2f(977, 576);
    glVertex2f(1172, 612);
    glVertex2f(1175, 601);
    glVertex2f(1316, 604);
    glVertex2f(1338, 595);
    glVertex2f(1448, 621);
    glVertex2f(1600, 614);

   
    glEnd();
    //рендерим персонажей.
    render_for_water();
    render_for_fire();
    render_for_earth();

    glutSwapBuffers();
}
