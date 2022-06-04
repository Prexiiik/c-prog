#include <stdio.h>

int main() 
{
int i, j;
for(j=11; j<=20; j++)
{
    for(i=1; i<=10; i++){
        printf("%3d ", i*j);
    }
    printf("\n");
}
    return 0;
}