#include<stdio.h>

int main(){

    int num ;

    printf("Enter a number --> ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("Number is Positive\n");
    }

    else
    {
        printf("Number is Negative\n ");
    }
    
    return 0 ;
}