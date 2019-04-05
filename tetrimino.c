/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:45:42 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/04 16:20:06 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

tetr	g_t[19] =
{
	{
		"####",
		1,
		4,
		0,
		0
	},
	{
		"#"
		"#"
		"#"
		"#",
		4,
		1,
		0,
		0
	},
	{
		"##"
		"##",
		2,
		2,
		0,
		0
	},
	{
		"###"
		".#.",
		2,
		3,
		0,
		0
	},
	{
		".#."
		"###",
		2,
		3,
		0,
		0
	},
	{
		"#."
		"##"
		"#.",
		3,
		2,
		0,
		0
	},
	{
		".#"
		"##"
		".#",
		3,
		2,
		0,
		0
	},
	{
		"#."
		"##"
		".#",
		3,
		2,
		0,
		0
	},
	{
		".#"
		"##"
		"#.",
		3,
		2,
		0,
		0
	},
	{
		"##."
		".#."
		".##",
		3,
		3,
		0,
		0
	},
	{
		".##"
		".#."
		"##.",
		3,
		3,
		0,
		0
	},
	{
		"###"
		"#..",
		2,
		3,
		0,
		0
	},
	{
		"###"
		"..#",
		2,
		3,
		0,
		0
	},
	{
		"##"
		"#."
		"#.",
		3,
		2,
		0,
		0
	},
	{
		"#."
		"#."
		"##",
		2,
		3,
		0,
		0
	},
	{
		"#."
		"#."
		"##",
		2,
		3,
		0,
		0
	},
	{
		"##"
		".#"
		".#",
		3,
		2,
		0,
		0
	},
	{
		"..#"
		"###",
		2,
		3,
		0,
		0
	},
	{
		"#.."
		"###",
		2,
		3,
		0,
		0
	},

};