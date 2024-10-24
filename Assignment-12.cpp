//Deepak k warude
#include <graphics.h>
#include <cmath>
#include <iostream>

using namespace std;

int main() 
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    float x = 1, y = 0.0, amplitude = 0.5, frequency = 0.1;
    float radius = 15;
    setcolor(BLUE);
    line(0, 215, 650, 215);
    delay(1000);
    
    for (int k = 0; k <= 7; k++) 
    {
        for (float angle = 90; angle < 270; angle += 10) 
        {
            y = cos((angle * M_PI) / 180) / amplitude;

            if (y > 0) y = -y;
            x += 5;

            setcolor(RED);
            circle(x, y * 100 + 200, radius);
            floodfill(x, y * 100 + 200, RED); // Fill the circle directly

            delay(100);

            // Erase the filled circle
            setcolor(BLACK);
            circle(x, y * 100 + 200, radius);
            floodfill(x, y * 100 + 200, BLACK); // Fill the area with background color
        }
        amplitude += frequency;
        frequency += 0.1;
    }

    getch();
    closegraph(); // Close the graphics mode
    return 0;
}


 
 
 
 
 
 
 
