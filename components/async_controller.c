#include <stdio.h>
#include <stdlib.h>

static int compute_dispatcher(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 6) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", compute_dispatcher(6, 6));
    return 0;
}
