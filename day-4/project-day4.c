#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num,i,sum;
    printf("Enter your Value");
    scanf("%d",&num);
    for ( i = 1; i <= 10; i++)
    {
        sum=num*i;
        printf("%d x %d = %d \n",i,num,sum);
    }
    
















    return EXIT_SUCCESS;
}