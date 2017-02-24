/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 18:43:42 by exam              #+#    #+#             */
/*   Updated: 2014/09/05 19:06:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_word_changed(char *str)
{
	int		i;
	char	now;

	i = 0;
	while (str[i])
	{
		now = str[i];
		if ((now <= 'z' && now >= 'a') || (now <= 'Z' && now >= 'A'))
		{
			if (str[i] == 'z')
				ft_putchar('a');
			else if (str[i] == 'Z')
				ft_putchar('A');
			else
				ft_putchar(str[i] + 1);
		}
		else
			ft_putchar(now);
		i++;
	}
}

void	print_array_changed(char **array, int len)
{
	int		i;

	i = 1;
	while (i < len)
	{
		print_word_changed(array[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	print_array_changed(argv, argc);
	ft_putchar('\n');
	return (0);
}
