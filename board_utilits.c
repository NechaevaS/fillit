/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_utilits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:03:29 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/29 15:39:11 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

void	print_board(board *b)
{
	int		i;
	char	*tmp;

	tmp = b->s;
	i = 0;
	while (i < b->h)
	{
		write(1, tmp, b->w);
		ft_putchar('\n');
		tmp = (tmp + b->w);
		i++;
	}
}

board	*create_board(int sz)
{
	board	*b;

	b = (board *)malloc(sizeof(board));
	b->s = (char *)malloc(sz * sz);
	ft_memset(b->s, '.', sz * sz);
	b->h = sz;
	b->w = sz;
	return (b);
}

void	free_board(board *b)
{
	free(b->s);
	free(b);
}

void	clean_board(board *b, int sz)
{
	int	x;
	int	y;

	x = 0;

	while (x < sz)
	{
		y = 0;
		while (y < sz)
		{
			ELEM(b, x, y) = '.';
			y++;
		}
		x++;
	}
}
