FLAG = -Wall -Wextra -Werror

FILES = *.c

NFLAG = -lbsd -lmlx -lXext -lX11 

all:
	gcc ${FLAG} ${FILES} ${NFLAG} -o start
