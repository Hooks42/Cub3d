/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_player.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:32:12 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 13:30:04 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: pointer to cub struct
//	
//	- Puts each position presence check return in an array and checks
//		if there is only 1 type of position
//	
//	- Check if there are duplicates of this position
//	
//	- Return 0 if check has failed
//	
//	===================================================================

bool	ft_check_if_player(t_cub *data)
{
	int	tab[4];
	int cpt;
	int	i;

	i = 0;
	cpt = 0;
	tab[0] = ft_is_no_e(data);
	tab[1] = ft_is_no_n(data);
	tab[2] = ft_is_no_s(data);
	tab[3] = ft_is_no_w(data);
	while (i < 4)
	{
		if (tab[i] == 0)
			cpt++;
		i++;
	}
	if (cpt > 1)
		return (ft_putstr_fd(RED,
			"Error\nThere is more than 1 start position !\n", 2), 0);
	if (!ft_is_multiple_e(data) || !ft_is_multiple_n(data) || !ft_is_multiple_s(data)
		|| !ft_is_multiple_w(data))
		return (1);
	return (ft_putstr_fd(RED,
		"Error\nThere is multiple same start positions !\n", 2), 0);
}