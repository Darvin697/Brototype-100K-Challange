#include <stdio.h>
#include <stdlib.h>
int main(void){
    int limit,i,a[100];
    printf("Enter limit for Array :");
    scanf("%d",&limit);
    printf("Enter values for the Array :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    //count elements
    int count=0;
    for ( i = 0; i < limit; i++)
    {
        if (a[i] % 2 == 0)
        {
            count+1;
        }
        
        
    }
    printf("Number of Even numbers in Array :%d\n",count);

    
    















    return EXIT_SUCCESS;
}