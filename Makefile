NAME = engine.a

FLAG = -Wall -Wextra -Werror -lm

FILES = *.c

NFLAG = -lbsd -lmlx -lXext -lX11 

all:
	gcc ${FLAG} ${FILES} ${NFLAG} -o start

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

fclean: clean
	rm -rf *.o

.PHONY: all fclean clean re
