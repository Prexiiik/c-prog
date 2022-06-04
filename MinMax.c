#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 10;
int p[3];

int main() {
    srand(time(NULL));
    for (int i = 0; i < MAX; i++){
        p[i] = rand() % 100;
        printf("%02d ", p[i]);
    }

int min, max;
min = max = p[0];
for (int i = 1; i < MAX; i++){
    if(p[i] < min){
        min = p[i];
    }
}
for (int i = 1; i < MAX; i++){
    if(p[i] > max){
        max = p[i];
    }
}
printf("\n min = %02d ", min);
printf("max = %02d \n", max);
    return 0;
}