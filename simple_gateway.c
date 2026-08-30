#include <stdio.h>
#include <stdlib.h>

static int encode_parser(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 29) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", encode_parser(29, 29));
    return 0;
}
