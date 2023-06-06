#include "cards.h"

bool flag_static_pos_cards = true;

void animate_cards(Cards& card)
{
    //карты открыты
    if (flag_static_pos_cards == true)
    {
        card.block_attack_hero.pos.y += 1;
        card.random_damage_hero.pos.y += 1;
        card.health_points_hero.pos.y += 1;
        card.block_attack_demon.pos.y += 1;
        card.rand_damage_demon.pos.y += 1;
        card.health_points_demon.pos.y += 1;

        if (card.block_attack_demon.pos.y == 20)
        {
            flag_static_pos_cards = false;
        }
    }
    if (flag_static_pos_cards == false)
    {
        card.block_attack_hero.pos.y -= 1;
        card.random_damage_hero.pos.y -= 1;
        card.health_points_hero.pos.y -= 1;
        card.block_attack_demon.pos.y -= 1;
        card.rand_damage_demon.pos.y -= 1;
        card.health_points_demon.pos.y -= 1;

        if (card.block_attack_demon.pos.y <= -2)
        {
            flag_static_pos_cards = true;
        }
    }

    //карты закрыты
    if (card.block_attack_hero.used == true)
    {
        if (card.block_attack_hero.blend < 1)
        {
            card.block_attack_hero.blend += 0.1;
        }
    }
    if (card.random_damage_hero.used == true)
    {
        if (card.random_damage_hero.blend < 1)
        {
            card.random_damage_hero.blend += 0.1;
        }
    }
    if (card.health_points_hero.used == true)
    {
        if (card.health_points_hero.blend < 1)
        {
            card.health_points_hero.blend += 0.1;
        }
    }
    if (card.block_attack_demon.used == true)
    {
        if (card.block_attack_demon.blend < 1)
        {
            card.block_attack_demon.blend += 0.1;
        }
    }
    if (card.rand_damage_demon.used == true)
    {
        if (card.rand_damage_demon.blend < 1)
        {
            card.rand_damage_demon.blend += 0.1;
        }
    }
    if (card.health_points_demon.used == true)
    {
        if (card.health_points_demon.blend < 1)
        {
            card.health_points_demon.blend += 0.1;
        }
    }
}

