/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:15:12 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/24 05:56:58 by hook             ###   ########.fr       */
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
