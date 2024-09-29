#include <stdio.h>
#include <stdlib.h>
int main(void){
    int limit;
    printf("Enter the limit for the Array's :");
    scanf("%d",&limit);
    printf("Enter the values for Array 1 :");
    int i,a[100];
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the  values for Array 2 :");
    int b[100];
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&b[i]);
    }
    //swapping
    int t[100];
    for ( i = 0; i < limit ; i++)
    {
        t[i]=a[i];
        a[i]=b[i];
        b[i]=t[i];
    }
    

    printf("Array 1 after swapping :\n");
    for ( i = 0; i < limit; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nArray 2 after swapping :\n");
    for ( i = 0; i < limit; i++)
    {
        printf("%d\t",b[i]);
    }
    

    
    















    return EXIT_SUCCESS;
}