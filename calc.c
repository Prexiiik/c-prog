#include <stdio.h>
#include <stdlib.h>

void main()
{
int a, b, znak;
printf ("Calculator \n 1. Write number 1 \n 2. Then write comma and number for instuction \n 1 - addition \n 2 - subtraction \n 3 - multiplication \n 4 - division \n 3.Again write comma and write number 2 \n For exapmle - 5,1,5 Result : 5+5=10 \n Write your math problem :");
scanf ("%d, %d, %d",&a,&znak,&b);
if(znak==1){
    printf ("Result : %i", a+b);
}
else if(znak==2){
    printf ("Result : %i", a-b);
}
else if(znak==3){
    printf ("Result : %i", a*b);
}
else if(znak==4){
    printf ("Result : %i", a/b);
}
else if(znak>4){
    printf ("Wrong math sign");
}

}