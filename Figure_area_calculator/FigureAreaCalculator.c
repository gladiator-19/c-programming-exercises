#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    int shape;
    double a, b, c, s, area;
    bool is_ShapeSelectionError = false;
    
    printf("Welcome to the geometric shape area calculator!\n");
    printf("\n<-Choose the shape whose area you want to calculate->\n| 1 - square  | 2 - rectangle  | 3 - triangle  |");
    printf("\n-----------------------------------------------\n\n");

    printf("Shape: ");
    scanf("%d", &shape);
    
    switch (shape) {
        case 1:
            printf("Enter the side of the square: ");
            scanf("%lf", &a);
            area = a * a;
            break;
        case 2:
            printf("Enter the sides of the rectangle: ");
            scanf("%lf", &a);
            scanf("%lf", &b);
            area = a * b;
            break;
        case 3:
            printf("Enter the sides of the triangle: ");
            scanf("%lf", &a);
            scanf("%lf", &b);
            scanf("%lf", &c);
            s = (a + b + c) / 2;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
            break;
        default:
            printf("Invalid shape selection.\n");
            is_ShapeSelectionError = true;
    }
    if(!is_ShapeSelectionError){
        printf("The area of the shape is: %.2lf\n", area);
    }

    return 0;
}