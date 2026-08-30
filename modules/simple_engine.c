#include <stdio.h>
#include <stdlib.h>

static int resolve_client(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 6) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", resolve_client(6, 6));
    return 0;
}
