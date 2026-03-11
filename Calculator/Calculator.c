#include <stdio.h>

int main(void) {
    int a, b, c;
    

    printf("<--Calculator-->\n+ | Enter: 1\n- | Enter: 2\n* | Enter: 3\n/ | Enter: 4\n------------\n\nChoose operation: ");
    scanf("%d", &c);
    if (c < 1 || c > 4){
        printf("Invalid input!\n");
        return -1;
    }
    printf("Enter 2 numbers to perform the operation:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    switch (c) {
        case 1:
            printf("Result: %d", a+b);
        break;
        case 2:
            printf("Result: %d", a-b);
        break;
        case 3:
            printf("Result: %d", a*b);
        break;
        case 4:
            printf("Result: %d", a/b);
        break;
    }
    return 0;
}