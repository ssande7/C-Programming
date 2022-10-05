#include <stdio.h>
#include <stdlib.h>
#include "valid_input.h"
#include "fibonacci.h"


int main(int argc, char* argv[]) {
  if (argc < 2) {
    printf("ERROR: expected one or more input arguments\n");
    return 1;
  }
  if (!valid_input(argv[1])) {
    printf("ERROR: invalid input!\n");
    return 2;
  }
  int fib_max = atoi(argv[1]);

  // Parse algorithms or choose default
  if (argc == 2) print_fibonacci(fib_max, WHILE);
  else {
    for (int iarg = 2; iarg < argc; ++iarg) {
      print_fibonacci(fib_max, parse_algorithm(argv[iarg]));
    }
  }

  return 0;
}

