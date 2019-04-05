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
	int				count;
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
# define elem(x, y, board) board->s[y * (board->w) + x]
#endif