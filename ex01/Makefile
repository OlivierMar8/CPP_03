#Makefile   CPP03   ex01

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

NAME		= scavTrap

CC			= c++ #c++-12

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra -std=c++98 -g


all:		${NAME}

%.o: %.cpp
			$(CC) $(CFLAGS) -c $< 

${NAME}:	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
			

.PHONY:		all clean fclean  re

clean:	
			$(RM) $(OBJS)


fclean:		clean
			$(RM) $(NAME)

re:			fclean all
