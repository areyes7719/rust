#include <stdio.h>
#include <stdlib.h>

static int load_resolver(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 32) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", load_resolver(32, 32));
    return 0;
}
