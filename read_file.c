/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:55:19 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/05 16:58:13 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "fillit.h"

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
		p->s[pos] = '\n';
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
		//printf("type %d\n", type);
		while(x + g_t[type].w < 5)
		{
			//printf("x %d\n", x);
			while(y + g_t[type].h < 5)
			{
				//printf("y %d\n", y);
				fill_board(tmp, g_t + type, x, y);
				from_board_to_pattern(p + i, tmp);
				p[i].ntet = type;
				clean_board(tmp, 4);
				i++;
				y++;
			}
			x++;
		}
		type++;
	}
	free_board(tmp);
	return(1);
}

int get_id(pattern *p, char *str)
{
	int i;
	
	i = 0;
	while(p[i].s[0])
	{
		printf("1p %s\n", p[i].s);
		if (ft_strncmp(p[i].s, str, 20) == 0)
			return(p[i].ntet);
		i++;
	}
	return (-1);
}

int   read_file(const int fd)
{
	pattern	p[19 * 16];
	char	buf[22];
	int i;
	int type;
	int nread;

	ft_memset(p, 0, 19 * 16 * sizeof(pattern));
	fill_pattern(p);
	i = 0;
	while (i < MAX_FIG)
	{
		printf("2p %d\n", i);
		nread = read(fd, buf, 21);
		buf[21] = '\0';
		if ((type = get_id(p, buf)) == -1)
		{
			ft_putstr("error\n");
			return(0);
		}
		if (nread == 20)
			return (1);
		i++;
	}
	if (i == MAX_FIG)
	{
		ft_putstr("error\n");
		return(0);
	}
	return (1);
}
