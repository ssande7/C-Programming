#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("ERROR: expected one input argument\n");
    return 1;
  }

  /* ----------------------------------
    Check that every character of the
    2nd input argument (argv[1]) is
    a digit.
  
    return a non-zero value (e.g. 2)
    if input is not valid.
   ---------------------------------- */

  // WRITE YOUR CODE HERE

  int fib_max = atoi(argv[1]);
  printf("Input was: %i\n", fib_max);
  return 0;
}
