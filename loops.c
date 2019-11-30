#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char name [20];
    int studentCtl, examCtl, studentAmount, testAmount;
    float grade, sum, average;

    printf("How many student do yo need the avarege for? \n");
    scanf(" %d", &studentAmount);
    printf("What is the test amount? \n");
    scanf(" %d", &testAmount);

    for (studentCtl = 0; studentCtl < studentAmount; studentCtl++) {
        printf("Please enter %d grades and the student name: \n", testAmount);
        sum = 0;

        for (examCtl = 0; examCtl < testAmount; examCtl++) {
            scanf(" %f", &grade);
            sum = sum + grade;

        }
        average = sum / testAmount;
        scanf("%s", name);

        printf(" %s average is: %.2f\n", name, average);
    }
    
    printf("...Bye...\n");

    return(0);
}
