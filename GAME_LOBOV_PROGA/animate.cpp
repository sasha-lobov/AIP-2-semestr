#include "animate.h"

void update_display(int value)
{
    glutPostRedisplay(); // перерисовка окна
    glutTimerFunc(25, update_display, 0);
}