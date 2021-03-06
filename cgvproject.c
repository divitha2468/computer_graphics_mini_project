#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STB_IMAGE_IMPLEMENTATION
//#include "stb_image.h"

int i =0.0,l;
int s,n,car1=0;
int t;
int glob=0;
int view=0;
int help=0;
int value=0;
float th=0.0;
float thx=1350;
float thy=915;

GLint window1;

void save()
{
    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(120,500);
    glVertex2d(110,500);
    glVertex2d(110,500);
    glVertex2d(110,480);
    glVertex2d(110,480);
    glVertex2d(120,480);
    glVertex2d(120,480);
    glVertex2d(120,460);
    glVertex2d(120,460);
    glVertex2d(110,460);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(130,460);
    glVertex2d(140,500);
    glVertex2d(140,500);
    glVertex2d(145,460);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(132,480);
    glVertex2d(143,480);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(155,500);
    glVertex2d(165,460);
    glVertex2d(165,460);
    glVertex2d(175,500);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(210,500);
    glVertex2d(195,500);
    glVertex2d(195,500);
    glVertex2d(195,460);
    glVertex2d(195,460);
    glVertex2d(210,460);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(195,480);
    glVertex2d(210,480);
    glEnd();
}

void trees()
{
    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(380,460);
    glVertex2d(380,499);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(370,500);
    glVertex2d(390,500);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(400,500);
    glVertex2d(400,460);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(400,500);
    glVertex2d(410,500);
    glVertex2d(410,500);
    glVertex2d(410,480);
    glVertex2d(410,480);
    glVertex2d(400,480);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(400,480);
    glVertex2d(410,460);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(430,500);
    glVertex2d(420,500);
    glVertex2d(420,500);
    glVertex2d(420,460);
    glVertex2d(420,460);
    glVertex2d(430,460);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(420,480);
    glVertex2d(430,480);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(450,500);
    glVertex2d(440,500);
    glVertex2d(440,500);
    glVertex2d(440,460);
    glVertex2d(440,460);
    glVertex2d(450,460);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(440,480);
    glVertex2d(450,480);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d(470,500);
    glVertex2d(460,500);
    glVertex2d(460,500);
    glVertex2d(460,480);
    glVertex2d(460,480);
    glVertex2d(470,480);
    glVertex2d(470,480);
    glVertex2d(470,460);
    glVertex2d(470,460);
    glVertex2d(460,460);
    glEnd();
}

void pipe()
{
    glColor3f(0.85,0.85,0.90);
    glBegin(GL_POLYGON);
    glVertex2d(280,700);
    glVertex2d(280,710);
    glVertex2d(420,710);
    glVertex2d(420,700);
    glEnd();

    glColor3f(0.32,0.49,0.46);
    glBegin(GL_POLYGON);
    glVertex2d(420,710);
    glVertex2d(460,650);
    glVertex2d(440,650);
    glVertex2d(420,700);
    glEnd();
}

void boat()
{
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(50+n,500);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(30+n,565);
    glVertex2f(300+n,565);
    glVertex2f(280+n,500);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(70+n,565);
    glVertex2f(70+n,600);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(150+n,600);
    glVertex2f(150+n,565);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d(70+n,600);
    glVertex2d(110+n,630);
    glVertex2d(150+n,600);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d(260+n,565);
    glVertex2d(260+n,640);
    glVertex2d(265+n,640);
    glVertex2d(265+n,565);
    glEnd();

    glColor3f(1.3,0.3,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(260+n,640);
    glVertex2d(300+n,600);
    glVertex2d(260+n,565);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(90+n,575);
    glColor3f(1,1,0.15);
    glVertex2d(90+n,595);
    glColor3f(1.0,1.0,0.14);
    glVertex2d(130+n,595);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(130+n,575);
    glEnd();
}

void Grass()
{
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(750,660);
    glVertex2f(740,670);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(750,660);
    glVertex2f(750,670);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(750,660);
    glVertex2f(760,670);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(725,660);
    glVertex2f(715,670);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(725,660);
    glVertex2f(725,670);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(725,660);
    glVertex2f(735,670);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(700,660);
    glVertex2f(690,670);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(700,660);
    glVertex2f(700,670);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(700,660);
    glVertex2f(710,670);
    glEnd();
}



void house1()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(720,800);
    glVertex2f(720,900);
    glVertex2f(800,900);
    glVertex2f(800,800);
    glEnd();

    glColor3f(0.5, 0.1,0.1);
    glBegin(GL_TRIANGLES);
    glVertex2f(760,950);
    glVertex2f(800,900);
    glVertex2f(720,900);
    glEnd();

    glColor3f(0.556863, 0.137255,0.137255);
    glBegin(GL_POLYGON);
    glVertex2f(800,900);
    glVertex2f(760,950);
    glVertex2f(840,950);
    glVertex2f(865,900);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.858824,0.858824,0.439216);
    glVertex2f(865,800);
    glVertex2f(865,900);
    glVertex2f(800,900);
    glVertex2f(800,800);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.49,0.00);
    glVertex2f(740,800);
    glVertex2f(740,850);
    glVertex2f(760,850);
    glVertex2f(760,800);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(820,820);
    glColor3f(1.0,1.0,0.5);
    glVertex2d(820,860);
    glColor3f(1.0,1.0,0.7);
    glVertex2d(840,860);
    glColor3f(1.0,1.0,0.8);
    glVertex2d(840,820);
    glEnd();
}

