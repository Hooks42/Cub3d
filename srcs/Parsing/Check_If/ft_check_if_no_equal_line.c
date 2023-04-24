/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_no_equal_line.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:43:46 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/24 05:56:24 by hook             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: pointer to cub struct
//	
//	- Get the size of the first row and compare all others with
//	
//	- Return 1 if there are no equal line
//
//	- Return 0 if there are equal line
//	
//	===================================================================

bool	ft_is_no_equal_line(t_cub *data)
{
	int	size;
	int	i;

	size = ft_strlen(data->map_tab[0]);
	while (i < data->line)
	{
		if (ft_strlen(data->map_tab[i]) != size)
			return (1);
		i++;
	}
	if (ft_strlen(data->map_tab[i]) != size - 1)
		return (1);
	return (0);
}
