#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<cstdio>

static GLfloat c1 = 24;
static GLfloat c2 = -24;
static int stop = 0;

void init()
{
    glClearColor(1.0f,1.0f,1.0f,0.0f);
    glOrtho(-12,12,-9,9,-12,12);
}

void SritiShoudho()
{
    // Floor
    glColor3f(1.0f,0.4f,0.4f);
    glBegin(GL_QUADS);
    glVertex3d(-6.0,1.0,0.0);
    glVertex3d(-5.5,1.5,0.0);
    glVertex3d(5.5,1.5,0.0);
    glVertex3d(6.0,1.0,0.0);
    glEnd();

    //Floor Line
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex3d(-5.5,1.5,0.0);
    glVertex3d(5.5,1.5,0.0);
    glEnd();

    // 1
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_TRIANGLES);
    glVertex3d(-5.0,1.5,0.0);
    glVertex3d(-4.0,1.5,0.0);
    glVertex3d(-2.8,2.5,0.0);
    glEnd();

    // 2
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_TRIANGLES);
    glVertex3d(-4.0,1.5,0.0);
    glVertex3d(-3.0,1.5,0.0);
    glVertex3d(-1.8,3.5,0.0);
    glEnd();

    // 3
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_TRIANGLES);
    glVertex3d(-3.0,1.5,0.0);
    glVertex3d(-2.0,1.5,0.0);
    glVertex3d(-0.8,4.9,0.0);
    glEnd();

    // 4
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_TRIANGLES);
    glVertex3d(-2.0,1.5,0.0);
    glVertex3d(-1.0,1.5,0.0);
    glVertex3d(-0.3,6.2,0.0);
    glEnd();

    // 5 and 6
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_TRIANGLES);
    glVertex3d(-1.0,1.5,0.0);
    glVertex3d(1.0,1.5,0.0);
    glVertex3d(0.0,8.0,0.0);
    glEnd();

    // 7
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_TRIANGLES);
    glVertex3d(1.0,1.5,0.0);
    glVertex3d(2.0,1.5,0.0);
    glVertex3d(0.3,6.2,0.0);
    glEnd();

    // 8
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_TRIANGLES);
    glVertex3d(3.0,1.5,0.0);
    glVertex3d(2.0,1.5,0.0);
    glVertex3d(0.8,4.9,0.0);
    glEnd();

    // 9
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_TRIANGLES);
    glVertex3d(4.0,1.5,0.0);
    glVertex3d(3.0,1.5,0.0);
    glVertex3d(1.8,3.5,0.0);
    glEnd();

    // 10
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_TRIANGLES);
    glVertex3d(5.0,1.5,0.0);
    glVertex3d(4.0,1.5,0.0);
    glVertex3d(2.8,2.5,0.0);
    glEnd();

    // Road
    glColor3f(0.3f,0.3f,0.4f);
    glBegin(GL_QUADS);
    glVertex3d(-12.0,-2.5,0.0);
    glVertex3d(12.0,-2.5,0.0);
    glVertex3d(12.0,-8.5,0.0);
    glVertex3d(-12.0,-8.5,0.0);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex3d(-12.0,-2.4,0.0);
    glVertex3d(12.0,-2.4,0.0);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex3d(12.0,-8.6,0.0);
    glVertex3d(-12.0,-8.6,0.0);
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex3d(-12.0,-2.3,0.0);
    glVertex3d(12.0,-2.3,0.0);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex3d(12.0,-8.7,0.0);
    glVertex3d(-12.0,-8.7,0.0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex3d(-11.0,-5.4,0.0);
    glVertex3d(-8.0,-5.4,0.0);
    glVertex3d(-8.0,-5.6,0.0);
    glVertex3d(-11.0,-5.6,0.0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex3d(-7.0,-5.4,0.0);
    glVertex3d(-4.0,-5.4,0.0);
    glVertex3d(-4.0,-5.6,0.0);
    glVertex3d(-7.0,-5.6,0.0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex3d(-3.0,-5.4,0.0);
    glVertex3d(0.0,-5.4,0.0);
    glVertex3d(0.0,-5.6,0.0);
    glVertex3d(-3.0,-5.6,0.0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex3d(1.0,-5.4,0.0);
    glVertex3d(4.0,-5.4,0.0);
    glVertex3d(4.0,-5.6,0.0);
    glVertex3d(1.0,-5.6,0.0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex3d(5.0,-5.4,0.0);
    glVertex3d(8.0,-5.4,0.0);
    glVertex3d(8.0,-5.6,0.0);
    glVertex3d(5.0,-5.6,0.0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex3d(9.0,-5.4,0.0);
    glVertex3d(12.0,-5.4,0.0);
    glVertex3d(12.0,-5.6,0.0);
    glVertex3d(9.0,-5.6,0.0);
    glEnd();
}

void car1()
{
    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(-11.0,-6.8,0.0);
    glVertex3d(-9.0,-6.8,0.0);
    glVertex3d(-9.0,-7.5,0.0);
    glVertex3d(-11.0,-7.5,0.0);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(-10.5,-6.0,0.0);
    glVertex3d(-9.5,-6.0,0.0);
    glVertex3d(-9.2,-6.8,0.0);
    glVertex3d(-10.8,-6.8,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(-10.5,-6.2,0.0);
    glVertex3d(-10.1,-6.2,0.0);
    glVertex3d(-10.1,-6.5,0.0);
    glVertex3d(-10.5,-6.5,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(-9.6,-6.2,0.0);
    glVertex3d(-10.0,-6.2,0.0);
    glVertex3d(-10.0,-6.5,0.0);
    glVertex3d(-9.6,-6.5,0.0);
    glEnd();

    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(-10.5,-7.5, 0);
    glutSolidSphere(0.2,20,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(-9.5,-7.5, 0);
    glutSolidSphere(0.2,20,10);
    glPopMatrix();
}

void car2()
{
    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(11.0,-3.8,0.0);
    glVertex3d(11.0,-4.5,0.0);
    glVertex3d(9.0,-4.5,0.0);
    glVertex3d(9.0,-3.8,0.0);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(10.5,-3.0,0.0);
    glVertex3d(11.0,-4.0,0.0);
    glVertex3d(9.0,-4.0,0.0);
    glVertex3d(9.5,-3.0,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(10.5,-3.2,0.0);
    glVertex3d(10.5,-3.5,0.0);
    glVertex3d(10.1,-3.5,0.0);
    glVertex3d(10.1,-3.2,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(9.9,-3.2,0.0);
    glVertex3d(9.9,-3.5,0.0);
    glVertex3d(9.5,-3.5,0.0);
    glVertex3d(9.5,-3.2,0.0);
    glEnd();

    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(9.5,-4.5, 0);
    glutSolidSphere(0.2,20,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(10.5,-4.5, 0);
    glutSolidSphere(0.2,20,10);
    glPopMatrix();
}

void man1()
{
    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex3d(8.6,-1.5,0.0);
    glVertex3d(9.1,-1.5,0.0);
    glVertex3d(8.8,-1.0,0.0);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(9.0,-2.2,0.0);
    glVertex3d(9.0,-1.5,0.0);
    glVertex3d(8.9,-1.5,0.0);
    glVertex3d(8.9,-2.2,0.0);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(8.7,-2.2,0.0);
    glVertex3d(8.7,-1.5,0.0);
    glVertex3d(8.8,-1.5,0.0);
    glVertex3d(8.8,-2.2,0.0);
    glEnd();


    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(8.8,-0.9, 0);
    glutSolidSphere(0.2,20,10);
    glPopMatrix();
}

void man2()
{
    glColor3f(0.0f,0.0f,0.5f);
    glBegin(GL_TRIANGLES);
    glVertex3d(9.4,-1.5,0.0);
    glVertex3d(9.9,-1.5,0.0);
    glVertex3d(9.7,-1.0,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.5f);
    glBegin(GL_QUADS);
    glVertex3d(9.5,-2.2,0.0);
    glVertex3d(9.5,-1.5,0.0);
    glVertex3d(9.6,-1.5,0.0);
    glVertex3d(9.6,-2.2,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.5f);
    glBegin(GL_QUADS);
    glVertex3d(9.7,-2.2,0.0);
    glVertex3d(9.7,-1.5,0.0);
    glVertex3d(9.8,-1.5,0.0);
    glVertex3d(9.8,-2.2,0.0);
    glEnd();


    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef(9.7,-0.9, 0);
    glutSolidSphere(0.2,20,10);
    glPopMatrix();
}


void tree()
{


    glColor3f(0.5f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(11.0,-2.2,0.0);
    glVertex3d(11.5,-2.2,0.0);
    glVertex3d(11.5,1.5,0.0);
    glVertex3d(11.0,1.5,0.0);
    glEnd();

    glPushMatrix();
    glColor3f(0,1.0,0);
    glTranslatef(10.5,1.0, 0);
    glutSolidSphere(0.9,20,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1.0,0);
    glTranslatef(11.5,1.5, 0);
    glutSolidSphere(0.9,20,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0.9,0);
    glTranslatef(11.2,1.0, 0);
    glutSolidSphere(1.2,20,10);
    glPopMatrix();
}

void tree2()
{


    glColor3f(0.5f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(-11.0,-2.2,0.0);
    glVertex3d(-11.5,-2.2,0.0);
    glVertex3d(-11.5,1.5,0.0);
    glVertex3d(-11.0,1.5,0.0);
    glEnd();

    glPushMatrix();
    glColor3f(0,1.0,0);
    glTranslatef(-10.5,1.0, 0);
    glutSolidSphere(0.9,20,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1.0,0);
    glTranslatef(-11.5,1.5, 0);
    glutSolidSphere(0.9,20,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0.9,0);
    glTranslatef(-11.2,1.0, 0);
    glutSolidSphere(1.2,20,10);
    glPopMatrix();
}

void tree3()
{
    glColor3f(0.5f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex3d(-9.0,-2.2,0.0);
    glVertex3d(-9.5,-2.2,0.0);
    glVertex3d(-9.5,1.5,0.0);
    glVertex3d(-9.0,1.5,0.0);
    glEnd();

    glPushMatrix();
    glColor3f(0,1.0,0);
    glTranslatef(-8.5,1.0, 0);
    glutSolidSphere(0.9,20,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1.0,0);
    glTranslatef(-9.5,1.5, 0);
    glutSolidSphere(0.9,20,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0.9,0);
    glTranslatef(-9.2,1.0, 0);
    glutSolidSphere(1.2,20,10);
    glPopMatrix();
}
void Display()
{
    c1-=0.006;
    if(c1<=-12)
        c1=24;
    c2+=0.006;
    if(c2>=12)
        c2=-24;

    glPushMatrix();
    glTranslatef(c1,2,10);
    glScalef(1,.9,.5);
    car1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(c2,-3.5,0);
    glScalef(1,.9,.5);
    car2();
    glPopMatrix();
}

void keyboardFunc( unsigned char key, int x, int y )
{
    float f=0.8;

    switch( key )
        {
    case 's':
    case 'S':
        stop = 1;
        break;
    case 'p':
    case 'P':
        stop = 0;
        break;
        };
}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    SritiShoudho();
    if(stop == 0){
        Display();
    }
    else{
        car1();
        car2();
    }
    man1();
    man2();
    tree();
    tree2();
    tree3();
    glutSwapBuffers();
    glFlush();
}

void run()
{
    glutPostRedisplay();
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1200,800);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Ashraful Islam Khan");
    init();
    glutKeyboardFunc(keyboardFunc);
    glutDisplayFunc(myDisplay);
    glutIdleFunc(run);
    glutMainLoop();
    return 0;
}
