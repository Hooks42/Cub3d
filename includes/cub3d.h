/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 07:49:35 by ceatgie           #+#    #+#             */
/*   Updated: 2023/04/18 13:59:05 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <fcntl.h>
# include <get_next_line.h>

//	----------------------------------------------------------------------------
//										Colour
//	----------------------------------------------------------------------------

# define BLACK "\001\033[1;30m\002"
# define RED "\001\033[1;31m\002"
# define GREEN "\001\033[1;32m\002"
# define YELLOW "\001\033[1;33m\002"
# define BLUE "\001\033[1;34m\002"
# define PURPLE "\001\033[1;35m\002"
# define CYAN "\001\033[1;36m\002"
# define WHITE "\001\033[1;37m\002"
# define RESET "\001\033[0m\002"

//	----------------------------------------------------------------------------
//										Struct
//	----------------------------------------------------------------------------

typedef struct	cub3d
{
	int		argc;
	char	**argv;
	int		line;
	int		size;
	char	**map_tab;
}			t_cub;

//	/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
//	\/\/\/\\/\/\/\/\/\/\/\/\/\/\/\/\\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\//

//	----------------------------------------------------------------------------
//										Libft
//	----------------------------------------------------------------------------

int		ft_strlen(char *str);
void	ft_putstr_fd(char *colour, char *str, int fd);

//	----------------------------------------------------------------------------
//										Map
//	----------------------------------------------------------------------------

void	ft_create_map_in_tab(t_cub *data);

//	----------------------------------------------------------------------------
//										Parsing
//	----------------------------------------------------------------------------

bool	ft_is_no_n(t_cub *data);
bool	ft_is_no_w(t_cub *data);
bool	ft_is_no_s(t_cub *data);
bool	ft_is_no_e(t_cub *data);
int		ft_is_multiple_n(t_cub *data);
int		ft_is_multiple_e(t_cub *data);
int		ft_is_multiple_s(t_cub *data);
int		ft_is_multiple_w(t_cub *data);
bool	ft_check_cub_format(char *argv);
void	ft_check_cub(int argc, char *argv[]);
bool	ft_check_if_player(t_cub *data);
bool	ft_check_wall(t_cub *data);
bool	ft_check_if_forbidden_char(t_cub *data);
bool	ft_is_no_equal_line(t_cub *data);
void	ft_parsing_manager(t_cub *data);

//	----------------------------------------------------------------------------
//										Utils
//	----------------------------------------------------------------------------

void	ft_init_struct(int argc, char *argv[], t_cub *data);
int		ft_how_many_lines(t_cub *data);
int		ft_size(t_cub *data);
void	ft_free(t_cub *data);


#endif