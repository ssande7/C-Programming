#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
  ----------------------------------- */
  for (int i = 0; argv[1][i] != '\0'; ++i) {
    if (!isdigit(argv[1][i])) {
      printf("ERROR: input must be a positive integer\n");
      return 2;
    }
  }


  int fib_max = atoi(argv[1]);
  printf("Input was: %d\n", fib_max);
  return 0;
}
