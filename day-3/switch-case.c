#include <stdio.h>
#include <stdlib.h>

int main(void){
    int choice;
    printf("Enter \n1 for porotta \n2 for biriyani \n3 for appam \n4 for manthi ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You have selected porotta");
        break;
    case 2:
        printf("You have selected biriyani");
        break;
    case 3:
        printf("You have selected  appam");
        break;
    case 4:
        printf("You have selected manthi");
        break;
    default:
        printf("Foooool!!!!!!");
        break;
    }











    return EXIT_SUCCESS;
}