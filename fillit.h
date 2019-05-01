/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:00:37 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/30 17:06:59 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct
{
	char			*s;
	int				h;
	int				w;
}					tetr;
typedef struct
{
	int				x;
	int				y;
}					loc;
typedef struct
{
	char			*s;
	int				h;
	int				w;
}					board;

typedef struct
{
	char			s[21];
	int				ntet;
}					pattern;
extern tetr	g_t[19];
# define MAX_FIG 26
# define ELEM(board, x, y) (board)->s[(y) * ((board)->w) + (x)]

void	from_board_to_pattern(pattern *p, board *b);
int		create_pattern(pattern *p);
int		fill_pattern(pattern *p, board *tmp, int type, int counter);
int		get_id(pattern *p, char *str);
int		read_file(const int fd, tetr **all_read);
board	*create_board(int sz);
void	free_board(board *b);
int		can_place(board *b, tetr *t, loc pos);
int		place_tetr(board *b, tetr *t, loc pos, char symb);
int		remove_tetr(board *b, tetr *t, loc pos);
void	clean_board(board *b, int sz);
void	print_board(board *b);
int		solve(tetr **all_read);
#endif
