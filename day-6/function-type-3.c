#include <stdio.h>
#include <stdlib.h>

int sum(int,int);
int main(void){
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);

    c=sum(a,b);
    printf("result :%d",c );





    return EXIT_SUCCESS;
}
int sum(int num1,int num2){
    int result;
    result=num1+num2;
    return result;




}