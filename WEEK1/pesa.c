#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void){
    printf("This program will convert RUPEE into PESA's\n");

    float rupee = get_float("Enter in Rupee: ");
    int pesa = round(rupee * 100);

    printf("%i", pesa);

}