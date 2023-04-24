/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:51:02 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/24 06:07:06 by hook             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_putstr_fd(char *color, char *str, int fd)
{
	write(fd, color, ft_strlen(color));
	write(fd, str, ft_strlen(str));
	write(fd, RESET, ft_strlen(RESET));
}
