#include <stdio.h>
#include <stdlib.h>

static void print_prime_factors(int number, int start_at, int is_first)
{
  int trying;

  trying = start_at;
  while (number % trying && trying < number) {
    trying++;
  }
  if (trying > number) {
    return ;
  }
  if (!is_first) {
    printf("*");
  }
  printf("%d", trying);
  print_prime_factors(number / trying, trying, 0);
}

static void print_prime_factors_wrapper(char *string)
{
  int number;

  number = atoi(string);
  if (number == 1) {
    printf("1");
  } else {
    print_prime_factors(number, 2, 1);
  }
}

int main(int argc, char **argv)
{
  if (argc == 2) {
    print_prime_factors_wrapper(argv[1]);
  }
  printf("\n");
}
