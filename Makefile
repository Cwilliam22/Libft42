# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 13:49:41 by wcapt             #+#    #+#              #
#    Updated: 2024/10/14 12:01:58 by wcapt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#Fichiers
SRC =	ft_itoa.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_tolower.c ft_toupper.c ft_atoi.c ft_strlen.c \
		ft_strdup.c ft_bzero.c ft_putnbr_fd.c ft_putstr_fd.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_split.c ft_strchr.c ft_strrchr.c ft_calloc.c \
		ft_memset.c ft_memchr.c ft_strjoin.c ft_strtrim.c ft_strlcpy.c \
		ft_memcpy.c ft_memmove.c ft_memcmp.c ft_striteri.c ft_strncmp.c \
		ft_strlcat.c ft_strmapi.c ft_substr.c ft_strnstr.c

#Fichiers bonus
SRCBONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

#Objets correspondants
OBJ = $(SRC:.c=.o)
OBJBONUS = $(SRCBONUS:.c=.o)

#Commande pour créer la bibliothèque (ar = bi statique)
AR = ar rcs

#Règle par défaut
all: $(NAME)

#Compilation de la bibliothèque (pour construire libft.a)
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

#Règle Bonus : ajouter les objets bonus
bonus: $(OBJBONUS)
	$(AR) $(NAME) $(OBJBONUS)

#Compilation des fichiers .o à partir des .c
#($<) => fichier source
#($@) => fichier cible
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Nettoyage des fichiers objets
clean:
	rm -f $(OBJ) $(OBJBONUS)

#Nettoyage complet : fichiers objets + bibliothèque
fclean: clean
	rm -f $(NAME)

#Reconstruction complète
re: fclean all

#Evite les conflits si des fichiers ont le même nom que les règles
.PHONY: all bonus clean fclean re
