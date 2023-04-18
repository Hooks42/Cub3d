/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_how_many_lines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:21:22 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 12:05:23 by ceatgie          ###   ########.fr       */
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

int	ft_how_many_lines(t_cub *data)
{
	int		fd;
	int		red;
	int		cpt;
	int		i;
	char	buffer[1024];

	cpt = 0;
	fd = open(data->argv[1], O_RDONLY);
	red = read(fd, buffer, 1024);
	if (red == -1)
		return (ft_putstr_fd(RED, "Error\nRead fonction return -1\n", 2), -1);
	buffer[red] = '\0';
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			cpt++;
		}
		i++;
	}
	close(fd);
	return (cpt);
}