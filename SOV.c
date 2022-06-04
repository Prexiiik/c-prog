#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float squareS(float a){
    a=a*a;
    return a;
}
float squareO(float a){
    a=a*4;
    return a;
}
float cubeV(float a){
    a=a*a*a;
    return a;
}
float rectangleS(float a, float b){
    a=a*b;
    return a; 
}
float rectangleO(float a, float b){
    a=2*a+2*b;
    return a;
}
float cuboidV(float a, float b, float c){
    a=2*(a*b+a*c+b*c);
    return a;
}
float triangleS(float a){
    float s=(a*a)/4;
    return s;
}

int main() {
    printf("Obsah čtverce : %.3f \n" , squareS(5.5));
    printf("Obvod čtverce : %.3f \n" , squareO(5));
    printf("Objem krychle : %.3f \n" , cubeV(5));
    printf("Obsah obdelníku : %.3f \n" , rectangleS(5,4));
    printf("Obvod obdelníku : %.3f \n" , rectangleO(5,4));
    printf("Objem kvádru : %.3f \n" , cuboidV(5,4,3));
    printf("Obsah trojuhelníku : %.3f \n", triangleS(5.0));
    return 0;
}