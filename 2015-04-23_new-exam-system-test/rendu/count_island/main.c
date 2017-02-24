/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 10:42:06 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 12:31:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_island.h"
#include <fcntl.h>
#include <unistd.h>

void			*ft_realloc(void *original
							, size_t original_size
							, size_t new_size)
{
	char	*original_char;
	char	*new_char;
	size_t			i;

	new_char = malloc(new_size);
	original_char = (char*)original;
	i = 0;
	while (i < original_size)
	{
		new_char[i] = original_char[i];
		i++;
	}
	free(original);
	ft_bzero(new_char + i, new_size - i);
	return (new_char);
}

int				read_file(char *filename, char **file)
{
	int			fd;
	size_t		size;
	size_t		lu;
	int			read_ret;

	if ((fd = open(filename, O_RDONLY)) < 0)
		return (1);
	size = BUFF_SIZE;
	*file = malloc(size * sizeof(char) + 1);
	ft_bzero(*file, BUFF_SIZE + 1);
	lu = 0;
	while ((read_ret = read(fd, *file + lu, BUFF_SIZE)) > 0)
	{
		lu += read_ret;
		if (lu + BUFF_SIZE > size)
		{
			*file = ft_realloc(*file, size, size * 2 + 1);
			size *= 2;
		}
	}
	if (read_ret < 0)
		return (1);
	close(fd);
	return (0);
}

int				main(int argc, char **argv)
{
	char		*file;
	char		**map;
	size_t		height;
	size_t		width;

	if (argc >= 2
		&& !read_file(argv[1], &file)
		&& !parse_map(file, &map, &height, &width))
	{
		count_islands(map, height, width);
		print_islands(map, height);
	}
	else
		ft_putchar('\n');
	return (0);
}
