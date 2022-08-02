#include <stdio.h>
#include <cs50.h>

int main(void){

    int n = get_int("Enter Number: ");

    if(n % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}