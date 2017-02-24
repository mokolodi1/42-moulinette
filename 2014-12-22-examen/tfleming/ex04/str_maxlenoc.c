/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_maxlenoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 09:49:19 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 12:53:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

static size_t		ft_strlen(char *string)
{
	size_t			length;

	length = 0;
	while (*string)
	{
		length++;
		string++;
	}
	return (length);
}

int				contains(char *haystack, char *needle, size_t length)
{
	size_t		outer;
	size_t		haystack_length;
	size_t		i;

	haystack_length = ft_strlen(haystack);
	outer = 0;
	while (outer + length <= haystack_length)
	{
		i = 0;
		while (i < length && haystack[i + outer] == needle[i])
			i++;
		if (i == length)
			return (1);
		outer++;
	}
	return (0);
}

int				strings_contain(char *compare
								, size_t length
								, char **strings
								, size_t count)
{
	size_t		i;

	i = 0;
	while (i < count)
	{
		if (!contains(strings[i], compare, length))
			return (0);
		i++;
	}
	return (1);
}

void			longest_similarity(char **strings, size_t count)
{
	size_t		first_length;
	size_t		length;
	size_t		i;

	first_length = ft_strlen(strings[0]);
	length = first_length;
	while (length > 0)
	{
		i = 0;
		while (i + length <= first_length)
		{
			if (strings_contain(strings[0] + i, length, strings + 1, count - 1))
			{
				write(1, strings[0] + i, length);
				return ;
			}
			i++;
		}
		length--;
	}
}

int				main(int argc, char **argv)
{
	if (argc > 1)
	{
		longest_similarity(argv + 1, argc - 1);
	}
	ft_putchar('\n');
	return (0);
}
