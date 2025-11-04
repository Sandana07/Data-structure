//Fixed capacity by using macro function called cap

#include<stdio.h>
#define cap 5
int main()
{ int a[cap],n=50;
    void printarray(int a[cap],int n)
    {
        printf("[");
        for(int i=0;i<n&&i<cap;i++){
            a[i]=i;
            printf("%d ",a[i]);
        }
        printf("]");
    }
    printarray(a,5);
}
