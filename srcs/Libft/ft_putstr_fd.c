/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:51:02 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 10:08:54 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_putstr_fd(char *color, char *str, int fd)
{
	write(fd, color, ft_strlen(color));
	write(fd, str, ft_strlen(str));
	write(fd, RESET, ft_strlen(RESET));
}