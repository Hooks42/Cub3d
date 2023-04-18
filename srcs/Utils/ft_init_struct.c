/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:15:12 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 11:59:16 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: argc, argv, pointer to cub struct
//	
//	- Initialise every variables of the cub struct
//	
//	===================================================================

void	ft_init_struct(int argc, char *argv[], t_cub *data)
{
	data->argc = argc;
	data->argv = argv;
	data->map_tab = NULL;
	data->line = ft_how_many_lines(data);
	if (data->line == -1)
		exit(0);
	data->size = ft_size(data);
	if (data->size == -1)
		exit(0);
}