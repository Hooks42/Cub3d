/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:38:55 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 12:02:29 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_free(t_cub *data)
{
	int	i;

	i = -1;
	if (!data->map_tab)
		return (ft_putstr_fd(RED, "Error\nCan't free because map_tab is NULL\n", 2));
	while (data->map_tab[++i])
		free(data->map_tab[i]);
	free(data->map_tab);
}
