#ifndef FIBONACCI_H
#define FIBONACCI_H

typedef enum Algorithm {
  WHILE,
  DO,
  FOR,
  RECURSIVE,
  FIB_UNKNOWN
} Algorithm;

Algorithm parse_algorithm(const char* algo_str);

void print_fibonacci(const int fib_max, const Algorithm algo);

#endif
