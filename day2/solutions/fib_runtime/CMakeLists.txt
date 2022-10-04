CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(Fibonacci LANGUAGES C)

set(SRCS main.c valid_input.c fibonacci.c)

add_executable(fib ${SRCS})
target_compile_options(${EXE} PRIVATE -Wall -Wextra -Wpedantic -Werror)
