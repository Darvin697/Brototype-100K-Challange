#include <stdio.h>
#include <stdlib.h>
int main (void){
    int a[100],limit,i;
    printf("Enter your array limit :");
    scanf("%d",&limit);
    printf("Enter your values :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for ( i = 0; i < limit; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of the Array :%d",sum);
    




 







    return EXIT_SUCCESS;
}