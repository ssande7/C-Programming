#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

bool valid_input(const char*);

// Implementation using a while loop.
// To see alternative implementations,
// look at the fibonacci.c file in the
// solutions for day 2.
void print_fibonacci(const int fib_max) {
  // Just exit if we don't need to print anything
  if (fib_max <= 0) {
    printf("\n");
    return;
  }

  // Print the first value
  printf("1");

  // Calculate and print the rest of the sequence
  int current = 1, prev = 1;
  while (current <= fib_max) {
    printf(" %i", current);
    int next = prev + current;
    prev = current;
    current = next;
  }
  printf("\n");
}

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

bool valid_input(const char* input) {
  for (int i = 0; input[i] != '\0'; ++i) {
    if (!isdigit(input[i])) {
      return false;
    }
  }
  return true;
}
