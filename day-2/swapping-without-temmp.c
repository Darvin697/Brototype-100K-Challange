#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a=5,b=10;
    printf("values before swapping a:%d b:%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("  a:%d  b:%d",a,b);





    return EXIT_SUCCESS;
}