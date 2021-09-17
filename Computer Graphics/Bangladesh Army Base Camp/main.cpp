#include <windows.h>
#include <GL/glut.h>
#include<iostream>
using namespace std;

void initGL()
{
    glClearColor(0.6f, 1.0f, 1.0f, 1.0f);
}

GLfloat Sposition = 0.0f;
GLfloat Sspeed = 0.0f;

GLfloat position = 0.0f;
GLfloat Hspeed = 0.0f;

GLfloat Aposition = 0.0f;
GLfloat Aspeed = 0.0f;

GLfloat Tposition = 0.0f;
GLfloat Tspeed = 0.0f;

GLfloat C1position = 1.0f;
GLfloat C1speed = 0.01f;


GLfloat C2position = 1.0f;
GLfloat C2speed = 0.01f;

GLfloat C3position = 1.0f;
GLfloat C3speed = 0.01f;

float _nt = 0.0;
bool night = false;

void Night(int value)
{
    if(night)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
        glFlush();
    }
}



void updateS(int value)
{
    if(Sposition >0.67 )
        Sposition = 0.0f;
    Sposition -= Sspeed;
    glutPostRedisplay();
    glutTimerFunc(100, updateS, 0);
}

void updateT(int value)
{
    if(Tposition >0.45 )
        Tposition = 0.0f;
    Tposition += Tspeed;
    glutPostRedisplay();
    glutTimerFunc(100, updateT, 0);
}

void updateA(int value)
{
    if(Aposition >0.67 )
        Aposition = -1.0f;
    Aposition += Aspeed;
    glutPostRedisplay();
    glutTimerFunc(100, updateA, 0);
}

void updateH(int value)
{
    if(position >1.0 )
        position = 0.0f;
    position += Hspeed;
    glutPostRedisplay();
    glutTimerFunc(100, updateH, 0);
}

void updateC1(int value)
{
    if(C1position >0.9 )
        C1position = 0.0f;
    C1position += C1speed;
    glutPostRedisplay();
    glutTimerFunc(100, updateC1, 0);
}

void updateC2(int value)
{
    if(C2position >0.9 )
        C2position = 0.0f;
    C2position += C2speed;
    glutPostRedisplay();
    glutTimerFunc(100, updateC2, 0);
}

void updateC3(int value)
{
    if(C3position >0.9 )
        C3position = 0.0f;
    C3position += C3speed;
    glutPostRedisplay();
    glutTimerFunc(100, updateC3, 0);
}


void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'q':
        Tspeed = 0.02f;
        break;
    case 'w':
        Tspeed = 0.0f;
        break;
    case 'a':
        Aspeed =  0.045f;
        break;
    case 's':
        Aspeed = 0.0f;
        break;
    case 'z':
        Hspeed = 0.05f;
        break;
    case 'x':
        Hspeed = 0.0f;
        break;
    case '1':
        Sspeed = 0.003f;
        break;
    case '2':
        Sspeed = 0.0f;
        break;

        glutPostRedisplay();
    }
}

void handleMouse(int button,int state,int x,int y)
{
    if ( button == GLUT_LEFT_BUTTON)
    {
        night = false;
        glClearColor(0.6f, 1.0f, 1.0f, 1.0f);

    }
    if ( button == GLUT_RIGHT_BUTTON)
    {
        night = true;
        Night(_nt);
    }
    glutPostRedisplay();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);



///////////////   MEGHLA   /////////////

///////Sun//////////////
    glPushMatrix();
    glTranslatef(0.0f,Sposition, 0.0f);
    glPointSize(50.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.0f,0.9f);
    glEnd();
    glPopMatrix();
/////Cloud/////////////////

/////Cloud 1/////////////////
glPushMatrix();
    glTranslatef(C1position,0.0f, 0.0f);
    glPointSize(30.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.52f,0.9f);
    glEnd();

    glPointSize(30.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.48f,0.9f);
    glEnd();
    glPointSize(30.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.5f,0.88f);
    glEnd();

    glPointSize(30.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.52f,0.89f);
    glEnd();

glPopMatrix();

    //Cloud 2////

 glPushMatrix();
    glTranslatef(C2position,0.0f, 0.0f);
     glPointSize(40.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.5f,0.92f);
    glEnd();


     glPointSize(40.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.52f,0.92f);
    glEnd();


    glPointSize(40.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.55f,0.94f);
    glEnd();

     glPointSize(40.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.48f,0.94f);
    glEnd();
    glPopMatrix();

  //Cloud 3////////
glPushMatrix();
    glTranslatef(C3position,0.0f, 0.0f);
  glPointSize(40.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2f,0.92f);
    glEnd();


     glPointSize(30.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.24f,0.94f);
    glEnd();


    glPointSize(40.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.22f,0.94f);
    glEnd();

     glPointSize(40.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.17f,0.93f);
    glEnd();


      glPointSize(30.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.23f,0.93f);
    glEnd();

glPopMatrix();

//Hill 1
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f,0.0f);
    glVertex2f(-1.0f, 0.67f);
    glVertex2f(-0.98f,0.84f);
    glVertex2f(-0.95f, 0.67f);
    glVertex2f(-0.95f,0.67f);
    glVertex2f(-0.88f,0.88f);
    glVertex2f(-0.79f,0.67f);
    glVertex2f(-0.78f,0.67f);
    glVertex2f(-0.77f,0.81f);
    glVertex2f(-0.69f,0.67f);
    glEnd();
//HIll 2
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f,0.0f);
    glVertex2f(-0.72f,0.67f);
    glVertex2f(-0.65f,0.90f);
    glVertex2f(-0.60f,0.67f);
    glVertex2f(-0.58f,0.67f);
    glVertex2f(-0.55f,0.78f);
    glVertex2f(-0.50f,0.67f);
    glEnd();
//HILL3
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f,0.0f);
    glVertex2f(-0.55f,0.67f);
    glVertex2f(-0.50f,0.83f);
    glVertex2f(-0.45f,0.67f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f,0.0f);
    glVertex2f(-0.48f,0.67f);
    glVertex2f(-0.42f,0.93f);
    glVertex2f(-0.36f,0.67f);
    glEnd();
//Hill4
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f,0.0f);
    glVertex2f(-0.38f,0.67f);
    glVertex2f(-0.33f,0.86f);
    glVertex2f(-0.28f,0.67f);
    glVertex2f(-0.30f,0.67f);
    glVertex2f(-0.28f,0.79f);
    glVertex2f(-0.22f,0.67f);
//Hill 5
    glBegin(GL_POLYGON);
    glColor3f(0.03f, 0.6f,0.0f);
    glVertex2f(-0.12f,0.67f);
    glVertex2f(-0.15f,0.89f);
    glVertex2f(0.01f,0.67f);
    glEnd();
//Hill6
    glBegin(GL_POLYGON);
    glColor3f(0.03f, 0.6f,0.0f);
    glVertex2f(-0.10f,0.67f);
    glVertex2f(0.05f,0.82f);
    glVertex2f(0.15f,0.67f);
    glVertex2f(0.12f,0.67f);
    glVertex2f(0.15f,0.84f);
    glVertex2f(0.27,0.67f);
    glEnd();

//Hill 7
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f,0.0f);
    glVertex2f(0.20f,0.67f);
    glVertex2f(0.33f,0.82f);
    glVertex2f(0.35f,0.67f);
    glVertex2f(0.33f,0.67f);
    glVertex2f(0.40f,0.92f);
    glVertex2f(0.50f,0.67f);
    glVertex2f(0.50f,0.67f);
    glVertex2f(0.48f,0.80f);
    glVertex2f(0.58f,0.67f);
    glEnd();
