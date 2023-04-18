/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map_in_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:28:24 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 12:15:38 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

//	===================================================================
//								Commentary
//							   ------------
//	
//	- Take as parameters: pointer to cub struct
//	
//	- Calculate how many \n there is in FileDescriptor to know how many 
//		get_next_line we have to do to read the entire file
//	
//	- Return the number of get_next_line that we have to do to read the
//		entire file
//	
//	===================================================================

void	ft_create_map_in_tab(t_cub *data)
{
	int		i;
	int		fd;

	i = 0;
	fprintf(stderr, "line = %i\nsize = %i\n", data->line, data->size);
	data->map_tab = malloc(sizeof(char *) * (data->line + 2));
	if (!data->map_tab)
		return (ft_putstr_fd(RED, "Error\nMalloc of tab_map broke\n", 2));
	fd = open(data->argv[1], O_RDONLY);
	i = 0;
	while (i <= data->line)
	{
		data->map_tab[i] = get_next_line(fd);
		if (!data->map_tab[i])
			return (ft_putstr_fd(RED,
				"Error\nMalloc of tab_map using gnl broke\n", 2));
		i++;
	}
	data->map_tab[i] = NULL;
	close(fd);
}