/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:44:01 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 11:24:05 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: argc, argv
//	
//	- Orient the error message according to argc
//	
//	- Exit with error 0 if something is going wrong
//	
//	===================================================================

void	ft_check_cub(int argc, char *argv[])
{
	if (argc < 2)
	{
		ft_putstr_fd(RED, "Error\nPlease enter a .cub file\n", 2);
		exit(0);
	}
	if (argc > 2)
	{
		ft_putstr_fd(RED,
			"Error\nPlease enter a .cub file & nothing more\n", 2);
		exit(0);
	}
	if (argc == 2)
	{
		if (ft_check_cub_format(argv[1]))
		{
			ft_putstr_fd(RED, "Error\nPlease put .cub file\n", 2);
			exit(0);
		}
	}
}