//Deepak k warude
#include <graphics.h>
#include <math.h>
#include <iostream>
using namespace std;

void DDALine(int x1, int y1, int x2, int y2, int Color);
void BresenhamCircle(int xCenter, int yCenter, int radius, int Color);

int main()
{
    int x1, y1, x2, y2, r, r1;
    int gd, gm; gd = DETECT;
    initgraph(&gd, &gm, NULL);
             
    DDALine(100, 113, 50, 200, WHITE);
    DDALine(50, 200, 150, 200, WHITE);
    DDALine(150, 200, 100, 113, WHITE);

    r = 50 / sqrt(3);
    x1 = (100 + 50 + 150) / 3;
    y1 = (113 + 200 + 200) / 3;

    BresenhamCircle(x1, y1, r, WHITE);

    r1 = 100 / sqrt(3);
    BresenhamCircle(x1, y1, r1, WHITE);

    delay(10000);
    closegraph();
    return 0;
}

void DDALine(int x1, int y1, int x2, int y2, int Color)
{
    float dX, dY, Steps;
    float xInc, yInc, i, x, y;

    dX = x2 - x1;
    dY = y2 - y1;

    if (abs(dX) > abs(dY))
    {
        Steps = abs(dX);
    }
    else
    {
        Steps = abs(dY);
    }

    xInc = dX / Steps;
    yInc = dY / Steps;

    x = x1;
    y = y1;

    for (i = 1; i <= Steps; i++)
    {
        putpixel(round(x), round(y), Color);
        x = x + xInc;
        y = y + yInc;
    }
    
    delay(500);
}

void BresenhamCircle(int xCenter, int yCenter, int radius, int Color)
{
    int x = radius;
    int y = 0;
    int p = 3 - 2 * radius;

    while (x >= y)
    {
        putpixel(xCenter + x, yCenter + y, Color);
        putpixel(xCenter - x, yCenter + y, Color);
        putpixel(xCenter + x, yCenter - y, Color);
        putpixel(xCenter - x, yCenter - y, Color);
        putpixel(xCenter + y, yCenter + x, Color);
        putpixel(xCenter - y, yCenter + x, Color);
        putpixel(xCenter + y, yCenter - x, Color);
        putpixel(xCenter - y, yCenter - x, Color);

        y++;
        
        if (p > 0)
        {
            x--;
            p = p + 4 * (y - x) + 10;
        }
        else
        {
            p = p + 4 * y + 6;
        }
    }
    
    delay(500);
}





