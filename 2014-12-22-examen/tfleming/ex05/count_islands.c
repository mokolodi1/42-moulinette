/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_islands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 12:31:29 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 12:45:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_island.h"

void				fill_island(char **map, size_t height, size_t width
								, size_t row, size_t column, char island)
{
	map[row][column] = island;
	if (column > 0 && map[row][column - 1] == 'X')
		fill_island(map, height, width, row, column - 1, island);
	if (column + 1 < width && map[row][column + 1] == 'X')
		fill_island(map, height, width, row, column + 1, island);
	if (row + 1 < height && map[row + 1][column] == 'X')
		fill_island(map, height, width, row + 1, column, island);
	if (row > 0 && map[row - 1][column] == 'X')
		fill_island(map, height, width, row - 1, column, island);
}

void				count_islands(char **map, size_t height, size_t width)
{
	size_t			row;
	size_t			column;
	char			island;
	
	island = '0';
	row = 0;
	while (row < height)
	{
		column = 0;
		while (column < width)
		{
			if (map[row][column] == 'X')
			{
				fill_island(map, height, width, row, column, island);
				island++;
			}
			column++;
		}
		row++;
	}
}
