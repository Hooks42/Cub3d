/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_no_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:19:01 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 12:35:50 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: pointer to cub struct
//	
//	- Check if there is no n in the map
//	
//	- Return 1 if there is no n
//	
//	- Return 0 if there is n
//	
//	===================================================================

bool	ft_is_no_n(t_cub *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= (data->line))
	{
		while (j < data->size)
		{
			if (data->map_tab[i][j] == 'N')
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}
