NAME = push_swap

BONUS_NAME = checker

SRCS	=		check_args/ft_is_sorted.c \
				check_args/ft_parse.c \
				ft_push_sup_med.c \
				get_min_max.c \
				index.c \
				libft/ft_atoi.c \
				libft/ft_isdigit.c \
				libft/ft_split.c \
				libft/ft_swap.c \
				linked_lists/add_back.c \
				linked_lists/add_front.c \
				linked_lists/display_lists.c \
				linked_lists/lstclear.c \
				linked_lists/lstsize.c \
				operations/push.c \
				operations/reverse_rotate.c \
				operations/rotate.c \
				operations/swap.c \
				push_swap.c \
				sort_max/algo_sort_max.c \
				sort_max/algo_sort_max_annex.c \
				sort_max/execution_methodes.c \
				sort_max/execution_methodes_annex.c \
				sort_max/last_sort.c \
				sort_max/big_sort.c \
				sort_max/methodes.c \
				sort_min/sort_2.c \
				sort_min/sort_3.c \
				sort_min/sort_4.c \
				sort_min/sort_5.c \
				sort_min/sort_5_annex.c \
				sort_min/small_sort.c \

BONUS_SRC	=	bonus/bonus.c \
				check_args/ft_is_sorted.c \
				check_args/ft_parse.c \
				linked_lists/add_back.c \
				linked_lists/display_lists.c \
				linked_lists/lstclear.c \
				linked_lists/lstsize.c \
				libft/ft_atoi.c \
				libft/ft_isdigit.c \
				libft/ft_split.c \
				bonus/operation_swap.c \
				bonus/operation_push.c \
				bonus/operation_rotate.c \
				bonus/operation_reverse_rotate.c \
				bonus/parsing.c \
				libft/ft_strncmp.c \
				bonus/get_next_line/get_next_line.c \
				bonus/get_next_line/get_next_line_utils.c \

OBJS		=	${SRCS:.c=.o}
BONUS_OBJ	=	${BONUS_SRC:.c=.o}

CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM = 	rm -rf

all:	${NAME}

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus : $(BONUS_NAME)

$(BONUS_NAME) : $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(BONUS_OBJ) -o $(BONUS_NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJS} ${BONUS_OBJ}

fclean: clean
	${RM} ${NAME}
	${RM} ${BONUS_NAME}

re: fclean all bonus

.PHONY: all clean fclean re
