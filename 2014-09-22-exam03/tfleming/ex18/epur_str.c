/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 15:16:50 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 15:53:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int			count_spaces_at_end(char *str)
{
	int		len;
	int		count;

	len = ft_strlen(str);
	count = 0;
	while (*(str + len - count - 1) == ' ')
		count++;
	return (count);
}

void		ft_putstr_nospace(char *str)
{
	int		end_spaces;
	int		len;
	int		i;

	end_spaces = count_spaces_at_end(str);
	len = ft_strlen(str);
	ft_putchar(str[0]);
	i = 1;
	while (i < len - end_spaces)
	{
		if ((str[i] == ' ' && str[i - 1] != ' ') || str[i] != ' ')
			ft_putchar(str[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == '\t')
				argv[1][i] = ' ';
			i++;
		}
		while (*argv[1] && *(argv[1]) == ' ')
			argv[1]++;
		if (*argv[1])
			ft_putstr_nospace(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
