#include <stdio.h>

int main() {
  double num1, num2;
  char operator;

  // ask the user for the first number
  printf("Enter the first number: ");
  scanf("%lf", &num1);

  // ask the user for the second number
  printf("Enter the second number: ");
  scanf("%lf", &num2);

  // ask the user for the operation they would like to perform
  printf("Enter the operation (+, -, *, /): ");
  scanf(" %c", &operator);

  // perform the requested operation
  double result;
  if (operator == '+') {
    result = num1 + num2;
  } else if (operator == '-') {
    result = num1 - num2;
  } else if (operator == '*') {
    result = num1 * num2;
  } else if (operator == '/') {
    result = num1 / num2;
  } else {
    // if the operation is not recognized, return an error message
    printf("Invalid operator\n");
    return 0;
  }

  // print the result
  printf("Result: %lf\n", result);

  return 0;
}

