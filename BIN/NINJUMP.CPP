/*
  Author : Parampreet Singh
  Organization : Chinar Public School
*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<malloc.h>

void j_ninja(int xm,int ym,int make,int o)
{ 
  int r=10,col,scol;
  if(make==1){
    col=0;
    scol=8;
   }else {
    col=7;
    scol=7;
   }
  if((o=='s')||(o=='S'))
  { //head
    setcolor(col);
    circle(xm-4,ym,r);
    setfillstyle(1,col);
    floodfill(xm,ym,col);
    //body
    line(xm,ym+r,xm+17,ym+r+30);
    line(xm+1,ym+r+1,xm+17+1,ym+r+30+1);
    //left leg
    line(xm+17,ym+r+30,xm+25,ym+r+42);
    line(xm+25,ym+r+42,xm+34,ym+60);
    //right leg
    line(xm+17,ym+r+30,xm-6,ym+r+29);
    line(xm-6,ym+r+29,xm-17,ym+48);
    //right hand
    line(xm+3,ym+20,xm-7,ym+25);
	  line(xm-7,ym+25,xm-18,ym+16);
    //left hand
    line(xm+3,ym+20,xm+25,ym+28);
    //sword
    setcolor(scol);
    line(xm+25,ym+28,xm+24,ym+30);
	  line(xm+25,ym+28,xm+36,ym+50);
	  line(xm+24,ym+30,xm+35,ym+52);
	  line(xm+36,ym+50,xm+35,ym+53);
  }
  else { 
    //head
    setcolor(col);
	  circle(xm+2,ym,r);
	  setfillstyle(1,col);
	  floodfill(xm,ym,col);
    //body
    line(xm,ym+r,xm-17,ym+r+30);
	  line(xm-1,ym+r+1,xm-17-1,ym+r+30+1);
    //left leg
    line(xm-17,ym+r+30,xm-25,ym+r+42);
	  line(xm-25,ym+r+42,xm-34,ym+60);
    //right leg
    line(xm-17,ym+r+30,xm+6,ym+r+29);
	  line(xm+6,ym+r+29,xm+17,ym+48);
    //right hand
    line(xm-3,ym+20,xm+7,ym+25);
	  line(xm+7,ym+25,xm+18,ym+16);
    //left hand
    line(xm-3,ym+20,xm-25,ym+28);
    //sword
    setcolor(scol);
    line(xm-25,ym+28,xm-24,ym+30);
	  line(xm-25,ym+28,xm-36,ym+50);
	  line(xm-24,ym+30,xm-35,ym+52);
	  line(xm-36,ym+50,xm-35,ym+53);
  }
}


void r_ninja(int y,int x,int make,int o)
{int r=10,col,scol;

  if(make==1)
   {col=0;scol=8;}
    else
     {col=7;scol=7;}
   if((o=='s')||(o=='S'))
   {//head
    setcolor(col);
    circle(y+4,x,r);
    setfillstyle(1,col);
    floodfill(y,x,col);
    //body

    line(y+r,x-4,y+r+30,x+20);
    line(y+r+1,x-1,y+r+30+1,x+20-1);
    //left leg
    line(y+r+30,x+20,y+r+40,x+23);
    line(y+r+40,x+23,y+60,x+35);
    //right leg
    line(y+r+31,x+19,y+r+42,x-1);
    line(y+r+42,x-1,y+60,x-6);
    //right hand
    line(y+20,x+3,y+25,x-7);
    line(y+25,x-7,y+16,x-18);
    //left hand
    line(y+20,x+3,y+28,x+25);

    //sword
    setcolor(scol);

    line(y+28,x+25,y+30,x+24);
    line(y+28,x+25,y+50,x+36);
    line(y+30,x+24,y+52,x+35);
    line(y+50,x+36,y+53,x+35);
   }
   else
   {
    //head
    setcolor(col);
    circle(y-4,x,r);
    setfillstyle(1,col);
    floodfill(y,x,col);
    //body

    line(y-r,x-4,y-r-30,x+20);
    line(y-r-1,x-1,y-r-30-1,x+20-1);

    //left leg
    line(y-r-30,x+20,y-r-40,x+23);
    line(y-r-40,x+23,y-60,x+35);
    //right leg
    line(y-r-31,x+19,y-r-42,x-1);
    line(y-r-42,x-1,y-60,x-6);

    //right hand
    line(y-20,x+3,y-25,x-7);
    line(y-25,x-7,y-16,x-18);
    //left hand
    line(y-20,x+3,y-28,x+25);

    //sword
    setcolor(scol);

    line(y-28,x+25,y-30,x+24);
    line(y-28,x+25,y-50,x+36);
    line(y-30,x+24,y-52,x+35);
    line(y-50,x+36,y-53,x+35);

  }
 }
   void r1_ninja(int y,int x,int make,int o)
 {int r=10,col,scol;

  if(make==1)
   {col=0;scol=8;}
    else
     {col=7;scol=7;}

  if((o=='s')||(o=='S'))
   {//head
    setcolor(col);
    circle(y+4,x,r);
    setfillstyle(1,col);
    floodfill(y,x,col);
    //body

    line(y+r,x-4,y+r+30,x+20);
    line(y+r+1,x-1,y+r+30+1,x+20-1);
    //left leg
    line(y+r+31,x+20,y+r+42,x+33);
    line(y+r+42,x+33,y+54,x+48);
    //right leg
    line(y+r+30,x+20,y+r+40,x+2);
    line(y+r+40,x+2,y+60,x+11);
    //right hand
    line(y+20,x+3,y+25,x-7);
    line(y+25,x-7,y+16,x-18);
    //left hand
    line(y+20,x+3,y+28,x+25);

    //sword
    setcolor(scol);

    line(y+28,x+25,y+30,x+24);
    line(y+28,x+25,y+50,x+36);
    line(y+30,x+24,y+52,x+35);
    line(y+50,x+36,y+53,x+35);
   }
   else
   { //head
    setcolor(col);
    circle(y-4,x,r);
    setfillstyle(1,col);
    floodfill(y,x,col);
    //body

    line(y-r,x-4,y-r-30,x+20);
    line(y-r-1,x-1,y-r-30-1,x+20-1);
    //left leg
    line(y-r-31,x+20,y-r-42,x+33);
    line(y-r-42,x+33,y-54,x+48);
    //right leg
    line(y-r-31,x+20,y-r-40,x+2);
    line(y-r-40,x+2,y-60,x+11);
    //right hand
    line(y-20,x+3,y-25,x-7);
    line(y-25,x-7,y-16,x-18);
    //left hand
    line(y-20,x+3,y-28,x+25);

    //sword
    setcolor(scol);

    line(y-28,x+25,y-30,x+24);
    line(y-28,x+25,y-50,x+36);
    line(y-30,x+24,y-52,x+35);
    line(y-50,x+36,y-53,x+35);
   }
  }


   void r2_ninja(int y,int x,int make,int o)
{ int r=10,col,scol;

  if(make==1)
   {col=0;scol=8;}
    else
     {col=7;scol=7;}

  if((o=='s')||(o=='S'))
   {//head
    setcolor(col);
    circle(y+4,x,r);
    setfillstyle(1,col);
    floodfill(y,x,col);

    //body
    line(y+r,x-4,y+r+30,x+20);
    line(y+r+1,x-1,y+r+30+1,x+20-1);
    //left leg
    line(y+r+31,x+20,y+r+42,x+22);
    line(y+r+42,x+22,y+56,x+38);
    //right leg
    line(y+r+30,x+20,y+r+40,x+6);
    line(y+r+40,x+6,y+60,x+6);
    //right hand
    line(y+20,x+3,y+25,x-7);
    line(y+25,x-7,y+16,x-18);
    //left hand
    line(y+20,x+3,y+28,x+25);

    //sword
    setcolor(scol);

    line(y+28,x+25,y+30,x+24);
    line(y+28,x+25,y+50,x+36);
    line(y+30,x+24,y+52,x+35);
    line(y+50,x+36,y+53,x+35);
   }
   else
   {//head
    setcolor(col);
    circle(y-4,x,r);
    setfillstyle(1,col);
    floodfill(y,x,col);
    //body

    line(y-r,x-4,y-r-30,x+20);
    line(y-r-1,x-1,y-r-30-1,x+20-1);
    //left leg
    line(y-r-31,x+20,y-r-42,x+22);
    line(y-r-42,x+22,y-56,x+38);
    //right leg
    line(y-r-30,x+20,y-r-40,x+6);
    line(y-r-40,x+6,y-60,x+6);
    //right hand
    line(y-20,x+3,y-25,x-7);
    line(y-25,x-7,y-16,x-18);
    //left hand
    line(y-20,x+3,y-28,x+25);

    //sword
    setcolor(scol);

    line(y-28,x+25,y-30,x+24);
    line(y-28,x+25,y-50,x+36);
    line(y-30,x+24,y-52,x+35);
    line(y-50,x+36,y-53,x+35);
   }
  }

  void r3_ninja(int y,int x,int make,int o)
  {int r=10,col,scol;

    if(make==1)
     {col=0;scol=8;}
      else
       {col=7;scol=7;}

  if((o=='s')||(o=='S'))
   {//head
    setcolor(col);
    circle(y+4,x,r);
    setfillstyle(1,col);
    floodfill(y,x,col);
    //body

    line(y+r,x-4,y+r+30,x+20);
    line(y+r+1,x-1,y+r+30+1,x+20-1);
    //left leg
    line(y+r+31,x+20,y+r+42,x+33);
    line(y+r+42,x+33,y+60,x+48);
    //right leg
    line(y+r+30,x+20,y+r+42,x-9);
    line(y+r+42,x-9,y+60,x-14);
    //right hand
    line(y+20,x+3,y+25,x-7);
    line(y+25,x-7,y+16,x-18);

    //left hand
    line(y+20,x+3,y+28,x+25);

    //sword
    setcolor(scol);

    line(y+28,x+25,y+30,x+24);
    line(y+28,x+25,y+50,x+36);
    line(y+30,x+24,y+52,x+35);
    line(y+50,x+36,y+53,x+35);
   }
   else
   {//head
    setcolor(col);
    circle(y-4,x,r);
    setfillstyle(1,col);
    floodfill(y,x,col);

    //body

    line(y-r,x-4,y-r-30,x+20);
    line(y-r-1,x-1,y-r-30-1,x+20-1);
    //left leg
    line(y-r-31,x+20,y-r-42,x+33);
    line(y-r-42,x+33,y-60,x+48);
    //right leg
    line(y-r-30,x+20,y-r-42,x-9);
    line(y-r-42,x-9,y-60,x-14);
    //right hand
    line(y-20,x+3,y-25,x-7);
    line(y-25,x-7,y-16,x-18);

    //left hand
    line(y-20,x+3,y-28,x+25);

    //sword
    setcolor(scol);

    line(y-28,x+25,y-30,x+24);
    line(y-28,x+25,y-50,x+36);
    line(y-30,x+24,y-52,x+35);
    line(y-50,x+36,y-53,x+35);
   }



 }



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
void obst(int xo,int yo,int make)
{int col,fol,sol;
 if(make==1)
  {col=0;fol=8;sol=9;}
   else
    {col=7;fol=7;sol=1;}
  setcolor(col);
  setlinestyle(0,1,1);
  rectangle(xo,yo,xo+80,yo+15); setfillstyle(sol,fol); floodfill(xo+2,yo+2,col);
}
void brick(int x,int y,int make)
{int col,fol;
 if(make==1)
  {col=0;fol=4;}
  else
  {col=6;fol=6;}
 //building 1
  setcolor(col);
  setlinestyle(0,1,1);
  rectangle(x,y,x+15,y+10); setfillstyle(1,fol); floodfill(x+2,y+2,col);

}
void fp()
{ int i;
 //backcolor
 setcolor(15);
 setfillstyle(1,7);
 rectangle(1,1,639,479);
 floodfill(2,2,15);
 //text
 for(i=0;i<=15;i++)
{setcolor(i);

 settextstyle(4,0,9);
 outtextxy(10,i,"^ NiN jUmp ^");
 delay(100);
 setcolor(7);
 outtextxy(10,i,"^ NiN jUmp ^");
 }
 setcolor(15);
 settextstyle(4,0,9);
 outtextxy(10,i,"^ NiN jUmp ^");

 //start
 setcolor(8);
 setfillstyle(1,8);

 rectangle(220,300,400,350);
 floodfill(320,310,8);
 setcolor(0);
 line(220,300,220,350);
 line(220,300,400,300);
 setcolor(15);
 line(220,350,400,350);
 line(400,300,400,350);
 //exit

 setcolor(8);
 setfillstyle(1,8);
 rectangle(220,370,400,420);
 floodfill(380,310,8);

 setcolor(15);
 line(220,370,220,420);
 line(220,370,400,370);
 setcolor(0);
 line(220,420,400,420);
 line(400,370,400,420);


 }
void win(int x,int y,int make)
{int col,fol;
 if(make==1)
  {col=0;fol=4;}
  else
  {col=6;fol=6;}
 //building 1
  setcolor(col);
  setlinestyle(0,1,1);
  rectangle(x,y,x+60,y+60); setfillstyle(1,fol); floodfill(x+2,y+2,col);

}

void lp()
{  int s,x;
   clrscr();
   setcolor(0);

   setcolor(6);
   settextstyle(7,0,7);
   outtextxy(140,150,"Game Over");
   for(s=0;s<=30;s++)
   {setcolor(s);
    outtextxy(60,150,"!!!            !!!");
    delay(60);
    outtextxy(120,150,"                    ");
   }
   setcolor(2);
   settextstyle(6,0,4);
   outtextxy(280,320,"press any key to exit...");

   getch();
   exit(0);
}

void main()
{int i,x,y,r,j,gdriver=DETECT,gmode,wall=1,size,sizeo,sizeor,lv=3;
 float score=0;
 initgraph(&gdriver,&gmode,"..\\bgi");
 char ch=' ',och=' ';
 void *br,*bro,*bror;

 background1();

 int bx=429,by=0,bxr=79,byr=0;
 r_ninja(350,250,1,'s');
 brick(120,125,1);
 size=imagesize(119,124,136,146);
 br=malloc(size);
 getimage(119,124,136,146,br);

 int bxo=329,byo=0,bxor=150,byor=byo-300;
 obst(330,100,1);
 sizeo=imagesize(329,99,410,115);
 bro=malloc(sizeo);
 getimage(329,99,410,115,bro);

 obst(151,100,1);
 sizeor=imagesize(150,99,231,114);
 bror=malloc(sizeor);
 getimage(150,99,231,114,bror);

 obst(330,100,0);
 obst(151,100,0);

 gotoxy(74,6);cout<<score;
 gotoxy(74,12);cout<<lv;
 while(ch!='q')

 {
  if(kbhit())
    ch=getch();
  switch(ch)
  {case 'q':exit(0);
   case 'd':r_ninja(210,250,0,'r');
	    r1_ninja(210,250,0,'r');
	    r2_ninja(210,250,0,'r');
	    r3_ninja(210,250,0,'r');

	    if(och!='d')
	     {for(j=0;j<=200;j++)
	       {if((byo<310)&&(byo>200)&&(wall==2))
		 {lv--;
		    for(i=0;i<=65;i++)
		     {j_ninja(220+i,250,1,'r');
		      j_ninja(220+i,250,0,'r');
		     }
		     gotoxy(74,12);cout<<lv;

		    for(i=0;i<=250;i++)
		     {j_ninja(310,250+i,1,'r');
		      j_ninja(310,250+i,0,'r');
		     }
		   obst(bxo+1,byo,0);
		   obst(bxor+1,byor,0);
		   byo=0;byor=-300;
		   getch();
		   break;
		 }
		else
		{j_ninja(190+j,250,1,'r');
		 j_ninja(190+j,250,0,'r');
		}
	       }
	      wall=1;
	      och='d';
	      ch='t';
	     }
	     else
	       ch='t';
	     break;

   case 't' :  if(lv==0)lp();

	       gotoxy(74,6);
	       cout<<score;
	       brick(120,125,0);
	       putimage(bx,by,br,COPY_PUT);
	       putimage(bx,by+80,br,COPY_PUT);
	       putimage(bx,by+160,br,COPY_PUT);
	       putimage(bx,by+240,br,COPY_PUT);
	       putimage(bx,by+320,br,COPY_PUT);
	       putimage(bx,by+400,br,COPY_PUT);

	       putimage(bxr,byr,br,COPY_PUT);
	       putimage(bxr,byr+80,br,COPY_PUT);
	       putimage(bxr,byr+160,br,COPY_PUT);
	       putimage(bxr,byr+240,br,COPY_PUT);
	       putimage(bxr,byr+320,br,COPY_PUT);
	       putimage(bxr,byr+400,br,COPY_PUT);

		putimage(bxo,byo,bro,COPY_PUT);
		putimage(bxo,byo,bro,COPY_PUT);
		putimage(bxor,byor,bror,COPY_PUT);


	       if(wall==1)
	       {score=score+1;
		if(by%5==0)
		 {r_ninja(350,250,0,'s');
		  r1_ninja(350,250,1,'s');
		 }
		if(by%10==0)
		 {r1_ninja(350,250,0,'s');
		  r2_ninja(350,250,1,'s');
		 }
		if(by%15==0)
		 {r2_ninja(350,250,0,'s');
		  r_ninja(350,250,1,'s');
		 }
		if(by%20==0)
		 {r_ninja(350,250,0,'s');
		  r3_ninja(350,250,1,'s');
		 }
		if(by%25==0)
		 {r3_ninja(350,250,0,'s');
		  r_ninja(350,250,1,'s');
		 }
		if(ch=='d')
		 ch='t';
		if(by<80)
		 by++;
		if(by==80)
		  by=0;

		if(byr<80)
		 byr++;
		if(byr==80)
		  byr=0;

		if((byo==215)&&(wall==1))
		 {r_ninja(350,250,0,'s');
		  r1_ninja(350,250,0,'s');
		  r2_ninja(350,250,0,'s');
		  r3_ninja(350,250,0,'s');
		  lv--;
		  gotoxy(74,12);cout<<lv;
		  for(i=0;i<=250;i++)
		   {r2_ninja(340,250+i,1,'s');
		    r2_ninja(340,250+i,0,'s');
		   }
		   obst(bxo+1,byo+1,0);
		  obst(bxor+1,byor+1,0);
		   byo=0;byor=-300;
		   getch();

		 }

		if(byo<480)
		 byo++;
		if(byo==480)
		  byo=0;

		if(byor<480)
		 byor++;
		if(byor==480)
		  byor=0;

	     }

	       else
		{score=score+1;
		 if(byr%5==0)
		 {r_ninja(210,250,0,'r');
		  r1_ninja(210,250,1,'r');
		 }
		 if(byr%10==0)
		 {r1_ninja(210,250,0,'r');
		  r2_ninja(210,250,1,'r');
		 }
		 if(byr%15==0)
		 {r2_ninja(210,250,0,'r');
		  r_ninja(210,250,1,'r');
		 }
		 if(byr%20==0)
		 {r_ninja(210,250,0,'r');
		  r3_ninja(210,250,1,'r');
		 }
		 if(byr%25==0)
		 {r3_ninja(210,250,0,'r');
		  r_ninja(210,250,1,'r');
		 }
		if(ch=='a')
		 ch='t';


		if(by<80)
		 by++;
		if(by==80)
		  by=0;

		  if(byr<80)
		byr++;
	       if(byr==80)
		  byr=0;

	       if((byor==215)&&(wall==2))
		 {r_ninja(210,250,0,'r');
		  r1_ninja(210,250,0,'r');
		  r2_ninja(210,250,0,'r');
		  r3_ninja(210,250,0,'r');
		  lv--;
		  gotoxy(74,12);cout<<lv;
		  for(i=0;i<=250;i++)
		  {r2_ninja(220,250+i,1,'r');
		   r2_ninja(220,250+i,0,'r');
		  }
		  obst(bxo+1,byo+1,0);
		  obst(bxor+1,byor+1,0);
		  byo=0;byor=-300;
		  getch();
		 }

		if(byo<480)
		 byo++;
		if(byo==480)
		  byo=0;

		if(byor<480)
		 byor++;
		if(byor==480)
		  byor=0;


	      }


	    break;
  case 'a':r_ninja(350,250,0,'s');
	   r1_ninja(350,250,0,'s');
	   r2_ninja(350,250,0,'s');
	   r3_ninja(350,250,0,'s');
	    if(och!='a')
	    {for(j=0;j<=200;j++)
	     {if((byor>200)&&(byor<310)&&(wall==1))
	       {lv--;
		gotoxy(74,12);cout<<lv;
		for(i=0;i<=65;i++)
		{j_ninja(340-i,250,1,'s');
		 j_ninja(340-i,250,0,'s');
		}
		for(i=0;i<=250;i++)
		 {j_ninja(250,250+i,1,'s');
		  j_ninja(250,250+i,0,'s');
		 }
		obst(bxo+1,byo,0);
		obst(bxor+1,byor,0);

		byo=0;byor=-300;
		getch();
		break;
	       }
	       else
	       {j_ninja(370-j,250,1,'s');
		j_ninja(370-j,250,0,'s');
	       }
	     }
	      och='a';
	      ch='t';
	      wall=2;
	    }
	    else
	     ch='t';
	    break;

     }

 }


  getch();

}



