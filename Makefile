NAME  = so_long

SRCS  = 
MANDATOR = main.c \
		get_next_line.c \
   		get_next_line_utils.c \
		ft_split.c\
		ft_strcmp.c\
		ft_strlen.c\
		check_inside_map.c\

CC = @cc

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
MANDATOR_O = $(MANDATOR:.c=.o)
BNS_O = $(BNS:.c=.o)
NAME_O = checker

all : $(NAME)
$(NAME) : $(OBJS) $(MANDATOR_O)
	@$(CC) $(FLAGS) $(OBJS) $(MANDATOR_O) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	@echo "so_long is ready"

bonus : all

$(NAME_O) : $(BNS_O) $(OBJS)
	@$(CC) $(FLAGS) $(BNS_O) $(OBJS) -o $(NAME_O)
clean :
	@rm -f $(OBJS) $(BNS_O)
fclean : clean
	@rm -f $(NAME) $(NAME_O) $(MANDATOR_O)
bclean : clean
	@rm -f $(NAME_O)
re : fclean all
bre : bclean bonus