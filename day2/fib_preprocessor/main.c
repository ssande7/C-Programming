#include <stdio.h>
#include <stdlib.h>
#include "valid_input.h"
#include "fibonacci.h"


int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("ERROR: expected one input argument\n");
    return 1;
  }
  if (!valid_input(argv[1])) {
    printf("ERROR: invalid input!\n");
    return 2;
  }
  int fib_max = atoi(argv[1]);
  print_fibonacci(fib_max);
  return 0;
}

