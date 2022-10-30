#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int openDoor(int winD, int firstCh){
    for(int i = 1; i < 3; i++){
        if(winD == i && winD == i){
            break;
            return i = rand()%2+1;
        }
    }
}


int main() {
    srand(time(NULL));
    int winD;
    int firstCh;
    int openedDoor;
    int gameCount = 1000;
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

        for(int i = 1; i < gameCount; i++){
        winD = rand()%3+1;
        firstCh = rand()%3+1;
        openedDoor = openDoor(winD, firstCh);
        if(winD==firstCh){
        winCount++;
        }
        winCountPercent = winCount/(gameCount/100);
    }

    return 0;
}