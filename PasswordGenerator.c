#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    char z;
    for (int i = 0; i <= 30; i++)
    {
        z = rand() % 26 + 65;
         printf("%c", z);
    }
}