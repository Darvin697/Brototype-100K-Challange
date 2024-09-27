#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,i,flag=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for (i=2;i<n/2;i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Non Prime Number");
    }
    
    
    












    return EXIT_SUCCESS;
}