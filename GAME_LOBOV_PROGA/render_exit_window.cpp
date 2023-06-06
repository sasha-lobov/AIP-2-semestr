#include "render_exit_window.h"
#include <cmath>

void render_begin_window(void)
{
	glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(0, 0);
	glVertex2f(1600, 0);
	glVertex2f(1600, 900);
	glVertex2f(0, 900);
	glEnd();

	glPushMatrix();
	glScalef(0.8, 0.8, 1);

	glTranslatef(150, 100, 0);
	render_for_water(hero_water);
	glTranslatef(-175, 150, 0);
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2f(370, 562);
	glVertex2f(388, 562);
	glVertex2f(388, 711);
	glVertex2f(370, 711);
	glEnd();

	glTranslatef(750, -250, 0);
	render_for_fire(hero_fire);
	glTranslatef(-200, 250, 0);
	glBegin(GL_QUADS);
	glVertex2f(370, 562);
	glVertex2f(388, 562);
	glVertex2f(388, 711);
	glVertex2f(370, 711);
	glEnd();
	glTranslatef(50, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(370, 562);
	glVertex2f(388, 562);
	glVertex2f(388, 711);
	glVertex2f(370, 711);
	glEnd();

	glTranslatef(700, -250, 0);
	render_for_earth(hero_earth); 
	glScalef(0.8, 0.8, 1);
	glTranslatef(1050, 250, 0);
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2f(370, 562);
	glVertex2f(388, 562);
	glVertex2f(388, 711);
	glVertex2f(370, 711);
	glEnd();
	glTranslatef(50, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(370, 562);
	glVertex2f(388, 562);
	glVertex2f(388, 711);
	glVertex2f(370, 711);
	glEnd();
	glTranslatef(50, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(370, 562);
	glVertex2f(388, 562);
	glVertex2f(388, 711);
	glVertex2f(370, 711);
	glEnd();
	glPopMatrix();
}
void render_win(double& alpha_window)
{
	glPushMatrix();

	glScalef(1.5, 1, 1);
	glTranslatef(-250, 50, 0);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE);

	glColor4f(0, 255, 0, -0.2 + 0.1 * alpha_window);
	glBegin(GL_TRIANGLES);
	glVertex2d(492.86, 334.81);
	glVertex2d(527.18, 333.77);
	glVertex2d(525.1, 338.97);

	glVertex2d(492.86, 334.81);
	glVertex2d(525.1, 338.97);
	glVertex2d(517.82, 346.25);

	glVertex2d(556.29, 346.25);
	glVertex2d(544.85, 337.93);
	glVertex2d(549.01, 333.77);

	glVertex2d(556.29, 346.25);
	glVertex2d(549.01, 333.77);
	glVertex2d(571.89, 337.93);

	glVertex2d(556.29, 346.25);
	glVertex2d(571.89, 337.93);
	glVertex2d(567.73, 345.21);

	glVertex2d(542.77, 445.03);
	glVertex2d(550.05, 450.23);
	glVertex2d(549.01, 453.35);

	glVertex2d(542.77, 445.03);
	glVertex2d(549.01, 453.35);
	glVertex2d(515.74, 452.31);

	glVertex2d(542.77, 445.03);
	glVertex2d(515.74, 452.31);
	glVertex2d(514.7, 450.23);

	glVertex2d(542.77, 445.03);
	glVertex2d(514.7, 450.23);
	glVertex2d(527.18, 441.91);

	glVertex2d(500.14, 341.05);
	glVertex2d(493.9, 337.93);
	glVertex2d(492.86, 334.81);

	glVertex2d(500.14, 341.05);
	glVertex2d(492.86, 334.81);
	glVertex2d(517.82, 346.25);

	glVertex2d(536.53, 380.57);
	glVertex2d(556.29, 346.25);
	glVertex2d(567.73, 345.21);

	glVertex2d(536.53, 380.57);
	glVertex2d(567.73, 345.21);
	glVertex2d(539.65, 398.24);

	glVertex2d(539.65, 398.24);
	glVertex2d(542.77, 445.03);
	glVertex2d(527.18, 441.91);

	glVertex2d(539.65, 398.24);
	glVertex2d(527.18, 441.91);
	glVertex2d(528.22, 398.24);

	glVertex2d(528.22, 398.24);
	glVertex2d(500.14, 341.05);
	glVertex2d(517.82, 346.25);

	glVertex2d(528.22, 398.24);
	glVertex2d(517.82, 346.25);
	glVertex2d(536.53, 380.57);

	glVertex2d(528.22, 398.24);
	glVertex2d(536.53, 380.57);
	glVertex2d(539.65, 398.24);

	glVertex2d(612.44, 332.73);
	glVertex2d(610.36, 338.97);
	glVertex2d(595.8, 352.49);

	glVertex2d(588.52, 371.21);
	glVertex2d(588.52, 396.16);
	glVertex2d(586.44, 422.16);

	glVertex2d(596.84, 442.95);
	glVertex2d(610.36, 449.19);
	glVertex2d(613.48, 454.39);

	glVertex2d(596.84, 442.95);
	glVertex2d(613.48, 454.39);
	glVertex2d(599.96, 451.27);

	glVertex2d(596.84, 442.95);
	glVertex2d(599.96, 451.27);
	glVertex2d(584.37, 435.67);

	glVertex2d(596.84, 442.95);
	glVertex2d(584.37, 435.67);
	glVertex2d(573.97, 413.84);

	glVertex2d(573.97, 413.84);
	glVertex2d(572.93, 385.76);
	glVertex2d(579.17, 360.81);

	glVertex2d(573.97, 413.84);
	glVertex2d(579.17, 360.81);
	glVertex2d(586.44, 342.09);

	glVertex2d(586.44, 342.09);
	glVertex2d(602.04, 332.73);
	glVertex2d(612.44, 332.73);

	glVertex2d(586.44, 342.09);
	glVertex2d(612.44, 332.73);
	glVertex2d(595.8, 352.49);

	glVertex2d(586.44, 422.16);
	glVertex2d(596.84, 442.95);
	glVertex2d(573.97, 413.84);

	glVertex2d(586.44, 342.09);
	glVertex2d(595.8, 352.49);
	glVertex2d(588.52, 371.21);

	glVertex2d(588.52, 371.21);
	glVertex2d(586.44, 422.16);
	glVertex2d(573.97, 413.84);

	glVertex2d(588.52, 371.21);
	glVertex2d(573.97, 413.84);
	glVertex2d(586.44, 342.09);

	glVertex2d(606.2, 340.01);
	glVertex2d(607.24, 332.73);
	glVertex2d(621.8, 335.85);

	glVertex2d(606.2, 340.01);
	glVertex2d(621.8, 335.85);
	glVertex2d(635.32, 344.17);

	glVertex2d(635.32, 344.17);
	glVertex2d(645.71, 359.77);
	glVertex2d(649.87, 380.57);

	glVertex2d(635.32, 344.17);
	glVertex2d(649.87, 380.57);
	glVertex2d(648.83, 404.48);

	glVertex2d(635.32, 344.17);
	glVertex2d(648.83, 404.48);
	glVertex2d(647.79, 425.28);

	glVertex2d(647.79, 425.28);
	glVertex2d(638.43, 441.91);
	glVertex2d(629.08, 448.15);

	glVertex2d(647.79, 425.28);
	glVertex2d(629.08, 448.15);
	glVertex2d(612.44, 454.39);

	glVertex2d(612.44, 454.39);
	glVertex2d(609.32, 452.31);
	glVertex2d(608.28, 446.07);

	glVertex2d(612.44, 454.39);
	glVertex2d(608.28, 446.07);
	glVertex2d(613.48, 446.07);

	glVertex2d(621.8, 345.21);
	glVertex2d(606.2, 340.01);
	glVertex2d(635.32, 344.17);

	glVertex2d(612.44, 454.39);
	glVertex2d(613.48, 446.07);
	glVertex2d(625.96, 440.87);

	glVertex2d(635.32, 363.93);
	glVertex2d(621.8, 345.21);
	glVertex2d(635.32, 344.17);

	glVertex2d(647.79, 425.28);
	glVertex2d(612.44, 454.39);
	glVertex2d(625.96, 440.87);

	glVertex2d(638.43, 385.76);
	glVertex2d(635.32, 363.93);
	glVertex2d(635.32, 344.17);

	glVertex2d(638.43, 385.76);
	glVertex2d(635.32, 344.17);
	glVertex2d(647.79, 425.28);

	glVertex2d(647.79, 425.28);
	glVertex2d(625.96, 440.87);
	glVertex2d(636.36, 426.32);

	glVertex2d(639.47, 409.68);
	glVertex2d(638.43, 385.76);
	glVertex2d(647.79, 425.28);

	glVertex2d(647.79, 425.28);
	glVertex2d(636.36, 426.32);
	glVertex2d(639.47, 409.68);

	glVertex2d(652.99, 334.81);
	glVertex2d(683.15, 334.81);
	glVertex2d(673.79, 344.17);

	glVertex2d(712.26, 345.21);
	glVertex2d(706.02, 335.85);
	glVertex2d(727.86, 335.85);

	glVertex2d(712.26, 345.21);
	glVertex2d(727.86, 335.85);
	glVertex2d(722.66, 345.21);

	glVertex2d(722.66, 345.21);
	glVertex2d(720.58, 432.56);
	glVertex2d(714.34, 445.03);

	glVertex2d(714.34, 445.03);
	glVertex2d(701.86, 453.35);
	glVertex2d(687.31, 453.35);

	glVertex2d(714.34, 445.03);
	glVertex2d(687.31, 453.35);
	glVertex2d(677.95, 449.19);

	glVertex2d(714.34, 445.03);
	glVertex2d(677.95, 449.19);
	glVertex2d(666.51, 441.91);

	glVertex2d(666.51, 441.91);
	glVertex2d(663.39, 426.32);
	glVertex2d(658.19, 342.09);

	glVertex2d(658.19, 342.09);
	glVertex2d(652.99, 334.81);
	glVertex2d(673.79, 344.17);

	glVertex2d(713.3, 428.4);
	glVertex2d(712.26, 345.21);
	glVertex2d(722.66, 345.21);

	glVertex2d(713.3, 428.4);
	glVertex2d(722.66, 345.21);
	glVertex2d(714.34, 445.03);

	glVertex2d(666.51, 441.91);
	glVertex2d(658.19, 342.09);
	glVertex2d(673.79, 344.17);

	glVertex2d(666.51, 441.91);
	glVertex2d(673.79, 344.17);
	glVertex2d(673.79, 419.04);

	glVertex2d(706.02, 438.79);
	glVertex2d(713.3, 428.4);
	glVertex2d(714.34, 445.03);

	glVertex2d(666.51, 441.91);
	glVertex2d(673.79, 419.04);
	glVertex2d(682.11, 434.63);

	glVertex2d(700.82, 443.99);
	glVertex2d(706.02, 438.79);
	glVertex2d(714.34, 445.03);

	glVertex2d(666.51, 441.91);
	glVertex2d(682.11, 434.63);
	glVertex2d(688.34, 442.95);

	glVertex2d(700.82, 443.99);
	glVertex2d(714.34, 445.03);
	glVertex2d(666.51, 441.91);

	glVertex2d(666.51, 441.91);
	glVertex2d(688.34, 442.95);
	glVertex2d(700.82, 443.99);

	glVertex2d(808.96, 336.89);
	glVertex2d(830.8, 333.77);
	glVertex2d(826.64, 342.09);

	glVertex2d(847.43, 361.85);
	glVertex2d(839.12, 342.09);
	glVertex2d(838.08, 336.89);

	glVertex2d(838.08, 336.89);
	glVertex2d(860.95, 336.89);
	glVertex2d(853.67, 345.21);

	glVertex2d(873.43, 336.89);
	glVertex2d(886.95, 335.85);
	glVertex2d(881.75, 340.01);

	glVertex2d(814.16, 342.09);
	glVertex2d(808.96, 336.89);
	glVertex2d(826.64, 342.09);

	glVertex2d(847.43, 361.85);
	glVertex2d(838.08, 336.89);
	glVertex2d(853.67, 345.21);

	glVertex2d(847.43, 361.85);
	glVertex2d(853.67, 345.21);
	glVertex2d(866.15, 400.32);

	glVertex2d(866.15, 400.32);
	glVertex2d(873.43, 336.89);
	glVertex2d(881.75, 340.01);

	glVertex2d(866.15, 400.32);
	glVertex2d(881.75, 340.01);
	glVertex2d(861.99, 450.23);

	glVertex2d(833.92, 451.27);
	glVertex2d(814.16, 342.09);
	glVertex2d(826.64, 342.09);

	glVertex2d(833.92, 451.27);
	glVertex2d(826.64, 342.09);
	glVertex2d(837.04, 397.2);

	glVertex2d(847.43, 361.85);
	glVertex2d(866.15, 400.32);
	glVertex2d(861.99, 450.23);

	glVertex2d(847.43, 361.85);
	glVertex2d(861.99, 450.23);
	glVertex2d(849.51, 394.08);

	glVertex2d(849.51, 394.08);
	glVertex2d(833.92, 451.27);
	glVertex2d(837.04, 397.2);

	glVertex2d(849.51, 394.08);
	glVertex2d(837.04, 397.2);
	glVertex2d(847.43, 361.85);

	glVertex2d(909.82, 338.97);
	glVertex2d(949.33, 341.05);
	glVertex2d(933.74, 348.33);

	glVertex2d(935.82, 442.95);
	glVertex2d(948.29, 450.23);
	glVertex2d(907.74, 450.23);

	glVertex2d(935.82, 442.95);
	glVertex2d(907.74, 450.23);
	glVertex2d(919.18, 442.95);

	glVertex2d(919.18, 346.25);
	glVertex2d(909.82, 338.97);
	glVertex2d(933.74, 348.33);

	glVertex2d(933.74, 348.33);
	glVertex2d(935.82, 442.95);
	glVertex2d(919.18, 442.95);

	glVertex2d(933.74, 348.33);
	glVertex2d(919.18, 442.95);
	glVertex2d(919.18, 346.25);

	glVertex2d(917.1, 342.09);
	glVertex2d(906.7, 336.89);
	glVertex2d(949.33, 334.81);

	glVertex2d(917.1, 342.09);
	glVertex2d(949.33, 334.81);
	glVertex2d(942.06, 345.21);

	glVertex2d(1027.32, 345.21);
	glVertex2d(1021.08, 335.85);
	glVertex2d(1047.07, 336.89);

	glVertex2d(1027.32, 345.21);
	glVertex2d(1047.07, 336.89);
	glVertex2d(1039.8, 346.25);

	glVertex2d(984.69, 441.91);
	glVertex2d(991.97, 450.23);
	glVertex2d(969.09, 448.15);

	glVertex2d(984.69, 441.91);
	glVertex2d(969.09, 448.15);
	glVertex2d(975.33, 440.87);

	glVertex2d(975.33, 342.09);
	glVertex2d(970.13, 338.97);
	glVertex2d(968.05, 334.81);

	glVertex2d(975.33, 342.09);
	glVertex2d(968.05, 334.81);
	glVertex2d(988.85, 336.89);

	glVertex2d(1030.44, 408.64);
	glVertex2d(1027.32, 345.21);
	glVertex2d(1039.8, 346.25);

	glVertex2d(1030.44, 408.64);
	glVertex2d(1039.8, 346.25);
	glVertex2d(1034.6, 453.35);

	glVertex2d(983.65, 367.05);
	glVertex2d(984.69, 441.91);
	glVertex2d(975.33, 440.87);

	glVertex2d(983.65, 367.05);
	glVertex2d(975.33, 440.87);
	glVertex2d(975.33, 342.09);

	glVertex2d(975.33, 342.09);
	glVertex2d(988.85, 336.89);
	glVertex2d(1030.44, 408.64);

	glVertex2d(975.33, 342.09);
	glVertex2d(1030.44, 408.64);
	glVertex2d(1034.6, 453.35);

	glVertex2d(975.33, 342.09);
	glVertex2d(1034.6, 453.35);
	glVertex2d(983.65, 367.05);


	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);

	glEnd();


	glDisable(GL_BLEND);
	glPopMatrix();
}
void render_died(double& alpha_window)
{
	glPushMatrix();

	glTranslatef(-50, -50, 0);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE);

	glColor4f(255, 0, 0, -0.2+0.1*alpha_window);
	glBegin(GL_TRIANGLES);
	glVertex2d(507.92, 590.14);
	glVertex2d(516.24, 578.69);
	glVertex2d(522.49, 574.53);

	glVertex2d(524.57, 492.31);
	glVertex2d(516.24, 469.41);
	glVertex2d(494.39, 399.67);

	glVertex2d(494.39, 399.67);
	glVertex2d(487.1, 392.39);
	glVertex2d(488.14, 387.18);

	glVertex2d(494.39, 399.67);
	glVertex2d(488.14, 387.18);
	glVertex2d(520.41, 387.18);

	glVertex2d(494.39, 399.67);
	glVertex2d(520.41, 387.18);
	glVertex2d(521.45, 392.39);

	glVertex2d(494.39, 399.67);
	glVertex2d(521.45, 392.39);
	glVertex2d(513.12, 395.51);

	glVertex2d(553.71, 397.59);
	glVertex2d(547.47, 393.43);
	glVertex2d(545.39, 385.1);

	glVertex2d(553.71, 397.59);
	glVertex2d(545.39, 385.1);
	glVertex2d(574.53, 387.18);

	glVertex2d(553.71, 397.59);
	glVertex2d(574.53, 387.18);
	glVertex2d(573.49, 392.39);

	glVertex2d(553.71, 397.59);
	glVertex2d(573.49, 392.39);
	glVertex2d(569.33, 397.59);

	glVertex2d(553.71, 397.59);
	glVertex2d(569.33, 397.59);
	glVertex2d(562.04, 405.92);

	glVertex2d(542.27, 578.69);
	glVertex2d(550.59, 582.86);
	glVertex2d(549.55, 590.14);

	glVertex2d(542.27, 578.69);
	glVertex2d(549.55, 590.14);
	glVertex2d(507.92, 590.14);

	glVertex2d(542.27, 578.69);
	glVertex2d(507.92, 590.14);
	glVertex2d(522.49, 574.53);

	glVertex2d(494.39, 399.67);
	glVertex2d(513.12, 395.51);
	glVertex2d(510.0, 401.76);

	glVertex2d(532.9, 471.49);
	glVertex2d(553.71, 397.59);
	glVertex2d(562.04, 405.92);

	glVertex2d(532.9, 471.49);
	glVertex2d(562.04, 405.92);
	glVertex2d(534.98, 500.63);

	glVertex2d(538.1, 565.16);
	glVertex2d(542.27, 578.69);
	glVertex2d(522.49, 574.53);

	glVertex2d(538.1, 565.16);
	glVertex2d(522.49, 574.53);
	glVertex2d(524.57, 564.12);

	glVertex2d(524.57, 492.31);
	glVertex2d(494.39, 399.67);
	glVertex2d(510.0, 401.76);

	glVertex2d(524.57, 492.31);
	glVertex2d(510.0, 401.76);
	glVertex2d(532.9, 471.49);

	glVertex2d(524.57, 492.31);
	glVertex2d(532.9, 471.49);
	glVertex2d(534.98, 500.63);

	glVertex2d(524.57, 492.31);
	glVertex2d(534.98, 500.63);
	glVertex2d(538.1, 565.16);

	glVertex2d(524.57, 492.31);
	glVertex2d(538.1, 565.16);
	glVertex2d(524.57, 564.12);

	glVertex2d(613.04, 379.9);
	glVertex2d(606.8, 399.67);
	glVertex2d(600.55, 412.16);

	glVertex2d(595.35, 429.86);
	glVertex2d(595.35, 445.47);
	glVertex2d(591.18, 469.41);

	glVertex2d(587.02, 496.47);
	glVertex2d(593.27, 527.69);
	glVertex2d(598.47, 557.88);

	glVertex2d(628.65, 396.55);
	glVertex2d(615.12, 389.27);
	glVertex2d(613.04, 377.82);

	glVertex2d(628.65, 396.55);
	glVertex2d(613.04, 377.82);
	glVertex2d(628.65, 380.94);

	glVertex2d(628.65, 396.55);
	glVertex2d(628.65, 380.94);
	glVertex2d(642.18, 394.47);

	glVertex2d(628.65, 396.55);
	glVertex2d(642.18, 394.47);
	glVertex2d(649.47, 410.08);

	glVertex2d(628.65, 396.55);
	glVertex2d(649.47, 410.08);
	glVertex2d(656.76, 429.86);

	glVertex2d(656.76, 429.86);
	glVertex2d(660.92, 452.76);
	glVertex2d(661.96, 474.61);

	glVertex2d(656.76, 429.86);
	glVertex2d(661.96, 474.61);
	glVertex2d(661.96, 496.47);

	glVertex2d(656.76, 429.86);
	glVertex2d(661.96, 496.47);
	glVertex2d(660.92, 518.33);

	glVertex2d(656.76, 429.86);
	glVertex2d(660.92, 518.33);
	glVertex2d(657.8, 538.1);

	glVertex2d(656.76, 429.86);
	glVertex2d(657.8, 538.1);
	glVertex2d(652.59, 554.76);

	glVertex2d(656.76, 429.86);
	glVertex2d(652.59, 554.76);
	glVertex2d(645.31, 571.41);

	glVertex2d(645.31, 571.41);
	glVertex2d(636.98, 587.02);
	glVertex2d(623.45, 592.22);

	glVertex2d(645.31, 571.41);
	glVertex2d(623.45, 592.22);
	glVertex2d(613.04, 591.18);

	glVertex2d(645.31, 571.41);
	glVertex2d(613.04, 591.18);
	glVertex2d(602.63, 584.94);

	glVertex2d(602.63, 584.94);
	glVertex2d(593.27, 578.69);
	glVertex2d(584.94, 559.96);

	glVertex2d(602.63, 584.94);
	glVertex2d(584.94, 559.96);
	glVertex2d(580.78, 544.35);

	glVertex2d(602.63, 584.94);
	glVertex2d(580.78, 544.35);
	glVertex2d(577.65, 521.45);

	glVertex2d(602.63, 584.94);
	glVertex2d(577.65, 521.45);
	glVertex2d(575.57, 495.43);

	glVertex2d(575.57, 495.43);
	glVertex2d(573.49, 471.49);
	glVertex2d(578.69, 449.63);

	glVertex2d(581.82, 429.86);
	glVertex2d(583.9, 413.2);
	glVertex2d(598.47, 393.43);

	glVertex2d(581.82, 429.86);
	glVertex2d(598.47, 393.43);
	glVertex2d(613.04, 379.9);

	glVertex2d(581.82, 429.86);
	glVertex2d(613.04, 379.9);
	glVertex2d(600.55, 412.16);

	glVertex2d(595.35, 429.86);
	glVertex2d(591.18, 469.41);
	glVertex2d(587.02, 496.47);

	glVertex2d(639.06, 411.12);
	glVertex2d(628.65, 396.55);
	glVertex2d(656.76, 429.86);

	glVertex2d(602.63, 584.94);
	glVertex2d(575.57, 495.43);
	glVertex2d(578.69, 449.63);

	glVertex2d(578.69, 449.63);
	glVertex2d(581.82, 429.86);
	glVertex2d(600.55, 412.16);

	glVertex2d(578.69, 449.63);
	glVertex2d(600.55, 412.16);
	glVertex2d(595.35, 429.86);

	glVertex2d(644.27, 438.18);
	glVertex2d(639.06, 411.12);
	glVertex2d(656.76, 429.86);

	glVertex2d(578.69, 449.63);
	glVertex2d(595.35, 429.86);
	glVertex2d(587.02, 496.47);

	glVertex2d(646.35, 468.37);
	glVertex2d(644.27, 438.18);
	glVertex2d(656.76, 429.86);

	glVertex2d(602.63, 584.94);
	glVertex2d(578.69, 449.63);
	glVertex2d(587.02, 496.47);

	glVertex2d(647.39, 485.02);
	glVertex2d(646.35, 468.37);
	glVertex2d(656.76, 429.86);

	glVertex2d(602.63, 584.94);
	glVertex2d(587.02, 496.47);
	glVertex2d(598.47, 557.88);

	glVertex2d(647.39, 512.08);
	glVertex2d(647.39, 485.02);
	glVertex2d(656.76, 429.86);

	glVertex2d(602.63, 584.94);
	glVertex2d(598.47, 557.88);
	glVertex2d(606.8, 573.49);

	glVertex2d(647.39, 512.08);
	glVertex2d(656.76, 429.86);
	glVertex2d(645.31, 571.41);

	glVertex2d(602.63, 584.94);
	glVertex2d(606.8, 573.49);
	glVertex2d(621.37, 578.69);

	glVertex2d(643.22, 538.1);
	glVertex2d(647.39, 512.08);
	glVertex2d(645.31, 571.41);

	glVertex2d(645.31, 571.41);
	glVertex2d(602.63, 584.94);
	glVertex2d(621.37, 578.69);

	glVertex2d(638.02, 556.84);
	glVertex2d(643.22, 538.1);
	glVertex2d(645.31, 571.41);

	glVertex2d(645.31, 571.41);
	glVertex2d(621.37, 578.69);
	glVertex2d(629.69, 573.49);

	glVertex2d(629.69, 573.49);
	glVertex2d(638.02, 556.84);
	glVertex2d(645.31, 571.41);

	glVertex2d(669.24, 397.59);
	glVertex2d(663.0, 386.14);
	glVertex2d(698.39, 385.1);

	glVertex2d(669.24, 397.59);
	glVertex2d(698.39, 385.1);
	glVertex2d(689.02, 394.47);

	glVertex2d(732.73, 401.76);
	glVertex2d(718.16, 385.1);
	glVertex2d(746.27, 385.1);

	glVertex2d(732.73, 401.76);
	glVertex2d(746.27, 385.1);
	glVertex2d(741.06, 397.59);

	glVertex2d(741.06, 397.59);
	glVertex2d(738.98, 538.1);
	glVertex2d(735.86, 561.0);

	glVertex2d(741.06, 397.59);
	glVertex2d(735.86, 561.0);
	glVertex2d(729.61, 576.61);

	glVertex2d(729.61, 576.61);
	glVertex2d(718.16, 588.06);
	glVertex2d(704.63, 590.14);

	glVertex2d(729.61, 576.61);
	glVertex2d(704.63, 590.14);
	glVertex2d(691.1, 588.06);

	glVertex2d(691.1, 588.06);
	glVertex2d(683.82, 576.61);
	glVertex2d(676.53, 559.96);

	glVertex2d(691.1, 588.06);
	glVertex2d(676.53, 559.96);
	glVertex2d(674.45, 542.27);

	glVertex2d(674.45, 542.27);
	glVertex2d(669.24, 397.59);
	glVertex2d(689.02, 394.47);

	glVertex2d(674.45, 542.27);
	glVertex2d(689.02, 394.47);
	glVertex2d(685.9, 547.47);

	glVertex2d(730.65, 539.14);
	glVertex2d(732.73, 401.76);
	glVertex2d(741.06, 397.59);

	glVertex2d(691.1, 588.06);
	glVertex2d(674.45, 542.27);
	glVertex2d(685.9, 547.47);

	glVertex2d(691.1, 588.06);
	glVertex2d(685.9, 547.47);
	glVertex2d(689.02, 567.24);

	glVertex2d(730.65, 539.14);
	glVertex2d(741.06, 397.59);
	glVertex2d(729.61, 576.61);

	glVertex2d(691.1, 588.06);
	glVertex2d(689.02, 567.24);
	glVertex2d(698.39, 574.53);

	glVertex2d(722.33, 571.41);
	glVertex2d(730.65, 539.14);
	glVertex2d(729.61, 576.61);

	glVertex2d(691.1, 588.06);
	glVertex2d(698.39, 574.53);
	glVertex2d(709.84, 581.82);

	glVertex2d(709.84, 581.82);
	glVertex2d(722.33, 571.41);
	glVertex2d(729.61, 576.61);

	glVertex2d(729.61, 576.61);
	glVertex2d(691.1, 588.06);
	glVertex2d(709.84, 581.82);

	glVertex2d(856.59, 397.59);
	glVertex2d(836.82, 387.18);
	glVertex2d(884.69, 386.14);

	glVertex2d(884.69, 386.14);
	glVertex2d(907.59, 402.8);
	glVertex2d(914.88, 424.65);

	glVertex2d(884.69, 386.14);
	glVertex2d(914.88, 424.65);
	glVertex2d(922.16, 459.0);

	glVertex2d(922.16, 459.0);
	glVertex2d(925.29, 479.82);
	glVertex2d(926.33, 493.35);

	glVertex2d(922.16, 459.0);
	glVertex2d(926.33, 493.35);
	glVertex2d(923.2, 513.12);

	glVertex2d(923.2, 513.12);
	glVertex2d(922.16, 532.9);
	glVertex2d(914.88, 551.63);

	glVertex2d(923.2, 513.12);
	glVertex2d(914.88, 551.63);
	glVertex2d(906.55, 572.45);

	glVertex2d(923.2, 513.12);
	glVertex2d(906.55, 572.45);
	glVertex2d(891.98, 583.9);

	glVertex2d(923.2, 513.12);
	glVertex2d(891.98, 583.9);
	glVertex2d(883.65, 588.06);

	glVertex2d(883.65, 588.06);
	glVertex2d(836.82, 590.14);
	glVertex2d(839.94, 581.82);

	glVertex2d(883.65, 588.06);
	glVertex2d(839.94, 581.82);
	glVertex2d(850.35, 574.53);

	glVertex2d(883.65, 588.06);
	glVertex2d(850.35, 574.53);
	glVertex2d(874.29, 576.61);

	glVertex2d(897.18, 561.0);
	glVertex2d(901.35, 541.22);
	glVertex2d(907.59, 514.16);

	glVertex2d(874.29, 393.43);
	glVertex2d(856.59, 397.59);
	glVertex2d(884.69, 386.14);

	glVertex2d(883.65, 588.06);
	glVertex2d(874.29, 576.61);
	glVertex2d(897.18, 561.0);

	glVertex2d(894.06, 406.96);
	glVertex2d(874.29, 393.43);
	glVertex2d(884.69, 386.14);

	glVertex2d(923.2, 513.12);
	glVertex2d(883.65, 588.06);
	glVertex2d(897.18, 561.0);

	glVertex2d(894.06, 406.96);
	glVertex2d(884.69, 386.14);
	glVertex2d(922.16, 459.0);

	glVertex2d(922.16, 459.0);
	glVertex2d(923.2, 513.12);
	glVertex2d(897.18, 561.0);

	glVertex2d(922.16, 459.0);
	glVertex2d(897.18, 561.0);
	glVertex2d(907.59, 514.16);

	glVertex2d(904.47, 432.98);
	glVertex2d(894.06, 406.96);
	glVertex2d(922.16, 459.0);

	glVertex2d(922.16, 459.0);
	glVertex2d(907.59, 514.16);
	glVertex2d(909.67, 485.02);

	glVertex2d(909.67, 462.12);
	glVertex2d(904.47, 432.98);
	glVertex2d(922.16, 459.0);

	glVertex2d(922.16, 459.0);
	glVertex2d(909.67, 485.02);
	glVertex2d(909.67, 462.12);

	glVertex2d(848.27, 390.31);
	glVertex2d(857.63, 389.27);
	glVertex2d(863.88, 582.86);

	glVertex2d(848.27, 390.31);
	glVertex2d(863.88, 582.86);
	glVertex2d(848.27, 578.69);

	glVertex2d(854.51, 390.31);
	glVertex2d(863.88, 391.35);
	glVertex2d(859.71, 511.04);

	glVertex2d(961.71, 398.63);
	glVertex2d(940.9, 388.22);
	glVertex2d(992.94, 388.22);

	glVertex2d(961.71, 398.63);
	glVertex2d(992.94, 388.22);
	glVertex2d(976.29, 399.67);

	glVertex2d(978.37, 574.53);
	glVertex2d(993.98, 584.94);
	glVertex2d(945.06, 587.02);

	glVertex2d(978.37, 574.53);
	glVertex2d(945.06, 587.02);
	glVertex2d(962.76, 573.49);

	glVertex2d(962.76, 573.49);
	glVertex2d(961.71, 398.63);
	glVertex2d(976.29, 399.67);

	glVertex2d(962.76, 573.49);
	glVertex2d(976.29, 399.67);
	glVertex2d(978.37, 574.53);

	glVertex2d(949.22, 589.1);
	glVertex2d(990.86, 583.9);
	glVertex2d(990.86, 588.06);

	glVertex2d(1014.8, 395.51);
	glVertex2d(1013.76, 387.18);
	glVertex2d(1091.82, 386.14);

	glVertex2d(1091.82, 386.14);
	glVertex2d(1090.78, 422.57);
	glVertex2d(1086.61, 425.69);

	glVertex2d(1091.82, 386.14);
	glVertex2d(1086.61, 425.69);
	glVertex2d(1082.45, 401.76);

	glVertex2d(1072.04, 470.45);
	glVertex2d(1076.2, 450.67);
	glVertex2d(1082.45, 448.59);

	glVertex2d(1072.04, 470.45);
	glVertex2d(1082.45, 448.59);
	glVertex2d(1083.49, 515.2);

	glVertex2d(1072.04, 470.45);
	glVertex2d(1083.49, 515.2);
	glVertex2d(1080.37, 514.16);

	glVertex2d(1072.04, 470.45);
	glVertex2d(1080.37, 514.16);
	glVertex2d(1075.16, 490.22);

	glVertex2d(1075.16, 490.22);
	glVertex2d(1064.76, 490.22);
	glVertex2d(1040.82, 489.18);

	glVertex2d(1080.37, 567.24);
	glVertex2d(1091.82, 539.14);
	glVertex2d(1103.27, 539.14);

	glVertex2d(1080.37, 567.24);
	glVertex2d(1103.27, 539.14);
	glVertex2d(1093.9, 589.1);

	glVertex2d(1093.9, 589.1);
	glVertex2d(1010.63, 589.1);
	glVertex2d(1014.8, 577.65);

	glVertex2d(1093.9, 589.1);
	glVertex2d(1014.8, 577.65);
	glVertex2d(1021.04, 574.53);

	glVertex2d(1026.24, 399.67);
	glVertex2d(1014.8, 395.51);
	glVertex2d(1091.82, 386.14);

	glVertex2d(1026.24, 399.67);
	glVertex2d(1091.82, 386.14);
	glVertex2d(1082.45, 401.76);

	glVertex2d(1026.24, 399.67);
	glVertex2d(1082.45, 401.76);
	glVertex2d(1043.94, 400.71);

	glVertex2d(1065.8, 476.69);
	glVertex2d(1072.04, 470.45);
	glVertex2d(1075.16, 490.22);

	glVertex2d(1063.71, 574.53);
	glVertex2d(1080.37, 567.24);
	glVertex2d(1093.9, 589.1);

	glVertex2d(1025.2, 558.92);
	glVertex2d(1026.24, 399.67);
	glVertex2d(1043.94, 400.71);

	glVertex2d(1025.2, 558.92);
	glVertex2d(1043.94, 400.71);
	glVertex2d(1037.69, 476.69);

	glVertex2d(1037.69, 476.69);
	glVertex2d(1065.8, 476.69);
	glVertex2d(1075.16, 490.22);

	glVertex2d(1037.69, 476.69);
	glVertex2d(1075.16, 490.22);
	glVertex2d(1040.82, 489.18);

	glVertex2d(1050.18, 575.57);
	glVertex2d(1063.71, 574.53);
	glVertex2d(1093.9, 589.1);

	glVertex2d(1025.2, 558.92);
	glVertex2d(1037.69, 476.69);
	glVertex2d(1040.82, 489.18);

	glVertex2d(1025.2, 558.92);
	glVertex2d(1040.82, 489.18);
	glVertex2d(1038.73, 569.33);

	glVertex2d(1050.18, 575.57);
	glVertex2d(1093.9, 589.1);
	glVertex2d(1021.04, 574.53);

	glVertex2d(1021.04, 574.53);
	glVertex2d(1025.2, 558.92);
	glVertex2d(1038.73, 569.33);

	glVertex2d(1038.73, 569.33);
	glVertex2d(1050.18, 575.57);
	glVertex2d(1021.04, 574.53);

	glVertex2d(1131.37, 395.51);
	glVertex2d(1145.94, 386.14);
	glVertex2d(1166.76, 395.51);

	glVertex2d(1166.76, 395.51);
	glVertex2d(1180.29, 417.37);
	glVertex2d(1188.61, 449.63);

	glVertex2d(1166.76, 395.51);
	glVertex2d(1188.61, 449.63);
	glVertex2d(1188.61, 475.65);

	glVertex2d(1166.76, 395.51);
	glVertex2d(1188.61, 475.65);
	glVertex2d(1186.53, 500.63);

	glVertex2d(1186.53, 500.63);
	glVertex2d(1186.53, 526.65);
	glVertex2d(1181.33, 547.47);

	glVertex2d(1186.53, 500.63);
	glVertex2d(1181.33, 547.47);
	glVertex2d(1173.0, 566.2);

	glVertex2d(1173.0, 566.2);
	glVertex2d(1154.27, 584.94);
	glVertex2d(1101.18, 590.14);

	glVertex2d(1101.18, 590.14);
	glVertex2d(1102.22, 577.65);
	glVertex2d(1112.63, 570.37);

	glVertex2d(1116.8, 406.96);
	glVertex2d(1100.14, 393.43);
	glVertex2d(1098.06, 387.18);

	glVertex2d(1116.8, 406.96);
	glVertex2d(1098.06, 387.18);
	glVertex2d(1127.2, 389.27);

	glVertex2d(1116.8, 406.96);
	glVertex2d(1127.2, 389.27);
	glVertex2d(1128.24, 394.47);

	glVertex2d(1116.8, 406.96);
	glVertex2d(1128.24, 394.47);
	glVertex2d(1125.12, 400.71);

	glVertex2d(1170.92, 534.98);
	glVertex2d(1171.96, 510.0);
	glVertex2d(1174.04, 490.22);

	glVertex2d(1152.18, 402.8);
	glVertex2d(1131.37, 395.51);
	glVertex2d(1166.76, 395.51);

	glVertex2d(1112.63, 570.37);
	glVertex2d(1116.8, 406.96);
	glVertex2d(1125.12, 400.71);

	glVertex2d(1112.63, 570.37);
	glVertex2d(1125.12, 400.71);
	glVertex2d(1126.16, 575.57);

	glVertex2d(1170.92, 534.98);
	glVertex2d(1174.04, 490.22);
	glVertex2d(1177.16, 453.8);

	glVertex2d(1166.76, 422.57);
	glVertex2d(1152.18, 402.8);
	glVertex2d(1166.76, 395.51);

	glVertex2d(1101.18, 590.14);
	glVertex2d(1112.63, 570.37);
	glVertex2d(1126.16, 575.57);

	glVertex2d(1177.16, 453.8);
	glVertex2d(1166.76, 422.57);
	glVertex2d(1166.76, 395.51);

	glVertex2d(1101.18, 590.14);
	glVertex2d(1126.16, 575.57);
	glVertex2d(1139.69, 575.57);

	glVertex2d(1177.16, 453.8);
	glVertex2d(1166.76, 395.51);
	glVertex2d(1186.53, 500.63);

	glVertex2d(1173.0, 566.2);
	glVertex2d(1101.18, 590.14);
	glVertex2d(1139.69, 575.57);

	glVertex2d(1170.92, 534.98);
	glVertex2d(1177.16, 453.8);
	glVertex2d(1186.53, 500.63);

	glVertex2d(1170.92, 534.98);
	glVertex2d(1186.53, 500.63);
	glVertex2d(1173.0, 566.2);

	glVertex2d(1173.0, 566.2);
	glVertex2d(1139.69, 575.57);
	glVertex2d(1155.31, 567.24);

	glVertex2d(1168.84, 555.8);
	glVertex2d(1170.92, 534.98);
	glVertex2d(1173.0, 566.2);

	glVertex2d(1173.0, 566.2);
	glVertex2d(1155.31, 567.24);
	glVertex2d(1168.84, 555.8);

	glVertex2d(1124.08, 398.63);
	glVertex2d(1106.39, 390.31);
	glVertex2d(1148.02, 391.35);

	glVertex2d(1124.08, 398.63);
	glVertex2d(1148.02, 391.35);
	glVertex2d(1140.73, 396.55);

	glVertex2d(1115.76, 398.63);
	glVertex2d(1107.43, 386.14);
	glVertex2d(1145.94, 387.18);

	glVertex2d(1115.76, 398.63);
	glVertex2d(1145.94, 387.18);
	glVertex2d(1146.98, 393.43);

	glVertex2d(952.35, 590.14);
	glVertex2d(958.59, 581.82);
	glVertex2d(974.2, 577.65);

	glVertex2d(952.35, 590.14);
	glVertex2d(974.2, 577.65);
	glVertex2d(986.69, 588.06);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glEnd();

	glDisable(GL_BLEND);
	glPopMatrix();
}
void render_exit_window(double& alpha_window)
{
	glPushMatrix();

	glEnable(GL_BLEND);
	glBlendFunc(GL_ONE_MINUS_SRC_COLOR, GL_ONE_MINUS_SRC_ALPHA);

	glColor4f(0, 0, 0, 0.2*sqrt(alpha_window));
	glBegin(GL_QUADS);
	glVertex2f(0, 0);
	glVertex2f(1600, 0);
	glVertex2f(1600, 900);
	glVertex2f(0, 900);
	glEnd();

	glDisable(GL_BLEND);

	glPopMatrix();
}
