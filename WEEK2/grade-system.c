#include <stdio.h>
#include <cs50.h>

int main(void){
    int marks[100];
    float sum = 0;

    float subjects = get_int("How many Subjects do you have?  ");
    float total = get_int("Enter total Marks: ");

    for (int i = 1; i<=subjects; i++){
        printf("Enter Marks in Subject %i \n", i );
        scanf("%i", &marks[i]);
    }
    for (int i = 1; i <= subjects ; i++){
        sum = sum + marks[i];
    }
    printf("You got %.2f/%.2f\n", sum, total);

    float percent = (sum/total)*100;


    if(percent >= 90){
        printf("You got %.2fpercent and You got Grade A+\n", percent);
    }
    else if(percent >= 80){
         printf("You got %.2fpercent and You got Grade A\n", percent);
    }
    else if(percent >= 70){
         printf("You got %.2fpercent and You got Grade B+\n", percent);
    }
    else if(percent >= 60){
         printf("You got %.2fpercent and You got Grade B\n", percent);
    }
    else if(percent >= 50){
         printf("You got %.2fpercent and You got Grade C+\n", percent);
    }
    else if(percent >= 40){
         printf("You got %.2fpercent and You got Grade C\n", percent);
    }else if(percent < 40)
    {
         printf("You got %.2fpercent and You got Grade F\n", percent);
    }
    else{
        printf("Finding it. Please Wait");
    }
}