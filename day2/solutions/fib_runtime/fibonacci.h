#ifndef FIBONACCI_H
#define FIBONACCI_H

typedef enum fib_algorithm_t {
  WHILE,
  DO,
  FOR,
  RECURSIVE,
  FIB_UNKNOWN
} fib_algorithm_t;

fib_algorithm_t parse_algorithm(const char* algo_str);

void print_fibonacci(const int fib_max, const fib_algorithm_t algo);

#endif
