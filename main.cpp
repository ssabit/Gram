#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.1416
static GLfloat chaka = 0.0;
static GLfloat windMill = 0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;
static float	cx	=  0.0;
static float	cy	=  0.0;
float p=-200.0;
float q= 120.0;
int page=0;

void circle(float radius_x, float radius_y)
{
    int i = 0;
    float angle = 0.0;

    glBegin(GL_POLYGON);

        for(i = 0; i < 100; i++)
        {
            angle = 2 * PI * i / 100;
            glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
        }

    glEnd();
}

void spinWindMill_right(void)
{
   windMill = windMill - 1;
   if (windMill < 0.0)
      windMill = windMill +360.0;
   glutPostRedisplay();
}

void spinWindMill_left(void)
{
   windMill = windMill + 1;
   if (windMill > 360.0)
      windMill = windMill - 360.0;
   glutPostRedisplay();
}


void spinCycle_right(void)
{
   chaka = chaka - 1;
   if (chaka < 0.0)
      chaka = chaka +360.0;
   glutPostRedisplay();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();

    if(p<=+50.0)
     p=p+0.05;

    else
        p=-200;
    glutPostRedisplay();
    glClear(GL_COLOR_BUFFER_BIT);


    if(q>=-100.0)
     q=q-0.05;

    else
        q=120;
    glutPostRedisplay();
    glClear(GL_COLOR_BUFFER_BIT);

//////////////////SURU//////////////////

//////////////////Akash//////////////////
    glPushMatrix();
    glTranslatef(0,30,0);
    glBegin(GL_QUADS);
    glColor3f(0, 0, .50);
        glVertex2d(100, 74);
    glColor3f(.53, .81, .92);
        glVertex2d(-100, 74);
    glColor3f(0, 0, .50);
        glVertex2d(-100, -10);
    glColor3f(.94, .97, 1);
        glVertex2d(100, -10);
    glEnd();
    glPopMatrix();
//////////////////Surjo//////////////////
    glPushMatrix();
    glTranslatef(50,80,0);
    glColor3f(1, .60, 0);
    circle(11,11);
    glPopMatrix();

//////////////////Mati//////////////////
    glPushMatrix();
    glTranslatef(0,-50,0);
    glBegin(GL_QUADS);
     glColor3f(0.41,0.41,0.41);
        glVertex2d(100, 75);
        glVertex2d(-100, 75);
        glVertex2d(-100, 0);
        glVertex2d(100, 0);
    glEnd();
    glPopMatrix();
/////////////////////Rasta////////////////////
glPushMatrix();
    glTranslatef(-100,-40,0);
    glRotatef(0, 0.0, 0.0, 1.0);
    glColor3f(0, 0,0);
     glRectf(200,20,0,0);
glPopMatrix();
/////////////////////Kher Pala Suru//////////////////////////////
glPushMatrix();
glTranslatef(-68,25,0);
glRotated(270,0.0f,0.0f,1.0f);
/////////////////////////bash/////////////////
glPushMatrix();
    glTranslatef(10,-17,0);
    glRotated(90,0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
    glColor3f(0.13,0.54,0.13);
        glVertex2d(0, 20);
        glColor3f(0.99,0.99,0.0);
        glVertex2d(0,55);
        glColor3f(0.13,0.54,0.13);
        glVertex2d(2,55);
        glColor3f(0.99,0.99,0.0);
        glVertex2d(2, 20);
    glEnd();
glPopMatrix();
/////////////////////Bitto/////////////////////////////////////////
 glPushMatrix();
 glTranslatef(-15,-15,0);
   glColor3f(0.92,0.67,0.05);
    circle(14,16);
    glPopMatrix();
/////////////////////Borgo/////////////////////////////////////
glPushMatrix();
    glTranslatef(-5,-41,0);
    glBegin(GL_QUADS);
    glColor3f(0.92,0.67,0.05);
        glVertex2d(-10, 10);
        glVertex2d(-10, 42);
        glVertex2d(15, 42);
        glVertex2d(15, 10);
    glEnd();
    glPopMatrix();
glPopMatrix();

/////////////////////Kolsi/////////////////////
glPushMatrix();
    glTranslatef(-83.5,55,0);
    glColor3f(0.92,0.67,0.20);
    circle(6,6);
glPopMatrix();

/////////////////////Kher Pala Ses/////////////////////

/////////////////////GHOR 1/////////////////////
/////////////////////Deal 1/////////////////////
    glPushMatrix();
    glTranslatef(-50,5,0);
    glBegin(GL_QUADS);
    glColor3f(0.86, 0.69, 0.32);
        glVertex2d(-15, 10);
        glVertex2d(-15, 40);
        glVertex2d(15, 40);
        glVertex2d(15, 10);

    glEnd();
    glPopMatrix();
/////////////////////Cal 1/////////////////////
    glPushMatrix();
    glTranslatef(-50,30,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.12, .44, 0.30);
        glVertex2d(20, 10);
        glVertex2d(0, 30);
        glVertex2d(-20, 10);
    glEnd();
    glPopMatrix();
/////////////////////Dorja 1/////////////////////
    glPushMatrix();
    glTranslatef(-55,5,0);
    glBegin(GL_QUADS);
    glColor3f(0.12, .44, 0.30);
        glVertex2d(0, 10);
        glVertex2d(0,30);
        glVertex2d(10,30);
        glVertex2d(10, 10);

    glEnd();
    glPopMatrix();

/////////////////////Boro Gach/////////////////////

/////////////////////Gasch Kath/////////////////////
glPushMatrix();
    glTranslatef(-12,5,0);
    glBegin(GL_QUADS);
    glColor3f(0.54,0.26,0.07);
        glVertex2d(0, 20);
        glVertex2d(0,55);
        glVertex2d(8,55);
        glVertex2d(8, 20);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(0,60,0);
    glColor3f(0, .80, 0);
    circle(10,10);
glPopMatrix();

glPushMatrix();
    glTranslatef(-5,75,0);
    glColor3f(0, .80, 0);
    circle(10,10);
glPopMatrix();

glPushMatrix();
    glTranslatef(5,70,0);
    glColor3f(0, .80, 0);
    circle(10,10);
glPopMatrix();

glPushMatrix();
    glTranslatef(-15,60,0);
    glColor3f(0, .80, 0);
    circle(10,10);
glPopMatrix();

glPushMatrix();
    glTranslatef(-20,70,0);
    glColor3f(0, .80, 0);
    circle(10,10);
glPopMatrix();
/////////////////////Boro Gach Ses/////////////////////

////////////////GHOR 2///////////////


/////////////////////GHOR  Deal 2/////////////////////
    glPushMatrix();
    glTranslatef(20,5,0);
    glBegin(GL_QUADS);
    glColor3f(.54, .39, 0.03);
        glVertex2d(-15, 10);
        glVertex2d(-15, 40);
        glVertex2d(15, 40);
        glVertex2d(15, 10);

    glEnd();
    glPopMatrix();
/////////////////////GHOR  Chal 2/////////////////////
    glPushMatrix();
    glTranslatef(20,30,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.93, 0.78, 0);
        glVertex2d(20, 10);
        glVertex2d(0, 30);
        glVertex2d(-20, 10);
    glEnd();
    glPopMatrix();
/////////////////////GHOR  Dhorja2/////////////////////
    glPushMatrix();
    glTranslatef(15,5,0);
    glBegin(GL_QUADS);
    glColor3f(1,.50, 1);
        glVertex2d(0, 10);
        glVertex2d(0,30);
        glVertex2d(10,30);
        glVertex2d(10, 10);

    glEnd();
    glPopMatrix();


/////////////////////Shoto Gach 1/////////////////////
glPushMatrix();
    glTranslatef(44,5,0);
    glBegin(GL_QUADS);
    glColor3f(0.54,0.26,0.07);
        glVertex2d(0, 20);
        glVertex2d(0,55);
        glVertex2d(2,55);
        glVertex2d(2, 20);
    glEnd();

glPopMatrix();

    glPushMatrix();
    glTranslatef(45,55,0);
    glColor3f(0, .80, 0);
    circle(6,6);
glPopMatrix();


/////////////////////Shoto Gach 2/////////////////////
glPushMatrix();
    glTranslatef(55,5,0);
    glBegin(GL_QUADS);
    glColor3f(0.54,0.26,0.07);
        glVertex2d(0, 20);
        glVertex2d(0,40);
        glVertex2d(2,40);
        glVertex2d(2, 20);
    glEnd();

glPopMatrix();

    glPushMatrix();
    glTranslatef(56,48,0);
    glColor3f(0, .80, 0);
    circle(6,6);
glPopMatrix();
/////////////////////Shoto Gach 3/////////////////////
glPushMatrix();
    glTranslatef(66,5,0);
    glBegin(GL_QUADS);
    glColor3f(0.54,0.26,0.07);
        glVertex2d(0, 20);
        glVertex2d(0,55);
        glVertex2d(2,55);
        glVertex2d(2, 20);
    glEnd();

glPopMatrix();

glPushMatrix();
    glTranslatef(67,55,0);
    glColor3f(0, .80, 0);
    circle(6,6);
glPopMatrix();


/////////////////////Windmill Suru/////////////////////
glPushMatrix();
glTranslatef(85,53,0);

/////////////////////Windmill Base/////////////////////
glPushMatrix();

glTranslatef(-7.8,-28,0);
    glColor3f(0.18, 0.7, 0.7);
    glRectf(16,11,0,0);
glPopMatrix();

glPushMatrix();
    glTranslatef(0,-7,0);
    glRotatef(180, 0.0, 0.0, 1.0);
    glColor3f(0.18, 0.7, 0.7);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, -5);
        glVertex2d(8,10);
        glVertex2d(-8,10);
    glEnd();
glPopMatrix();

glPushMatrix();
    glRotatef(windMill, 0.0, 0.0, 1.0);
/////////////////////Kalo Bitto/////////////////////
    glColor3f(0, 0, 0);
    circle(6.8,6.8);
/////////////////////Sada Bitto/////////////////////
    glColor3f(1, 1, 1);
    circle(6,6);
glPushMatrix();
    glTranslatef(0,7,0);
    glColor3f(0.75, 0.65, 0.54);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(4, 8);
        glVertex2d(-4,8);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(-7,0,0);
    glRotatef(90, 0.0, 0.0, 1.0);
    glColor3f(0.75, 0.65, 0.54);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(4,8);
        glVertex2d(-4,8);
    glEnd();
glPopMatrix();


glPushMatrix();
    glTranslatef(7,0,0);
    glRotatef(-90, 0.0, 0.0, 1.0);
    glColor3f(0.75, 0.65, 0.54);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(4,8);
        glVertex2d(-4,8);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(0,-7,0);
    glRotatef(180, 0.0, 0.0, 1.0);
    glColor3f(0.75, 0.65, 0.54);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(4,8);
        glVertex2d(-4,8);
    glEnd();
glPopMatrix();

glPopMatrix();
glPopMatrix();
/////////////////////Windmill Ses/////////////////////

//////////////////////Tia Suru/////////////////////
glPushMatrix();
    glTranslatef(q-50,80,0);

 glPushMatrix();
/////////////////////Moukh/////////////////////
    glPushMatrix();
    glTranslatef(5,4,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.99,0.0,0.0);
        glVertex2d(-10, 0);
        glVertex2d(0, 2);
        glVertex2d(0, -2);
    glEnd();
    glPopMatrix();
/////////////////////Matha/////////////////////
 glPushMatrix();
 glTranslatef(8,4,0);
    glColor3f(0,1, 0);

    circle(4,4);
    glPopMatrix();
/////////////////////Chokh/////////////////////
glPushMatrix();
glTranslatef(-4,-24,0);

glPushMatrix();
glTranslatef(10,15,0);
glPushMatrix();

    glPushMatrix();
    glColor3f(.93, .91, .91);
    glTranslatef(1,15.4,0);
    circle(.9,1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(1.1,15.3,0);
    circle(.5,.6);
    glPopMatrix();
glPopMatrix();

/////////////////////Chokh 2/////////////////////
glPushMatrix();
glTranslatef(1,12,0);

    glPushMatrix();
    glColor3f(.93, .91, .91);
    glTranslatef(10,15.4,0);
    circle(.9,1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(10,15.3,0);
    circle(.5,.6);
    glPopMatrix();

  glPopMatrix();

glPopMatrix();

glPopMatrix();
/////////////////////Tia Chokh Ses/////////////////////

/////////////////////BODY/////////////////////
 glPushMatrix();
 glTranslatef(17,4,0);
   glColor3f(0,0.99,0.0);
    circle(6.3,5.2);
    glPopMatrix();

/////////////////////Hat Uporer/////////////////////
 glPushMatrix();
 glTranslatef(17,8,0);
   glColor3f(0,0.99,0.0);
    circle(4.2,4);
    glPopMatrix();


/////////////////////Hat Nicher/////////////////////
 glPushMatrix();
    glTranslatef(17,0,0);
    glColor3f(0,0.99,0.0);
    circle(4.2,4);
glPopMatrix();

/////////////////////Lej/////////////////////
    glPushMatrix();
    glTranslatef(30,3,0);
    glBegin(GL_QUADS);
    glColor3f(0.99,0.0,0.0);
        glVertex2d(-10, 0);
        glVertex2d(-10, 2);
        glVertex2d(0, 4);
        glVertex2d(0, -2);
    glEnd();
    glPopMatrix();

glPopMatrix();
glPopMatrix();
/////////////////////Tia Ses/////////////////////

/////////////////////Nodi/////////////////////
glPushMatrix();
    glTranslatef(0,-100,0);

    glBegin(GL_QUADS);
    glColor3f(.42, .65, .80);
        glVertex2d(100, 50);
     glColor3f(.53, .81, .98);
        glVertex2d(-100, 50);
      glColor3f(.25, .41, .88);
        glVertex2d(-100, 0);
    glColor3f(1, 1, 1);
        glVertex2d(100, 0);
    glEnd();
   glPopMatrix();
//////////////////////Nodi Ses/////////////////////


//////////////////Nouka Suru/////////////////////////////////////////////

glPushMatrix();

    glTranslatef(cx,cy,0);
    glTranslatef(10,-30,0);
    if (page==3)
    {
        cx=0;
        cy=0;

       glTranslatef( q+2,0,0);

    }

    if (page==4)
    {
       glTranslatef(cx,cy,0);
    }

//////////////////Noukla Cal//////////////////
glPushMatrix();
glTranslatef(-5,-60,0);
glRotated(270,0.0f,0.0f,1.0f);

glPushMatrix();
    glTranslatef(-15,-15,0);
    //glColor3f(0.99,0.99,0);
    glColor3f(0.33,0.65,0.15);
    circle(14,12);
glPopMatrix();

glPushMatrix();
    glTranslatef(-5,-41,0);
    glBegin(GL_QUADS);
    //glColor3f(0.99,0.99,0);
    glColor3f(0.33,0.65,0.15);
        glVertex2d(-10, 14);
        glVertex2d(-10, 38);
        glVertex2d(4, 38);
        glVertex2d(4,14);
    glEnd();
    glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(15,-60,0);
glRotated(270,0.0f,0.0f,1.0f);
 glPushMatrix();
 glTranslatef(-15,-15,0);
   //glColor3f(0.99,0.99,0);
   glColor3f(0.33,0.65,0.15);
    circle(14,12);
glPopMatrix();
glPushMatrix();
    glTranslatef(-5,-41,0);
    glBegin(GL_QUADS);
    glColor3f(0.33,0.65,0.15);
    //glColor3f(0.99,0.99,0);
        glVertex2d(-10, 14);
        glVertex2d(-10, 38);
        glVertex2d(4, 38);
        glVertex2d(4,14);
    glEnd();
glPopMatrix();
glPopMatrix();

glPushMatrix();
    glTranslatef(-8,-69.2,0);
    glBegin(GL_QUADS);
    glColor3f(0.80,0.0,0);
        glVertex2d(-10, 14);
        glVertex2d(-10, 38);
        glVertex2d(6, 38);
        glVertex2d(6,14);

    glEnd();
glPopMatrix();
//////////////////Nouka Nicher//////////////////
glPushMatrix();
    glTranslatef(-5,-45,0);
    glRotated(180,0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
        glVertex2d(-25, 10);
        glVertex2d(-10, 20);
        glVertex2d(25, 20);
        glVertex2d(40, 10);

    glEnd();
    glPopMatrix();

//////////////////Nouka RING//////////////////
glPushMatrix();
glTranslatef(10,-10,0);

glPushMatrix();
glTranslatef(-7.8,-50,0);
glPushMatrix();
////white Circle
    glColor3f(1, 1, 1);
    circle(5,5);
////black circle
    glColor3f(0, 0, 0);
    circle(2.8,2.8);
glPushMatrix();
    glTranslatef(1,2,0);
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
        glVertex2d(0, 0);
        glVertex2d(0, 3);
        glVertex2d(-1.2,3);
        glVertex2d(-1.2,0);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(-2.5,1,0);
    glRotatef(90, 0.0, 0.0, 1.0);
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
        glVertex2d(0, 0);
        glVertex2d(0, 2.8);
        glVertex2d(-1.5,2.8);
        glVertex2d(-1.5,0);
    glEnd();
glPopMatrix();


glPushMatrix();
    glTranslatef(5.5,1,0);
    glRotatef(90, 0.0, 0.0, 1.0);
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
        glVertex2d(0, 0);
        glVertex2d(0, 2.8);
        glVertex2d(-1.5,2.8);
        glVertex2d(-1.5,0);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(1,-5.5,0);
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
        glVertex2d(0, 0);
        glVertex2d(0, 2.8);
        glVertex2d(-1.2,2.8);
        glVertex2d(-1.2,0);
    glEnd();
glPopMatrix();

glPopMatrix();
glPopMatrix();
glPopMatrix();

glPopMatrix();
//////////////////Nouka Ses//////////////////

//////////////////Manus start//////////////////
glPushMatrix();
glTranslatef(tx,ty,0);
glTranslatef(-80,20,0);

//////////////////Matha//////////////////
glPushMatrix();
    glTranslatef(-15,-15,0);
    glColor3f(0.99,0.99,0);
    circle(5,4);
    glPopMatrix();

//////////////////eye left//////////////////
glPushMatrix();
    glTranslatef(-18,-15,0);
    glColor3f(0,0,0);
    circle(1.5,1.5);
glPopMatrix();

//////////////////eye right//////////////////
glPushMatrix();
    glTranslatef(-12,-15,0);
    glColor3f(0,0,0);
    circle(1.5,1.5);
glPopMatrix();

//////////////////eye BALL RIGHT//////////////////
glPushMatrix();
    glTranslatef(-12,-15,0);
    glColor3f(1,1,1);
    circle(0.5,0.5);
glPopMatrix();

//////////////////eye ball left//////////////////
glPushMatrix();
    glTranslatef(-18,-15,0);
    glColor3f(1,1,1);
    circle(0.5,0.5);
glPopMatrix();


//////////////////mouth//////////////////
glPushMatrix();
    glTranslatef(-15,-18,0);
    glColor3f(0,0,0);
    circle(3,.5);
glPopMatrix();

//////////////////nose//////////////////
 glPushMatrix();
    glTranslatef(-15,-15.5,0);
    glRotated(90,0.0f,0.0f,1.0f);
    glColor3f(0,0,0);
    circle(1,.5);
glPopMatrix();

//////////////////body//////////////////
glPushMatrix();
    glTranslatef(-14,-57,0);
    glBegin(GL_QUADS);
    glColor3f(0.99,0.99,0);
        glVertex2d(-6, 14);
        glVertex2d(-6, 38);
        glVertex2d(4, 38);
        glVertex2d(4,14);
    glEnd();
glPopMatrix();

//////////////////leg right//////////////////
glPushMatrix();
    glTranslatef(-12,-62,0);
    glBegin(GL_QUADS);
    glColor3f(0.99,0.99,0);
        glVertex2d(-2, 14);
        glVertex2d(-2, 20);
        glVertex2d(0.5, 20);
        glVertex2d(0.5,14);
    glEnd();
glPopMatrix();

//////////////////leg left//////////////////
glPushMatrix();
    glTranslatef(-16.8,-62,0);
    glBegin(GL_QUADS);
    glColor3f(0.99,0.99,0);
        glVertex2d(-2, 14);
        glVertex2d(-2, 20);
        glVertex2d(0.5, 20);
        glVertex2d(0.5,14);
    glEnd();
    glPopMatrix();
//////////////////HAT left//////////////////
glPushMatrix();
    glTranslatef(-5,-22,0);
    glRotated(90,0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
    glColor3f(0.99,0.99,0);
        glVertex2d(-2, 14);
        glVertex2d(-2, 20);
        glVertex2d(0.5, 20);
        glVertex2d(0.5,14);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(-25,-7.5,0);
    glRotated(180,0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
    glColor3f(0.99,0.99,0);
        glVertex2d(-2, 14);
        glVertex2d(-2, 20);
        glVertex2d(0.5, 20);
        glVertex2d(0.5,14);
    glEnd();
glPopMatrix();


//////////////////HAND RIGHT START//////////////////
glPushMatrix();
    glTranslatef(15,0,0);

glPushMatrix();
    glTranslatef(-21,-7.5,0);
     glRotated(180,0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
    glColor3f(0.99,0.99,0);
        glVertex2d(-2, 14);
        glVertex2d(-2, 20);
        glVertex2d(0.5, 20);
        glVertex2d(0.5,14);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(-5,-22,0);
    glRotated(90,0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);
    glColor3f(0.99,0.99,0);
        glVertex2d(-2, 14);
        glVertex2d(-2, 20);
        glVertex2d(0.5, 20);
        glVertex2d(0.5,14);
    glEnd();
glPopMatrix();

glPopMatrix();
//////////////////HAND RIGHT END//////////////////

glPopMatrix();



///////////////////////////////CYCLE//////////////////////////////


glPushMatrix();
 glTranslatef(cx,cy,0);
  glTranslatef(-130,-30,0);
  if (page==1)
    {
        cx=0;
        cy=0;

       glTranslatef(p+190,0,0);

    }

    if (page==2)
    {
       glTranslatef(cx,cy,0);
    }


//////////////////Chaka joint//////////////////
glPushMatrix();
    glTranslatef(2,2,0);
   glColor3f(0.14, 0.34, 0.54);
    glRectf(30.5,2,0,0);
glPopMatrix();


//////////////////Chaka left to sit//////////////////
glPushMatrix();
    glTranslatef(2,3,0);
    glRotatef(45, 0.0, 0.0, 1.0);
    glColor3f(0.14, 0.34, 0.54);
    glRectf(18,2,0,0);
glPopMatrix();

//////////////////Chaka right to sit//////////////////
glPushMatrix();
    glTranslatef(33,3,0);
    glRotatef(125, 0.0, 0.0, 1.0);
    glColor3f(0.14, 0.34, 0.54);
    glRectf(18,2,0,0);
glPopMatrix();



//////////////////Chaka handle form samner chaka//////////////////
glPushMatrix();
    glTranslatef(33,3,0);
    glRotatef(90, 0.0, 0.0, 1.0);
   glColor3f(0.14, 0.34, 0.54);
     glRectf(20,2,0,0);
glPopMatrix();


//////////////////Chaka handle Bam//////////////////
glPushMatrix();
    glTranslatef(33,24,0);
    glRotatef(176, 0.0, 0.0, 1.0);
    glColor3f(1, 0, 0);
     glRectf(10,2,0,0);
glPopMatrix();


//////////////////Chaka handle Dan//////////////////
glPushMatrix();
    glTranslatef(33,24,0);
    glRotatef(195, 0.0, 0.0, 1.0);
    glColor3f(1, 0, 0);
     glRectf(10,2,0,0);
glPopMatrix();
//////////////////end handle dan//////////////////

//////////////////Padel to sit//////////////////
glPushMatrix();
    glTranslatef(18,3,0);
    glRotatef(90, 0.0, 0.0, 1.0);
    glColor3f(0.14, 0.34, 0.54);
     glRectf(16,2,0,0);
glPopMatrix();

//////////////////Chakapiser to sit support//////////////////
glPushMatrix();
    glTranslatef(3,2,0);
    glRotatef(90, 0.0, 0.0, 1.0);
    glColor3f(0.14, 0.34, 0.54);
     glRectf(16,2,0,0);
glPopMatrix();

//////////////////Chakapiser to sit support to sit//////////////////
glPushMatrix();
    glTranslatef(12,18,0);
    glRotatef(180, 0.0, 0.0, 1.0);
   glColor3f(0.14, 0.34, 0.54);
     glRectf(10,2,0,0);
glPopMatrix();


//////////////////Cycle sit//////////////////
glPushMatrix();
    glTranslatef(11,15,0);
    glColor3f(0.23,0.69,0.44);
    glRectf(14,5,0,0);
glPopMatrix();

//////////////////Cycle Padel//////////////////
glPushMatrix();
glTranslatef(25,53,0);

glPushMatrix();
glTranslatef(-7.8,-50,0);
glPushMatrix();
    glRotatef(chaka, 0.0, 0.0, 1.0);
//////////////////Black circle//////////////////
    glColor3f(0, 0, 0);
    circle(2.9,2.9);
//////////////////Yellow circle//////////////////
    glColor3f(1, 1, 0);
    circle(2.5,2.5);
glPushMatrix();
    glTranslatef(0,1,0);
    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2, 4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();


glPushMatrix();
    glTranslatef(0,-1,0);
    glRotatef(180, 0.0, 0.0, 1.0);
    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2,4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();

glPopMatrix();
glPopMatrix();
glPopMatrix();
//////////////////end chaka samer//////////////////
//////////////////Cycle samner chaka//////////////////
glPushMatrix();
glTranslatef(10,53,0);

glPushMatrix();
glTranslatef(-7.8,-50,0);
glPushMatrix();
    glRotatef(chaka, 0.0, 0.0, 1.0);
//Black circle
    glColor3f(0, 0, 0);
    circle(6.8,6.8);
//Yellow circle
    glColor3f(1, 1, 0);
    circle(6,6);
glPushMatrix();
    glTranslatef(0,1,0);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2, 4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(-1,0,0);
    glRotatef(90, 0.0, 0.0, 1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2,4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();


glPushMatrix();
    glTranslatef(1,0,0);
    glRotatef(-90, 0.0, 0.0, 1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2,4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(0,-1,0);
    glRotatef(180, 0.0, 0.0, 1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2,4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();

glPopMatrix();
glPopMatrix();
glPopMatrix();
//////////////////end chaka samer//////////////////

//////////////////Cycle piser chaka//////////////////
glPushMatrix();
glTranslatef(40,53,0);

glPushMatrix();
glTranslatef(-7.8,-50,0);
glPushMatrix();
    glRotatef(chaka, 0.0, 0.0, 1.0);
//Black circle
    glColor3f(0, 0, 0);
    circle(6.8,6.8);
//Yellow circle
    glColor3f(1, 1, 0);
    circle(6,6);
glPushMatrix();
    glTranslatef(0,1,0);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2, 4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(-1,0,0);
    glRotatef(90, 0.0, 0.0, 1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2,4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();


glPushMatrix();
    glTranslatef(1,0,0);
    glRotatef(-90, 0.0, 0.0, 1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2,4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(0,-1,0);
    glRotatef(180, 0.0, 0.0, 1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2,4);
        glVertex2d(-2,4);
    glEnd();
glPopMatrix();

glPopMatrix();
glPopMatrix();
glPopMatrix();
//////////////////end chaka piser//////////////////
glPopMatrix();



glFlush();

}


void init(void)
{
    glClearColor (0.99, 0.99, 0.99 ,0.0);
    glOrtho(-100.0, 100.0, -100.0,100.0, -1.0, 1.0);

}

void mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinWindMill_left);
         break;

      case GLUT_MIDDLE_BUTTON:
            glutIdleFunc(NULL);
            break;

      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
			glutIdleFunc(spinWindMill_right);
         break;
      default:
         break;
   }
}



void spe_key(int key, int x, int y)
{
    switch (key) {

        case GLUT_KEY_LEFT:

            if(tx>=-100 && tx!=0)
            {
                tx -=2;
            }

            glutPostRedisplay();
                break;

        case GLUT_KEY_RIGHT:

            if(tx>=-100 && tx<=190)
            {
               tx +=2;
            }
                glutPostRedisplay();
                break;

        case GLUT_KEY_DOWN:
          if (ty>=-70 && ty!=0)
                ty -=2;
                glutPostRedisplay();
                break;

        case GLUT_KEY_UP:
            if(ty<=40)
                ty +=2;
                glutPostRedisplay();
                break;
      default:
            break;
    }

}

void normal_key(unsigned char key, int x, int y)
{
    switch (key) {

        case 'c':
            page=1;
            glutIdleFunc(spinCycle_right);
            glutPostRedisplay();
            break;

        case 'x':
            page=2;
            glutIdleFunc(NULL);
            glutPostRedisplay();
            break;

        case 'b':
            page=3;
            glutPostRedisplay();
            break;


        case 'n':
            page=4;
            glutIdleFunc(NULL);
            break;
        default:
            break;
    }

}

int main()
{
    PlaySound("GramMusic.wav", NULL, SND_FILENAME| SND_ASYNC);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (850, 700);
    glutInitWindowPosition (250, 20);
    glutCreateWindow ("GRAM");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutSpecialFunc(spe_key);
    glutKeyboardFunc(normal_key);
    glutMainLoop();
    return 0;
}
