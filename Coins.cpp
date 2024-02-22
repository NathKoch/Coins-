#include <graphics.h>

void Coin(int x, int y)
{
    setlinestyle(SOLID_LINE, 0, 3);
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x+40, y+40, 40, 40);

    setfillstyle(SOLID_FILL, BROWN);
    bar(x+36, y+16, x+44, y+64);
}
int main()
{
    initwindow(800, 600);
    for(int y=400; y>=100; y-=100)
    {
        for(int x=100; x<=600; x+=100)
        {
          Coin(x, y);
          delay(300);
        }
    }
    getch();
    closegraph();

}
