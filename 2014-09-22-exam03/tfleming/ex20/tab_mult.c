/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 17:25:47 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 17:34:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int			atoi(char *str, int num_so_far)
{
	if (*str <= '9' && *str >= '0')
		return (atoi(str + 1, num_so_far * 10 - '0' + *str));
	return (num_so_far);
}

int			main(int argc, char **argv)
{
	int		i;
	int		num;

	if (argc >= 2)
	{
		num = atoi(argv[1], 0);
		i = 1;
		while (i < 10)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(num);
			ft_putstr(" = ");
			ft_putnbr(i * num);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