//Hill 8
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f,0.0f);
    glVertex2f(0.52f,0.67f);
    glVertex2f(0.60f,0.93f);
    glVertex2f(0.66f,0.67f);
    glVertex2f(0.66f,0.67f);
    glVertex2f(0.65f,0.86f);
    glVertex2f(0.73f,0.67f);
    glVertex2f(0.73f,0.67f);
    glVertex2f(0.75f,0.79f);
    glVertex2f(0.80f,0.67f);
    glEnd();
//Hill 9
    glBegin(GL_POLYGON);
    glColor3f(0.2f, 0.5f,0.1f);
    glVertex2f(0.78f,0.67f);
    glVertex2f(0.86f,0.87f);
    glVertex2f(0.95f,0.67f);
    glVertex2f(0.95f,0.67f);
    glVertex2f(0.96f,0.76f);
    glVertex2f(1.0f,0.67f);
    glEnd();



////////////////////////////////////////////////////////////
//////////////          AKIB       ///////////////////////////

/////////////HOSPITAL & Tent side Quads
    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.5f,0.3f);
    glVertex2f(-0.339f, 0.67f);
    glVertex2f(1.0f, 0.67f);
    glVertex2f(1.0f, 0.14f);
    glVertex2f(-0.345f, 0.14f);
    glEnd();


/////////////////PLAYGROUND//////////////////////

////Main Ground
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.8f,0.0f);
    glVertex2f(-0.355f, 0.19f);
    glVertex2f(-0.358f, -0.3f);
    glVertex2f(0.3129f, -0.3f);
    glVertex2f(0.33f, 0.19f);
    glEnd();
    ////////////Playground LEFT side
    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(-0.34f, 0.67f);
    glVertex2f(-0.388f, -0.3f);
    glVertex2f(-0.338f, -0.3f);
    glVertex2f(-0.336f, 0.67f);
    glEnd();

    ////////////Playground Right side
    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(0.294f, 0.2f);
    glVertex2f(0.32f, 0.2f);
    glVertex2f(0.32f, -0.3f);
    glVertex2f(0.294f, -0.3f);
    glEnd();


    ////LEFT BAR///////
    glLineWidth(6.5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
    glVertex2f(-0.32f, 0.0f);
    glVertex2f(-0.25f, 0.0f);
    glEnd();

    glLineWidth(6.5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
    glVertex2f(-0.32f, -0.12f);
    glVertex2f(-0.25f, -0.12f);
    glEnd();

    glLineWidth(8.5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
    glVertex2f(-0.257f, 0.0f);
    glVertex2f(-0.257f, -0.12f);
    glEnd();

    ////RIGHT BAR////////////
    glLineWidth(6.5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
    glVertex2f(0.27f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glEnd();

    glLineWidth(6.5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
    glVertex2f(0.27f, -0.12f);
    glVertex2f(0.2f, -0.12f);
    glEnd();

    glLineWidth(9.4);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
    glVertex2f(0.208f, 0.0f);
    glVertex2f(0.208f, -0.12f);
    glEnd();

    ////PLAYGROUND MIDDLE Line
    glLineWidth(1.2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.033f, 0.19f);
    glVertex2f(-0.033f, -0.29f);
    glEnd();
    ////CENTRE
    glPointSize(40.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.033f, -0.062f);
    glEnd();

////////////END OF PLAYGROUND/////////

//////////TANK ROADS/////////
    glLineWidth(8);//side road
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(-0.39f, -0.31f);
    glVertex2f(0.35f, -0.29f);
    glEnd();

    glLineWidth(8);//side road
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(-1.0f, -0.51f);
    glVertex2f(0.35f, -0.51f);
    glEnd();

    glLineWidth(5);//Road site Tree
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(-0.33f, -0.31f);
    glVertex2f(-0.33f, -0.23f);
    glEnd();

    glPointSize(27.0);//TREE LEAF
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.33f, -0.22f);
    glEnd();

    glLineWidth(5);//TREE TOOT
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(-0.25f, -0.31f);
    glVertex2f(-0.25f, -0.23f);
    glEnd();

    glPointSize(27.0);//TREE LEAF
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.25f, -0.22f);
    glEnd();

    glLineWidth(5);//TREE TOOT
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(-0.16f, -0.31f);
    glVertex2f(-0.16f, -0.23f);
    glEnd();

    glPointSize(27.0);//TREE LEAF
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.16f, -0.22f);
    glEnd();

    glLineWidth(5);//TREE TOOT
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(-0.05f, -0.31f);
    glVertex2f(-0.05f, -0.23f);
    glEnd();

    glPointSize(27.0);//TREE LEAF
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.05f, -0.22f);
    glEnd();


    glLineWidth(5);//TREE TOOT
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(0.08f, -0.3f);
    glVertex2f(0.08f, -0.23f);
    glEnd();

    glPointSize(27.0);//TREE LEAF
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.08f, -0.21f);
    glEnd();


    glLineWidth(5);//TREE TOOT
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(0.19f, -0.3f);
    glVertex2f(0.19f, -0.23f);
    glEnd();

    glPointSize(27.0);//TREE LEAF
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.19f, -0.21f);
    glEnd();

    glLineWidth(5);//TREE TOOT
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(0.28f, -0.3f);
    glVertex2f(0.28f, -0.23f);
    glEnd();

    glPointSize(27.0);//TREE LEAF
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.28f, -0.21f);
    glEnd();

    glBegin(GL_QUADS);//MAIN ROAD
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(-0.39f, -0.32f);
    glVertex2f(0.35f, -0.3f);
    glVertex2f(0.35f, -0.5f);
    glVertex2f(-0.4f, -0.5f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(-0.39f, -0.41f);
    glVertex2f(-0.335f, -0.41f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.06f, -0.413f);
    glVertex2f(0.1f, -0.413f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.14f, -0.413f);
    glVertex2f(0.19f, -0.413f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.23f, -0.413f);
    glVertex2f(0.28f, -0.413f);
    glEnd();

///////////Ambulance Road/////////////////
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(0.318f, -1.0f);
    glVertex2f(0.57f, -1.0f);
    glVertex2f(0.57f, 0.2f);
    glVertex2f(0.318f, 0.2f);
    glEnd();

    /////////Road middle border
    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.44f, -0.4);
    glVertex2f(0.44f, -0.47f);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.44f, -0.2);
    glVertex2f(0.44f, -0.27f);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.44f, -0.0);
    glVertex2f(0.44f, -0.07f);
    glEnd();


