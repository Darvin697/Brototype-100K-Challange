#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a[1001],i,limit;
    printf("Enter your Array limit :");
    scanf("%d",&limit);
    printf("Enter your Values :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);

    }
    int searchkey,flag=0;
    printf("Enter the value you wanted to search :");
    scanf("%d",&searchkey);
    for ( i = 0; i < limit; i++)
    {
        if (searchkey ==  a[i])
        {
            printf("Item has been found at :%d\n",i+1);
            flag=1;
            break;

        }
        
        
    }
    if (flag==0)
    {
        printf("Value not found\n");
    }
    
    
    














    return EXIT_SUCCESS;
}