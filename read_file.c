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

int fill_pattern(pattern *p, tetr *t)
{
	
	ft_memset(p->, '0', 19 * 16);
	while (p->ntet < 19)
	{
		while(x + t[ntet]->w < 5)
		{
			while(y + t[ntet]->h < 5)
			{
				p->s = ft_strcpy(p->s, buff);
				
				y++;
			}
			x++;
		}
		ntet++;
	}

}
char    *file_read(const int fd)
{
	pattern	*p[19 * 16];
	char	buf[22];
	char	*res;

	read(fd, buf, 21);
	buff[22] = '\0';
	
	
return (res);
}
