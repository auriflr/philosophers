NAME= philo

CFLAGS= gcc -Wall -Wextra -Werror 
RM = rm -f
AR = ar rcs
MKDIR = mkdir -p


SRC_DIR = main.c init.c lib.c

OBJECTS = $(addprefix $(OBJS_DIR)/, $(SOURCES:.c=.o))

OBJS_DIR = objs

$(OBJS_DIR)/%.o: %.c
	$(MKDIR) $(dir @)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re