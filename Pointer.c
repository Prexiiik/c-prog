#include <stdio.h>

int main() {
    int x[3] = {2,4,8};
    printf("%i \n", x[1]);
    int *p = x;
    p++;
    *p+=x[0];
    printf("%i \n", x[1]);
    return 0;
}