void render_cards(Cards& card)
{
    animate_cards(card);

    // 1я
    //block_attack_hero
    glPushMatrix();
    glScalef(0.4, 0.4, 0.4);
    glTranslatef(-550, 1200, 0);
    glTranslatef(0, card.block_attack_hero.pos.y, 0);
    glBegin(GL_QUADS);
    glColor3ub(210, 210, 210);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor3ub(153, 217, 234);
    glVertex2f(697, 581);
    glVertex2f(785, 616);
    glVertex2f(785, 878);
    glVertex2f(697, 818);

    glColor3ub(0, 162, 232);
    glVertex2f(876, 581);
    glVertex2f(785, 616);
    glVertex2f(785, 878);
    glVertex2f(875, 818);
    glEnd();

    //оборот карты
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBegin(GL_QUADS);
    glColor4f(0.854, 0.713, 0.0784, card.block_attack_hero.blend);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor4f(0.7607, 0.5725, 0, card.block_attack_hero.blend);
    glVertex2f(873, 789);
    glVertex2f(891, 797);
    glVertex2f(829, 896);
    glVertex2f(819, 851);

    glVertex2f(807, 771);
    glVertex2f(830, 686);
    glVertex2f(805, 670);
    glVertex2f(769, 765);

    glVertex2f(807, 771);
    glVertex2f(769, 765);
    glVertex2f(749, 893);
    glVertex2f(829, 896);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(757, 845);
    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(702, 857);
    glVertex2f(749, 893);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(891, 797);
    glVertex2f(859, 725);
    glVertex2f(873, 789);

    glVertex2f(830, 686);
    glVertex2f(789, 551);
    glVertex2f(805, 670);

    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(737, 659);
    glEnd();

    //декор карты
    glColor4f(0.7607, 0.5725, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(952, 396);
    glVertex2f(955, 468);
    glVertex2f(996, 537);

    glVertex2f(955, 468);
    glVertex2f(996, 537);
    glVertex2f(830, 532);

    glVertex2f(871, 1000);
    glVertex2f(926, 843);
    glVertex2f(985, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(996, 537);
    glVertex2f(830, 532);
    glVertex2f(926, 726);
    glVertex2f(956, 676);

    glVertex2f(926, 726);
    glVertex2f(956, 676);
    glVertex2f(985, 814);
    glVertex2f(926, 843);
    glEnd();

    //
    glBegin(GL_TRIANGLES);
    glVertex2f(626, 396);
    glVertex2f(622, 468);
    glVertex2f(582, 537);

    glVertex2f(622, 468);
    glVertex2f(582, 537);
    glVertex2f(744, 532);

    glVertex2f(705, 1000);
    glVertex2f(652, 843);
    glVertex2f(592, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(582, 537);
    glVertex2f(744, 532);
    glVertex2f(652, 726);
    glVertex2f(622, 676);

    glVertex2f(652, 726);
    glVertex2f(622, 676);
    glVertex2f(592, 814);
    glVertex2f(652, 843);
    glEnd();
    glDisable(GL_BLEND);
    glPopMatrix();

    // 2я
    //double_damage_hero
    glPushMatrix();
    glScalef(0.4, 0.4, 0.4);
    glTranslatef(-100, 1200, 0);
    glTranslatef(0, card.random_damage_hero.pos.y, 0);
    glBegin(GL_QUADS);
    glColor3ub(210, 210, 210);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor3ub(195, 195, 195);
    glVertex2f(782, 901);
    glVertex2f(809, 901);
    glVertex2f(809, 857);
    glVertex2f(782, 857);

    glColor3ub(134, 200, 250);
    glVertex2f(774, 845);
    glVertex2f(812, 845);
    glVertex2f(812, 618);
    glVertex2f(774, 618);

    glColor3ub(185, 122, 87);
    glVertex2f(760, 857);
    glVertex2f(829, 857);
    glVertex2f(829, 844);
    glVertex2f(760, 844);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(134, 200, 250);
    glVertex2f(812, 618);
    glVertex2f(774, 618);
    glVertex2f(793, 564);
    glEnd();

    //оборот карты
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBegin(GL_QUADS);
    glColor4f(0.854, 0.713, 0.0784, card.random_damage_hero.blend);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor4f(0.7607, 0.5725, 0, card.random_damage_hero.blend);
    glVertex2f(873, 789);
    glVertex2f(891, 797);
    glVertex2f(829, 896);
    glVertex2f(819, 851);

    glVertex2f(807, 771);
    glVertex2f(830, 686);
    glVertex2f(805, 670);
    glVertex2f(769, 765);

    glVertex2f(807, 771);
    glVertex2f(769, 765);
    glVertex2f(749, 893);
    glVertex2f(829, 896);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(757, 845);
    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(702, 857);
    glVertex2f(749, 893);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(891, 797);
    glVertex2f(859, 725);
    glVertex2f(873, 789);

    glVertex2f(830, 686);
    glVertex2f(789, 551);
    glVertex2f(805, 670);

    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(737, 659);
    glEnd();

    //декор карты
    glColor4f(0.7607, 0.5725, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(952, 396);
    glVertex2f(955, 468);
    glVertex2f(996, 537);

    glVertex2f(955, 468);
    glVertex2f(996, 537);
    glVertex2f(830, 532);

    glVertex2f(871, 1000);
    glVertex2f(926, 843);
    glVertex2f(985, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(996, 537);
    glVertex2f(830, 532);
    glVertex2f(926, 726);
    glVertex2f(956, 676);

    glVertex2f(926, 726);
    glVertex2f(956, 676);
    glVertex2f(985, 814);
    glVertex2f(926, 843);
    glEnd();

    //
    glBegin(GL_TRIANGLES);
    glVertex2f(626, 396);
    glVertex2f(622, 468);
    glVertex2f(582, 537);

    glVertex2f(622, 468);
    glVertex2f(582, 537);
    glVertex2f(744, 532);

    glVertex2f(705, 1000);
    glVertex2f(652, 843);
    glVertex2f(592, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(582, 537);
    glVertex2f(744, 532);
    glVertex2f(652, 726);
    glVertex2f(622, 676);

    glVertex2f(652, 726);
    glVertex2f(622, 676);
    glVertex2f(592, 814);
    glVertex2f(652, 843);
    glEnd();
    glDisable(GL_BLEND);
    glPopMatrix();

    // 3я
    //health_points_hero
    glPushMatrix();
    glScalef(0.4, 0.4, 0.4);
    glTranslatef(350, 1200, 0);
    glTranslatef(0, card.health_points_hero.pos.y, 0);

    glBegin(GL_QUADS);
    glColor3ub(210, 210, 210);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor3ub(146, 90, 61);
    glVertex2f(776, 580);
    glVertex2f(805, 580);
    glVertex2f(805, 599);
    glVertex2f(776, 599);

    glColor3ub(241, 78, 86);
    glVertex2f(776, 736);
    glVertex2f(805, 736);
    glVertex2f(805, 607);
    glVertex2f(776, 607);

    glVertex2f(767, 597);
    glVertex2f(767, 609);
    glVertex2f(814, 609);
    glVertex2f(814, 597);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(237, 28, 36);
    glVertex2f(792, 807);
    glVertex2f(844, 735);
    glVertex2f(893, 806);

    glVertex2f(792, 807);
    glVertex2f(844, 876);
    glVertex2f(743, 876);

    glVertex2f(792, 807);
    glVertex2f(741, 735);
    glVertex2f(691, 806);

    glColor3ub(241, 78, 86);
    glVertex2f(792, 807);
    glVertex2f(844, 735);
    glVertex2f(741, 735);

    glVertex2f(792, 807);
    glVertex2f(893, 806);
    glVertex2f(844, 876);

    glVertex2f(792, 807);
    glVertex2f(743, 876);
    glVertex2f(691, 806);
    glEnd();

    //оборот карты
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBegin(GL_QUADS);
    glColor4f(0.854, 0.713, 0.0784, card.health_points_hero.blend);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor4f(0.7607, 0.5725, 0, card.health_points_hero.blend);
    glVertex2f(873, 789);
    glVertex2f(891, 797);
    glVertex2f(829, 896);
    glVertex2f(819, 851);

    glVertex2f(807, 771);
    glVertex2f(830, 686);
    glVertex2f(805, 670);
    glVertex2f(769, 765);

    glVertex2f(807, 771);
    glVertex2f(769, 765);
    glVertex2f(749, 893);
    glVertex2f(829, 896);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(757, 845);
    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(702, 857);
    glVertex2f(749, 893);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(891, 797);
    glVertex2f(859, 725);
    glVertex2f(873, 789);

    glVertex2f(830, 686);
    glVertex2f(789, 551);
    glVertex2f(805, 670);

    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(737, 659);
    glEnd();

    //декор карты
    glColor4f(0.7607, 0.5725, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(952, 396);
    glVertex2f(955, 468);
    glVertex2f(996, 537);

    glVertex2f(955, 468);
    glVertex2f(996, 537);
    glVertex2f(830, 532);

    glVertex2f(871, 1000);
    glVertex2f(926, 843);
    glVertex2f(985, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(996, 537);
    glVertex2f(830, 532);
    glVertex2f(926, 726);
    glVertex2f(956, 676);

    glVertex2f(926, 726);
    glVertex2f(956, 676);
    glVertex2f(985, 814);
    glVertex2f(926, 843);
    glEnd();

    //
    glBegin(GL_TRIANGLES);
    glVertex2f(626, 396);
    glVertex2f(622, 468);
    glVertex2f(582, 537);

    glVertex2f(622, 468);
    glVertex2f(582, 537);
    glVertex2f(744, 532);

    glVertex2f(705, 1000);
    glVertex2f(652, 843);
    glVertex2f(592, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(582, 537);
    glVertex2f(744, 532);
    glVertex2f(652, 726);
    glVertex2f(622, 676);

    glVertex2f(652, 726);
    glVertex2f(622, 676);
    glVertex2f(592, 814);
    glVertex2f(652, 843);
    glEnd();
    glDisable(GL_BLEND);
    glPopMatrix();

    // 4я
    //block_attack_demon
    glPushMatrix();
    glScalef(0.4, 0.4, 0.4);
    glTranslatef(2980, 1200, 0);
    glTranslatef(0, card.block_attack_demon.pos.y, 0);
    glBegin(GL_QUADS);
    glColor3ub(210, 210, 210);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor3ub(63, 12, 65);
    glVertex2f(697, 581);
    glVertex2f(785, 616);
    glVertex2f(785, 878);
    glVertex2f(697, 818);

    glColor3ub(172, 30, 180);
    glVertex2f(876, 581);
    glVertex2f(785, 616);
    glVertex2f(785, 878);
    glVertex2f(875, 818);
    glEnd();

    //оборот карты
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBegin(GL_QUADS);
    glColor4f(0, 0, 0, card.block_attack_demon.blend);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor4f(0.7, 0, 0, card.block_attack_demon.blend);
    glVertex2f(873, 789);
    glVertex2f(891, 797);
    glVertex2f(829, 896);
    glVertex2f(819, 851);

    glVertex2f(807, 771);
    glVertex2f(830, 686);
    glVertex2f(805, 670);
    glVertex2f(769, 765);

    glVertex2f(807, 771);
    glVertex2f(769, 765);
    glVertex2f(749, 893);
    glVertex2f(829, 896);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(757, 845);
    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(702, 857);
    glVertex2f(749, 893);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(891, 797);
    glVertex2f(859, 725);
    glVertex2f(873, 789);

    glVertex2f(830, 686);
    glVertex2f(789, 551);
    glVertex2f(805, 670);

    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(737, 659);
    glEnd();

    //декор карты
    glColor4f(0.7, 0, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(952, 396);
    glVertex2f(955, 468);
    glVertex2f(996, 537);

    glVertex2f(955, 468);
    glVertex2f(996, 537);
    glVertex2f(830, 532);

    glVertex2f(871, 1000);
    glVertex2f(926, 843);
    glVertex2f(985, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(996, 537);
    glVertex2f(830, 532);
    glVertex2f(926, 726);
    glVertex2f(956, 676);

    glVertex2f(926, 726);
    glVertex2f(956, 676);
    glVertex2f(985, 814);
    glVertex2f(926, 843);
    glEnd();

    //
    glBegin(GL_TRIANGLES);
    glVertex2f(626, 396);
    glVertex2f(622, 468);
    glVertex2f(582, 537);

    glVertex2f(622, 468);
    glVertex2f(582, 537);
    glVertex2f(744, 532);

    glVertex2f(705, 1000);
    glVertex2f(652, 843);
    glVertex2f(592, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(582, 537);
    glVertex2f(744, 532);
    glVertex2f(652, 726);
    glVertex2f(622, 676);

    glVertex2f(652, 726);
    glVertex2f(622, 676);
    glVertex2f(592, 814);
    glVertex2f(652, 843);
    glEnd();
    glDisable(GL_BLEND);
    glPopMatrix();

    // 5я
    //rand_damage_demon
    glPushMatrix();
    glScalef(0.4, 0.4, 0.4);
    glTranslatef(2530, 1200, 0);
    glTranslatef(0, card.rand_damage_demon.pos.y, 0);
    glBegin(GL_QUADS);
    glColor3ub(210, 210, 210);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor3ub(195, 195, 195);
    glVertex2f(782, 901);
    glVertex2f(809, 901);
    glVertex2f(809, 857);
    glVertex2f(782, 857);

    glColor3ub(217, 0, 5);
    glVertex2f(774, 845);
    glVertex2f(812, 845);
    glVertex2f(812, 618);
    glVertex2f(774, 618);

    glColor3ub(185, 122, 87);
    glVertex2f(760, 857);
    glVertex2f(829, 857);
    glVertex2f(829, 844);
    glVertex2f(760, 844);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 0, 5);
    glVertex2f(812, 618);
    glVertex2f(774, 618);
    glVertex2f(793, 564);
    glEnd();

    //оборот карты
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBegin(GL_QUADS);
    glColor4f(0, 0, 0, card.rand_damage_demon.blend);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor4f(0.7, 0, 0, card.rand_damage_demon.blend);
    glVertex2f(873, 789);
    glVertex2f(891, 797);
    glVertex2f(829, 896);
    glVertex2f(819, 851);

    glVertex2f(807, 771);
    glVertex2f(830, 686);
    glVertex2f(805, 670);
    glVertex2f(769, 765);

    glVertex2f(807, 771);
    glVertex2f(769, 765);
    glVertex2f(749, 893);
    glVertex2f(829, 896);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(757, 845);
    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(702, 857);
    glVertex2f(749, 893);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(891, 797);
    glVertex2f(859, 725);
    glVertex2f(873, 789);

    glVertex2f(830, 686);
    glVertex2f(789, 551);
    glVertex2f(805, 670);

    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(737, 659);
    glEnd();

    //декор карты
    glColor4f(0.7, 0, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(952, 396);
    glVertex2f(955, 468);
    glVertex2f(996, 537);

    glVertex2f(955, 468);
    glVertex2f(996, 537);
    glVertex2f(830, 532);

    glVertex2f(871, 1000);
    glVertex2f(926, 843);
    glVertex2f(985, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(996, 537);
    glVertex2f(830, 532);
    glVertex2f(926, 726);
    glVertex2f(956, 676);

    glVertex2f(926, 726);
    glVertex2f(956, 676);
    glVertex2f(985, 814);
    glVertex2f(926, 843);
    glEnd();

    //
    glBegin(GL_TRIANGLES);
    glVertex2f(626, 396);
    glVertex2f(622, 468);
    glVertex2f(582, 537);

    glVertex2f(622, 468);
    glVertex2f(582, 537);
    glVertex2f(744, 532);

    glVertex2f(705, 1000);
    glVertex2f(652, 843);
    glVertex2f(592, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(582, 537);
    glVertex2f(744, 532);
    glVertex2f(652, 726);
    glVertex2f(622, 676);

    glVertex2f(652, 726);
    glVertex2f(622, 676);
    glVertex2f(592, 814);
    glVertex2f(652, 843);
    glEnd();
    glDisable(GL_BLEND);
    glPopMatrix();

    // 6я
    //health_points_demon
    glPushMatrix();
    glScalef(0.4, 0.4, 0.4);
    glTranslatef(2080, 1200, 0);
    glTranslatef(0, card.health_points_demon.pos.y, 0);
    glBegin(GL_QUADS);
    glColor3ub(210, 210, 210);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor3ub(153, 217, 234);
    glVertex2f(697, 581);
    glVertex2f(785, 616);
    glVertex2f(785, 878);
    glVertex2f(697, 818);

    glColor3ub(0, 162, 232);
    glVertex2f(876, 581);
    glVertex2f(785, 616);
    glVertex2f(785, 878);
    glVertex2f(875, 818);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(210, 210, 210);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor3ub(146, 90, 61);
    glVertex2f(776, 580);
    glVertex2f(805, 580);
    glVertex2f(805, 599);
    glVertex2f(776, 599);

    glColor3ub(129, 10, 16);
    glVertex2f(776, 736);
    glVertex2f(805, 736);
    glVertex2f(805, 607);
    glVertex2f(776, 607);

    glVertex2f(767, 597);
    glVertex2f(767, 609);
    glVertex2f(814, 609);
    glVertex2f(814, 597);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(48, 3, 5);
    glVertex2f(792, 807);
    glVertex2f(844, 735);
    glVertex2f(893, 806);

    glVertex2f(792, 807);
    glVertex2f(844, 876);
    glVertex2f(743, 876);

    glVertex2f(792, 807);
    glVertex2f(741, 735);
    glVertex2f(691, 806);

    glColor3ub(129, 10, 16);
    glVertex2f(792, 807);
    glVertex2f(844, 735);
    glVertex2f(741, 735);

    glVertex2f(792, 807);
    glVertex2f(893, 806);
    glVertex2f(844, 876);

    glVertex2f(792, 807);
    glVertex2f(743, 876);
    glVertex2f(691, 806);
    glEnd();

    //оборот карты
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBegin(GL_QUADS);
    glColor4f(0, 0, 0, card.health_points_demon.blend);
    glVertex2f(622, 532);
    glVertex2f(955, 532);
    glVertex2f(955, 933);
    glVertex2f(622, 933);

    glColor4f(0.7, 0, 0, card.health_points_demon.blend);
    glVertex2f(873, 789);
    glVertex2f(891, 797);
    glVertex2f(829, 896);
    glVertex2f(819, 851);

    glVertex2f(807, 771);
    glVertex2f(830, 686);
    glVertex2f(805, 670);
    glVertex2f(769, 765);

    glVertex2f(807, 771);
    glVertex2f(769, 765);
    glVertex2f(749, 893);
    glVertex2f(829, 896);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(757, 845);
    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(702, 857);
    glVertex2f(749, 893);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(891, 797);
    glVertex2f(859, 725);
    glVertex2f(873, 789);

    glVertex2f(830, 686);
    glVertex2f(789, 551);
    glVertex2f(805, 670);

    glVertex2f(717, 786);
    glVertex2f(692, 776);
    glVertex2f(737, 659);
    glEnd();

    //декор карты
    glColor4f(0.7, 0, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(952, 396);
    glVertex2f(955, 468);
    glVertex2f(996, 537);

    glVertex2f(955, 468);
    glVertex2f(996, 537);
    glVertex2f(830, 532);

    glVertex2f(871, 1000);
    glVertex2f(926, 843);
    glVertex2f(985, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(996, 537);
    glVertex2f(830, 532);
    glVertex2f(926, 726);
    glVertex2f(956, 676);

    glVertex2f(926, 726);
    glVertex2f(956, 676);
    glVertex2f(985, 814);
    glVertex2f(926, 843);
    glEnd();

    //
    glBegin(GL_TRIANGLES);
    glVertex2f(626, 396);
    glVertex2f(622, 468);
    glVertex2f(582, 537);

    glVertex2f(622, 468);
    glVertex2f(582, 537);
    glVertex2f(744, 532);

    glVertex2f(705, 1000);
    glVertex2f(652, 843);
    glVertex2f(592, 814);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(582, 537);
    glVertex2f(744, 532);
    glVertex2f(652, 726);
    glVertex2f(622, 676);

    glVertex2f(652, 726);
    glVertex2f(622, 676);
    glVertex2f(592, 814);
    glVertex2f(652, 843);
    glEnd();
    glDisable(GL_BLEND);
    glPopMatrix();
}