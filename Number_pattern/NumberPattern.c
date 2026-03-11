#include <stdio.h>

int main(void) {
    int n, a = 1;
    int d = 1;
    
    printf("Enter a number:\n");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        d = 1;
        while (d <= i) {
            printf("%d ", a);
            d++;
            a++;
        }
        printf("\n");
    }
    
    return 0;
}