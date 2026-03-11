#include <stdio.h>

int main(void) {
    int N, i = 1;
    
    printf("Enter a number:\n");
    scanf("%d", &N);
    
    while (i <= N) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    }
    
    return 0;
}