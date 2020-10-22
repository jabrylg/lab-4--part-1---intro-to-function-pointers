#include <stdio.h>
#include <stdlib.h>

/* defining a type of function to be used in the array of addresses of function */
//https://stackoverflow.com/questions/3674200/what-does-a-typedef-with-parenthesis-like-typedef-int-fvoid-mean-is-it-a
typedef int (*Operation)(int a, int b);

/* IMPLEMENT ME: Declare your functions here */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int exiting(int a, int b);

int main(void)
{
  int a = 6;
  int b = 3;
  int operation;
  int answer = 0;
  Operation operators[5] = [&add, ];

  operators[0] = &add;
  operators[1] = &subtract;
  operators[2] = &multiply;
  operators[3] = &divide;
  operators[4] = &exiting;

  /* IMPLEMENT ME: Insert your algorithm here */
  printf("Operand 'a' : %d | ", a);
  printf("Operand 'b' : %d \n", b);
  printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
  scanf(" %d", &operation);

  answer = operators[operation](a, b);

  printf("x = %d\n", answer);

  return answer;
}

/* IMPLEMENT ME: Define your functions here */
int add(int a, int b)
{
  printf("Adding 'a' and 'b'\n");
  return a + b;
}

int subtract(int a, int b)
{
  printf("Subtracting 'b' from 'a'\n");
  return a - b;
}

int multiply(int a, int b)
{
  printf("Multiplying 'a' and 'b'\n");
  return a * b;
}

int divide(int a, int b)
{
  printf("Dividing 'a' by 'b'\n");
  return a / b;
}

int exiting(int a, int b)
{
  exit(0);
  return 0;
}