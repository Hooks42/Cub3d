/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_multiple_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:42:09 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 12:54:09 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: pointer to cub struct
//
//	- Check if there is s in the map
//	
//	- Then check if there is multiple s in the map
//	
//	- Return -1 if there is no s in the map
//	
//	- Return 1 if there is multiple s in the map
//	
//	- Return 0 if there is no multiple s in the map
//	
//	===================================================================

int	ft_is_multiple_s(t_cub *data)
{
	int	i;
	int	j;
	int	cpt;

	if (ft_is_no_s(data))
		return (-1);
	i = 0;
	j = 0;
	cpt = 0;
	while (i <= data->line)
	{
		while (j < data->size)
		{
			if (data->map_tab[i][j] == 'S')
				cpt++;
			j++;
		}
		j = 0;
		i++;
	}
	if (cpt > 1)
		return (1);
	else
		return (0);
}