#include <stdio.h>
#include <stdlib.h>

static int handle_parser(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 21) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", handle_parser(21, 21));
    return 0;
}
