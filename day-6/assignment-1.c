#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void){
    int len,i,flag=0;
    char string[10];
    printf("Enter your string :");
    scanf("%s",string);
    len=strlen(string);
    for ( i = 0; i < len; i++)
    {
        if (string[i] != string[len - i - 1])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("Entred string is a palindrome\n");
    }
    else
    {
        printf("Entred string is not a palindrome\n");
    }
    
    
    






    return EXIT_SUCCESS;
}