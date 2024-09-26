#include <stdio.h>
#include <stdlib.h>

int main(void){
    float per;
    printf("Enter your mark percentage");
    scanf("%f",&per);
    if (per >= 90 && per <= 100)
    {
        printf("You Get grade A");
    }
    else if (per >= 80 && per <= 89)
    {
        printf("You get grade B");
    }
    else if (per >= 70 && per <= 79)
    {
        printf("You get grade C");
    }
    else if (per >= 60 &&  per <= 69)
    {
        printf("You got grade D");
    }
    else if (per >= 50 && per <= 59)
    {
        printf("You got grade E");
    }
    else
    {
        printf("You faild the exam");
    }
    
    
    
    
    
    







    return EXIT_SUCCESS;
}