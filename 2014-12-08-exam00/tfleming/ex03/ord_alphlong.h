/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ord_alphlong.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:14:16 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 11:23:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ORD_ALPHLONG_H
# define ORD_ALPHLONG_H

# include <stdlib.h>
# include <unistd.h>

int			main(int argc, char **argv);
void		do_ord_alphlong(char *input);
void		ft_putchar(char c);
void		ft_putstr(char *string);
void		ft_putword(char *string);
int			compare_words(char *first, char *second);
size_t		word_length(char *string);
int			is_space(char c);

#endif
