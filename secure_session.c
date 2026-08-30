#include <stdio.h>
#include <stdlib.h>

static int compute_processor(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 10) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", compute_processor(10, 10));
    return 0;
}
