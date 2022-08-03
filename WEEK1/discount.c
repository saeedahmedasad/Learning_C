#include <stdio.h>
#include <math.h>
#include <cs50.h>

float discount(float price, float off);

int main(void){
    float regular = get_float("Price: ");
    float off = get_float("Discount: ");
    float sale = discount(regular, off);

    printf("New price is  %.2f", sale);

}

float discount(float price, float off){
    return price * (100-off)/100;
}