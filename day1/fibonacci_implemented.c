#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

bool valid_input(const char*);

/* -----------------------------------------------
 TODO: Write the print_fibonacci function.
       It should take a single integer as input,
       return nothing, and print all Fibonacci
       numbers up to and including that integer.

 Examples:
 if input = 8, print:
 1 1 2 3 5 8
 if input = 1, print:
 1 1
 if input = 4, print:
 1 1 2 3
 if input = 0, don't print anything.
----------------------------------------------- */

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("ERROR: expected one input argument\n");
    return 1;
  }
  int blah[argc];
  if (!valid_input(argv[1])) {
    printf("ERROR: invalid input!\n");
    return 2;
  }
  int fib_max = atoi(argv[1]);
  print_fibonacci(fib_max);
  return 0;
}

bool valid_input(const char* input) {
  for (int i = 0; input[i] != '\0'; ++i) {
    if (!isdigit(input[i])) {
      return false;
    }
  }
  return true;
}
