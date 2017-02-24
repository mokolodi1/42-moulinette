/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:45:09 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 12:02:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

int			is_space(char c)
{
	return (c == ' ' || c == '\t');
}

size_t		word_length(char *string)
{
	size_t		length;

	length = 0;
	while (string[length] && !is_space(string[length]))
		length++;
	return (length);
}

static char	to_upper(char c)
{
	if (c <= 'z' && c >= 'a')
		return (c + 'A' - 'a');
	return (c);
}

static int	compare_alphabet(char first, char second)
{
	first = to_upper(first);
	second = to_upper(second);
	if (first < second)
		return (-1);
	if (first > second)
		return (1);
	return (0);
}

int			compare_words(char *first, char *second)
{
	size_t		first_length;
	size_t		second_length;
	int			chars_diff;

	first_length = word_length(first);
	second_length = word_length(second);
	if (first_length > second_length)
		return (1);
	if (first_length < second_length)
		return (-1);
	while (*first && *second && !is_space(*first) && !is_space(*second))
	{
		chars_diff = compare_alphabet(*first, *second);
		if (chars_diff != 0)
			return (chars_diff);
		first++;
		second++;
	}
	return (0);
}
