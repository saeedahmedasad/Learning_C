#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void){
    // This will print Square of you own length
    printf("This program will Print '#' of your Own Length in Rows\n");
    int line = get_int("How many Lines do you want: ");
    
    //for each row
    
    for(int i = 0; i < line; i++){
        
        //for each column
        
        for(int j = 0; j < line; j++){
    
            printf("#");
    
        }
    
        printf("\n");
    
        
    }
}