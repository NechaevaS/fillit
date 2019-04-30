/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetr_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:03:29 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/29 16:31:41 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

int	can_place(board *b, tetr *t, loc pos)
{
	int i;
	int j;

	j = 0;
	if ((t->w + pos.x > b->w) || (t->h + pos.y > b->h))
		return (0);
	while (j < t->h)
	{

		i = 0;
		while (i < t->w)
		{

			if (ELEM(t, i, j) != '.' && ELEM(b, pos.x + i, pos.y + j) != '.')
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int	place_tetr(board *b, tetr *t, loc pos, char symb)
{
	int i;
	int j;

	j = 0;
	if (!can_place(b, t, pos))
		return (0);
	while (j < t->h)
	{
		i = 0;
		while (i < t->w)
		{
			if (ELEM(t, i, j) != '.')
				ELEM(b, pos.x + i, pos.y + j) = symb;
			i++;
		}
		j++;
	}
	return (1);
}

int	remove_tetr(board *b, tetr *t, loc pos)
{

	int i;
	int j;

	j = 0;
	if (!can_place(b, t, pos))
		return (0);
	while (j < t->h)
	{
		i = 0;
		while (i < t->w)
		{
			if (ELEM(t, i, j) != '.')
				ELEM(b, pos.x + i, pos.y + j) = '.';
			i++;
		}
		j++;
	}
	return (1);
}
