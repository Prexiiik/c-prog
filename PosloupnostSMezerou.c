#include <stdio.h>

int main() {
    for(int i=1; i<30; i++){
        if(i>8 && i<21){
            i++;
        }
        printf("%02d \n", i);
        
    }
    return 0;
}