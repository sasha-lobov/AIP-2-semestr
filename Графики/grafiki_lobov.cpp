//20й -> 10й вариант, нарисовать сердце и фигуры Лиссажу

#include <GL/glut.h>
#include <array>
#include <cmath>

struct Position {
    float x, y;
};

std::array <Position, 100> graphik_arr;
Position pos = { 0.3, -0.2 }; 

void renderScene(void);
void koordinatie_osi(void);
void grafic(void);
void render_grafic(void);
void heart(void);
void figure_lisaju_1(void);
void figure_lisaju_2(void);
void figure_lisaju_3(void);

int main(int argc, char* argv[])
{
    render_grafic();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Grafiki");
    glutDisplayFunc(renderScene);
    glClearColor(0, 0, 0, 0);
    glutMainLoop();
    return 0;
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
    glPushMatrix();
    glTranslatef(pos.x, pos.y, 0.0f);
    grafic();
    glPopMatrix();
    glutSwapBuffers();
}

void koordinatie_osi(void) {
    glBegin(GL_LINES);
    glColor3f(1, 0, 0);
    glVertex2f(0, 0);
    glVertex2f(3, 0);
    glColor3f(1, 0, 0);
    glVertex2f(0, 0);
    glVertex2f(0, 3);
    glEnd();

}

void grafic(void) {
    glPushMatrix();
    glScalef(0.5, 0.5, 1);
    glTranslatef(-2, -1, 0);

    koordinatie_osi();

    glBegin(GL_LINE_STRIP);
    glColor3f(1, 1, 0);
    for (int i = 0; i < graphik_arr.size(); i++)
    {
        glVertex2f(graphik_arr[i].x, graphik_arr[i].y);
    }
    glEnd();
    glPopMatrix();
}

void render_grafic(void) {
    
    //figure_lisaju_1();
    //figure_lisaju_2();
    //figure_lisaju_3();
    heart();
}

//Лисажу 1я фигурка
void figure_lisaju_1(void) {
    Position p;
    float t = 0;
    float tf = 2 * 3.1415;
    float h = (tf - t) / graphik_arr.size();
    int i = 0;
    while (t < tf) {
        p.x = sin(t + 3.1415 / 2);
        p.y = sin(2 * t);
        p.x += 1.5;
        p.y += 1;
       graphik_arr[i] = p;
        t += h;
        i++;
    }
}

//Лисажу 2я фигурка
void figure_lisaju_2(void) {
    Position p;
    float t = 0;
    float tf = 2 * 3.1415;
    float h = (tf - t) / graphik_arr.size();
    int i = 0;
    while (t < tf) {
        p.x = sin(3 * t + 3.1415 / 2);
        p.y = sin(2 * t);
        p.x += 1.5;
        p.y += 1;
        graphik_arr[i] = p;
        t += h;
        i++;
    }
}

//Лисажу 3я фигурка
void figure_lisaju_3(void) {
    Position p;
    float t = 0;
    float tf = 2 * 3.1415;
    float h = (tf - t) / graphik_arr.size();
    int i = 0;
    while (t < tf) {
        p.x = sin(5 * t + 3.1415 / 2);
        p.y = sin(6 * t);
        p.x += 1.5;
        p.y += 1;
        graphik_arr[i] = p;
        t += h;
        i++;
    }
}

//Сердце
void heart(void) {
    Position p;
    float x = 0;
    float xf = 2 * 3.1415;
    float h = (xf - x) / (graphik_arr.size() - 1);
    for (int i = 0; i < graphik_arr.size(); i++) {
        float t = x + i * h;
        p.x = 16 * pow(sin(t), 3);
        p.y = 13 * cos(t) - 5 * cos(2 * t) - 2 * cos(3 * t) - cos(4 * t);
        p.x *= 0.05;
        p.y *= 0.05;
        p.x += 1.5;
        p.y += 1;
        graphik_arr[i] = p;
    }
}
