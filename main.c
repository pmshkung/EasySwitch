#include "stdio.h"
#include "switchs.h"

int main(char argc, char *argv[]) {
    printf("Hello World\n");

    SWITCH_OPEN(0);
    SWITCH_CLOSE(0);

    return 0;
}
