#include "switchs.h"
#include "stdio.h"

int SWITCH_A_open(int x) {

    printf("Switch A open\n");

    return 1;
}

void SWITCH_A_close(int x) {
    printf("Switch A close\n");
}

int SWITCH_B_open(int x) {
    printf("Switch B open \n");

    return 2;
}

void SWITCH_B_close(int x) {
    printf("Switch B close\n");
}