////////////////////////////////////////
///////START OF TANK//////////////

    glPushMatrix();
    glTranslatef(Tposition,0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(-0.33f, -0.4f);
    glVertex2f(0.06f, -0.4f);
    glVertex2f(0.08f, -0.35f);
    glVertex2f(0.02f, -0.3f);
    glVertex2f(-0.29f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.33f, -0.4f);
    glVertex2f(-0.26f, -0.48f);
    glVertex2f(0.00f, -0.48f);
    glVertex2f(0.06f, -0.4f);
    glEnd();

    ////////Wheel of Tank/////
    glPointSize(20.0);
    glBegin(GL_POINTS);
    glColor3f(0.75f, 0.75f, 0.75f);
    glVertex2f(-0.26f, -0.44f);
    glEnd();

    glPointSize(20.0);
    glBegin(GL_POINTS);
    glColor3f(0.75f, 0.75f, 0.75f);
    glVertex2f(-0.21f, -0.44f);
    glEnd();

    glPointSize(20.0);
    glBegin(GL_POINTS);
    glColor3f(0.75f, 0.75f, 0.75f);
    glVertex2f(-0.16f, -0.44f);
    glEnd();

    glPointSize(20.0);
    glBegin(GL_POINTS);
    glColor3f(0.75f, 0.75f, 0.75f);
    glVertex2f(-0.11f, -0.44f);
    glEnd();

    glPointSize(20.0);
    glBegin(GL_POINTS);
    glColor3f(0.75f, 0.75f, 0.75f);
    glVertex2f(-0.06f, -0.44f);
    glEnd();

    glPointSize(20.0);
    glBegin(GL_POINTS);
    glColor3f(0.75f, 0.75f, 0.75f);
    glVertex2f(-0.01f, -0.44f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.5f);
    glVertex2f(-0.27f, -0.32f);
    glVertex2f(-0.24f, -0.27f);
    glVertex2f(-0.05f, -0.258f);
    glVertex2f(-0.01f, -0.307f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-0.22f, -0.27f);
    glVertex2f(-0.22f, -0.24f);
    glVertex2f(-0.19f, -0.2f);
    glVertex2f(-0.1f, -0.195f);
    glVertex2f(-0.07f, -0.259f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(-0.1f, -0.195f);
    glVertex2f(-0.07f, -0.258f);
    glVertex2f(0.08f, -0.15f);
    glVertex2f(0.08f, -0.12f);
    glEnd();
    glPopMatrix();

/////////////END OF TANK////////////////
///////////////////////////////////////////


//////////Start of  Ambulance/////
///////////////////////////////////
    glPushMatrix();
    glTranslatef(0.0f,Aposition, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.88f);
    glVertex2f(0.41f, -0.88f);
    glVertex2f(0.48f,  -0.88f);
    glVertex2f(0.48f, -0.7f);
    glVertex2f(0.41, -0.7f);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f,0.0f);
    glVertex2f(0.425f, -0.81);
    glVertex2f(0.465f, -0.81f);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f,0.0f);
    glVertex2f(0.445f, -0.78);
    glVertex2f(0.445f, -0.84f);
    glEnd();

    glLineWidth(11);//Ambulance light
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(0.41f, -0.72);
    glVertex2f(0.43f, -0.72f);
    glEnd();

    glLineWidth(11);//Ambulance light
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f,0.0f);
    glVertex2f(0.455f, -0.72);
    glVertex2f(0.48f, -0.72f);
    glEnd();

    glLineWidth(11);//Ambulance light
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.43f, -0.72);
    glVertex2f(0.455f, -0.72f);
    glEnd();

    glBegin(GL_QUADS);//left quads
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.38f, -0.65f);
    glVertex2f(0.38f,  -0.93f);
    glVertex2f(0.41f, -0.88f);
    glVertex2f(0.41, -0.65f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.88f);
    glVertex2f(0.375f, -0.65);
    glVertex2f(0.375f, -0.93f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.88f);
    glVertex2f(0.42f, -0.7);
    glVertex2f(0.38f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);//right quads
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.51f, -0.65f);
    glVertex2f(0.51f,  -0.93f);
    glVertex2f(0.48f, -0.88f);
    glVertex2f(0.48, -0.65f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.88f);
    glVertex2f(0.515f, -0.65);
    glVertex2f(0.515f, -0.93f);
    glEnd();

    glBegin(GL_QUADS);//Upper white
    glColor3f(1.0f, 1.0f, 0.88f);
    glVertex2f(0.52f, -0.65f);
    glVertex2f(0.5f,  -0.55f);
    glVertex2f(0.39f, -0.55f);
    glVertex2f(0.37, -0.65f);
    glEnd();

    glLineWidth(6);//looking glass
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.51f, -0.66);
    glVertex2f(0.535f, -0.66f);
    glEnd();

    glLineWidth(6);//looking glass
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.355f, -0.66);
    glVertex2f(0.37f, -0.66f);
    glEnd();

    glLineWidth(2);//light
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.395f, -0.555);
    glVertex2f(0.44f, -0.555f);
    glEnd();

    glLineWidth(2);//light
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.45f, -0.555);
    glVertex2f(0.495f, -0.555f);
    glEnd();

    glBegin(GL_QUADS);//upper
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, -0.7f);
    glVertex2f(0.49f,  -0.7f);
    glVertex2f(0.51f, -0.65f);
    glVertex2f(0.38, -0.65f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.41f, -0.7);
    glVertex2f(0.38f, -0.65f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.88f);
    glVertex2f(0.48f, -0.7);
    glVertex2f(0.51f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);//down
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, -0.88f);
    glVertex2f(0.49f,  -0.88f);
    glVertex2f(0.51f, -0.93f);
    glVertex2f(0.38, -0.93f);
    glEnd();

    glBegin(GL_QUADS);//bottom white
    glColor3f(1.0f, 1.0f, 0.88f);
    glVertex2f(0.37f, -0.93f);
    glVertex2f(0.38f,  -0.99f);
    glVertex2f(0.51f, -0.99f);
    glVertex2f(0.52, -0.93f);
    glEnd();

    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.88f);
    glVertex2f(0.41f, -0.88);
    glVertex2f(0.38f, -0.93f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.88f);
    glVertex2f(0.48f, -0.88);
    glVertex2f(0.51f, -0.93f);
    glEnd();

    glLineWidth(3);//middle line
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.88f);
    glVertex2f(0.41f, -0.79);
    glVertex2f(0.38f, -0.79f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.88f);
    glVertex2f(0.48f, -0.79);
    glVertex2f(0.51f, -0.79f);
    glEnd();


    glLineWidth(3.3);//Left Wheel
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.3666f, -0.84);
    glVertex2f(0.3666f, -0.89f);
    glEnd();

    glLineWidth(3.3);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.3666f, -0.70);
    glVertex2f(0.3666f, -0.75f);
    glEnd();

    glLineWidth(3.3);//Right Wheel
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.5236f, -0.84);
    glVertex2f(0.5236f, -0.89f);
    glEnd();

    glLineWidth(3.3);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.5236f, -0.70);
    glVertex2f(0.5236f, -0.75f);
    glEnd();
    glPopMatrix();
////////////////END OF AMBULANCE//////////////
/////////////////////////////////////////////////////

////////////////////////////////////////////////////
////////////START WATCH TOWER/////////////

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0.3, 0.3, 0.3);
    glVertex2f(-0.28f, 0.26f);
    glVertex2f(-0.28f, 0.58f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.18f, 0.26f);
    glVertex2f(-0.18f, 0.58f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.325f, 0.58);
    glVertex2f(-0.135f, 0.58f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.32f, 0.58);
    glVertex2f(-0.32f, 0.68f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.14f, 0.58f);
    glVertex2f(-0.14f, 0.68f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.32f, 0.68f);
    glVertex2f(-0.14f, 0.68f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.32f, 0.61f);
    glVertex2f(-0.14f, 0.61f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.32f, 0.64f);
    glVertex2f(-0.14f, 0.64f);
    glEnd();

    glBegin(GL_QUADS);//base
    glColor3f(0.23f,0.2f,0.1f);
    glVertex2f(-0.29f, 0.59f);
    glVertex2f(-0.17f, 0.59f);
    glVertex2f(-0.17f, 0.677f);
    glVertex2f(-0.29f, 0.677f);
    glEnd();

    glLineWidth(2.5);//base left pillar
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.285f, 0.68f);
    glVertex2f(-0.285f, 0.72f);
    glEnd();

    glLineWidth(2.5);//base left pillar
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.175f, 0.68f);
    glVertex2f(-0.175f, 0.72f);
    glEnd();

    glLineWidth(4);//left pillar
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.3f, 0.58f);
    glVertex2f(-0.3f, 0.72f);
    glEnd();

    glLineWidth(4);//right pillar
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f,0.3f);
    glVertex2f(-0.16f, 0.58f);
    glVertex2f(-0.16f, 0.72f);
    glEnd();

    glBegin(GL_TRIANGLES);//roof top
    glColor3f(0.29,0.33,0.13);
    glVertex2f(-0.34f, 0.72f);
    glVertex2f(-0.12f, 0.72f);
    glVertex2f(-0.23f, 0.83f);
    glEnd();

    ///////////Stairs ///////////
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.24f, 0.26f);
    glVertex2f(-0.24f, 0.58f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.26f);
    glVertex2f(-0.22f, 0.58f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.29f);
    glVertex2f(-0.24f, 0.29f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.32f);
    glVertex2f(-0.24f, 0.32f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.35f);
    glVertex2f(-0.24f, 0.35f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.38f);
    glVertex2f(-0.24f, 0.38f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.41f);
    glVertex2f(-0.24f, 0.41f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.44f);
    glVertex2f(-0.24f, 0.44f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.47f);
    glVertex2f(-0.24f, 0.47f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.50f);
    glVertex2f(-0.24f, 0.50f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,1.0f);
    glVertex2f(-0.22f, 0.53f);
    glVertex2f(-0.24f, 0.53f);
    glEnd();
