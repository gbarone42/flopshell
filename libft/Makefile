# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adpassar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 20:59:05 by adpassar          #+#    #+#              #
#    Updated: 2023/07/04 17:39:42 by adpassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c\
     ft_isdigit.c\
     ft_isalnum.c\
     ft_isascii.c\
     ft_isprint.c\
     ft_strlen.c\
     ft_memset.c\
     ft_bzero.c\
     ft_memcpy.c\
     ft_memmove.c\
     ft_memccpy.c\
     ft_strlcpy.c\
     ft_strlcat.c\
     ft_toupper.c\
     ft_tolower.c\
     ft_strchr.c\
     ft_strrchr.c\
     ft_strncmp.c\
     ft_memchr.c\
     ft_memcmp.c\
     ft_strnstr.c\
     ft_atoi.c\
     ft_calloc.c\
     ft_strdup.c\
     ft_substr.c\
     ft_strjoin.c\
     ft_strtrim.c\
     ft_split.c\
     ft_itoa.c\
     ft_strmapi.c\
     ft_striteri.c\
     ft_putchar_fd.c\
     ft_putstr_fd.c\
     ft_putendl_fd.c\
     ft_putnbr_fd.c\
     ft_atoi_long.c\
     ft_lstnewnum.c\
     ft_get_distance.c\
     ft_lstnew.c\
     ft_lstadd_front.c\
     ft_lstsize.c\
     ft_lstlast.c\
     ft_lstadd_back.c\
     ft_lstdelone.c\
     ft_lstclear.c\
     ft_lstiter.c\
     ft_lstadd_backnum.c\
     ft_free_list.c\
     ft_copy_list.c\
     ft_index_list.c\
     ft_lstadd_frontnum.c\
     ft_lstlastnum.c\
     ft_isspace.c\
#     ft_putchar\
#     ft_putstr\

SRC_DIR = ./src/

SRCP = $(addprefix $(SRC_DIR),$(SRC))

OBJ = $(SRCP:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs  $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.SILENT: $(OBJ)