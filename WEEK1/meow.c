#include <stdio.h>
#include <cs50.h>

void meow(void){
    printf("Meow\n");
}

int main(void){
    for(int i = 0; i < 3; i++){
        meow();
    }
}
