#include<graphics.h>
#include <conio.h>
int main()
{
    int Gdriver = DETECT, Gmode;
    initgraph(&Gdriver, &Gmode, (char*)"");// or initwindow(1000, 1000);
    //circle(300,400,50);
    putpixel(10,50,2);
    getch();
    return 0;
}
