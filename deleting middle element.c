//Delete last element of array
#include<stdio.h>
#define cap 10
int main()
{   
    printf("USN : 1SV24CS125\nNAME : Sandana\n");
    int a[cap]={1,3,5,7,9};
    int n=5;
    int pos=2;
    for(int i = pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    if(pos<1||pos>n){
        printf("Invalid position");
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
