#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

 int main(){
     int xb = 5;
     int yb = 2;
     int xk = 1;
     int yk = 1;
     int rk = 3;
     int bod[2] = {xb,yb};
     int kruh[3] = {xk,xk,rk};
     int l = sqrt(pow(xk-xb,2)+pow(yk-yb,2));

     printf("Bod : [%d,%d]\n", bod[0], bod[1]);
     printf("Kruh : [%d,%d]\n", kruh[0], kruh[1]);
     printf("r kruhu : %d\n", kruh[2]);
     if(l>rk){
         printf("Bod neni v kruhu \n");
     }
     else{
         printf("Bod je v kruhu \n");
     }

    return 0;
 }

