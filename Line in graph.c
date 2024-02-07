#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TC//BGI");
line(100,90,200,90);
getch();
closegraph();
}

