#include <stdio.h>
#include <stdlib.h>

static int sync_router(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 3) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", sync_router(3, 3));
    return 0;
}
