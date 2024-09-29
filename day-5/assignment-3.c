#include <stdio.h>
#include <stdlib.h>
int main(void){
    int limit;
    printf("Enter the limit for the Array :");
    scanf("%d",&limit);
    printf("Enter the values for Array :");
    int i,a[100];
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    int j,temp;
    for  (  i = 0; i < limit-1; i++)
    {
        for ( j = i+1; j < limit; j++)
        {
            if (a[i] < a[j])
            {
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    printf("Array after sorting :  ");
    for ( i = 0; i < limit; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
    

















    return EXIT_SUCCESS;
}