#include <stdio.h>
#include <stdlib.h>

static int do_op(char *first_string, char operation, char *second_string)
{
  int first;
  int second;
  int result;

  first = atoi(first_string);
  second = atoi(second_string);
  if (operation == '+') {
    result = first + second;
  } else if (operation == '-') {
    result = first - second;
  } else if (operation == '*') {
    result = first * second;
  } else if (operation == '/' && second != 0) {
    result = first / second;
  } else if (operation == '%' && second != 0) {
    result = first % second;
  } else {
    result = 0;
  }
  return (result);
}

int main(int argc, char **argv)
{
  if (argc == 4) {
    printf("%d", do_op(argv[1], argv[2][0], argv[3]));
  }
  printf("\n");
  return (0);
}
