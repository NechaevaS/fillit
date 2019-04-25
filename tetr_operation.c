/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetr_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:03:29 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/25 14:08:16 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "fillit.h"

int     can_place(board *b, tetr *t, int x, int y)
{

	int i;
	int j;

	j = 0;
	if ((t->w + x > b->w) || (t->h + y > b->h))
		return(0);
	while (j < t->h)
	{

		i = 0;
		while (i < t->w)
		{

			if (ELEM(t, i, j) != '.' && ELEM(b, x + i, y + j) != '.')
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}
int     place_tetr(board *b, tetr *t, int x, int y)
{

	int i;
	int j;
	char symb;

	symb = '#';
	j = 0;
	if (!can_place(b, t, x, y))
		return (0);
	while(j < t->h)
	{

		i = 0;
		while(i < t->w)
		{

			if (ELEM(t, i, j) != '.')
				ELEM(b, x + i, y + j) = symb;
			i++;
		}
		j++;
	}
	return (1);
}
int     remove_tetr(board *b, tetr *t, int x, int y)
{

	int i;
	int j;

	j = 0;
	if (!can_place(b, t, x, y))
		return (0);
	while(j < t->h)
	{

		i = 0;
		while(i < t->w)
		{

			if (ELEM(t, i, j) != '.')
				ELEM(b, x + i, y + j) = '.';
			i++;
		}
		j++;
	}
	return (1);
}
