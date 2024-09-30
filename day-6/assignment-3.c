#include <stdio.h>
#include <stdlib.h>

void getarray(int a[], int limit){
    int i;
    printf("Enter values for the array :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    
}

void display(int a[],int limit){
    int i;
    printf("Entered array :");
    for ( i = 0; i < limit ; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    

 


}
int main (void){
    int a[100];
    int limit;
    printf("Enter your array limit :");
    scanf("%d",&limit);

    getarray(a ,limit);
    display(a ,limit);

    return EXIT_SUCCESS;

}

