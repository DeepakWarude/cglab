//Deepak k warude

#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

class KochCurve 
{
public:
    void drawKoch(int iterations, int x1, int y1, int x5, int y5) 
    {
        if (iterations == 0) 
        {
            line(x1, y1, x5, y5);
        } else 
        {
            delay(1);
            int dx = (x5 - x1) / 3;
            int dy = (y5 - y1) / 3;
            int x2 = x1 + dx;
            int y2 = y1 + dy;
            int x3 = (int)(0.5 * (x1 + x5) + sqrt(3) * (y1 - y5) / 6);
            int y3 = (int)(0.5 * (y1 + y5) + sqrt(3) * (x5 - x1) / 6);
            int x4 = x2 + dx;
            int y4 = y2 + dy;

            drawKoch(iterations - 1, x1, y1, x2, y2);
            drawKoch(iterations - 1, x2, y2, x3, y3);
            drawKoch(iterations - 1, x3, y3, x4, y4);
            drawKoch(iterations - 1, x4, y4, x5, y5);
        }
    }
};

int main() 
{
    KochCurve k;
    int iterations;

    cout << "Enter Number Of Iterations: ";
    cin >> iterations;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    setcolor(MAGENTA);
    k.drawKoch(iterations, 150, 20, 20, 280);
    k.drawKoch(iterations, 280, 280, 150, 20);
    k.drawKoch(iterations, 20, 280, 280, 280);

    getch();
    closegraph();
    return 0;
}






