/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_forbidden_char.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:37:45 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 13:55:54 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: pointer to cub struct
//	
//	- Check if there are not forbidden char in the map
//	
//	- Return 1 if there are forbidden char
//
//	- Return 0 if there are not forbidden char
//	
//	===================================================================

bool	ft_check_if_forbidden_char(t_cub *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= data->line)
	{
		while (j < data->size)
		{
			if (!(data->map_tab[i][j] == '1' || data->map_tab[i][j] == '0'
				|| data->map_tab[i][j] == 'S' || data->map_tab[i][j] == 'W'
				|| data->map_tab[i][j] == 'E' || data->map_tab[i][j] == 'N'))
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}