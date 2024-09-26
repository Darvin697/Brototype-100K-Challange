#include <stdio.h>
#include <stdlib.h>

int main(void){
    int p;
    float i,n,si;
    printf("enter three values principle amound: \n interst rate: \n number of years : ");
    scanf("%d%f%f",&p,&i,&n);
    si=((p*i*n)/100);
    printf("Simple interst :%f",si);



    return  EXIT_SUCCESS;

}