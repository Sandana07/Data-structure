
#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(a)/sizeof(a[0]);
    
    int index=4;
    if(index>=0 && index<n){
        printf("value = %d",a[index]);
    }
    else
    {
        printf("Inalid index");
    }
}
