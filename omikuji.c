#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int omikuji = rand() % 6 + 1;
    if (omikuji == 1) {
        printf("大吉\n");
    } else if (omikuji == 2) {
        printf("中吉\n");
    } else if (omikuji == 3) {
        printf("小吉\n");
    } else if (omikuji == 4) {
        printf("吉\n");
    } else if (omikuji == 5) {
        printf("凶\n");
    } else {
        printf("大凶\n");
    }
}
