/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 16:48:39 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 17:23:11 by exam             ###   ########.fr       */
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

int			main(int argc, char **argv)
{
	int		i;
	int		first;
	char	*thing;
	int		words;

	if (argc >= 2)
	{
		thing = argv[1];
		first = 0;
		while (thing[first] && (thing[first] == ' ' || thing[first] == '\t'))
			first++;
		i = first;
		while (thing[i] && (thing[i] != ' ' && thing[i] != '\t'))
			i++;
		while (thing[i] && (thing[i] == ' ' || thing[i] == '\t'))
			i++;
		while (thing[i] && (i < ft_strlen(thing) - count_spaces_at_end(thing)))
		{
			if (thing[i] == ' ' || thing[i] == '\t')
				words++;
			ft_putchar(thing[i++]);
		}
		if (words)
			ft_putchar(' ');
		while (thing[first] && (thing[first] != ' ' && thing[first] != '\t'))
			ft_putchar(thing[first++]);
	}
	ft_putchar('\n');
	return (0);
}
