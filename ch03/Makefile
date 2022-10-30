NAME = ch03_out
CC = cc
RM = rm -f 
INCLUDE = include
SRCS_DIR = src
SCENE_DIR = scene
TRACE_DIR = trace
UTILS_DIR = utils

SRCS = $(addprefix $(SRCS_DIR)/, \
					main.c \
					print.c \
		)

SCENE_SRCS = $(addprefix $(SRCS_DIR)/$(SCENE_DIR)/, \
										canvas.c \
										scene.c \
				)

TRACE_SRCS = $(addprefix $(SRCS_DIR)/$(TRACE_DIR)/, \
										ray.c \
				)


UTILS_SRCS = $(addprefix $(SRCS_DIR)/$(UTILS_DIR)/, \
										vec3_utils.c \
				)

OBJS = $(SRCS:.c=.o) $(TRACE_SRCS:.c=.o) $(SCENE_SRCS:.c=.o) $(UTILS_SRCS:.c=.o)

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