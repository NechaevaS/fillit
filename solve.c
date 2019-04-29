/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:20:38 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/26 18:52:40 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int find_board_sz(tetr **all_read)
{
	int i;
	int n;
    	
	n = 0;
	while(all_read[n] != NULL)
    	{
        	n++;
    	}
	i = 1;
	while((i * i) < (n * 4))
	{
		i++;
	}
	return (i);
}

int place_next(board *b, tetr **all_read, int ind)
{
	int x;
	int y;

	if (all_read[ind] == NULL)
		return (1);
	y = 0;
	while(y < b->h)
	{
		x = 0;
		while(x < b->w)
		{
			if(place_tetr(b, all_read[ind], x, y, 'A' + ind))
			{   
				if (place_next(b, all_read , ind + 1))
				{
					return (1);
				}
				else
					remove_tetr(b, all_read[ind], x, y);
			}
			x++;
		}
		y++;
    }
    return (0);
}

int solve(tetr **all_read)
{
    int b_sz;
    board *b;


    b_sz = find_board_sz(all_read);
    b = create_board(b_sz);
    while(!place_next(b, all_read, 0))
    {
        free_board(b);
        b_sz++;
        b = create_board(b_sz);
    }
     printBoard(b);
     return (0);
}
