#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[100];
    int limit,i;
    printf("Enter your array limit :");
    scanf("%d",&limit);
    printf("Enter your values : ");
    for ( i = 0; i < limit ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered values are : ");
    for ( i = 0; i < limit ; i++)
    {
        printf("%d\t",a[i]);
    }
       











    return EXIT_SUCCESS;
}