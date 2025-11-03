#include<stdio.h>
int main()
{
    int *p;
    int a=10;
    
    printf("Value of a: %d\n", a);     
    printf("Address of a: %p\n", &a);       
   
}



#include<stdio.h>
int main()
{
    int a=10,b=20,*p1,*p2,sum=0,temp;
    p1=&a;
    p2=&b;
    
    sum=*p1+*p2;
    printf("SUM = %d\n",sum);
    
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("After swapping a=%d b=%d",a,b);
    return 0;
}



#include <stdio.h>
#include <stdlib.h>  
int main() {
    int n, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));  
   
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    printf("Sum = %d\n", sum);

    free(ptr);  
    return 0;
}


#include <stdio.h>

int main() {
    int a, b, c;
    int *p1, *p2, *p3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    p1 = &a;
    p2 = &b;
    p3 = &c;

    if (*p1 >= *p2 && *p1 >= *p3)
        printf("Largest = %d\n", *p1);
    else if (*p2 >= *p1 && *p2 >= *p3)
        printf("Largest = %d\n", *p2);
    else
        printf("Largest = %d\n", *p3);

    return 0;
}

