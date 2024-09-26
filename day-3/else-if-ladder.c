#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1,num2,choice;
    float result;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    printf("Enter \n 1 for addition :\n 2 for substraction :\n 3 for multiplication :\n 4 for division : ");
    scanf("%d",&choice);
    if (choice==1)
    {
        result=num1+num2;
        printf("Result :%f",result);
    }
    else if (choice==2)
    {
        result=num1-num2;
        printf("Result :%f",result);
    }
    else if (choice==3)
    {
        result=num1*num2;
        printf("Result :%f",result);
    }
    else if (choice==4)
    {
        result=num1/num2;
        printf("Result :%f",result);
    }
    else
    {
        printf("Foool!!!!!!!!!");
    }

    
    
    
    
    
    











    return EXIT_SUCCESS;
}