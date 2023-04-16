#include <cstdlib>
#include <glut.h>

#include <iostream>
#include "Render_fon.h"







const int WIDTH = 1600, HEIGHT = 900;

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow("Game");
    glutDisplayFunc(render_fon);
    glutMainLoop();

    return 0;
}

