#include <stdio.h>
#include <cs50.h>

int main (void){
    int numbers[] = {2,3,4,5,6,7,8};

    for(int i = 0; i < 7; i++){
        if(numbers[i] == 2){
            printf("Found Your Number \n");

            return 1;
        }
    }
    printf("Your Number is Missing \n");
    return 0;
}