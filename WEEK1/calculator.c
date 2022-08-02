// Psuodocode for Making Calculator
/*  GET the first number
    GET the second number
    GET the operator
    IF it gives operator
        CHECK operator is +,-,*,/
            IF operator is +
                add first and second number
            ELSE IF operator is -
                subtract first and second number
            ELSE IF operatoro is *
                multiply first and second number
            ELSE IF  operator is /
                divide first and second number
    ELSE GOTO line number 4
*/

#include <stdio.h>
#include <cs50.h>

int main(void){
    
    // GET VALUES FROM USER
    
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    // GET OPERATOR
    
    char op = get_char("op: ");
    
    // CHECKING OPERATOR AND DISPLAYING RESULTS
    
    if(op == '+'){
        printf("%i+%i = %i",x,y, x+y);
    }
    else if(op == '-'){
        printf("%i-%i = %i",x,y, x-y);
    }
    else if(op == '*'){
        printf("%i*%i = %i",x,y, x*y);
    }
    else if(op == '/'){
        printf("%i/%i = %i",x,y, x/y);
    }
    else{
        printf("INVALID OPERATOR!");
    }
}

