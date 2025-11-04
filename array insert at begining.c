//Insert at beginning
#include<stdio.h>
#define cap 10
int main()
{
    int a[cap]={20,30,40};
    int n=3;
    int value = 10;
    
    if(n<cap){
        for(int i=n;i>0;i--){
            a[i]=a[i-1];
        }
        a[0]=value;
        n++;
    }
    else{
        printf("Array is full");
    }
    for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
}
