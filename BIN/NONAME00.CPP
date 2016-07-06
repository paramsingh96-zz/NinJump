#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<malloc.h>
void background1()
{
 //sky
  setcolor(8);
  rectangle(1,1,499,479);
  setfillstyle(1,7);
  floodfill(2,2,8);
 //gamename
  setcolor(2);
  rectangle(1,1,60,479);
  setfillstyle(1,0);
  floodfill(2,2,2);
  //setfillstyle(3,15);
  //floodfill(3,3,10);
  settextstyle(10,1,3);
  outtextxy(1,130,"^ NinjUmp ^");
 //score
   setcolor(7);
   settextstyle(4,0,4);
   outtextxy(520,30,"SCORE");
 //lives
   setcolor(12);
   settextstyle(10,0,2);
   outtextxy(530,120,"LIVES");
 //instructions
  // setcolor(15);
  // settextstyle(3,0,2);
  // outtextxy(530,150,
 //building
  setcolor(1);
  rectangle(500,1,639,479);
  setcolor(8);
  rectangle(410,1,499,479);
  rectangle(61,1,150,479);
  setfillstyle(1,6);
  floodfill(63,3,8);
  floodfill(411,3,8);
  setlinestyle(4,0,1);
  line(409,1,409,479);
  line(151,1,151,479);

  //bricks building 1

  setcolor(0);
  setlinestyle(0,1,1);
  /*rectangle(450,400,465,408); setfillstyle(1,4); floodfill(452,402,0);
  rectangle(445,408,460,416); setfillstyle(1,4); floodfill(447,409,0);
  rectangle(460,408,475,416); setfillstyle(1,4); floodfill(462,410,0);
  rectangle(470,108,485,116); setfillstyle(1,4); floodfill(471,109,0);
  rectangle(478,116,493,124); setfillstyle(1,4); floodfill(479,117,0);
  rectangle(450,220,465,228); setfillstyle(1,4); floodfill(451,221,0);


  //brick building 2

  setcolor(0);
  setlinestyle(0,1,1);
  rectangle(75,400,90,408); setfillstyle(1,4); floodfill(77,402,0);
  rectangle(70,408,85,416); setfillstyle(1,4); floodfill(72,409,0);
  rectangle(85,408,100,416); setfillstyle(1,4); floodfill(87,410,0);
  rectangle(120,108,135,116); setfillstyle(1,4); floodfill(121,109,0);
  rectangle(128,116,143,124); setfillstyle(1,4); floodfill(129,117,0);
  rectangle(100,200,115,208); setfillstyle(1,4); floodfill(101,201,0);

  //gate
  rectangle(110,400,150,470);
  setfillstyle(1,8);
  floodfill(111,401,0);

  rectangle(105,470,155,480);
  setfillstyle(1,0);
  floodfill(106,472,0);

  rectangle(113,403,147,438);
  rectangle(113,443,147,473);
   */
  }

void main()
{int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode," ");
 background1();
 getch();
}

