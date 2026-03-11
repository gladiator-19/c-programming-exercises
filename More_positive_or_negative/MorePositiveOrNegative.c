#include <stdio.h>
int main(void) {
    int dod = 0, uj = 0;
    int tab[4];
    printf("Give 4 numbers:\n");
    for(int i = 4; i > 0; i-- ) {
        scanf("%d", &tab[i]);
        if (tab[i] >= 0) {
            dod += 1;
        }
        else {
        uj += 1;
        }
    }
    if (dod > uj) {
        printf("There are more positive numbers.");
    } else if ( dod < uj ) {
        printf("There are more negative numbers.");
    } else {
        printf("There are an equal number of positive and negative numbers.");
    }
    return 0;
}