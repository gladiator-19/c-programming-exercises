#include <stdio.h>

int main(void) {
    int d = 0;
    for (int i = 32; i <= 255; i++) {
        printf("%c ", i);
        d++;
        if (d == 16) {
            d = 0;
            printf("\n");
        }
    }
    return 0;
}
