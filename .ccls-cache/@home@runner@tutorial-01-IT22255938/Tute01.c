/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1;
  int num2;
  float avg;

  printf("enter number1:");
  scanf("%d",&num1);
   printf("enter number2:");
  scanf("%d",&num2);

  avg=(num1+num2)/2;

  printf("average:%.2f",avg);
  return 0;
}