/////////////END OF Watch TOWER////////////
//////////////////////////////////////////////////


////////////////////////////////////////////////
/////////////Start of Hospital/////////////////

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.4f, 0.5f);
    glVertex2f(0.3f, 0.29f);
    glVertex2f(0.58f, 0.29f);
    glVertex2f(0.58f, 0.8f);
    glVertex2f(0.3f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.3f, 0.3f);
    glVertex2f(0.27f, 0.77f);
    glVertex2f(0.61f, 0.77f);
    glVertex2f(0.61f, 0.84f);
    glVertex2f(0.27f, 0.84f);
    glEnd();

    glBegin(GL_QUADS);//door
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.29f);
    glVertex2f(0.48f, 0.29f);
    glVertex2f(0.48f, 0.52f);
    glVertex2f(0.4f, 0.52f);
    glEnd();

    glBegin(GL_QUADS);//left window
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.32f, 0.48f);
    glVertex2f(0.38f, 0.48f);
    glVertex2f(0.38f, 0.57f);
    glVertex2f(0.32f, 0.57f);
    glEnd();

    glBegin(GL_QUADS);//right window
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.50f, 0.48f);
    glVertex2f(0.56f, 0.48f);
    glVertex2f(0.56f, 0.57f);
    glVertex2f(0.50f, 0.57f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.43f, 0.57f);
    glVertex2f(0.46f, 0.57f);
    glVertex2f(0.46f, 0.71f);
    glVertex2f(0.43f, 0.71f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.39f, 0.62f);
    glVertex2f(0.50f, 0.62f);
    glVertex2f(0.50f, 0.66f);
    glVertex2f(0.39f, 0.66f);
    glEnd();
///////END OF Hospital////////////////
/////////////////////////////////////////



//////////////KABYO/////////////////////////


//////////Tent Start//////////////////
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.05f, 0.26f);
    glVertex2f(0.20f, 0.26f);
    glVertex2f(0.15f, 0.5f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.15f, 0.5f);
    glVertex2f(0.08f, 0.62f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.08f, 0.62f);
    glEnd();

//Flag 1
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.08f, 0.62f);
    glVertex2f(0.08f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.08f, 0.65f);
    glVertex2f(0.14f, 0.65f);
    glVertex2f(0.14f, 0.7f);
    glVertex2f(0.08f, 0.7f);
    glEnd();

    glPointSize(7);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.11f, 0.67f);
    glEnd();

//Tent 2

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.65f, 0.26f);
    glVertex2f(0.90f, 0.26f);
    glVertex2f(0.85f, 0.5f);
    glVertex2f(0.7f, 0.5f);
    glVertex2f(0.85f, 0.5f);
    glVertex2f(0.78f, 0.62f);
    glVertex2f(0.7f, 0.5f);
    glVertex2f(0.78f, 0.62f);
    glEnd();


    glLineWidth(40);//tent 1 door
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.075f, 0.26f);
    glVertex2f(0.075f, 0.4f);
    glEnd();

    glLineWidth(40);// tent 2 door
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.78f, 0.26f);
    glVertex2f(0.78f, 0.4f);
    glEnd();

    //kuti tent 1/////
    glLineWidth(5);// tent 2 door
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(-0.08f, 0.25f);
    glEnd();

    glLineWidth(5);// tent 2 kuti
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.15f, 0.5f);
    glVertex2f(0.23f, 0.25f);
    glEnd();

//kuti tent 2/////
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.7f, 0.5f);
    glVertex2f(0.62f, 0.25f);
    glEnd();

    glLineWidth(5);// tent 2 door
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.85f, 0.5f);
    glVertex2f(0.93f, 0.25f);
    glEnd();

//Flag 2

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f,0.0f);
    glVertex2f(0.78f, 0.62f);
    glVertex2f(0.78f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.78f, 0.65f);
    glVertex2f(0.84f, 0.65f);
    glVertex2f(0.84f, 0.7f);
    glVertex2f(0.78f, 0.7f);
    glEnd();

    glPointSize(7);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.81f, 0.67f);
    glEnd();
//////Road to Helipad/////////

    glBegin(GL_QUADS);// road
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(0.57f, 0.08f);
    glVertex2f(0.75f, 0.08f);
    glVertex2f(0.75f, 0.20f);
    glVertex2f(0.57f, 0.2f);
    glEnd();
////Swiming Pool ///////
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f,1.0f);
    glVertex2f(0.57f, -0.35f);
    glVertex2f(0.65f, -0.35f);
    glVertex2f(0.65f, -0.1f);
    glVertex2f(0.72f, -0.1f);
    glVertex2f(0.72f, 0.08f);
    glVertex2f(0.57f, 0.08f);
    glVertex2f(0.57f, -0.35f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.7f,1.0f);
    glVertex2f(0.57,-0.55);
    glVertex2f(1.0,-0.55);
    glVertex2f(1.0,-0.35);
    glVertex2f(0.57,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.7f,1.0f);
    glVertex2f(0.9,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,-0.1);
    glVertex2f(0.9,-0.1);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(0.57f, -0.55f);
    glVertex2f(1.0f,-0.55f);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(1.0f, -0.55f);
    glVertex2f(1.0f,-0.1f);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(0.9f,-0.1f);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(0.57f, -0.56f);
    glVertex2f(0.57f,0.092f);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(0.57f, 0.08f);
    glVertex2f(0.72f,0.08f);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(0.72f, 0.08f);
    glVertex2f(0.72f,-0.1f);
    glEnd();
