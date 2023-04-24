/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_manager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:49:39 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/24 05:56:51 by hook             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_parsing_manager(t_cub *data)
{
	if (ft_check_wall(data))
	{
		ft_putstr_fd(RED, "Error\nMap is not surrounded by a wall !\n", 2);
		exit(0);
	}
	if (ft_is_no_equal_line(data))
	{
		ft_putstr_fd(RED, "Error\nLines are not equal !\n", 2);
		exit(0);
	}
	if (ft_check_if_forbidden_char(data))
	{
		ft_putstr_fd(RED, "Error\nForbidden char detected !\n", 2);
		exit(0);
	}
	if (!ft_check_if_player(data))
		exit(0);
}
