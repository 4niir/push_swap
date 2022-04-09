RED=$'\x1b[31m
GREEN=$'\x1b[32m
PURPLE=$'\x1b[35m

NAME = push_swap
BONUS = checker
OBJB = Bonus

HEADER = push_swap.h \

BON_HEADER = Bonus/push_swap_bonus.h \

CC = gcc
FLAGS = -Wall -Wextra -Werror

MAND_FILES = main.c \
		error_handler.c \
		check_digit.c \
		stack.c \
		push.c \
		swap.c \
		rotate.c \
		reverse_rotate.c \
		algo.c \
		algo_utils.c \
		sorting_3.c \

BONU_FILES = Bonus/check_digit_bonus.c \
			Bonus/error_handler_bonus.c \
			Bonus/check_digit_bonus.c \
			Bonus/stack_bonus.c \
			Bonus/push_bonus.c \
			Bonus/swap_bonus.c \
			Bonus/rotate_bonus.c \
			Bonus/reverse_rotate_bonus.c \
			Bonus/checker.c \
			Bonus/checker_utils.c \

LIBFT_DIR = Libft
GETNEXTLINE_DIR = Bonus/gnl
LIBFT_LIB = $(LIBFT_DIR)/libft.a
GETNEXTLINE_LIB = $(GETNEXTLINE_DIR)/nextline.a

OBJ = $(MAND_FILES:%.c=%.o)
OBJ_BONU = $(BONU_FILES:%.c=%.o)
#OBJ_BONU = $(BONU_FILES:%.c=$(OBJB)/%.o)

all : $(NAME)

$(NAME): $(OBJ) $(LIBFT_LIB)
	@$(CC) $(FLAGS) $(LIBFT_LIB) $(OBJ) -o $(NAME)

bonus : $(NAME) $(OBJ_BONU) $(GETNEXTLINE_LIB)
	$(CC) $(FLAGS) $(LIBFT_LIB) $(GETNEXTLINE_LIB) $(OBJ_BONU) -o $(BONUS)

%.o : %.c $(HEADER) $(BONU_HEADER)
	@$(CC) $(FLAGS) -c $^
	@echo "$(GREEN)" "compiling $<"

$(LIBFT_LIB):
	@$(MAKE) -C $(LIBFT_DIR)

$(GETNEXTLINE_LIB):
	@$(MAKE) -C $(GETNEXTLINE_DIR)

clean:
	@rm -rf $(OBJ) $(OBJ_BONU)
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(MAKE) clean -C $(GETNEXTLINE_DIR)
	@echo "$(RED)" "cleaning ..."

fclean : clean
	@rm -rf $(NAME) $(BONUS) *.gch Bonus/*.gch
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(MAKE) fclean -C $(GETNEXTLINE_DIR)
	@echo "$(RED)" "full cleaning..."

re : fclean all
	@echo "$(PURPLE)" "remaking"

.PHONY: all clean fclean re bonus