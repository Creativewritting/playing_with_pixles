# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcone <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/31 09:55:24 by jcone             #+#    #+#              #
#    Updated: 2017/02/13 17:15:47 by jcone            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
OTHERFLAGS = -framework OpenGl -framework AppKit
NAME = playing_with_pixels
CNAME = playing_with_pixels.c draw_line.c calculate_increase_for_line.c place_point_for_line.c draw_angled_line.c draw_circle.c fill_circle.c draw_partial_circle.c draw_rectangle.c if_hook.c draw_desk.c draw_rectangle_textured.c
HNAME = playing_with_pixels.h
LIB = ./minilibx_macos/libmlx.a
ONAME = $(CNAME:.c=.o)
all: $(NAME)

$(NAME):
	make all -C ./minilibx_macos
	$(CC)  -c $(CNAME) $(HNAME) 
	$(CC)  main.c $(LIB) $(ONAME) $(OTHERFLAGS)
	mv a.out $(NAME)

re: fclean all

clean:
	rm -f $(ONAME)
	make clean -C ./minilibx_macos

fclean: clean
	rm -f $(NAME)
	rm -f get_next_line.h.gch

