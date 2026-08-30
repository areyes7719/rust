#include <stdio.h>
#include <stdlib.h>

static int run_context(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 51) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", run_context(51, 51));
    return 0;
}
