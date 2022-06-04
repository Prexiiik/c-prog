#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int winD;
    int firstCh;
    int gameCount = 1000000;
    int winCount = 0;
    int winCountPercent;

    for(int i = 1; i < gameCount; i++){
        winD = rand()%3+1;
        firstCh = rand()%3+1;
        if(winD==firstCh){
        winCount++;
        }
        winCountPercent = winCount/(gameCount/100);
    }
    printf("WR : %i%%", winCountPercent);

    return 0;
}