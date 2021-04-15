#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,"..\\bgi");
setcolor(10);
rectangle(0,0,635,475); //Boundry
setcolor(15);
//line(317.5,0,317.5,475);// Axis line
//line(0,237.5,635,237.5);// Axis Line
setcolor(10);
line(0,190,635,190);
line(0,285,635,285);
setcolor(15);
//line(192.5,0,192.5,475);// Axis Line
//line(442.5,0,442.5,475);//Axis Line
setcolor(10);
//Outside arcs
arc(317.5,190,0,180,125);
arc(317.5,285,180,0,125);
arc(317.5,190,0,180,62.5);
arc(317.5,285,180,0,62.5);

line(300,180,317.5,160);
line(317.5,160,335,180);
line(300,180,310,180);
line(335,180,325,180);
arc(317.5,180,0,180,7.5);

line(300,295,317.5,315);
line(317.5,315,335,295);
line(300,295,310,295);
line(335,295,325,295);
arc(317.5,295,180,0,7.5);
getch();
closegraph();
}