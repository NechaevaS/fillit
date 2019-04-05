/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:00:37 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/04 17:04:45 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct		
{
	char			*s;
	int				h;
	int				w;
	char			simb;
}					tetr;

typedef struct		
{
	char			*s;
	int				h;
	int				w;
}					board;

typedef struct		
{
	char			*s;
	int				ntet;
}					pattern;
tetr	g_t[];
# define MAX_FIG 26
# define ELEM(x, y, board) board->s[y * (board->w) + x]
#endif
