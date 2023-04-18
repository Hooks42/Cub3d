# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 09:28:09 by ceatgie           #+#    #+#              #
#    Updated: 2023/04/18 13:59:55 by ceatgie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Cub3d

SRCS	=	srcs/main.c\
			srcs/Get_Next_Line/get_next_line_utils.c\
			srcs/Get_Next_Line/get_next_line.c\
			srcs/Libft/ft_strlen.c\
			srcs/Libft/ft_putstr_fd.c\
			srcs/Map/ft_create_map_in_tab.c\
			srcs/Parsing/Check_Multiple/ft_is_multiple_e.c\
			srcs/Parsing/Check_Multiple/ft_is_multiple_n.c\
			srcs/Parsing/Check_Multiple/ft_is_multiple_s.c\
			srcs/Parsing/Check_Multiple/ft_is_multiple_w.c\
			srcs/Parsing/Check_If_No/ft_is_no_e.c\
			srcs/Parsing/Check_If_No/ft_is_no_n.c\
			srcs/Parsing/Check_If_No/ft_is_no_s.c\
			srcs/Parsing/Check_If_No/ft_is_no_w.c\
			srcs/Parsing/Check_If/ft_check_if_player.c\
			srcs/Parsing/Check_If/ft_check_wall.c\
			srcs/Parsing/Check_If/ft_check_if_forbidden_char.c\
			srcs/Parsing/Check_If/ft_check_if_no_equal_line.c\
			srcs/Parsing/ft_check_cub_format.c\
			srcs/Parsing/ft_check_cub.c\
			srcs/Parsing/ft_parsing_manager.c\
			srcs/Utils/ft_free.c\
			srcs/Utils/ft_how_many_lines.c\
			srcs/Utils/ft_init_struct.c\
			srcs/Utils/ft_size.c\


OBJS= $(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Iincludes -Werror -Wextra -g3

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re