/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:45:12 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/05 16:06:49 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "fillit.h"


int main(int argc, char **argv)
{
	int		fd;
	int		i;
	
	i = 1;	
	if (argc > 1)
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
				return (-1);
			else
				printf("%d\n", read_file(fd));
			i++;
		}
	}
	//system("leaks a.out");
	return (0);
}
