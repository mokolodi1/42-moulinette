/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 10:59:41 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 12:17:54 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<unistd.h>

char			*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] += 'A' - 'a';
		i++;
	}
	return (str);
}

int				ft_strcmp(char *s1, char *s2)
{
	while (*s1 == ' ')
		s1++;
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	while (*s1 == ' ')
		s1++;
	if (*s1 == *s2)
		return (0);
	return (-1);
}

int				should_print(char *thing)
{
	if (ft_strcmp(ft_strupcase(thing), "PRESIDENT") == 0)
		return (1);
	if (ft_strcmp(ft_strupcase(thing), "ATTACK") == 0)
		return (1);
	if (ft_strcmp(ft_strupcase(thing), "POWERS") == 0)
		return (1);
	return (0);
}

int				main(int argc, char **argv)
{
	int		i;
	char	*attack;

	i = 1;
	while (i < argc)
	{
		if (should_print(argv[i]))
		{
			attack = "Alert!!!\n\0";
			write(1, attack, 9);
			return (0);
		}
		i++;
	}
	return (0);
}
