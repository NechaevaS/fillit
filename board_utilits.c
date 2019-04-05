/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_utilits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:03:29 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/04 15:58:47 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

board  *create_board(int sz)
{
	board   *b;

	b = (board  *)malloc(sizeof(board));
	b->s = (char *)malloc(sizof(char) * sz * sz);
	ft_memset(b->s, '.', sz * sz);
	b->h = sz;
	b->w = sz;
	return (b);
}

void    free_board(board *b)
{
	free(b->s);
	free(b);
}
int     can_place(board *b, tetr *t, int x, int y,)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if ((t->w + x >= b->w) || (t->h + y >= b->h))
		return(0);
	while (j < t->h)
	{
		while (i < t->w)
		{
			if (elem(t, i, j) != '.' && elem(b, x + i, y + j) != '.')
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}
int     fill_board(board *b, tetr *t, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!can_place(b, t, x, y))
		return (0);
	while(j < t->h)
	{
		while(i < t->w)
		{
			if (elem(t, i, j) != '.')
				elem(b, x + i, Y + j) = t->symb
					i++;
		}
		j++;
	}
	return (1);
}
