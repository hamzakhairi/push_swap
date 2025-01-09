CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude

SRCDIR = src
FUNCDIR = push_swap_function
INCDIR = include
OBJDIR = obj

# Source files
SRC = $(SRCDIR)/handle_error.c \
      $(SRCDIR)/init_stack.c \
      $(SRCDIR)/validation.c \
      $(FUNCDIR)/reversw_rotate.c \
      $(FUNCDIR)/rotat.c \
      $(FUNCDIR)/swap.c \
      push_swap.c

OBJ = $(SRC:%.c=$(OBJDIR)/%.o)
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $@
	@echo "Compilation of $(NAME) is complete!"

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< into $@"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)
	@echo "Object files removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed!"

re: fclean all

.PHONY: all clean fclean re

