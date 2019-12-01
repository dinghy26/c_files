// C code
//This program will allow the user to select different mathematical
//functions prompting a list of options.
//This program will continue running until the user inputs the quit option.
// Date: Nov 29, 2019

#include <stdio.h>

void printHelp () {
  printf ("\n");
  printf ("a: a(x) = x*x\n");
  printf ("b: b(x) = x*x*x\n");
  printf ("c: c(x) = x^2 + 2*x + 7\n");
  printf ("d: shrink(x) = x/2\n"); // add shrink to the Menu help.
  printf ("e: average(x) = x is the number of values for the calculation\n");// add average to the Menu help.
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

void shrink(float x){ /* shrink function  */
  float v = x / 2;
  printf(" shrink(%.2f) = %.2f / 2 = %.2f\n", x, x, v);
}// end of shrink function

// My function choice is the average of a giving numbers.
void average (float x)
{
  int i, amount;
  float values, sum, avrg;
    amount = x; // assign the value of x to amount.
    
  printf ("Enter the %d values that are goin to be calculated.\n\n", amount);
  //initialize variable
  sum = 0;

  for(i = 0; i < amount; i++)
  {
    printf("Enter value # %d: \n", i + 1); /*
    I use the (i+1) to let know the user in what # of value they are */
    scanf("%f", &values); // scan the value in every iteration
    // sum of all values
    sum = sum + values;

  } //end values entrie.
  // average calculation
  avrg = sum/amount;
  printf ("The average is: %.2f\n", avrg);
  
} // end of average function.

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
} // end function menu

int main() {
  while (menu() == 5);
  printf ("... bye ...\n");
  return 0;
} // end main