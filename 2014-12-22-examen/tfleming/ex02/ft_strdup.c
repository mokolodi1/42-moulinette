/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 09:24:43 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 12:49:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char				*ft_strdup(char *source)
{
	char			*new;
	size_t			i;
	size_t			length;

	length = ft_strlen(source);
	new = malloc((length + 1) * sizeof(char));
	i = 0;
	while (i < length)
	{
		new[i] = source[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
