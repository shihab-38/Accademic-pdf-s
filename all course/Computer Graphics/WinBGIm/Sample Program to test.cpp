#include<graphics.h>
#include <conio.h>
int main()
{
    int Gdriver = DETECT, Gmode;
    initgraph(&Gdriver, &Gmode, (char*)"");// or initwindow(1000, 1000);
    circle(300,300,50);

    getch();
    return 0;
}
