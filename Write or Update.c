#include<stdio.h>
int main()
{
    int a[]={1,2,45,67,8};
    int n=sizeof(a)/sizeof(a[0]);
    
    int index=3;
    int newval=7;
    
    if(index>=0 && index<n){
        a[index]=newval;
        for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    }
    else
    {
        printf("Happy Dewali");
    }
}
