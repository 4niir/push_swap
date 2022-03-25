RED=$'\x1b[31m
GREEN=$'\x1b[32m
PURPLE=$'\x1b[35m

NAME = push_swap

HEADER = push_swap.h\
		libft/libft.h\

CC = gcc
FLAGS = -Wall -Wextra -Werror

CFILES = main.c \
		error_handler.c \
		check_digit.c \
		stack.c \
		push.c \
		swap.c \
		rotate.c \
		reverse_rotate.c \
		algo.c \
		algo_utils.c \

LIBFT_DIR = Libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

OBJ = $(CFILES:.c=.o)

all : $(NAME)

$(NAME): $(OBJ) $(LIBFT_LIB) 
	@$(CC) $(CFLAGS) $(LIBFT_LIB) $(OBJ) -o $(NAME)

%.o : %.c $(HEADER)
	@$(CC) $(CFLAGS) $^ -c 
	@echo "$(GREEN)" "compiling $<"

$(LIBFT_LIB):
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	@rm -rf $(OBJ)
	$(MAKE) clean -C $(LIBFT_DIR)
	@echo "$(RED)" "cleaning..."

fclean : clean
	@rm -rf $(NAME) *.gch
	$(RM) $(LIBFT_LIB) 
	@echo "$(RED)" "full cleaning..."

re : fclean all
	@echo "$(PURPLE)" "remaking"

.PHONY: all clean fclean re 