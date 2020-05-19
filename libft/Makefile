# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/16 02:03:12 by btaxider          #+#    #+#              #
#    Updated: 2020/05/19 14:35:46 by btaxider         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
SRC =
BONUS =
HEADER = libft.h
OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

ifdef WITH_BONUS
OBJ_FILES = $(OBJS) $(BONUS_OBJS)
else
OBJ_FILES = $(OBJS)
endif

SRC += ft_atoi.c
SRC += ft_bzero.c
SRC += ft_calloc.c
SRC += ft_isalnum.c
SRC += ft_isalpha.c
SRC += ft_isascii.c
SRC += ft_isdigit.c
SRC += ft_isprint.c
SRC += ft_itoa.c
SRC += ft_memccpy.c
SRC += ft_memchr.c
SRC += ft_memcmp.c
SRC += ft_memcpy.c
SRC += ft_memmove.c
SRC += ft_memset.c
SRC += ft_putchar_fd.c
SRC += ft_putstr_fd.c
SRC += ft_putendl_fd.c
SRC += ft_putnbr_fd.c
SRC += ft_split.c
SRC += ft_strchr.c
SRC += ft_strcpy_bonus.c
SRC += ft_strdup.c
SRC += ft_strjoin.c
SRC += ft_strlcat.c
SRC += ft_strlcpy.c
SRC += ft_strlen.c
SRC += ft_strmapi.c
SRC += ft_strncmp.c
SRC += ft_strnstr.c
SRC += ft_strrchr.c
SRC += ft_strtrim.c
SRC += ft_substr.c
SRC += ft_tolower.c
SRC += ft_toupper.c

BONUS += ft_lstnew.c
BONUS += ft_lstadd_back.c
BONUS += ft_lstadd_front.c
BONUS += ft_lstclear.c
BONUS += ft_lstdelone.c
BONUS += ft_lstiter.c
BONUS += ft_lstlast.c
BONUS += ft_lstmap.c
BONUS += ft_lstsize.c

.PHONY: all, re, clean, fclean, bonus

all: $(NAME)

$(NAME): $(OBJ_FILES) $(HEADER)
	@echo "Library in the making..."
	@ar rc $(NAME) $(OBJ_FILES)
	@ranlib $(NAME)
	@echo "Done!"

%.o: %.c $(HEADER)
	@gcc $(FLAGS) -c $< -o $@

bonus:
	@$(MAKE) WITH_BONUS=1 all

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

so:
	gcc -fPIC $(FLAGS) -c $(SRC)
	gcc -shared -Wl,-soname,libft.so -o libft.so $(OBJ)

re: fclean all


