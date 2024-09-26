#include <stdio.h>
#include <stdlib.h>
int main(void){
    float input;
    printf("Enter  your mark (0-100)");
    scanf("%f",&input);
    if (50<input && input<100)
    {
        printf("You passed the exam");
    }
    else if (50>input && input>0)
    {
        printf("you have failed the exam");
    }
    else
    {
        printf("Fooool!!!!");
    }
    
    

    






    return EXIT_SUCCESS;
}