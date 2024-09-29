#include <stdio.h>
#include <stdlib.h>
int main(void){
    int j,temp,limit,i,a[1000];
    printf("Enter  your Array limit :");
    scanf("%d",&limit);
    printf("Enter your values :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < limit-1; i++)
    {
        for (j=i+1 ; j < limit; j++)
        {
            if (a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            

        }
        
    }
    printf("Your values after sorting : ");
    for ( i = 0; i < limit; i++)
    {
        printf("%d\t",a[i]);
    }
    
    

















    return EXIT_SUCCESS;
}