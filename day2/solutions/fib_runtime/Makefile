cflags := -Wall -Wextra -Wpedantic -Werror -O3
CC := gcc
sources := main.c fibonacci.c valid_input.c

all: fib

fib: ${sources}
	${CC} ${cflags} $^ -o $@
