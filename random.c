#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int c , n;

int main(){
    srand(time(NULL));
    printf("Max number generated : ");
    scanf("%d" , &n);
    c = rand()%n+1;
    printf("Random : %d", c);
    return 0;
    }