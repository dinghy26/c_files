#include <stdio.h>
#include <stdlib.h>

void printHelp () {
  printf ("\n");
  printf ("a: a(x) = x*x\n");
  printf ("b: b(x) = x*x*x\n");
  printf ("c: c(x) = x^2 + 2*x + 7\n");
  printf ("d: shrink(x) = x/2\n"); // add Brian Miranda
  printf ("e: average(x) = x is the number of values for the calculation\n");
  printf ("q: quit\n");
}

void a(float x) {
  float v = x*x;
  printf ("  a(%.2f) = %.2f^2 = %.2f\n", x, x, v);
} // end function a

void b(float x) {
  float v = x*x*x;
  printf ("  b(%.2f) = %.2f^3 = %.2f\n", x, x, v);
} // end function b

void c(float x) {
  float v = x*x + 2*x + 7;
  printf ("  c(%.2f) = %.2f^2 + 2*%.2f + 7 = %.2f\n",
            x, x, x, v);
} // end function c

void shrink(float x)// add Brian Miranda
{
  float v = x / 2;
  printf("shrink (%.2f) = %.2f / 2 = %.2f\n", x, x, v);
} // end of function shrink

// My function choice is the average of a giving numbers.

void average (float x)
{
  int amount ,i;
  float values, sum, avrg;
  amount = x; // assign the value of x to amount.
    
  printf ("Enter the %d values that are goin to be calculated.\n\n", amount);
  printf("amount: ");
  //initialize variable
  sum = 0;

  for(i = 0; i < amount; i++)
  {
    printf(" Enter value # %d: \n", i + 1);
    scanf("%f", &values);
    // sum of all values
    sum = sum + values;

  } //end values entrie.
  // average calculation
  avrg = sum/amount;
  printf ("The average is: %.2f\n", avrg);
}

int menu () {
  char selection;
  float x;
  printHelp ();
  scanf ("%s", &selection);
  if (selection == 'q') return 1;
  scanf ("%f", &x);
  if (selection == 'a') a(x);
  if (selection == 'b') b(x);
  if (selection == 'c') c(x);
  if (selection == 'd') shrink(x); // shrink selection in the menu.
  if (selection == 'e') average(x); // x is the amount of values.

  return 5; // use the return 5 as the control value.
  // the return value for wile loop.
 // end function menu

}

int main() {
  while (menu() == 5); // change Brian Miranda
  printf ("... bye ...\n");
  return 0;
} // end main