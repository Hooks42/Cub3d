/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_no_w.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:23:24 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 12:35:55 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: pointer to cub struct
//	
//	- Check if there is no w in the map
//	
//	- Return 1 if there is no w
//	
//	- Return 0 if there is w
//	
//	===================================================================

bool	ft_is_no_w(t_cub *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= (data->line))
	{
		while (j < data->size)
		{
			if (data->map_tab[i][j] == 'W')
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}
