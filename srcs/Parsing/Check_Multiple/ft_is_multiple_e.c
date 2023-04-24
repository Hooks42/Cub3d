/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_multiple_e.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:38:16 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/24 05:56:40 by hook             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: pointer to cub struct
//
//	- Check if there is e in the map
//	
//	- Then check if there is multiple e in the map
//	
//	- Return -1 if there is no e in the map
//	
//	- Return 1 if there is multiple e in the map
//	
//	- Return 0 if there is no multiple e in the map
//	
//	===================================================================

int	ft_is_multiple_e(t_cub *data)
{
	int		i;
	int		j;
	int		cpt;

	if (ft_is_no_e(data))
		return (-1);
	i = 0;
	j = 0;
	cpt = 0;
	while (i <= data->line)
	{
		while (j < data->size)
		{
			if (data->map_tab[i][j] == 'E')
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
