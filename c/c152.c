/* Write a program to draw a circle */
#include<graphics.h>
main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    circle(300,200,40);
    getch();
    closegraph();
}