void house2()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(1000,700);
    glVertex2f(1100,700);
    glVertex2f(1100,780);
    glVertex2f(1000,780);
    glEnd();

    glColor3f(0.5, 0.1,0.1);
    glBegin(GL_TRIANGLES);
    glVertex2f(1000,780);
    glVertex2f(1050,840);
    glVertex2f(1100,780);
    glEnd();

    glColor3f(0.556863, 0.137255,0.137255);
    glBegin(GL_POLYGON);
    glVertex2f(1100,780);
    glVertex2f(1050,840);
    glVertex2f(1180,840);
    glVertex2f(1200,780);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.858824,0.858824,0.439216);
    glVertex2f(1200,780);
    glVertex2f(1200,700);
    glVertex2f(1100,700);
    glVertex2f(1100,780);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.49,0.00);
    glVertex2f(1040,700);
    glVertex2f(1040,750);
    glVertex2f(1060,750);
    glVertex2f(1060,700);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,.0,0.0);
    glVertex2f(1120,720);
    glColor3f(1.0,1.0,0.5);
    glVertex2f(1120,760);
    glColor3f(1.0,1.0,0.7);
    glVertex2f(1160,760);
    glColor3f(1.0,1.0,0.6);
    glVertex2f(1160,720);
    glEnd();
}

void windmill()
{
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1300,750);
    glVertex2f(1400,750);
    glVertex2f(1375,900);
    glVertex2f(1325,900);
    glEnd();
    //glTranslatef(0, 3, 0);
//glRotated(frameNumber * (180.0/46), 0, 0, 1)

    //motor
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1330,900);
    glVertex2f(1330,940);
    glVertex2f(1370,940);
    glVertex2f(1370,900);
    glEnd();
}

void windmill1()
{
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(800,950);
    glVertex2f(900,950);
    glVertex2f(890,1100);
    glVertex2f(810,1100);
    glEnd();

    //motor
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(820,1100);
    glVertex2f(880,1100);
    glVertex2f(880,1150);
    glVertex2f(820,1150);
    glEnd();
}


void mountain()
{
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex2f(0,600);
    glVertex2f(0,900);
    glVertex2f(120,980);
    glVertex2f(350,650);
    glEnd();

    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex2f(350,650);
    glVertex2f(200,850);
    glVertex2f(300,900);
    glVertex2f(450,650);
    glEnd();


    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex2f(450,650);
    glVertex2f(320,840);
    glVertex2f(450,950);
    glColor3f(0.35,0.26,0.20);
    glVertex2f(600,650);
    glEnd();
}

void houseground()
{
    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(600,650);
    glVertex2f(650,680);
    glColor3f(0.55,0.40,0.12);
    glVertex2f(650,850);
    glVertex2f(500,850);
    glEnd();

    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(650,680);
    glColor3f(0.55,0.40,0.12);
    glVertex2f(650,850);
    glVertex2f(800,850);
    glVertex2f(800,640);
    glEnd();

    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(800,640);
    glVertex2f(800,850);
    glVertex2f(1100,850);
    glColor3f(0.55,0.40,0.12);
    glVertex2f(1100,700);
    glEnd();

    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(1100,700);
    glColor3f(0.55,0.40,0.12);
    glVertex2f(1100,850);
    glVertex2f(1280,850);
    glVertex2f(1280,650);
    glEnd();
}

void sky()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0,850);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(1500,850);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(1500,1000);
    glVertex2f(0,1000);
    glEnd();
}

void sky1()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0,850);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(1500,850);
    glColor3f(1.18,0.38,0.0);
    glVertex2f(1500,1000);
    glVertex2f(0,1000);
    glEnd();
}

void sea()
{
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,350);
    glVertex2f(1500,350);
    glVertex2f(1500,650);
    glVertex2f(0,650);
    glEnd();
}

