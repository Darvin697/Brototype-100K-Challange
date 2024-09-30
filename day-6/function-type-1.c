#include <stdio.h>
#include <stdlib.h>
void sum(); 
int main(void){
    sum();
    sum(); // we can call the function like this 

    return EXIT_SUCCESS;
}

void sum(){
    int num1,num2,result;
    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    printf("Result :%d",result);
}