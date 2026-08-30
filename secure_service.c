#include <stdio.h>
#include <stdlib.h>

static int encode_cache(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 90) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", encode_cache(90, 90));
    return 0;
}
