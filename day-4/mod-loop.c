#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit,i;
    printf("Enter your limit:");
    scanf("%d",&limit);
    for ( i = 2; i <= limit; i++)
    {
        if (i % 2==0)
        {
            printf("%d\n",i);
        }
        
    }
    











    return EXIT_SUCCESS;
}