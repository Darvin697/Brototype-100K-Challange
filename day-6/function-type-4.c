#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void){
    int c;
    c=sum();
    printf("result :%d",c);
    return EXIT_SUCCESS;
}

int sum(){
    int a,b,sum;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}