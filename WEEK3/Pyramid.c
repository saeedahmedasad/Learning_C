#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    int n = get_int("Enter the Number of Lines: ");

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < i+1 ; j++){
            printf("*");
        }
        printf("\n");
    }
}
// yaar bhai dekho, i++ ka matlab hy ke i ma increment krty jao
// to ye to koi condition ni bani na, aur i + 1 valid condition hy kio ke us ma aek jaga ja ke i ki value stop ho jaye gi
// lekin i++ ma increment hota jaye ga
// ni smjh aae to bata   aaa gayi hai boss

// ok Got it SHUKRIA
// yaar dekho
// wo jo tu keh rha tha na ke i++ aur i + 1 same hy, ye different chezy hy, for e.g
// tu code kr rha hy, koi game hy us ma increment kr rha hy
// i++ aur i = i + 1; ye done same hy, lekin yaha pe conditon ma ham na koi limit deni hy na, jaha pe loop end ho
// aur ham condition ma keh rhe hy ke i++ krty jao aur condition to is tarah false hogi hi nhi
// smjh gaya  ab. i++ me loop end hi ni hoga kio k wo add karta hi jaye ga
// esa hi hai?
// g bilkul aesa hi aur i + 1; ma ham i ma koi change ni kr rhe hy, ham na i ma koi change ni krna, ham ne i ke accordingly con
// condition check krni hy bs
// sai sai
// chalo yar karo yar ap apna kaam => No problem yaar, ab tujhe browser game developer banana hy to poch lia kr kuch ho to
