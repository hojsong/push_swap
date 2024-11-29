# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 16:08:11 by hojsong           #+#    #+#              #
#    Updated: 2022/12/15 20:14:55 by hojsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAG = -Wall -Wextra -Werror
HEAD = srcs/push_swap.h
NAME = push_swap
NAME_BO = checker
SRCS = srcs/m_util1.c srcs/m_util2.c srcs/m_util3.c\
	   srcs/p_util.c srcs/p_util2.c srcs/p_util3.c srcs/push_swap.c\
	   srcs/al_1.c srcs/al_2.c srcs/al_3.c srcs/al_4.c srcs/al_5.c
SRCS_BO = bonus/m_util1.c bonus/m_util2.c bonus/m_util3.c\
		  srcs/p_util.c srcs/p_util2.c srcs/p_util3.c\
		  bonus/push_swap_bonus.c
OBJS = $(SRCS:.c=.o)
OBJS_BO = $(SRCS_BO:.c=.o)

ifdef BONUS
	OBJ_CUR = $(OBJS_BO)
	NAME_CUR = $(NAME_BO)
else
	OBJ_CUR = $(OBJS)
	NAME_CUR = $(NAME)
endif

all : $(NAME_CUR)
	
.c.o :
	$(CC) $(CFLAG) -c $< -o $@ -I $(HEAD)
$(NAME_CUR) : $(OBJ_CUR)
	$(CC) $(CFLAG) -o $(NAME_CUR) $(OBJ_CUR)
clean :
	rm -rf $(OBJS) $(OBJS_BO)
fclean : clean
	rm -rf $(NAME) $(NAME_BO)
re : fclean all

bonus :
	make BONUS=1 $(NAME_BO)

.PHONY : all re clean fclean bonus
