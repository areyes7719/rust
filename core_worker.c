#include <stdio.h>
#include <stdlib.h>

static int parse_gateway(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 62) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", parse_gateway(62, 62));
    return 0;
}
