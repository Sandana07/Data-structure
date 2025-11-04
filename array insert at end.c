/Insert at end

#include<stdio.h>
#define cap 100
int main()
{
    int a[cap]={10,20,30};
    int n=3;
    int value=7;
    
    if(n<cap){
        a[n]=value;
        n++;
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
    }
    }
    else{
        printf("array is full");
    }
    
}
