#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
 int gd=DECTEXT, gm;
 initgraph(&gd,&gm, "C:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin");
 
 bar(100,100,200,400);
 circle(400,250,50);
 getch();
 closegraph();
 return 0;
 