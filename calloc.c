#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;

 
    ptr = (int*) calloc(5, sizeof(int));
    printf("Values after calloc:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);  //Initializes memory to zero
    }
    free(ptr);
    return 0;

  #include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }
    printf("Initial values in memory:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("\nAfter assigning values:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}

}
