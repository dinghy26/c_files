#include <stdio.h>
#include <stdlib.h>

void printHelp () {
  printf ("\n");
  printf ("a: a(x) = x*x\n");
  printf ("b: b(x) = x*x*x\n");
  printf ("c: c(x) = x^2 + 2*x + 7\n");
  printf ("d: shrink(x) = x/2\n"); // add Brian Miranda
  printf ("e: average() \n");
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

void average ()
{
  int amount ,i;
  float values, sum, avrg;
    
  printf ("Enter the amount of values that are goin to be calculated.\n");
  printf("amount: ");
  scanf ("%d", &amount);
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
  // plase this if statement before scanf
  // to avoid the program to hang and return 5
  // so the while statement continues.
  if (selection == 'e') average(); return 5;
  scanf ("%f", &x);
  if (selection == 'a') a(x);
  if (selection == 'b') b(x);
  if (selection == 'c') c(x);
  if (selection == 'd') shrink(x); // add Brian Miranda

  return 5; // change - Brian Miranda change 
  // the return value for wile loop.
} // end function menu

int main() {
  while (menu() == 5); // change Brian Miranda
  printf ("... bye ...\n");
  return 0;
} // end main