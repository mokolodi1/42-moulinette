#include <unistd.h>

static void	    ft_putchar(char c)
{
  write(1, &c, 1);
}

void		    ft_print_numbers(void)
{
  char current;

  current = '0';
  while (current <= '9')
    {
      ft_putchar(current);
      current++;
    }
}
