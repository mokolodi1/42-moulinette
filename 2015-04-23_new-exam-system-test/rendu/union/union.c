#include <unistd.h>

static void	    ft_putchar(char c)
{
  write(1, &c, 1);
}

static void ft_bzero(char *string, int length)
{
  int i;

  i = 0;
  while (i < length) {
    string[i] = 0;
    i++;
  }
}

static void print_if_first_time(char already_printed[256], char *string)
{
  while (*string) {
    if (!already_printed[(int)*string]) {
      ft_putchar(*string);
      already_printed[(int)*string] = 1;
    }
    string++;
  }
}

static void do_union(char *first, char *second)
{
  char already_printed[256];

  ft_bzero(already_printed, 256);
  print_if_first_time(already_printed, first);
  print_if_first_time(already_printed, second);
}

int main(int argc, char **argv)
{
  if (argc == 3) {
    do_union(argv[1], argv[2]);
  }
  ft_putchar('\n');
}