// Tree in swiming pool////

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, -0.02f);
    glVertex2f(0.82f, -0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.137255f, 0.556863f,0.137255f);
    glVertex2f(0.82f, 0.05f);
    glVertex2f(0.9f, 0.05f);
    glVertex2f(0.86f, 0.17f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(0.86f, 0.05f);
    glVertex2f(0.86f,-0.02f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.137255f, 0.556863f,0.137255f);
    glVertex2f(0.92f, 0.05f);
    glVertex2f(0.99f, 0.05f);
    glVertex2f(0.95f, 0.17f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(0.95f, 0.05f);
    glVertex2f(0.95f,-0.02f);
    glEnd();
    glBegin(GL_QUADS);

    //Swimming pool road


    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(0.72f, -0.1f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.8f, 0.20f);
    glVertex2f(0.72f, 0.2f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.59f, 0.13f);
    glVertex2f(0.63f, 0.13f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.67f, 0.13f);
    glVertex2f(0.71f, 0.13f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.76f, -0.05f);
    glVertex2f(0.76f,-0.01f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.76f, 0.02f);
    glVertex2f(0.76f,0.06f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.76f, 0.09f);
    glVertex2f(0.76f,0.13f);
    glEnd();
    //Helipad Style///
    glBegin(GL_QUADS);
    glColor3f(0.196078f, 0.8f,0.196078f);
    glVertex2f(0.65,-0.35);
    glVertex2f(0.9,-0.35);
    glVertex2f(0.9,-0.1);
    glVertex2f(0.65,-0.1);
    glEnd();

    glBegin(GL_QUADS);//Landing
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.7,-0.3);
    glVertex2f(0.85,-0.3);
    glVertex2f(0.85,-0.15);
    glVertex2f(0.7,-0.15);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.74f, -0.25f);
    glVertex2f(0.74f, -0.20f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.8f, -0.25f);
    glVertex2f(0.8f, -0.20f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,1.0f);
    glVertex2f(0.74f, -0.22f);
    glVertex2f(0.8f, -0.22f);
    glEnd();
//helicopter

    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(0.7f, -0.25f);
    glVertex2f(0.82f, -0.25f);
    glVertex2f(0.84f, -0.23f);
    glVertex2f(0.87f, -0.23f);
    glVertex2f(0.87f, -0.17f);
    glVertex2f(0.84f, -0.17f);
    glVertex2f(0.84f, -0.21f);
    glVertex2f(0.82f, -0.14f);

    glVertex2f(0.77f, -0.13f);
    glVertex2f(0.75f, -0.14f);
    glVertex2f(0.7f, -0.19f);
    glVertex2f(0.7f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);//glass
    glColor3ub(128,166,163);
    glVertex2f(0.7f,-0.20f);
    glVertex2f(0.75f,-0.20f);
    glVertex2f(0.75f,-0.15f);
    glVertex2f(0.7f,-0.19f);
    glEnd();

    glBegin(GL_QUADS);//glass

    glColor3ub(128,166,163);
    glVertex2f(0.76f,-0.20f);
    glVertex2f(0.79f,-0.20f);
    glVertex2f(0.79f,-0.15f);
    glVertex2f(0.76f,-0.15f);
    glEnd();


    glBegin(GL_QUADS);//glass
    glColor3ub(128,166,163);
    glVertex2f(0.80f,-0.20f);
    glVertex2f(0.82f,-0.20f);
    glVertex2f(0.82f,-0.15f);
    glVertex2f(0.80f,-0.15f);
    glEnd();
//Backline

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(0.87f, -0.2f);
    glVertex2f(0.94f, -0.2f);
    glEnd();

//stand
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(0.75f, -0.25f);
    glVertex2f(0.75f, -0.31f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(0.82f, -0.25f);
    glVertex2f(0.82f, -0.31f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(0.74f, -0.31f);
    glVertex2f(0.83f, -0.31f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(0.73f, -0.25f);
    glVertex2f(0.73f, -0.29f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(0.8f, -0.25f);
    glVertex2f(0.8f, -0.29f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(0.72f, -0.29f);
    glVertex2f(0.81f, -0.29f);
    glEnd();

//Blade
    glPointSize(10);
    glBegin(GL_POINTS);
    glColor3f(0.29,0.33,0.13);
    glVertex2f(0.78f, -0.13f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.137255f, 0.556863f,0.137255f);
    glVertex2f(0.78f, -0.13f);
    glVertex2f(0.85f, -0.05f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.137255f, 0.556863f,0.137255f);
    glVertex2f(0.78f, -0.13f);
    glVertex2f(0.71f, -0.05f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.137255f, 0.556863f,0.137255f);
    glVertex2f(0.78f, -0.13f);
    glVertex2f(0.81f, -0.22f);
    glEnd();
    glPopMatrix();

//Canteen
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.57f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f, -0.88f);
    glVertex2f(0.57f,-0.88f);
    glEnd();

    glBegin(GL_QUADS);//Shape
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(0.7f,-0.92f);
    glVertex2f(0.9f,-0.92f);
    glVertex2f(0.9f,-0.75f);
    glVertex2f(0.7f,-0.75f);
    glEnd();

    glBegin(GL_QUADS);//up
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.69f,-0.75f);
    glVertex2f(0.91f,-0.75f);
    glVertex2f(0.91f,-0.73f);
    glVertex2f(0.69f,-0.65f);
    glEnd();

    glBegin(GL_QUADS);// Window
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.72f,-0.87f);
    glVertex2f(0.75f,-0.87f);
    glVertex2f(0.75f,-0.83f);
    glVertex2f(0.72f,-0.83f);
    glEnd();

    glBegin(GL_QUADS);// Window
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.77f,-0.87f);
    glVertex2f(0.8f,-0.87f);
    glVertex2f(0.8f,-0.83f);
    glVertex2f(0.77f,-0.83f);
    glEnd();

    glBegin(GL_QUADS);// Door
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.81f,-0.90f);
    glVertex2f(0.85f,-0.90f);
    glVertex2f(0.85f,-0.8f);
    glVertex2f(0.81f,-0.8f);
    glEnd();

    glBegin(GL_QUADS);// Window
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.86f,-0.87f);
    glVertex2f(0.89f,-0.87f);
    glVertex2f(0.89f,-0.83f);
    glVertex2f(0.86f,-0.83f);
    glEnd();


    glBegin(GL_QUADS);// 2nd Home
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.64f,-0.92f);
    glVertex2f(0.7f,-0.92f);
    glVertex2f(0.7f,-0.83f);
    glVertex2f(0.64f,-0.83f);
    glEnd();

    glBegin(GL_QUADS);// 2nd Home up

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.62f,-0.83f);
    glVertex2f(0.7f,-0.83f);
    glVertex2f(0.7f,-0.8f);
    glVertex2f(0.64f,-0.8f);
    glEnd();

    glBegin(GL_QUADS);// 2nd Home Door

    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(0.66f,-0.92f);
    glVertex2f(0.68f,-0.92f);
    glVertex2f(0.68f,-0.86f);
    glVertex2f(0.66f,-0.86f);
    glEnd();

