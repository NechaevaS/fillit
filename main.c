/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:45:12 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/26 15:24:31 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "fillit.h"

int main(int argc, char **argv)
{
	int		fd;
	int		i;
	tetr *all_read[MAX_FIG];
	
	ft_memset(all_read, 0, sizeof(tetr *)*MAX_FIG);
	i = 1;	
	if (argc > 1)
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
				return (-1);
			else
			{
				if(read_file(fd, all_read))
					solve(all_read);
			}
			i++;
		}
	}
//	system("leaks a.out");
	return (0);
}

