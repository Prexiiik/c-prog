#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

const int WIDTH = 10;
const int HEIGHT = 5;

int main()
{
    int x,y;
    int pocetMin = 5;
    if(pocetMin>WIDTH*HEIGHT)
    {
        pocetMin = 1;
    }
    int pole[WIDTH][HEIGHT];
    //nulovani
    for(y = 0; y < HEIGHT; y++)
    {
        for (x = 0; x < WIDTH; x++){
            pole[x][y] = 0;
        }
    }
    srand(time(NULL));
int mx, my;
for (int i = 0; i < pocetMin; i++)
{
    do{
        mx = rand() % WIDTH;
        my = rand() % HEIGHT;
    } while (pole[mx][my] == 9);
    pole[mx][my] = 9;
}
    //zobrazeni
    for(y = 0; y < HEIGHT; y++)
    {
        for (x = 0; x < WIDTH; x++)
        {
            if (pole[x][y] == 9)
            {
              printf("#");  
            }
            else{
                printf("%d", pole[x][y]);
            }
        }
        printf("\n");
    }
    
    return 0;
}