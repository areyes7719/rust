#include <stdio.h>
#include <stdlib.h>

static int render_monitor(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 52) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", render_monitor(52, 52));
    return 0;
}
