/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:13:34 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 14:00:29 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int main(int argc, char *argv[])
{
	t_cub	data;

	ft_check_cub(argc, argv);
	ft_init_struct(argc, argv, &data);
	ft_create_map_in_tab(&data);
	ft_parsing_manager(&data);
	ft_free(&data);
}