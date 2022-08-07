#include <stdio.h>
#include <string.h>// Library in which we can compare two STRINGS 
#include <cs50.h>

int main (void){
    string names[] = {"Huzaifa", "Ahmad", "Saeed", "Blah"};

    for (int i = 0; i < 5; i++){
        if(strcmp(names[i], "Ali") == 0){// strcmp will compare two strings instead of integers or other longs or doubles etc.
            printf("Found:");
            return 0;
        }
    }
    printf("Not Found");

    return 1;
}