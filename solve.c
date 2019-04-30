/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:20:38 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/29 16:11:12 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	find_board_sz(tetr **all_read)
{
	int i;
	int n;

	n = 0;
	while (all_read[n] != NULL)
	{
		n++;
	}
	i = 1;
	while ((i * i) < (n * 4))
	{
		i++;
	}
	return (i);
}

int	place_next(board *b, tetr **all_read, int ind)
{
	loc pos;

	if (all_read[ind] == NULL || ind >= MAX_FIG)
		return (1);
	pos.y = 0;
	while (pos.y < b->h)
	{
		pos.x = 0;
		while (pos.x < b->w)
		{
			if (place_tetr(b, all_read[ind], pos, 'A' + ind))
			{
				if (place_next(b, all_read, ind + 1))
					return (1);
				else
					remove_tetr(b, all_read[ind], pos);
			}
			pos.x++;
		}
		pos.y++;
	}
	return (0);
}

int	solve(tetr **all_read)
{
	int		b_sz;
	board	*b;

	b_sz = find_board_sz(all_read);
	b = create_board(b_sz);
	while (!place_next(b, all_read, 0))
	{
		free_board(b);
		b_sz++;
		b = create_board(b_sz);
	}
	print_board(b);
	return (0);
}
