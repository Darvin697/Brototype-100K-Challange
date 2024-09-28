#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a[5],i;
    printf("Enter your values :");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered values are ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    
    













    return EXIT_SUCCESS;
}