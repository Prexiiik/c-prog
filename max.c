#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int max(int x, int y,int z){
    if (y>x && y>z){
        return y;
    }
    else if(x>y && x>z){
        return x;
    }
    else{
        return z;
    }
}

int main() {
    printf("max: %.d", max(1,2,3));
    return 0;
}