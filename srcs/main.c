/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:13:34 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/24 06:10:32 by hook             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char *argv[])
{
	t_cub	data;

	ft_check_cub(argc, argv);
	ft_init_struct(argc, argv, &data);
	ft_create_map_in_tab(&data);
	ft_parsing_manager(&data);
	ft_free(&data);
}
