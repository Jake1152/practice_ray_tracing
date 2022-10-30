NAME = CH02
CC = cc
RM = rm -f 
INCLUDE = include
SRCS_DIR = src
UTILS_DIR = utils

SRCS = $(addprefix $(SRCS_DIR)/, \
					main.c \
					print.c \
		)
UTILS_SRCS = $(addprefix $(SRCS_DIR)/$(UTILS_DIR)/, \
										vec3_utils.c \
				)

OBJS = $(SRCS:.c=.o) $(UTILS_SRCS:.c=.o)

%.o : %.c
	$(CC) -I ./$(INCLUDE)/ -c $^ -o $@

$(NAME) : $(OBJS)
	$(CC) -o $@ $^

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :
	make fclean
	make all

.PHONY: all clean fclean re