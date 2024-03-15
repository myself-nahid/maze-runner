#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
char num_solve[10000];
int loading();
int loading_finish();
int wait();
int description();
int last();
int level_1(int *p);
int score();
int loading()
{
    int i;
    settextstyle(0,0,5);
    setcolor(3);
    outtextxy(250,200, "Loading");

    for(i=500; i<700; i=i+30)
    {
        circle(i,290,10);
        setfillstyle(1,14);
        floodfill(i,290,3);
        delay(300);
    }

    delay(2000);
    cleardevice();
    loading_finish();
}
int loading_finish()
{
    int i;
    cleardevice();
    settextstyle(0,0,5);
    setcolor(3);

    outtextxy(150,200, "Loading Finish");

    delay(5000);
    cleardevice();
    wait();
}
int wait()
{
    cleardevice();
    settextstyle(0,0,3);
    setcolor(3);

    outtextxy(180,200, "Please wait for a while");

    delay(1000);
    cleardevice();


}
int welcome()
{
    setbkcolor(0);
    settextstyle(0,0,3);
    setcolor(3);
    cleardevice();
    setcolor(3);
    outtextxy(300,50,"Welcome To");
    outtextxy(280,80,"MAZE RUNNER");
    outtextxy(355,110,"Game");

    setcolor(3);
    setbkcolor(7);
    setfillstyle(1,7);
    bar(580,385,720,430);
    outtextxy(600,400,"Next");

    int f, g;

    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);

        if(f>=580 && f<=720 && g>=385 && g<=430)
        {
            description();
            return 0;
        }
    }
}
int description()
{
    setbkcolor(0);
    cleardevice();
    setbkcolor(0);
    setcolor(3);
    settextstyle(0,0,02);
    outtextxy(300,60,"Developed By");
    outtextxy(295,90,"Mehedi Hasan Tanvir");
    outtextxy(297,130,"ID : 16CSE025");
    outtextxy(270,160,"Session : 2016-2017");
    outtextxy(300,190,"Department of");
    outtextxy(310,220,"CSE,BSMRSTU");
    settextstyle(0,0,04);
    setcolor(5);
    setbkcolor(9);
    setfillstyle(1,9);
    bar(580,340,750,390);
    outtextxy(600,350,"Next");
    setcolor(5);
    setbkcolor(9);
    setfillstyle(1,9);
    bar(85,340,230,390);
    outtextxy(100,350,"Back");

    //back
    setbkcolor(9);
    setfillstyle(1,9);
    bar(240,420,550,480);
    setcolor(5);
    outtextxy(250,435,"Main Menu");

    int f,g;

    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }

        getmouseclick(WM_LBUTTONDOWN, f,g);

        if(f>580 && f<750 && g>340 && g<390)     ///1000,420,1150,480
        {
            cleardevice();
          last();
            break;
        }
        else if(f>240 && f<550 && g>420 && g<480)
        {
            cleardevice();
            welcome();
            break;
        }
        else if(f>85 && f<230 && g>340 && g<390)
        {
            cleardevice();
            welcome();
            break;
        }
    }

    getch();

}
int last()
{
    setbkcolor(0);
    cleardevice();
///    frame();
    settextstyle(0,0,04);
    setcolor(11);
    outtextxy(10,430,"Back");
    setcolor(10);
    rectangle(5,420,140,480); //back
    setcolor(13);
    rectangle(250,420,600,480); //main menu
    setcolor(14);
    outtextxy(270,435,"Main Menu");
    setcolor(9);
    settextstyle(0,0,4);
    outtextxy(350,50,"Play");
    setcolor(2);
    rectangle(340,45,500,90); //play
    outtextxy(250,120,"Instruction");
    setcolor(4);
    rectangle(240,110,650,155); //instruction
    outtextxy(350,180,"Exit");
    setcolor(8);
    rectangle(340,175,490,220); //exit
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);

       ///if(f>=340 && f<=500 && g>=45 && g<=90)
{
    int flag,point=0;
    flag=level_1(&point);
}
         /// play();
         if(f>=240 && f<=650 && g>=110 && g<=155){
            cleardevice();
            setcolor(11);
            outtextxy(10,430,"Back");
            setcolor(10);
            rectangle(5,420,140,480);
            setcolor(1);
            outtextxy(100,200,"go to the goal");
             if(f>=5 && f<=140 && g>=420 && g<=480)
        {
            cleardevice();
            welcome();
            break;
        }
            }
        else if(f>=340 && f<=490&& g>=175&& g<=220)
        {
            cleardevice();
            settextstyle(0,0,6);
///            frame();
            setcolor(GREEN);
            outtextxy(200,100,"Thanks");
            setcolor(BLUE);
            outtextxy(220,200, "for");
            setcolor(YELLOW);
            outtextxy(210,300, "Play");
            delay(5000);
            exit(0);
        }
        else if(f>=240 && f<=390 && g>=420 && g<=480)
            description();
        else if(f>=5 && f<=140 && g>=420 && g<=480)
        {
            cleardevice();
            welcome();
            break;
        }




    }
}
///                                                   main game
int countm(int *co_mo,int* inc)
{
    int i=0;
    *inc+=5;
  settextstyle(0,HORIZ_DIR,0);
  setcolor(8);
  arc(530,200,340-(*inc),80-(*inc),50);
  arc(530,200,340-(*inc),80-(*inc),51);
  setcolor(8);
  arc(530,200,100+(*inc),200+(*inc),55);
  arc(530,200,100+(*inc),200+(*inc),56);
  setcolor(7);
  arc(530,200,220-(*inc),320+(*inc),60);
  char arr[50];
  sprintf(arr,"%d",*co_mo);
    setcolor(3);
  outtextxy(520,215,arr);
  *co_mo=*co_mo+1;
  i++;
  return i;
}

