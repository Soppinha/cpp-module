NAME	= brain

CPP		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp
OBJDIR	= obj
OBJS	= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CPP) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re