#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main() {
    srand(time(NULL));
    char n[] = {'2','3','4','5','6','7','8','9','X','J','Q','K','A'};
    char c[] = {'C','D','H','S'};
    char card[2];
    card[0] = n[rand() % 13];
    card[1] = c[rand() % 4];
    printf("%c%c", card[0], card[1]);
    return 0;
}