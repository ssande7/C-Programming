#include "fibonacci.h"
#include <stdio.h>

void print_fibonacci_recursive(
    const int fib_max,
    const int prev,
    const int current
) {
  if (current > fib_max) {
    printf("\n");
    return;
  } else if (current == 1) printf("Recursive: 1 1");
  else printf(" %i", current);

  // Functions can call themselves!
  print_fibonacci_recursive(fib_max, current, prev + current);
}

void print_fibonacci_while(const int fib_max) {
  // Just exit if we don't need to print anything
  if (fib_max <= 0) {
    printf("\n");
    return;
  }

  // Print the first value
  printf("While: 1");

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

void print_fibonacci_do(const int fib_max) {
  // Just exit if we don't need to print anything
  if (fib_max <= 0) {
    printf("\n");
    return;
  }

  // Print the first value
  printf("Do: 1");

  // Calculate and print the rest of the sequence
  int current = 1, prev = 0, next = 1;
  do {
    prev = current;
    current = next;
    next = prev + current;
    printf(" %i", current);
  } while  (next <= fib_max);
  printf("\n");
}

void print_fibonacci_for(const int fib_max) {
  // Just exit if we don't need to print anything
  if (fib_max <= 0) {
    printf("\n");
    return;
  }

  // Print the first value
  printf("For: 1");

  // Calculate and print the rest of the sequence
  // Note the use of commas to declare multiple variables in the declaration
  // section of the for loop, and to perform multiple operations in the
  // increment step. This is not the most readable way to write this code,
  // but serves as an example of what can be done.
  for (
    int current = 1, prev = 1, next;
    current <= fib_max;
    next = prev + current, prev = current, current = next
  ) {
    printf(" %i", current);
  }
  printf("\n");
}

void print_fibonacci(const int fib_max) {
  /* --------------------------------------------------
     TODO: Use the preprocessor to select an algorithm.
  -------------------------------------------------- */

  // WRITE YOUR CODE HERE

  /* ----------------------------------------------- */
}
