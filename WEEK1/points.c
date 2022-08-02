#include <stdio.h>
#include <cs50.h>

int main(void){
    const int mine= 2;
    //TELL THE USER ABOUT MY POINTS
    printf("I lost 2 Points in Test!\n How many you Lost?\n");
    // GET HIS POINTS
    int points = get_int("How many points did you get? ");
    // CHECKS THE POINTS WHETHER HIGHER OR LOWER
    if(points < mine){
        printf("You Lost Less Points Than Me!");
    }
    else if(points > mine){
        printf("You Lost More Points Than Me!");
    }
    else{
        printf("You Lost Same Points As Me!");
    }
}