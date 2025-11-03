//malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i;
    ptr=(int*)malloc(3*sizeof(int));
    
    for(i=0;i<3;i++){
        ptr[i]=i+1;
        printf("%d ",ptr[i]);
    }
     * free(ptr);
     * return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i,sum=0;
    printf("emter number of elements: ");
    scanf("%d",&n);
    
    ptr=(int*)malloc(n*sizeof(int));
    
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
        }
        
    for(i=0;i<n;i++){
        sum=sum+ptr[i];
    }
    printf("SUM = %d",sum);
    free(ptr);
    return 0;
}
