#include <stdio.h>
#include <stdlib.h>

int main(void){
    int day;
    printf("Enter the day(1-7):");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wesnesday");
        break;            
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;        
    default:
        printf("Invalid input");
        break;
    }










    return EXIT_SUCCESS;
}