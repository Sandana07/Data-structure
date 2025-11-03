#include <stdio.h>
#include <time.h>

int main() {
    int n;
    printf("Enter input size: ");
    scanf("%d", &n);

    clock_t start, end;
    double time_taken;

    start = clock();  
    long  sum = 0;
    for(int i = 0; i < n; i++)
        sum += i;
    end = clock();  

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("O(n) loop time for n=%d: %f seconds\n", n, time_taken);
    start = clock();
    long  count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            count++;}
    end = clock();

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("O(n^2) nested loop time for n=%d: %f seconds\n", n, time_taken);

    return 0;
}
output:
Enter input size: 20000
O(n) loop time for n=20000: 0.000045 seconds
O(n^2) nested loop time for n=20000: 0.903005 seconds
