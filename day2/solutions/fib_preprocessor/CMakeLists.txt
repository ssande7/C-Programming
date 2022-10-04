CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(Fibonacci LANGUAGES C)

set(SRCS main.c valid_input.c fibonacci.c)

add_executable(fib_while ${SRCS})
add_executable(fib_do ${SRCS})
add_executable(fib_for ${SRCS})
add_executable(fib_recursive ${SRCS})

foreach(EXE IN ITEMS fib_while fib_do fib_for fib_recursive)
  target_compile_options(${EXE} PRIVATE -Wall -Wextra -Wpedantic -Werror)
endforeach()

target_compile_definitions(fib_while PRIVATE FIB_IMPL_WHILE)
target_compile_definitions(fib_do PRIVATE FIB_IMPL_DO)
target_compile_definitions(fib_for PRIVATE FIB_IMPL_FOR)
target_compile_definitions(fib_recursive PRIVATE FIB_IMPL_RECURSIVE)
