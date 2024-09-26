#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num<0)
    {
      printf("You Entered number is -ve");
    }
    else
    {
        printf("Entered number is +ve");
    }
    
    
}