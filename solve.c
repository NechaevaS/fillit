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

#include <stdio.h>
#include "fillit.h"

int place_next(board *b, tetr **all_read, int ind)
{
    int x;
    int y;
   
    y = 0;
    if (!all_read)
        return (1);
    while(y < b->h)
    {
        printf("%d %d\n", x, y);
        x = 0;
        while(x < b->w)
        {
            if (place_tetr(b, *all_read, x, y, 'A' + ind ))
            {   printBoard(b);
                if (place_next(b, all_read, ind + 1)
                {
                printf("%s\n", all_read);
                    return (1);
                }
                else
                    remove_tetr(b, *all_read, x, y);
            }
            x++;
        }
        y++;
    }
    return (0);
}

int solve(tetr **all_read)
{
    int i;
    int b_sz;
    board *b;

    i = 0;
    while(all_read[i] != NULL)
    {
        i++;
    }
    b_sz = (i * 4);
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