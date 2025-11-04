include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C;
    int *matrix = NULL, *transpose = NULL;
    int i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &R, &C);

  
    matrix = (int *)malloc(R * C * sizeof(int));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", R * C);
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", (matrix + i * C + j));  // pointer arithmetic
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            printf("%4d", *(matrix + i * C + j));
        }
        printf("\…
