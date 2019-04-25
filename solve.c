/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:20:38 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/25 16:28:18 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"

int solve(tetr **all_read)
{
    int i;
    int b_sz;
    board *b;

    i = 0;
    while(all_read[i] != NULL)
    {
        printf("%d", i);
        i++;
    }
    b_sz = i * 4;
    
    b = create_board(b_sz);
    printBoard(b);
    return (1);
}