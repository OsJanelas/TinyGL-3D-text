#include "gl.h"
#include "math.h"

float rot_angle = 0.0f;

void render_text_3d() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0f, 0.0f, -5.0f);
    glRotatef(rot_angle, 1.0f, 1.0f, 0.0f);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-1.0f, 1.0f, 0.0f);
        
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(1.0f, 1.0f, 0.0f);

        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(0.0f, -1.0f, 0.0f);
    glEnd();

    rot_angle += 0.5f;
}

int main() {
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);

    while(1) {
        render_text_3d();
    }

    return 0;
}