/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ord_alphlong.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:17:24 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 12:02:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

static size_t	set_words(char *input, char **words)
{
	size_t		count;

	count = 0;
	while (*input)
	{
		while (*input && is_space(*input))
			input++;
		if (*input && !is_space(*input))
		{
			if (words)
				words[count] = input;
			count++;
			input++;
		}
		while (*input && !is_space(*input))
			input++;
	}
	return (count);
}

static void		switch_words(char **words, size_t first, size_t second)
{
	char		*temporary;

	temporary = words[second];
	words[second] = words[first];
	words[first] = temporary;
}

static void		sort_words(char **words, size_t word_count)
{
	int			changed;
	size_t		i;

	changed = 1;
	while (changed)
	{
		changed = 0;
		i = 0;
		while (i < word_count - 1)
		{
			if (compare_words(words[i], words[i + 1]) > 0)
			{
				switch_words(words, i, i + 1);
				changed = 1;
			}
			i++;
		}
	}
}

static void		print_words(char **words, size_t word_count)
{
	size_t		this_length;
	size_t		next_length;
	size_t		i;

	next_length = word_length(words[0]);
	i = 0;
	while (i < word_count - 1)
	{
		ft_putword(words[i]);
		this_length = next_length;
		next_length = word_length(words[i + 1]);
		if (this_length != next_length)
			ft_putstr("\n");
		else
			ft_putstr(" ");
		i++;
	}
	ft_putword(words[i]);
}

void			do_ord_alphlong(char *input)
{
	char		**words;
	size_t		word_count;

	word_count = set_words(input, NULL);
	if (word_count >= 1)
	{
		words = malloc(word_count * sizeof(char*));
		set_words(input, words);
		sort_words(words, word_count);
		print_words(words, word_count);
	}
	free(words);
}
