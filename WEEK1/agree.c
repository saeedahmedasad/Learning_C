#include <stdio.h>
#include <cs50.h>

int main(void){
    
    // PROMPT THE USER TO AGREE
    
    char c = get_char("Do you Agree? ");
    
    // CHECK WHETHER USER AGREED OR NOT

    if(c == 'y' || c == 'Y'){
        printf("Agreed \n");
    }
    else if(c == 'n' || c == 'N'){
        printf("Not Agree!\n");
    }
    else{
        printf("Invalid Input\n");
    }

}