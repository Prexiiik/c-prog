#include <stdio.h>

int factorial(int n){
    if(n<2){
        return 1;
    }
    else{
        return factorial(n-1) * n;
    }

}

int main() {
    int n = 3;
    printf(
    "factorial(%d) = %d",
    n,
    factorial(n)
    );
    return 0;
}