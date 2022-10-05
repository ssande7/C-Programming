#include <stdio.h>
#include <stdlib.h>
#include "valid_input.h"
#include "fibonacci.h"


int main(int argc, char* argv[]) {
  // Note you will need to change this to allow the 2nd input parameter
  if (argc != 2) {
    printf("ERROR: expected one input argument\n");
    return 1;
  }
  if (!valid_input(argv[1])) {
    printf("ERROR: invalid input!\n");
    return 2;
  }
  int fib_max = atoi(argv[1]);

  // Change this to allow runtime algorithm selection.
  // Consider adding a parse_algorithm() function to fibonacci.h
  // that takes in a string and returns a member of an enum, then
  // the print_fibonacci function can take the enum value as an
  // additional input argument
  print_fibonacci(fib_max);

  return 0;
}

