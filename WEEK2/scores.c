#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // By USING ARRAYS
    int a[3];

     a[0] = 34;
     a[1]= 35;
     a[2]= 78;

    printf("%.5f", (float)(a[1]+ a[1]+ a[2])/3);
}