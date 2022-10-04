cflags := -Wall -Wextra -Wpedantic -Werror -O3
CC := gcc
sources := main.c fibonacci.c valid_input.c

all: fib_while fib_do fib_for fib_recursive

fib_while: ${sources}
	echo Compiling 'while'
	${CC} ${cflags} $^ -o $@ -DFIB_IMPL_WHILE

fib_do: ${sources}
	echo Compiling 'do'
	${CC} ${cflags} $^ -o $@ -DFIB_IMPL_DO

fib_for: ${sources}
	echo Compiling 'for'
	${CC} ${cflags} $^ -o $@ -DFIB_IMPL_FOR

fib_recursive: ${sources}
	echo Compiling 'recursive'
	${CC} ${cflags} $^ -o $@ -DFIB_IMPL_RECURSIVE
