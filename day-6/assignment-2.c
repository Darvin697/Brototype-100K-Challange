#include <stdlib.h>
#include <stdio.h>

int main (void){
    int a[3][3],b[3][3];
    printf("Enter your values for first array  :");
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter values for the second array :");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    //sum
    int sum[3][3];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
        
    }

    //print
    printf("sum of the array :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
        
    }
    
    
    
    









    return EXIT_SUCCESS;
}
