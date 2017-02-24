/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 11:49:37 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 12:30:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_island.h"

static void				convert_newlines(char *string)
{
	while (*string)
	{
		if (*string == '\n')
			*string = '\0';
		string++;
	}
}

static void				set_map(char *file
							  , char ***map, size_t *height, size_t *width)
{
	size_t			i;

	*map = malloc(*height * sizeof(char*));
	i = 0;
	while (i < *height)
	{
		(*map)[i] = file + (*width + 1) * i;
		i++;
	}
}

int					parse_map(char *file
							  , char ***map, size_t *height, size_t *width)
{
	size_t			row_width;
	char			*reading;

	reading = file;
	convert_newlines(reading);
	*width = ft_strlen(reading);
	while (*reading)
	{
		row_width = 0;
		while (*reading)
		{
			if (*reading != '.' && *reading != 'X')
				return (1);
			row_width++;
			reading++;
		}
		if (row_width != *width)
			return (1);
		(*height)++;
		reading++;
	}
	set_map(file, map, height, width);
	return (0);
}
