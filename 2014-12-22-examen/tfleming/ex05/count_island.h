/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_island.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 10:42:35 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 12:33:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COUNT_ISLAND_H
# define COUNT_ISLAND_H

# include <stdlib.h>

# define BUFF_SIZE 100

int					parse_map(char *file
							  , char ***map, size_t *height, size_t *width);
void				print_islands(char **map, size_t height);
void				count_islands(char **map, size_t height, size_t width);

void			ft_putchar(char c);
void			ft_putstr(char *string);
void			ft_bzero(char *source, size_t length);
size_t			ft_strlen(char *string);

#endif
