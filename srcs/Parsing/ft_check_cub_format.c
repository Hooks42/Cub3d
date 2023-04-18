/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cub_format.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 07:48:56 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 10:09:00 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: argv
//	
//	- Check the last 4 character of argv[2] and check if entry finish
//		With .cub
//	
//	- Return 1 if cub format is correct
//	
//	- Return 0 if cub format is incorrect
//	
//	===================================================================

bool	ft_check_cub_format(char *argv)
{
	int	end;

	end = ft_strlen(argv) - 1;
	if (argv[end] != 'b' || argv[end - 1] != 'u' || argv[end - 2] != 'c'
		|| argv[end - 3] != '.')
		return (1);
	return (0);
}