void body() //figure
{
   setcolor(14);
  outtextxy(515,198,"MOVE");
  setcolor(12);
  outtextxy(600,300,"w -> Up");
  outtextxy(600,350,"s -> Down");
  outtextxy(600,400,"a -> Left");
  outtextxy(600,450,"d -> Right");
  setcolor(3);
  line(0,100,450,100);  //horizontal line
  line(50,130,400,130);
  line(100,160,450,160);
  line(150,190,300,190);
  line(100,220,250,220);
  line(50,250,200,250);
  line(0,400,500,400);
  line(450,370,500,370);
  line(0,100,0,400); //vertical line
  line(50,130,50,370);
  line(100,160,100,220);
  line(100,280,100,400);
  line(150,250,150,370);
  line(200,280,200,400);
  line(250,220,250,370);
  line(300,190,300,400);
  line(350,160,350,370);
  line(400,190,400,400);
  line(450,100,450,370);
  setcolor(14);
  circle(500,385,10);
  setcolor(WHITE);
}
void ball(int j,int k,int l)   //ball
{
 circle(j,k,l);
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,3);
 floodfill(j,k,WHITE);
}
void condition(int *j,int *k)
{  if(*k==110){
	   if(*j<450 && *j>0)
	   *k=*k+5;
	   }
   if(*j==10){
    if(*k<400 && *k>100)
	*j+=5;
   }
   if(*k==390){
     if(*j<500 &&* j>0)
     *k-=5;
     }
   if(*j==440){
     if(*k>100 && *k<380)
     *j-=5;
     }
   if(*k==380){
   if(*j<500&& *j>440)
   *k+=5;
   }
   if(*k>=120 && *k<=140 ){
   if(*j<410 && *j>40 && *k<=130)
   *k-=5;
   if(*j<410 && *j>40 && *k>=130)
   *k+=5;
   }
  if(*k>=150 && *k<=170 && *j>=90 &&* j<=450){
  if(*k<=160) *k-=10;
  *k+=5;
  }
  if(*k>=180&&*k<=200&&*j>=140&&*j<=310)
  { if(*k>=190 ) *k+=10;
    *k-=5;}
  if(*k>=210&&*k<=230&&*j>=90&&*j<=260)
  {if(*k>=220) *k+=10;
   *k-=5;
  }
  if(*k<=260 && *k>=240 && *j<=210&& *j>40){
  if(*k>=250) *k+=10;
  *k-=5;
  }
  if(*k<=370&&*k>=130&&*j<=60&&*j>=40){
  if(*j<=50) *j-=10;
  *j+=5;
  }
  if(*k<=220&&*k>=160&&*j<=110&&*j>=90){
  if(*j<=100) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=280&&*j<=110&&*j>=90){
  if(*j<=100) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=250&&*j<=160&&*j>=140){
  if(*j<=150) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=280&&*j<=210&&*j>=190){
  if(*j<=200) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=220&&*j<=260&&*j>=240){
  if(*j<=250) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=190&&*j<=310&&*j>=290){
  if(*j<=300) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=160&&*j<=360&&*j>=340){
  if(*j<=350) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=190&&*j<=410&&*j>=390){
  if(*j<=400) *j-=10;
  *j+=5;
  }
}
void caption()
{
  setcolor(12);
  settextstyle(0,HORIZ_DIR,0);
  outtextxy(300,40,"Escape from the Maze");
  outtextxy(290,70,"or Press 'SPACE' to EXIT");
  setcolor(WHITE);
}
int level_1(int *p)
{
 int i,j=20,k=250,l=10,m=10,co_mo=0,inc=0;
 float x;
 char c;
 cleardevice();
 while(1){
 setcolor(13);
 settextstyle(1,HORIZ_DIR,6);
 outtextxy(150,100,"MAZE Runner");
 settextstyle(0,HORIZ_DIR,0);
 setcolor(9);
 outtextxy(250,200,"Press 'space' to play the level");
  char ch=getch();
 if(ch==' ') break;
 getch();
  }
 cleardevice();
 body();          //draw the figure
 ball(j,k,l);     //draw the  ball
 caption();
 countm(&co_mo,&inc);
for(i=0;i<m++;i++){
 condition(&j,&k); //cheacking condition
 countm(&co_mo,&inc);
 c=getch();
 cleardevice();
 if(c==75||c=='a') j-=5;
 if(c==80||c=='s') k+=5;
 if(c==77||c=='d') j+=5;
 if(c==72||c=='w') k-=5;
 if(c==' '){last();}
  *p=co_mo;
 caption();
 body();        //draw the figure
 ball(j,k,l);//draw the ball
 if(j>=500)
 {
    cleardevice();
    sprintf(num_solve,"You successfully complete the mission with %d movement",i);
    outtextxy(100,200,num_solve);
    rectangle(5,420,140,480);
    setcolor(11);
            outtextxy(10,430,"Back");
    int f,g;
    while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
     if(f>=5 && f<=140 && g>=420 && g<=480)
        {
            cleardevice();
            last();
            break;
        }
    break;
     }

 }


return 9999;
}

int main()
{
    initwindow(800,500);

    loading();

    welcome();

    getch();
    closegraph();
    return 0;

}

