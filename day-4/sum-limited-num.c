#include <stdio.h>
#include <stdlib.h>

int main(void){
    int input,i,sum=0;
    printf("Enter a number");
    scanf("%d",&input);
    for (i=1;i<input;i++)
    {
        sum=sum+i;
    }
    printf("Sum of n numbers:%d",sum);
    













    return  EXIT_SUCCESS;
}