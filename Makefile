# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adveres <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/01 14:01:46 by adveres           #+#    #+#              #
#    Updated: 2017/12/14 15:04:46 by adveres          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

FLAGS = -Wall -Werror -Wextra

OBJECT =	*.o	

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all 
	gcc -c $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJECT)
