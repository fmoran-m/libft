NAME = libft.a

FLAGS := -Wall -Wextra -Werror 

RM = rm -f

SRC = ft_isalpha.c ft_isdigit.c

OBJS = ${SRC:.c=.o}

all:	$(NAME)

%.o:%.c
		gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)
