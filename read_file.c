/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:55:19 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/04 17:04:41 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#define BUF_SIZE 21

void from_board_to_pattern(pattern *p, board *b)
{
	int	i;
	int	j;
	int	pos;

	j = 0;
	pos = 0;
	while(j < b->h)
	{
		i = 0;
		while(i < b->w)
		{
			p->s[pos] = ELEM(b, i, j);
			i++;
			pos++;
		}
		p->[pos] = '\n';
		pos++;
		j++;
	}
}
int fill_pattern(pattern *p)
{
	board	*tmp;
	int	x;
	int	y;
	int 	type;
	int	i;

	type = 0;
	x = 0;
	y = 0;
	i = 0;
	tmp = create_board(4);
	while (type < 19)
	{
		while(x + t[ntet]->w < 5)
		{
			while(y + t[ntet]->h < 5)
			{
				fill_board(tmp, g_t + type, x, y);
				from_board_to_pattern(tmp, p + i);
				p[i].ntetr = type;
				remove_board(tmp, g_t = type, x, y);
				i++;
				y++;
			}
			x++;
		}
		type++;
	}
	free_board(tmp);

}

int get_id(pattern *p, char *str)
{
	int i;
	
	i = 0;
	while(p[i].s)
	{
		if (ft_strncmp(p[i].s, 21, str) == 0)
			return(p[i].ntetr);
	}
	return (-1);
}
int   *file_read(const int fd)
{
	pattern	p[19 * 16];
	char	buf[22];
	char	*res;
	int i;
	int type;
	int nread;

	ft_memset(p, '0', 19 * 16);
	fill_pattern(p);
	i = 0;
	while (i < MAX_FIG)
	{
		nread = read(fd, buf, 21);
		buff[21] = '\0';
		type = get_id(p, buf);
		if (type == -1)
			return (0);
		if (nread == 20)
			return (1);
		i++;
	}
	if (i = MAX_FIG)
		return (0);
	return (1);
}
