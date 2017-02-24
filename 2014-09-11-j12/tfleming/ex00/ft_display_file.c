/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 13:47:25 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 17:07:36 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<fcntl.h>
#include	<unistd.h>
#include	<sys/types.h>
#include	<sys/uio.h>

#define		BUF_SIZE	4096

void		ft_putchar(char c, int type)
{
	write(type, &c, 1);
}

void		ft_putstr(char *str, int type)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i], type);
		i++;
	}
}

void		read_and_print(char *fname)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(fname, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf, 1);
	}
}

int			main(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	if (argc >= 3)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (1);
	}
	read_and_print(argv[1]);
	return (0);
}
