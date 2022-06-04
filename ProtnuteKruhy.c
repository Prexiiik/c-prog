#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

 int main(){
     int xb = 2;
     int yb = 30;
     int rb = 5;
     int xk = 2;
     int yk = 20;
     int rk = 5;
     int kruh1[3] = {xb,yb,rb};
     int kruh2[3] = {xk,yk,rk};
     int l = sqrt(pow(xk-xb,2)+pow(yk-yb,2));

     printf("Kruh 1 : [%d,%d]\n", kruh1[0], kruh1[1]);
     printf("r kruhu : %d\n", kruh1[2]);
     printf("Kruh 2 : [%d,%d]\n", kruh2[0], kruh2[1]);
     printf("r kruhu : %d\n", kruh2[2]);
     if(rb+rk>l){
         printf("Kruhy se protinaji\n");
     }
     else if(rb+rk==l){
         printf("Kruhy se dotykaji\n");
     }
     else{
         printf("Kruhy se neprotinaji\n");
     }

    return 0;
 }