void fish()
{
    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(100-n,490);
    glVertex2f(140-n,530);
    glVertex2f(140-n,450);
    glEnd();

    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(140-n,530);
    glVertex2f(140-n,450);
    glVertex2f(160-n,490);
    glEnd();

    glColor3f(0.0,0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(160-n,490);
    glVertex2f(180-n,510);
    glVertex2f(180-n,470);
    glEnd();
   
    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(500-n,490);
    glVertex2f(540-n,530);
    glVertex2f(540-n,450);
    glEnd();

    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(540-n,530);
    glVertex2f(540-n,450);
    glVertex2f(560-n,490);
    glEnd();

    glColor3f(0.0,0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(560-n,490);
    glVertex2f(580-n,510);
    glVertex2f(580-n,470);
    glEnd();
    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(1000-n,490);
    glVertex2f(1040-n,530);
    glVertex2f(1040-n,450);
    glEnd();

    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(1040-n,530);
    glVertex2f(1040-n,450);
    glVertex2f(1060-n,490);
    glEnd();

    glColor3f(0.0,0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(1060-n,490);
    glVertex2f(1080-n,510);
    glVertex2f(1080-n,470);
    glEnd();
    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(1400-n,490);
    glVertex2f(1440-n,530);
    glVertex2f(1440-n,450);
    glEnd();

    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(1440-n,530);
    glVertex2f(1440-n,450);
    glVertex2f(1460-n,490);
    glEnd();

    glColor3f(0.0,0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(1460-n,490);
    glVertex2f(1480-n,510);
    glVertex2f(1480-n,470);
    glEnd();
    }
void fish1()
{
   
    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(500-n,490);
    glVertex2f(540-n,530);
    glVertex2f(540-n,450);
    glEnd();

    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(540-n,530);
    glVertex2f(540-n,450);
    glVertex2f(560-n,490);
    glEnd();

    glColor3f(0.0,0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(560-n,490);
    glVertex2f(580-n,510);
    glVertex2f(580-n,470);
    glEnd();

    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(1400-n,490);
    glVertex2f(1440-n,530);
    glVertex2f(1440-n,450);
    glEnd();

    glColor3f(0.75,0,0.15);
    glBegin(GL_POLYGON);
    glVertex2f(1440-n,530);
    glVertex2f(1440-n,450);
    glVertex2f(1460-n,490);
    glEnd();

    glColor3f(0.0,0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(1460-n,490);
    glVertex2f(1480-n,510);
    glVertex2f(1480-n,470);
    glEnd();
    }
void sea1()
{

    glColor3f(0.32,0.49,0.46);
    glBegin(GL_POLYGON);
    glVertex2f(0,350);
    glVertex2f(1500,350);
    glVertex2f(1500,650);
    glVertex2f(0,650);
    glEnd();
   
    /*glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,350);
    glVertex2f(250,380);
    glColor3f(0.32,0.49,0.46);
    glVertex2f(350,650);
    glColor3f(0.0,0.0,0.6);
    glVertex2f(0,600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.6);//
    glVertex2f(250,380);
    glColor3f(0.0,0.0,0.7);
    glVertex2f(300,350);
    glColor3f(0.46,0.49,0.46);
    glVertex2f(450,650);
    glColor3f(0.32,0.49,0.46);
    glVertex2f(350,650);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.8);
    glVertex2f(300,350);
    glColor3f(0.0,0.0,0.7);
    glVertex2f(400,400);
    glColor3f(0.32,0.49,0.46);
    glVertex2f(600,650);
    glColor3f(0.32,0.49,0.46);
    glVertex2f(450,650);
    glEnd();

    glColor3f(0.0,0.0,1.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(400,400);
    glVertex2f(600,350);
    glVertex2f(650,680);
    glColor3f(0.5,.35,0.05);
    glVertex2f(600,650);
    glEnd();

    glColor3f(0.0,0.0,1.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(600,350);
    glVertex2f(900,350);
    glVertex2f(800,640);
    glColor3f(0.0,1.0,0.);
    glVertex2f(650,680);
    glEnd();

    glColor3f(0.0,0.0,1.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(900,350);
    glVertex2f(1000,380);
    glVertex2f(1100,700);
    glColor3f(0.5,0.35,0.05);
    glVertex2f(800,640);
    glEnd();

    glColor3f(0.0,0.0,1.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(1000,380);
    glVertex2f(1200,390);
    glVertex2f(1280,650);
    glColor3f(0.5,0.35,0.05);
    glVertex2f(1100,700);
    glEnd();

    glColor3f(0.0,0.0,1.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(1200,390);
    glVertex2f(1500,380);
    glColor3f(0.0,0.8,0.9);
    glVertex2f(1500,660);
    glColor3f(0,1,0);
    glVertex2f(1280,650);
    glEnd();*/
}

void dirt()
{
    glColor3f(0.0,0.8,0.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(800,500);
    glVertex2f(800,520);
    glVertex2f(840,525);
    glVertex2f(840,500);
    glEnd();
}

void dirt1()
{
    glColor3f(0.5,0.35,0.05);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(850,440);
    glVertex2f(880,455);
    glVertex2f(870,410);
    glVertex2f(850,415);
    glEnd();
}

void ind()
{
    glColor3f(0.6,0.4,0.12);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(80,280);
    glVertex2f(80,650);
    glVertex2f(580,580);
    glColor3f(0.55,0.4,0.12);
    glVertex2f(580,280);
    glEnd();
    //roof
    glColor3f(1.0,1.0,1.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(80,650);
    glVertex2f(60,670);
    glVertex2f(600,600);
    glVertex2f(600,590);
    glVertex2f(580,580);
    glEnd();
    //chimney
    glColor3f(1.0,0.0,0.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(200,653);
    glVertex2f(200,700);
    glVertex2f(240,650);
    glVertex2f(240,694);
    glEnd();

    glColor3f(0.0,0.0,0.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(430,560);
    glVertex2f(560,560);
    glVertex2f(560,420);
    glVertex2f(430,420);
    glEnd();
}

void smallhouse()
{
    //small flat
    glColor3f(1.0,0.0,0.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(1200,680);
    glVertex2f(1200,780);
    glVertex2f(1400,780);
    glVertex2f(1400,680);
    glEnd();
    //roof
    glColor3f(0.0,0.0,0.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(1150,780);
    glVertex2f(1150,790);
    glVertex2f(1450,790);
    glVertex2f(1450,780);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2d(1350,680);
    glVertex2d(1350,720);
    glVertex2d(1370,720);
    glVertex2d(1370,680);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(1250,750);
    glColor3f(1,1,0.5);
    glVertex2d(1300,750);
    glColor3f(1,1,0.8);
    glVertex2d(1300,700);
    glColor3f(1,1,0.7);
    glVertex2d(1250,700);
    glEnd();
}

void smallhouse1()
{
    //small flat
    glColor3f(0.0,1.0,0.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(1200,680);
    glVertex2f(1200,780);
    glVertex2f(1400,780);
    glVertex2f(1400,680);
    glEnd();
    //roof
    glColor3f(0.0,0.0,0.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(1150,780);
    glVertex2f(1150,790);
    glVertex2f(1450,790);
    glVertex2f(1450,780);
    glEnd();
}

void buildings()
{
    //flat
    glColor3f( 0.858824 ,0.439216,0.576471);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(700,680);
    glVertex2f(700,990);
    glVertex2f(900,990);
    glVertex2f(900,680);
    glEnd();
    //window1
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(720,900);
    glColor3f(1.0,1.0,0.5);
    glVertex2f(720,950);
    glColor3f(1.0,1.0,0.6);
    glVertex2f(760,950);
    glColor3f(1.0,1.0,0.7);
    glVertex2f(760,900);
    glEnd();
    //window2
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(820,800);
    glColor3f(1.0,1.0,0.6);
    glVertex2f(820,850);
    glColor3f(1.0,1.0,0.7);
    glVertex2f(860,850);
    glColor3f(1.0,1.0,0.8);
    glVertex2f(860,800);
    glEnd();
    //window3
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(720,710);
    glColor3f(1.0,1.0,0.7);
    glVertex2f(720,760);
    glColor3f(1.0,1.0,0.8);
    glVertex2f(760,760);
    glColor3f(1.0,1.0,0.9);
    glVertex2f(760,710);
    glEnd();
}

void road()
{
    glColor3f(0.5,0.35,0.05);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(950,0);
    glVertex2f(1210,350);
    glVertex2f(1500,350);
    glVertex2f(1500,200);
    glVertex2f(1400,0);
    glEnd();

    glColor3f(0.6,0.4,0.12);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(1150,50);
    glVertex2f(1190,80);
    glVertex2f(1310,320);
    glVertex2f(1280,300);
    glEnd();
}

void road1()
{
    //big road
    glColor3f(0.0,0.0,0.0);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,200);
    glVertex2f(1500,200);
    glVertex2f(1500,0);
    glEnd();
}

void strip()
{
    //strip on road
    glColor3f(0.5,0.5,0.5);//color not changed
    glBegin(GL_POLYGON);
    glVertex2f(50,90);
    glVertex2f(50,100);
    glVertex2f(200,100);
    glVertex2f(200,90);
    glEnd();
}

void lamppost()
{
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(40,230);
    glVertex2f(40,530);
    glVertex2f(60,530);
    glVertex2f(60,230);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(40,530);
    glVertex2f(30,550);
    glVertex2f(50,600);
    glVertex2f(70,550);
    glVertex2f(60,530);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(60,530);
    glVertex2f(300,530);
    glEnd();
}

void draw_pixel(GLint cx,GLint cy)
{
    glPolygonMode(GL_FRONT,GL_FILL);
    glBegin(GL_POINTS);
    glVertex2i(cx,cy);
    glEnd();
}

void plotpixels(GLint h,GLint k,GLint x,GLint y)
{
    draw_pixel(x+h,y+k);
    draw_pixel(-x+h,y+k);
    draw_pixel(x+h,-y+k);
    draw_pixel(-x+h,-y+k);

    draw_pixel(y+h,x+k);
    draw_pixel(-y+h,x+k);
    draw_pixel(y+h,-x+k);
    draw_pixel(-y+h,-x+k);
}

void circle_draw(GLint h,GLint k,GLint r)
{
    GLint d=1-r,x=0,y=r;
    while(y>x)
    {
        plotpixels(h,k,x,y);
if(d<0)
            d+=2*x+3;
else
{
   d+=2*(x-y)+5;
            --y;
}
++x;
    }
    plotpixels(h,k,x,y);
}

void redrawcar()
{
    if(car1==0)
    {
        if(n<1500)
{
            n+=2;
            glutPostRedisplay();
}
else//for redrawing the car so that it will redisplay back once it is out of window
{
   n=n-2000;
            glutPostRedisplay();
}
    }
}

void car()
{
    glColor3f(0.576471,0.858824,0.439216);
    glBegin(GL_POLYGON);
    glVertex2f(25+n,50);
    glVertex2f(25+n,125);
    glVertex2f(75+n,200);
    glVertex2f(175+n,200);
    glVertex2f(200+n,125);
    glVertex2f(250+n,115);
    glVertex2f(250+n,50);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(1+n,50);
    glVertex2d(1+n,125);
    glVertex2d(25+n,125);
    glVertex2d(25+n,50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(120+n,190);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(160+n,190);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(160+n,140);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(120+n,140);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(120+n,190);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(160+n,190);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(160+n,140);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(120+n,140);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(50+n,140);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(85+n,190);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(110+n,190);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(110+n,140);
    glEnd();

    for(l=0;l<20;l++)
    {
        glColor3f(0.5,0.5,0.5);
        circle_draw(75+n,50,l);
        circle_draw(175+n,50,l);
    }
}

void Newtree()
{
    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(650,100);
    glVertex2f(650,250);
    glVertex2f(690,250);
    glVertex2f(690,100);
    glEnd();

    glColor3f(0.0,0.8,0.);
    glBegin(GL_POLYGON);
    glVertex2f(620,250);
    glVertex2f(670,400);
    glVertex2f(730,250);
    glEnd();
}

void Newtree1()
{
    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(470,100);
    glVertex2f(470,250);
    glVertex2f(520,250);
    glVertex2f(520,100);
    glEnd();

    glColor3f(0.0,0.8,0.);
    glBegin(GL_POLYGON);
    glVertex2f(420,250);
    glVertex2f(500,400);
    glVertex2f(580,250);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(420,350);
    glVertex2f(500,500);
    glVertex2f(580,350);
    glEnd();
}

void help1()
{
    int k=0;
    glColor3f(1.0,1.0,1.0);
    char string20[]="HELP";
    void *font20=GLUT_BITMAP_TIMES_ROMAN_24;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2d(600,900);
    for(k=0;k<strlen(string20);k++)
        glutBitmapCharacter(font20,string20[k]);

    char string21[]="Press the ???x??? key to move the boat/car in forward direction";
    void *font21=GLUT_BITMAP_TIMES_ROMAN_24;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2d(40,700);
    for(k=0;k<strlen(string21);k++)
        glutBitmapCharacter(font21,string21[k]);

    char string22[]="Press the ???y??? key to move the boat/car in backward direction";
    void *font22=GLUT_BITMAP_TIMES_ROMAN_24;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2d(40,600);
    for(k=0;k<strlen(string22);k++)
        glutBitmapCharacter(font22,string22[k]);

    char string23[]="Press the ???r??? key to restart boat/car";
    void *font23=GLUT_BITMAP_TIMES_ROMAN_24;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2d(40,500);
    for(k=0;k<strlen(string23);k++)
        glutBitmapCharacter(font23,string23[k]);

    char string24[]="Press the ???s??? key to stop boat/car";
    void *font24=GLUT_BITMAP_TIMES_ROMAN_24;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2d(40,400);
    for(k=0;k<strlen(string24);k++)
        glutBitmapCharacter(font24,string24[k]);
}

void display1()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
    help1();
    glutSwapBuffers();
}

void key(unsigned char key,int x,int y)
{
if (view==2){
if(key==' ')
   {
view=1;
riverview();
glutPostRedisplay();
   }
}
if (view==0){
if(key==' ')
   {
view=2;
firstpage();
glutPostRedisplay();
   }
}

    if(key=='x')
    {
        n=n+10;
        if(n>2000) n=-800;
        glutPostRedisplay();
    }
    if(key=='y')
    {
n=n-10;
if(n<-1400) n=1400;
        glutPostRedisplay();
    }
    if(key=='s') //to stop boat
    {
        car1=1;
glutPostRedisplay();
    }
    if(key=='r') // to restart boat
    {
car1=0;
glutPostRedisplay();
    }
    if(key=='h')
    {
        glutInitWindowSize(650,500);
        glutInitWindowPosition(500,100);
        window1= glutCreateWindow("HELP");
        glutKeyboardFunc(key);
        glutDisplayFunc(display1);
        init();
        glutMainLoop();
    }
}

void birds()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE);
    glVertex2f(160,890);
    glVertex2f(170,860);
    glVertex2f(180,890);

}

void tree1()
{
    //tree stump
    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(120,0);
    glVertex2f(120,180);
    glVertex2f(180,180);
    glVertex2f(180,0);
    glEnd();
    //leaves
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(120,180);
    glVertex2f(80,110);
    glVertex2f(90,210);
    glVertex2f(80,280);
    glVertex2f(120,260);
    glVertex2f(150,450);
    glVertex2f(200,270);
    glVertex2f(250,280);
    glVertex2f(250,200);
    glVertex2f(290,120);
    glVertex2f(180,180);
    glEnd();
}

void tree2()
{
    //tree stump
    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(300,0);
    glVertex2f(300,80);
    glVertex2f(350,80);
    glVertex2f(350,0);
    glEnd();
    //leaves
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300,80);
    glVertex2f(270,80);
    glVertex2f(300,150);
    glVertex2f(280,190);
    glVertex2f(320,180);
    glVertex2f(325,280);
    glVertex2f(350,150);
    glVertex2f(400,140);
    glVertex2f(350,130);
    glVertex2f(410,80);
    glVertex2f(350,80);
    glEnd();
}

void tree3()
{
    //tree stump
    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(480,0);
    glVertex2f(480,220);
    glVertex2f(540,220);
    glVertex2f(540,0);
    glEnd();
    //leaves
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(500,220);
    glVertex2f(390,170);
    glVertex2f(450,250);
    glVertex2f(430,350);
    glVertex2f(490,320);
    glVertex2f(460,440);
    glVertex2f(520,320);
    glVertex2f(560,390);
    glVertex2f(550,310);
    glVertex2f(620,200);
    glVertex2f(550,220);
    glEnd();
}

void riverview()
{
    //mud road
    glColor3f(.8,.37,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(1500,0);
    glColor3f(0.7,0.37,0.0);
    glVertex2f(0,1000);
    glColor3f(0.4,0.6,0.0);
    glVertex2f(0,0);
    glColor3f(0.4,0.6,0.0);
    glVertex2f(1500,0);
    glEnd();

    sky();
    windmill();
    sea();
    road();
    tree1();
    tree2();
    tree3();
    house1();
    //fish();

    glPushMatrix();
    glTranslatef(100,-600,0.0);
    house1();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.95,0.95,0.0);
    glTranslatef(70,-788,0.0);
    house1();
    glPopMatrix();

    glPointSize(9.0);
    glColor3f(0.9,1,0.7);
    circle_draw(300,920,50);//x axis,yaxis,circles radius
    glColor3f(0.9,1,0.7);
    circle_draw(300,920,40);
    glColor3f(0.9,1,0.8);
    circle_draw(300,920,30);
    glColor3f(0.9,1,0.8);
    circle_draw(300,920,20);
    glColor3f(0.9,1,0.9);
    circle_draw(300,920,10);
    glColor3f(0.9,1,1);
    circle_draw(300,920,5);
    mountain();
    birds();
    boat();
    Newtree();

    glPushMatrix();
    draw_pixel(thx,thy);
    glTranslatef(thx,thy,0.0);
    glRotatef(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1340,900);
    glVertex2f(1340,850);
    glVertex2f(1360,850);
    glVertex2f(1360,900);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(thx,thy);
    glTranslatef(thx,thy,0.0);
    glRotatef(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1340,940);
    glVertex2f(1340,990);
    glVertex2f(1360,990);
    glVertex2f(1360,940);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(thx,thy);
    glTranslatef(thx,thy,0.0);
    glRotatef(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1285,910);
    glVertex2f(1285,930);
    glVertex2f(1335,930);
    glVertex2f(1335,910);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(thx,thy);
    glTranslatef(thx,thy,0.0);
    glRotatef(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1365,910);
    glVertex2f(1415,910);
    glVertex2f(1415,930);
    glVertex2f(1365,930);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.75,0.75,0.0);
    windmill1();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(635,847);
    glTranslatef(635,847,0.0);
    glRotated(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1340,940);
    glVertex2f(1340,990);
    glVertex2f(1360,990);
    glVertex2f(1360,940);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(635,847);
    glTranslatef(635,847,0.0);
    glRotated(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1285,910);
    glVertex2f(1285,930);
    glVertex2f(1335,930);
    glVertex2f(1335,910);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(635,847);
    glTranslatef(635,847,0.0);
    glRotated(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1365,910);
    glVertex2f(1415,910);
    glVertex2f(1415,930);
    glVertex2f(1365,930);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(635,847);
    glTranslatef(635,847,0.0);
    glRotated(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1340,900);
    glVertex2f(1340,850);
    glVertex2f(1360,850);
    glVertex2f(1360,900);
    glEnd();
    glPopMatrix();
    //Grass();
    glPushMatrix();
    glTranslatef(980,600,0);
    glScalef(0.5,0.5,0.0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1200,600,0);
    glScalef(0.5,0.5,0.0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(800,795,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(760,795,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(720,795,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(840,795,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(880,800,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(880,803,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-40,205,0);
    tree2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(810,260,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(850,260,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(890,260,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(930,260,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(760,-15,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(830,100,0);
    glScalef(0.4,0.4,0);
    Newtree1();
    glPopMatrix();

    house2();

    glPushMatrix();
    glTranslatef(340,610,0);
    glScalef(0.4,0.4,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(430,610,0);
    glScalef(0.4,0.4,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400,610,0);
    glScalef(0.4,0.4,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(370,610,0);
    glScalef(0.4,0.4,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(410,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(440,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(470,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(500,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1080,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1050,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1020,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(990,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(960,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(860,795,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(880,795,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(900,795,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(930,795,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(930,600,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(800,795,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(830,795,0);
    glScalef(0.5,0.5,0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,180,0);
    Grass();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,160,0);
    Grass();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,140,0);
    Grass();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,120,0);
    Grass();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,100,0);
    Grass();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,80,0);
    Grass();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,60,0);
    Grass();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,40,0);
    Grass();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,20,0);
    Grass();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,0,0);
    Grass();
    glPopMatrix();

    fish();
}

void modernriverview()
{
    mountain();
    sea1();
    road1();
    strip();
    fish1();

    glPushMatrix();
    glTranslatef(250,0,0);
    strip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(500,0,0);
    strip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(750,0,0);
    strip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1000,0,0);
    strip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1250,0,0);
    strip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1500,0,0);
    strip();
    glPopMatrix();

    houseground();
    sky1();
    //drawing sun
    glPointSize(9.0);
    glColor3f(.9,0.2,0.0);
    circle_draw(300,920,50);//x axis,yaxis,circles radius
    glColor3f(.95,0.2,0.0);
    circle_draw(300,920,40);
    glColor3f(1.0,0.25,0.0);
    circle_draw(300,920,30);
    glColor3f(1.1,0.3,0.0);
    circle_draw(300,920,20);
    glColor3f(1.15,0.35,0.0);
    circle_draw(300,920,10);
    glColor3f(1.18,.38,0.0);
    circle_draw(300,920,5);

    buildings();

    glPushMatrix();
    glTranslatef(-10,530,0);
    glScalef(0.5,0.5,0.0);
    ind();
    glPopMatrix();

    birds();
    //dirt();
    //dirt1();

    glPushMatrix();
    glTranslatef(-30,30,0);
    //dirt();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-50,30,0);
    //dirt1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-50,50,0);
    //dirt();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-50,70,0);
    //dirt1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-50,90,0);
    //dirt();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-60,30,0);
    //dirt1();
    glPopMatrix();

    glPushMatrix();
    glScalef(1,1.3,0);
    glTranslatef(500,-500,0);
    buildings();
    glPopMatrix();

    lamppost();

    glPushMatrix();
    glTranslatef(260,0,0);
    lamppost();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(520,0,0);
    lamppost();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(780,0,0);
    lamppost();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1040,0,0);
    lamppost();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1300,0,0);
    lamppost();
    glPopMatrix();

    car();

    glPushMatrix();
    glTranslatef(-861,-120,0);
    glScalef(0.8,0.8,0.0);
    smallhouse1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-600,-120,0);
    glScalef(0.8,0.8,0.0);
    smallhouse1();
    glPopMatrix();

    pipe();

    glPushMatrix();
    draw_pixel(235,774);
    glTranslatef(235,774,0.0);
    glScalef(0.4,0.4,0);
    glRotatef(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1340,940);
    glVertex2f(1340,990);
    glVertex2f(1360,990);
    glVertex2f(1360,940);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(235,774);
    glTranslatef(235,774,0.0);
    glScalef(0.4,0.4,0.0);
    glRotatef(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1285,910);
    glVertex2f(1285,930);
    glVertex2f(1335,930);
    glVertex2f(1335,910);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(235,774);
    glTranslatef(235,774,0.0);
    glScalef(0.4,0.4,0.0);
    glRotatef(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1365,910);
    glVertex2f(1415,910);
    glVertex2f(1415,930);
    glVertex2f(1365,930);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    draw_pixel(235,774);
    glTranslatef(235,774,0.0);
    glScalef(0.4,0.4,0);
    glRotatef(th+=0.1,0.0,0.0,1.0);
    glTranslatef(-thx,-thy,0.0);
    glColor3f(0.80,0.80,0.80);
    glBegin(GL_POLYGON);
    glVertex2f(1340,900);
    glVertex2f(1340,850);
    glVertex2f(1360,850);
    glVertex2f(1360,900);
    glEnd();
    glPopMatrix();

    save();
    trees();

    glPushMatrix();
    glTranslatef(-120,170,0);
    glScalef(0.5,0.5,0.0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(140,170,0);
    glScalef(0.5,0.5,0.0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350,170,0);
    glScalef(0.7,0.7,0.0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(620,170,0);
    glScalef(0.7,0.7,0.0);
    Newtree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-210,100,0);
    smallhouse();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(600,-10,0);
    house1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(140,750,0);
    glScalef(0.5,0.5,0.0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(190,630,0);
    glScalef(0.5,0.5,0.0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(970,630,0);
    glScalef(0.5,0.5,0.0);
    Newtree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1120,630,0);
    glScalef(0.5,0.5,0.0);
    Newtree();
    glPopMatrix();
}

void firstpage()
{
    int k;
    //glColor3f(0.196078,0.80,0.196078);
    glColor3f(1,0.7,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,1000);
    glVertex2f(1500,1000);
    glVertex2f(1500,0);
    glEnd();

    void *font=GLUT_BITMAP_TIMES_ROMAN_24;

    char string1[]="RIVER VIEW";
    glColor3f(0.0,0.0,0.0);
    glRasterPos2d(700,900);
    for(k=0;k<strlen(string1);k++)
        glutBitmapCharacter(font,string1[k]);

       
char string4[]="This project highlights THE EFFECT OF MODERNIZATION ON RIVERS";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(425,780);
for(k=0;k<strlen(string4);k++)
glutBitmapCharacter(font,string4[k]);

char string5[]="some years ago, rivers were the most beautiful and peaceful part of the nature";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(425,700);
for(k=0;k<strlen(string5);k++)
glutBitmapCharacter(font,string5[k]);

char string6[]="-Breathtaking sunset, trees, sound of flowing river, chirping birds and so on.";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(450,650);
for(k=0;k<strlen(string6);k++)
glutBitmapCharacter(font,string6[k]);

char string7[]="Today,due to modernization rivers and surroundings are highly polluted";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(425,550);
for(k=0;k<strlen(string7);k++)
glutBitmapCharacter(font,string7[k]);

char string8[]="Industries built,sound of birds replaced with sound of horns.";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(425,500);
for(k=0;k<strlen(string8);k++)
glutBitmapCharacter(font,string8[k]);

char string9[]="It is our duty to save this precious gift of the nature for coming generations.";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(425,425);
for(k=0;k<strlen(string9);k++)
glutBitmapCharacter(font,string9[k]);

char string10[]="LET'S PLEDGE TO SAVE OUR NATURE BEFORE IT'S TOO LATE";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,350);
for(k=0;k<strlen(string10);k++)
glutBitmapCharacter(font,string10[k]);

char string11[]="Click 'space' key for river view";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,250);
for(k=0;k<strlen(string11);k++)
glutBitmapCharacter(font,string11[k]);

char string12[]="Click 'h' key for help menu";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,200);
for(k=0;k<strlen(string12);k++)
glutBitmapCharacter(font,string12[k]);
}

void draw_credit_text()
{
/*
unsigned int texture;
glGenTextures(1, &texture);
glBindTexture(GL_TEXTURE_2D, texture);
// set the texture wrapping/filtering options (on the currently bound texture object)
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
// load and generate the texture
int width, height, nrChannels;

unsigned char *data = stbi_load("intro.png", &width, &height, &nrChannels, 0);
if (data)
{
   glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
   glGenerateMipmap(GL_TEXTURE_2D);
}
else
{
printf("Failed to load front page\n");
}
stbi_image_free(data);
*/

int k;
glColor3f(0.196078,0.80,0.196078);
/*glColor3f(1,0.7,0.5);
glBegin(GL_POLYGON);
glVertex2f(0,0);
glVertex2f(0,1000);
glVertex2f(1500,1000);
glVertex2f(1500,0);
glEnd();
*/

void *font=GLUT_BITMAP_TIMES_ROMAN_24;
char string1[]="BANGALORE INSTITUTE OF TECHNOLOGY";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(550,950);
for(k=0;k<strlen(string1);k++)
    glutBitmapCharacter(font,string1[k]);

char string2[]="KR ROAD, VV PURAM, BANGALORE- 5600004";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(590,910);
for(k=0;k<strlen(string2);k++)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string2[k]);
   
char string3[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(450,850);
for(k=0;k<strlen(string3);k++)
glutBitmapCharacter(font,string3[k]);

char string4[]="Computer Graphics Laboratory with Mini Project";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(580,810);
for(k=0;k<strlen(string4);k++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string4[k]);

char string5[]="18CSL67";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(720,770);
for(k=0;k<strlen(string5);k++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string5[k]);

char string6[]="EFFECTS OF MORDERNISATION ON RIVER";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(550,710);
for(k=0;k<strlen(string6);k++)
glutBitmapCharacter(font,string6[k]);

char string7[]="Presented By";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(700,670);
for(k=0;k<strlen(string7);k++)
glutBitmapCharacter(font,string7[k]);

char string8[]="HARSHITHA P";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,600);
for(k=0;k<strlen(string8);k++)
glutBitmapCharacter(font,string8[k]);

char string9[]="DIVITHA ELUGOTHI";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(900,600);
for(k=0;k<strlen(string9);k++)
        glutBitmapCharacter(font,string9[k]);

char string10[]="1BI18CS059";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,560);
for(k=0;k<strlen(string10);k++)
glutBitmapCharacter(font,string10[k]);

char string11[]="1BI18CS053";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(900,560);
for(k=0;k<strlen(string11);k++)
glutBitmapCharacter(font,string11[k]);

char string12[]="A4 Batch";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,520);
for(k=0;k<strlen(string12);k++)
glutBitmapCharacter(font,string12[k]);

char string13[]="A3 Batch";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(900,520);
for(k=0;k<strlen(string13);k++)
glutBitmapCharacter(font,string13[k]);

char string23[]="Under the guidance of";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(660,450);
for(k=0;k<strlen(string23);k++)
glutBitmapCharacter(font,string23[k]);

char string14[]="Dr. Girija.J";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,400);
for(k=0;k<strlen(string14);k++)
glutBitmapCharacter(font,string14[k]);

char string15[]="Chaitra p";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(900,400);
for(k=0;k<strlen(string15);k++)
        glutBitmapCharacter(font,string15[k]);

char string16[]="Professor";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,360);
for(k=0;k<strlen(string16);k++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string16[k]);

char string17[]="Assistant Professor";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(900,360);
for(k=0;k<strlen(string17);k++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string17[k]);

char string18[]="Department of CS & E";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,320);
for(k=0;k<strlen(string18);k++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string18[k]);

char string19[]="Department of CS & E";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(900,320);
for(k=0;k<strlen(string19);k++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string19[k]);
   
char string24[]="BIT, Bangalore";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,280);
for(k=0;k<strlen(string24);k++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string24[k]);

char string25[]="BIT, Bangalore";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(900,280);
for(k=0;k<strlen(string25);k++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string25[k]);

char string20[]="Click 'space' key to go to next page";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,160);
for(k=0;k<strlen(string20);k++)
glutBitmapCharacter(font,string20[k]);

/*char string21[]="Click 'h' key for help menu";
glColor3f(0.0,0.0,0.0);
glRasterPos2d(400,120);
for(k=0;k<strlen(string21);k++)
glutBitmapCharacter(font,string21[k]);*/


}

void init()
{
    glClearColor(.8,.5,0.0,1.0);
    glColor3f(1.0,0.0,0.0);
    glPointSize(5.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1500,0.0,1000,0,10);
    glMatrixMode(GL_MODELVIEW);
    glutPostRedisplay();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
    if(view==0)
    {
        draw_credit_text();//firstpage();
    }
    if(view==2)
    {
        /*draw_credit_text();*/firstpage();
    }
    if(view==1)
    {
        if(glob==0)
        {
            riverview();
        }
        else if(glob==1)
        {
            modernriverview();
           
        }
        redrawcar();
        //view=3;
       
    }
   
    /*if(view==3){
    firstpage();
    }*/
    glFlush();
    glutSwapBuffers();
}

void mainmenu(int id)
{
    switch(id)
    {
        case 1:glob=0;
               break;
case 2:glob=1;
      break;

        case 3:exit(0);
               break;
    }
    glutPostRedisplay();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv); //initialization
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB| GLUT_DEPTH); //to select buffer and coloring mode
    glutInitWindowSize(1500,1080); //to set the display window size
    glutInitWindowPosition(0,0);
    glutCreateWindow("River View");
    glutKeyboardFunc(key);
    glutDisplayFunc(display);
    glutCreateMenu(mainmenu);
    glutAddMenuEntry("OLD RIVER VIEW",1);
    glutAddMenuEntry("MODERN RIVER VIEW",2);
    glutAddMenuEntry("EXIT",3);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    init();
    glutMainLoop();
    return 0;
}

