#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int x, int y, int z){
    if (x<y){
        return y;
    }
    else{
        return x;
    }
}

int main() {
    printf("max: %d", max(900,50,30));
    return 0;
}