//tree
    glBegin(GL_POLYGON);
    glColor3f(0.137255f, 0.556863f,0.137255f);
    glVertex2f(0.92f, -0.87f);
    glVertex2f(0.97f, -0.87f);
    glVertex2f(0.94f, -0.78f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.137255f, 0.556863f,0.137255f);
    glVertex2f(0.58f, -0.87f);
    glVertex2f(0.63f, -0.87f);
    glVertex2f(0.60f, -0.78f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(0.94f, -0.87f);
    glVertex2f(0.94f, -0.92f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.60f, 0.40f, 0.12f);
    glVertex2f(0.6f, -0.87f);
    glVertex2f(0.6f, -0.92f);
    glEnd();


    glBegin(GL_QUADS);// street
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(0.57f,-1.0f);
    glVertex2f(0.85f,-1.0f);
    glVertex2f(0.85f,-0.97f);
    glVertex2f(0.57f,-0.97f);
    glEnd();

    glBegin(GL_QUADS);// street
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(0.82f,-1.0f);
    glVertex2f(0.85f,-1.0f);
    glVertex2f(0.85f,-0.92f);
    glVertex2f(0.82f,-0.92f);
    glEnd();



////////////////////TANZIL////////////////////



    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.498039f,0.196078f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(-0.38f, -0.22f);
    glVertex2f(-1.0f, -0.22f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.9f, 0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-0.382f, -0.3f);
    glVertex2f(-0.33f, 0.67f);
    glVertex2f(-1.0f, 0.67f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.92f, -0.3f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-0.9f, 0.4f);
    glVertex2f(-0.92f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.8f, -0.3f);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.82f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.72f, -0.3f);
    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.72f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.62f, -0.3f);
    glVertex2f(-0.6f, -0.3f);
    glVertex2f(-0.6f, 0.0f);
    glVertex2f(-0.62f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.82f, -0.05f);
    glVertex2f(-0.55f, -0.05f);
    glVertex2f(-0.55f, 0.0f);
    glVertex2f(-0.82f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.82f, 0.0f);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.9f, 0.21f);
    glVertex2f(-0.9f, 0.17f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.55f, 0.0f);
    glVertex2f(-0.5f, -0.3f);
    glVertex2f(-0.52f, -0.3f);
    glVertex2f(-0.57f, 0.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.47f, -0.3f);
    glVertex2f(-0.45f, -0.3f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.47f, 0.4f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.4f, 0.4f,0.4f);
    glVertex2f(-0.9f, 0.37f);
    glVertex2f(-0.47f, 0.37f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.8f, 0.1f);
    glVertex2f(-0.99f, 0.14f);
    glVertex2f(-0.94f, 0.14f);
    glVertex2f(-0.93f, 0.4f);
    glVertex2f(-0.99f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.88f, 0.03f);
    glVertex2f(-0.86f, 0.06f);
    glVertex2f(-0.89f, 0.05f);
    glVertex2f(-0.88f, 0.03f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.88f, 0.03f);
    glVertex2f(-0.87f, 0.04f);
    glVertex2f(-0.90f, 0.06f);
    glVertex2f(-0.92f, 0.04f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.92f, 0.04f);
    glVertex2f(-0.90f, 0.06f);
    glVertex2f(-0.92f, 0.09f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.94f, 0.08f);
    glVertex2f(-0.92f, 0.09f);
    glVertex2f(-0.92f, 0.16f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.96f, 0.12f);
    glVertex2f(-0.93f, 0.12f);
    glVertex2f(-0.93f, 0.16f);
    glVertex2f(-0.95f, 0.16f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.95f, 0.13f);
    glVertex2f(-0.97f, 0.1f);
    glVertex2f(-0.98f, 0.11f);
    glVertex2f(-0.99f, 0.14f);
    glVertex2f(-0.98f, 0.18f);
    glVertex2f(-0.96f, 0.17f);
    glVertex2f(-0.95f, 0.16f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.975f, 0.4f);
    glVertex2f(-0.945f, 0.4f);
    glVertex2f(-0.945f, 0.43f);
    glVertex2f(-0.975f, 0.43f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.975f, 0.43f);
    glVertex2f(-0.98f, 0.48f);
    glVertex2f(-0.975f, 0.5f);
    glVertex2f(-0.968f, 0.51f);
    glVertex2f(-0.96f, 0.54f);
    glVertex2f(-0.945f, 0.5f);
    glVertex2f(-0.94f, 0.48f);
    glVertex2f(-0.945f, 0.43f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.98f, 0.49f);
    glVertex2f(-0.94f, 0.49f);
    glVertex2f(-0.94f, 0.525f);
    glVertex2f(-0.945f, 0.55f);
    glVertex2f(-0.965f, 0.56f);
    glVertex2f(-0.975f, 0.55f);
    glVertex2f(-0.98f, 0.525f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.99f, 0.37f);
    glVertex2f(-0.963f, 0.31f);
    glVertex2f(-0.945f, 0.32f);
    glVertex2f(-0.98f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.963f, 0.31f);
    glVertex2f(-0.92f, 0.34f);
    glVertex2f(-0.925f, 0.37f);
    glVertex2f(-0.95f, 0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.92f, 0.34f);
    glVertex2f(-0.91f, 0.33f);
    glVertex2f(-0.9f, 0.34f);
    glVertex2f(-0.908f, 0.36f);
    glVertex2f(-0.905f, 0.365f);
    glVertex2f(-0.925f, 0.37f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.975f, 0.43f);
    glVertex2f(-0.945f, 0.43f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.965f, 0.4f);
    glVertex2f(-0.925f, 0.35f);
    glVertex2f(-0.925f, 0.37f);
    glVertex2f(-0.945f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.91f, 0.34f);
    glVertex2f(-0.90f, 0.33f);
    glVertex2f(-0.89f, 0.34f);
    glVertex2f(-0.902f, 0.36f);
    glVertex2f(-0.901f, 0.365f);
    glVertex2f(-0.910f, 0.37f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.985f, 0.12f);
    glVertex2f(-0.95f, 0.08f);
    glVertex2f(-0.94f, 0.10f);
    glVertex2f(-0.96f, 0.12f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.95f, 0.005f);
    glVertex2f(-0.935f, 0.01f);
    glVertex2f(-0.93f, 0.12f);
    glVertex2f(-0.95f, 0.08f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.95f, -0.04f);
    glVertex2f(-0.935f, -0.04f);
    glVertex2f(-0.935f, 0.01f);
    glVertex2f(-0.95f, 0.005f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.95f, -0.06f);
    glVertex2f(-0.91f, -0.06f);
    glVertex2f(-0.935f, -0.04f);
    glVertex2f(-0.95f, -0.04f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-1.0f, 0.05f);
    glVertex2f(-0.97f, 0.05f);
    glVertex2f(-0.98f, 0.15f);
    glVertex2f(-0.99f, 0.15f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.99f, 0.15f);
    glVertex2f(-0.98f, 0.15f);
    glVertex2f(-0.98f, 0.4f);
    glVertex2f(-0.99f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.988f, 0.4f);
    glVertex2f(-0.98f, 0.4f);
    glVertex2f(-0.98f, 0.45f);
    glVertex2f(-0.988f, 0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.984f, 0.4f);
    glVertex2f(-0.98f, 0.4f);
    glVertex2f(-0.98f, 0.5f);
    glVertex2f(-0.984f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.98f, 0.28f);
    glVertex2f(-0.96f, 0.28f);
    glVertex2f(-0.96f, 0.3f);
    glVertex2f(-0.98f, 0.3f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.92f, -0.06f);
    glVertex2f(-0.95f, -0.06f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.92f, -0.25f);
    glVertex2f(-0.95f, -0.25f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.9f, 0.25f);
    glVertex2f(-0.87f, 0.25f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.9f, -0.15f);
    glVertex2f(-0.87f, -0.15f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.98f, -0.3f);
    glVertex2f(-0.96f, -0.3f);
    glVertex2f(-0.96f, -0.2f);
    glVertex2f(-0.98f, -0.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1f, 0.7f, 0.2f);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(-0.94f, -0.2f);
    glVertex2f(-0.97f, -0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.42f, -0.3f);
    glVertex2f(-0.40f, -0.3f);
    glVertex2f(-0.40f, -0.2f);
    glVertex2f(-0.42f, -0.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1f, 0.7f, 0.2f);
    glVertex2f(-0.44f, -0.2f);
    glVertex2f(-0.382f, -0.2f);
    glVertex2f(-0.41f, -0.1f);
    glEnd();





