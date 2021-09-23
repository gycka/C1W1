#include <stdio.h>
#include <math.h>

int main(void) 
{
  // int (%d) -> 5, 10, -15, -999, 15000
  // float (%f) -> 5.5, -95.357, 3.14
  // char (%c) -> 'a', 'A', '5'
  // string (%s) -> "Hello world!"

  //printf("We are now working with intergers: %d and %d\t\t", 5, -15000);

  // printf("Hello World, %0.2f - PI, %0.10f is greater than PI, %0.1f is lower than PI.\n", 3.14, 5.9, -3.258);

  // printf("Time for characters!\n");
  //printf("I got an %c from the exam\n", 'C');

  // printf("My string is: %s\n", "orange blue");

  // printf("Pi value is %f, the rounded value is %f. %s %c.\n", 3.14, 3.0, "This knowledge is worth an ", 'A');

  // int, float, char
  int x1 = 3, x2 = 4;
  float pi = 3.14; 
  char letter = 'a';

  x1 = 5;
  x1 = x1 * x2; // 3 * 4

  pi = pi + 5;

  printf("The x1 value is: %d \n", x1);
  printf("The pi value is: %f \n", pi);
  printf("The letter is: %c \n", letter);

  printf("Hello World\n");
  return 0;
}