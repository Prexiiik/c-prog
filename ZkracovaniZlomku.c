#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int min(int x, int y){
    return x <= y ? x : y;
}

int maxdelitel(int x, int y){
    for (int del = min(x,y); del > 1; del--){
        if (x % del == 0 && y % del == 0){
            return del;
        }
    }
    return 1;
}

void soucin_a_tisk(int cit1, int jme1, int cit2, int jme2){
    int cit = cit1 * cit2;
    int jme = jme1 * jme2;
    int del = maxdelitel(cit,jme);
    cit /= del;
    jme /= del; 
    printf("%d/%d \n", cit, jme);
}

void soucet_a_tisk(int cit1, int jme1, int cit2, int jme2){
    int jme = jme1 * jme2;
    int cit = cit1 * jme2 + cit2 * jme1;
    int del = maxdelitel(cit,jme);
    cit /= del;
    jme /= del;
    printf("%d/%d \n", cit, jme);
}

void optzl(int cit, int jme){
    int del = min(cit, jme);
    int a;
    int b;
    for(int i = del; i > 2; i--){
        a = cit % i;
        b = jme % i;
        if(a==0 && b==0){
            jme = jme/i;
            cit = cit/i;
            break;
        }
    
    }
    printf("%d/%d \n", cit, jme);
}

int main() {
    soucin_a_tisk(2,4,3,2);
    soucet_a_tisk(2,4,3,2);
    optzl(5,15);
    optzl(20,100);
    optzl(25,100);
    return 0;
}