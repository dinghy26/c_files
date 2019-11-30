#include <stdio.h>

int outerLoop, innerLoop, range, counter=0;

int main ()
{
// This user input will let the user determine the size of the
// the triangle, the number input is the number of lines printed.
printf("Enter the size of the triangle: \n");
scanf("%d", &range);
// This is is just a heading and can be eliminated or replaced,
// this will not alter the code.
printf("Right Angled Triangle: \n");

for (outerLoop = 1; outerLoop <= range; outerLoop++) {

for (innerLoop = 1; innerLoop <= outerLoop; innerLoop++) {
counter = counter +1;

printf(" *");

}
printf("\n");
}
printf("inner loop ran %d", counter);
return (0);

}