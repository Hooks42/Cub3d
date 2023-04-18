/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_no_e.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:23:55 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 12:35:46 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: pointer to cub struct
//	
//	- Check if there is no e in the map
//	
//	- Return 1 if there is no e
//	
//	- Return 0 if there is e
//	
//	===================================================================

bool	ft_is_no_e(t_cub *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= (data->line))
	{
		while (j < data->size)
		{
			if (data->map_tab[i][j] == 'E')
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}
