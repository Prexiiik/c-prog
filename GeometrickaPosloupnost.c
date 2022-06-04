#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a1 = 3;
    int n = 5;
    int q = 3;
    int pole[n];
    pole[0] = a1;

for(int i = 0; i < n ; i++){
    pole[i+1] = pole[i] * q;
    printf("%d \n", pole[i]);
}
    return 0;
}