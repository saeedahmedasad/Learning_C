#include <stdio.h>
#include <cs50.h>
int main(void){
    int n =get_int("Enter Negative Integer: ");


    if(n >= 0){
        printf("You are Entering a positive Number");
    }
    else{
        printf("You are Entering a Negative Number");
    }
}