#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

void helpSection()
{
    printf("\n");
    printf("a: Adition\n");
    printf("b: Substraction\n");
    printf("c: Multiplication\n");
    printf("d: divition\n");
    printf("q: Quit\n");
}

void a (float x, float y)
{
    float v = x + y;
    printf("The sum of %.2f and %.2f is: %.2f\n", x, y, v);
}

void b (float x, float y)
{
    float v = x - y;
    printf(" the substraction of %.2f and %.2fis: %.2f\n", x, y, v);
}

void c (float x, float y)
{
    float v = x * y;
    printf("The result of the multiplication of %.2f and %.2fis: %.2f\n", x, y, v);
}

void d (float x, float y)
{
    float v = x / y;
    printf(" the division of %.2f and %.2f is: %.2f\n", x, y, v);
}

int menu() 
{
    float x, y;
    char selection;
    helpSection();
    printf("Please enter the mat you want to perform: \n");
    scanf("%s", &selection);
    if (selection == 'q') return 1;
    printf("please enter the 2 numbers you whant to perfom the mat:\n");
    scanf("%f %f", &x, &y);
    if (selection == 'a') a(x, y);
    if (selection == 'b') b(x, y);
    if (selection == 'c') c(x, y);
    if (selection == 'd') d(x, y);

    return 0;
}

int main ()
{
    while (menu() == 0);
    printf("...Bye...");
    return 0;

}
