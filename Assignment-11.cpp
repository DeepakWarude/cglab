//Deepak k warude
#include <iostream>
#include <graphics.h>
#include <math.h>

using namespace std;

void drawShape(float a, float b, float c, float d, float e, float f, float g, float h, int color) 
{
    setcolor(color);
    line(a, b, c, d);
    line(c, d, e, f);
    line(e, f, g, h);
    line(g, h, a, b);
}

void scaling() 
{
    int gd = DETECT, gm;
    float a = 100, b = 100, c = 200, d = 100, e = 200, f = 200, g = 100, h = 200;
    float Sx = 2, Sy = 2;

    initgraph(&gd, &gm, NULL);
    drawShape(a, b, c, d, e, f, g, h, BLUE);
    delay(1000);

    a *= Sx; b *= Sy;
    c *= Sx; d *= Sy;
    e *= Sx; f *= Sy;
    g *= Sx; h *= Sy;

    drawShape(a, b, c, d, e, f, g, h, RED);
    delay(1000);

    getch();
    closegraph();
}

void translation() 
{
    int gd = DETECT, gm;
    float a = 100, b = 100, c = 200, d = 100, e = 200, f = 200, g = 100, h = 200;
    float Tx = 100, Ty = 100;

    initgraph(&gd, &gm, NULL);
    drawShape(a, b, c, d, e, f, g, h, BLUE);
    delay(1000);

    a += Tx; b += Ty;
    c += Tx; d += Ty;
    e += Tx; f += Ty;
    g += Tx; h += Ty;

    drawShape(a, b, c, d, e, f, g, h, RED);
    delay(1000);

    getch();
    closegraph();
}

void rotation() 
{
    float angle;
    cout << "Enter the angle for rotation (in degrees): ";
    cin >> angle;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x1 = 300, y1 = 150, x2 = 400, y2 = 300, x3 = 200, y3 = 300;

    drawShape(x1, y1, x2, y2, x3, y3, x1, y1, BLUE);
    delay(1000);

    float rad = angle * M_PI / 180.0;
    int cx = x2;  // Center of rotation
    int cy = y2;  // Use y2 as the center of rotation

    // Calculate new positions after rotation
    int newX1 = cx + (x1 - cx) * cos(rad) - (y1 - cy) * sin(rad);
    int newY1 = cy + (x1 - cx) * sin(rad) + (y1 - cy) * cos(rad);

    int newX2 = cx + (x2 - cx) * cos(rad) - (y2 - cy) * sin(rad);
    int newY2 = cy + (x2 - cx) * sin(rad) + (y2 - cy) * cos(rad);

    int newX3 = cx + (x3 - cx) * cos(rad) - (y3 - cy) * sin(rad);
    int newY3 = cy + (x3 - cx) * sin(rad) + (y3 - cy) * cos(rad);

    drawShape(newX1, newY1, newX2, newY2, newX3, newY3, newX1, newY1, RED);
    delay(1000);

    getch();
    closegraph();
}

int main() 
{
    int ch;

    do {
        cout << "*** 2D Transformations! ***";
        cout << "\n1. Scaling of a Rectangle";
        cout << "\n2. Translation of a Rectangle";
        cout << "\n3. Rotation of a Triangle";
        cout << "\n4. Exit";
        cout << "\n\nEnter Your Choice: ";
        cin >> ch;

        switch (ch) {
            case 1: scaling(); break;
            case 2: translation(); break;
            case 3: rotation(); break;
            case 4: cout << "\nExiting The Program!"; break;
            default: cout << "\nInvalid Choice!";
        }

        cout << "\nProgram Executed Successfully!";
        cout << "\n\n";

    } while (ch != 4);

    return 0;
}