/////////////////////SUPRO/////////////////

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f,0.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f( 0.318f, -1.0f);
    glVertex2f(0.318f, -0.74f);
    glVertex2f(-1.0f, -0.74f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6f, 1.0f, 0.0f);
    glVertex2f(-0.72f, -0.78f);
    glVertex2f(-0.72f, -0.68f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.74f, -0.78f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.68f, -0.68f);
    glVertex2f(-0.74f, -0.60f);
    glVertex2f(-0.78f, -0.68f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(-0.59f, -0.78f);
    glVertex2f(-0.59f, -0.66f);
    glVertex2f(-0.61f, -0.66f);
    glVertex2f(-0.61f, -0.78f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.55f, -0.66f);
    glVertex2f(-0.60f, -0.60f);
    glVertex2f(-0.65f, -0.66f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(0.01f, -0.78f);
    glVertex2f(0.01f, -0.68f);
    glVertex2f(-0.01f, -0.68f);
    glVertex2f(-0.01f, -0.78f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.05f, -0.68f);
    glVertex2f(0.0f, -0.60f);
    glVertex2f(-0.05f, -0.68f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(0.11f, -0.78f);
    glVertex2f(0.11f, -0.68f);
    glVertex2f(0.13f, -0.68f);
    glVertex2f(0.13f, -0.78f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.17f, -0.68f);
    glVertex2f(0.12f, -0.60f);
    glVertex2f(0.07f, -0.68f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.95f, -0.68f);
    glVertex2f(-0.97f, -0.68f);
    glVertex2f(-0.97f, -0.78f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.92f, -0.68f);
    glVertex2f(-0.955f, -0.60f);
    glVertex2f(-1.0f, -0.68f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(-0.84f, -0.78f);
    glVertex2f(-0.84f, -0.68f);
    glVertex2f(-0.86f, -0.68f);
    glVertex2f(-0.86f, -0.78f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.8f, -0.68f);
    glVertex2f(-0.85f, -0.60f);
    glVertex2f(-0.9f, -0.68f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(-0.47f, -0.78f);
    glVertex2f(-0.47f, -0.68f);
    glVertex2f(-0.49f, -0.68f);
    glVertex2f(-0.49f, -0.78f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.43f, -0.68f);
    glVertex2f(-0.48f, -0.60f);
    glVertex2f(-0.53f, -0.68f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(-0.35f, -0.78f);
    glVertex2f(-0.35f, -0.68f);
    glVertex2f(-0.37f, -0.68f);
    glVertex2f(-0.37f, -0.78f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.31f, -0.68f);
    glVertex2f(-0.36f, -0.60f);
    glVertex2f(-0.41f, -0.68f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(-0.23f, -0.78f);
    glVertex2f(-0.23f, -0.68f);
    glVertex2f(-0.25f, -0.68f);
    glVertex2f(-0.25f, -0.78f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.19f, -0.68f);
    glVertex2f(-0.24f, -0.60f);
    glVertex2f(-0.29f, -0.68f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(-0.11f, -0.78f);
    glVertex2f(-0.11f, -0.68f);
    glVertex2f(-0.13f, -0.68f);
    glVertex2f(-0.13f, -0.78f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.07f, -0.68f);
    glVertex2f(-0.12f, -0.60f);
    glVertex2f(-0.17f, -0.68f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.1f, 0.0f);
    glVertex2f(0.23f, -0.78f);
    glVertex2f(0.23f, -0.68f);
    glVertex2f(0.25f, -0.68f);
    glVertex2f(0.25f, -0.78f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.29f, -0.68f);
    glVertex2f(0.24f, -0.60f);
    glVertex2f(0.19f, -0.68f);
    glEnd();
////////////////////




//gun//
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.698f, -0.68f);
    glVertex2f(-0.53f, -0.68f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.67f, -0.68f);
    glVertex2f(-0.55f, -0.68f);
    glVertex2f(-0.55f, -0.688f);
    glVertex2f(-0.67f, -0.688f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.67f, -0.688f);
    glVertex2f(-0.57f, -0.688f);
    glVertex2f(-0.57f, -0.698f);
    glVertex2f(-0.67f, -0.698f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.67f, -0.698f);
    glVertex2f(-0.595f, -0.698f);
    glVertex2f(-0.595f, -0.6995f);
    glVertex2f(-0.67f, -0.6995f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.67f, -0.68f);
    glVertex2f(-0.698f, -0.68f);
    glVertex2f(-0.698f, -0.73f);
    glVertex2f(-0.67f, -0.6995f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.62f, -0.6995f);
    glVertex2f(-0.64f, -0.73f);
    glVertex2f(-0.66f, -0.73f);
    glVertex2f(-0.64f, -0.6995f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.08f, -0.65f);
    glVertex2f(0.08f, -0.79f);
    glVertex2f(0.01f, -0.79f);
    glVertex2f(0.01f, -0.65f);
    glEnd();
//leg//
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.75f, -0.94f);
    glVertex2f(-0.76f, -0.96f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.77f, -0.93f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.75f, -0.94f);
    glVertex2f(-0.76f, -0.96f);
    glVertex2f(-0.72f, -0.95f);
    glVertex2f(-0.74f, -0.98f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.72f, -0.99f);
    glVertex2f(-0.74f, -0.98f);
    glVertex2f(-0.72f, -0.94f);
    glVertex2f(-0.75f, -0.94f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.72f, -0.94f);
    glVertex2f(-0.70f, -0.96f);
    glVertex2f(-0.72f, -0.99f);
    glVertex2f(-0.74f, -0.98f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.72f, -0.94f);
    glVertex2f(-0.70f, -0.96f);
    glVertex2f(-0.71f, -0.88f);
    glVertex2f(-0.739f, -0.87f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.739f, -0.87f);
    glVertex2f(-0.71f, -0.88f);
    glVertex2f(-0.72f, -0.85f);
    glVertex2f(-0.73f, -0.88f);
    glVertex2f(-0.72f, -0.92f);
    glVertex2f(-0.715f, -0.91f);
    glVertex2f(-0.739f, -0.90f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.715f, -0.86f);
    glVertex2f(-0.685f, -0.86f);
    glVertex2f(-0.685f, -0.90f);
    glVertex2f(-0.739f, -0.90f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.71f, -0.98f);
    glVertex2f(-0.683f, -0.97f);
    glVertex2f(-0.683f, -0.86f);
    glVertex2f(-0.685f, -0.86f);
    glEnd();

//hand//
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.65f, -0.74f);
    glVertex2f(-0.64f, -0.73f);
    glVertex2f(-0.63f, -0.74f);
    glVertex2f(-0.642f, -0.76f);
    glVertex2f(-0.639f, -0.765f);
    glVertex2f(-0.650f, -0.77f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.695f, -0.8f);
    glVertex2f(-0.655f, -0.75f);
    glVertex2f(-0.655f, -0.77f);
    glVertex2f(-0.695f, -0.83f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.695f, -0.8f);
    glVertex2f(-0.73f, -0.77f);
    glVertex2f(-0.735f, -0.8f);
    glVertex2f(-0.695f, -0.83f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.67f, -0.74f);
    glVertex2f(-0.66f, -0.73f);
    glVertex2f(-0.65f, -0.74f);
    glVertex2f(-0.672f, -0.76f);
    glVertex2f(-0.671f, -0.765f);
    glVertex2f(-0.67f, -0.77f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.715f, -0.8f);
    glVertex2f(-0.675f, -0.75f);
    glVertex2f(-0.675f, -0.77f);
    glVertex2f(-0.695f, -0.8f);
    glEnd();
//hand//



//head//
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.735f, -0.69f);
    glVertex2f(-0.705f, -0.69f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.73f, -0.63f);
    glVertex2f(-0.705f, -0.63f);
    glVertex2f(-0.705f, -0.605f);
    glVertex2f(-0.715f, -0.57f);
    glVertex2f(-0.725f, -0.56f);
    glVertex2f(-0.727f, -0.57f);
    glVertex2f(-0.735f, -0.605f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.727f, -0.69f);
    glVertex2f(-0.73f, -0.64f);
    glVertex2f(-0.727f, -0.62f);
    glVertex2f(-0.718f, -0.621f);
    glVertex2f(-0.72f, -0.60f);
    glVertex2f(-0.715f, -0.62f);
    glVertex2f(-0.71f, -0.64f);
    glVertex2f(-0.715f, -0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.727f, -0.66f);
    glVertex2f(-0.715f, 0-.66f);
    glVertex2f(-0.715f, -0.69f);
    glVertex2f(-0.727f, -0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.8f, 0.1f);
    glVertex2f(-0.699f, -0.69f);
    glVertex2f(-0.736f, -0.69f);
    glVertex2f(-0.736f, -0.86f);
    glVertex2f(-0.699f, -0.865f);
    glEnd();
///////////////////man---2///////////////

//leg//

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.65f, -0.92f);
    glVertex2f(-0.59f, -0.93f);
    glVertex2f(-0.59f, -0.97f);
    glVertex2f(-0.66f, -0.94f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.59f, -0.93f);
    glVertex2f(-0.54f, -0.89f);
    glVertex2f(-0.54f, -0.97f);
    glVertex2f(-0.59f, -0.97f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(-0.66f, -0.88f);
    glVertex2f(-0.54f, -0.88f);
    glVertex2f(-0.54f, -0.89f);
    glVertex2f(-0.59f, -0.93f);
    glVertex2f(-0.66f, -0.92f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.66f, -0.94f);
    glVertex2f(-0.68f, -0.958f);
    glVertex2f(-0.68f, -0.922f);
    glVertex2f(-0.652f, -0.924f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.66f, -0.894f);
    glVertex2f(-0.68f, -0.894f);
    glVertex2f(-0.68f, -0.922f);
    glVertex2f(-0.66f, -0.914f);

    glEnd();
//body//

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-0.54f, -0.87f);
    glVertex2f(-0.48f, -0.87f);
    glVertex2f(-0.47f, -0.97f);
    glVertex2f(-0.54f, -0.97f);
    glEnd();

//hand//
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.48f, -0.87f);
    glVertex2f(-0.44f, -0.94f);
    glVertex2f(-0.44f, -0.98f);
    glVertex2f(-0.47f, -0.97f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.48f, -0.87f);
    glVertex2f(-0.49f, -0.87f);
    glVertex2f(-0.47f, -0.97f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.44f, -0.94f);
    glVertex2f(-0.4f, -0.92f);
    glVertex2f(-0.4f, -0.93f);
    glVertex2f(-0.44f, -0.98f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.41f, -0.92f);
    glVertex2f(-0.39f, -0.905f);
    glVertex2f(-0.39f, -0.925f);
    glVertex2f(-0.4f, -0.93f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.48f, -0.87f);
    glVertex2f(-0.445f, -0.89f);
    glVertex2f(-0.445f, -0.92f);
    glVertex2f(-0.47f, -0.92f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.445f, -0.89f);
    glVertex2f(-0.41f, -0.91f);
    glVertex2f(-0.41f, -0.92f);
    glVertex2f(-0.445f, -0.92f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.41f, -0.91f);
    glVertex2f(-0.38f, -0.91f);
    glVertex2f(-0.38f, -0.92f);
    glVertex2f(-0.41f, -0.92f);
    glEnd();
/////head//////

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.48f, -0.865f);
    glVertex2f(-0.445f, -0.885f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.465f, -0.82f);
    glVertex2f(-0.43f, -0.835f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(-0.465f, -0.82f);
    glVertex2f(-0.46f, -0.81f);
    glVertex2f(-0.45f, -0.8f);
    glVertex2f(-0.44f, -0.8f);
    glVertex2f(-0.43f, -0.805f);
    glVertex2f(-0.425f, -0.81f);
    glVertex2f(-0.42f, -0.82f);
    glVertex2f(-0.423f, -0.83f);
    glVertex2f(-0.43f, -0.835f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.475f, -0.87f);
    glVertex2f(-0.48f, -0.85f);
    glVertex2f(-0.473f, -0.83f);
    glVertex2f(-0.46f, -0.822f);
    glVertex2f(-0.45f, -0.83f);
    glVertex2f(-0.432f, -0.835f);
    glVertex2f(-0.45f, -0.85f);
    glVertex2f(-0.455f, -0.88f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.8f, 0.6f);
    glVertex2f(-0.455f, -0.88f);
    glVertex2f(-0.45f, -0.85f);
    glVertex2f(-0.432f, -0.835f);
    glVertex2f(-0.43f, -0.865f);
    glVertex2f(-0.445f, -0.885f);
    glEnd();
////gun///////

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.43f, -0.86f);
    glVertex2f(-0.23f, -0.86f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.41f, -0.86f);
    glVertex2f(-0.25f, -0.86f);
    glVertex2f(-0.25f, -0.87f);
    glVertex2f(-0.41f, -0.87f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.41f, -0.87f);
    glVertex2f(-0.27f, -0.87f);
    glVertex2f(-0.27f, -0.88f);
    glVertex2f(-0.41f, -0.88f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.43f, -0.86f);
    glVertex2f(-0.41f, -0.86f);
    glVertex2f(-0.41f, -0.88f);
    glVertex2f(-0.43f, -0.92f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.34f, -0.88f);
    glVertex2f(-0.32f, -0.96f);
    glVertex2f(-0.32f, -0.965f);
    glVertex2f(-0.345f, -0.88f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.34f, -0.88f);
    glVertex2f(-0.38f, -0.96f);
    glVertex2f(-0.38f, -0.965f);
    glVertex2f(-0.345f, -0.88f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38f, -0.92f);
    glVertex2f(-0.37f, -0.88f);
    glVertex2f(-0.38f, -0.88f);
    glVertex2f(-0.39f, -0.91f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.2f, -0.94f);
    glVertex2f(0.11f, -0.94f);
    glVertex2f(0.11f, -0.8f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.11f, -0.94f);
    glVertex2f(0.2f, -0.94f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.08f, -0.79f);
    glVertex2f(0.01f, -0.79f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.155f, -0.855f);
    glVertex2f(0.155f, -0.865f);
    glVertex2f(0.145f, -0.865f);
    glVertex2f(0.145f, -0.855f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.055f, -0.715f);
    glVertex2f(0.055f, -0.725f);
    glVertex2f(0.045f, -0.725f);
    glVertex2f(0.045f, -0.715f);
    glEnd();
    glFlush();

}

int main(int argc, char** argv)
{
    cout << "Press a : To Moving Ambulance " << endl << endl;
    cout << "Press s : To Stop Ambulance" << endl << endl;
    cout << "Press q : To Moving Tank" << endl << endl;
    cout << "Press w : To Stop Tank" << endl << endl;
    cout << "Press z : To Moving Helicopter" << endl << endl;
    cout << "Press x : To Stop Helicopter" << endl << endl;
    cout << "Click on mouse right or left : To night and day " << endl << endl;

    glutInit(&argc, argv);
    glutInitWindowSize (970, 700);
    glutInitWindowPosition(290, 100);
    glutCreateWindow("Bangladesh Army Base Camp");
    glutDisplayFunc(display);
    glutTimerFunc(100, updateA, 0);
    glutTimerFunc(100, updateT, 0);
    glutTimerFunc(100, updateH, 0);
    glutTimerFunc(100, updateS, 0);
 glutTimerFunc(100, updateC1, 0);
    glutTimerFunc(100, updateC2, 0);
    glutTimerFunc(100, updateC3, 0);


    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);

    initGL();
    glutMainLoop();

    return 0;
}
