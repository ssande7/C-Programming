
/* -----------------------------------------------
 TODO: Write a program that takes a single integer,
       N, as input and prints the first N fibonacci
       numbers.

 Examples:
 if input = 6, print:
 [1, 1, 2, 3, 5, 8]
 if input = 2, print:
 [1, 1]
 if input = 4, print:
 [1, 1, 2, 3]
 if input = 0, don't print anything.
----------------------------------------------- */

#include "../list.h"
#include <stdio.h>     // for printf()
#include <ctype.h>     // for isdigit()
#include <stdlib.h>    // for atoi()
#include <stdbool.h>   // for bool

// Check whether a string contains only a positive integer
bool valid_input(const char* input) {
    // C strings end with the null character, `\0`
    for (int i = 0; input[i] != '\0'; ++i) {
        if (!isdigit(input[i])) {
            return false;
        }
    }
    return true;
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
    int N = atoi(argv[1]);

    List fib = list_init();

    // Calculate Fibonacci numbers and append them to the list
    for (int i = 0; i < N; ++i) {
        if (i < 2)
            list_append(&fib, 1.0);
        else
            list_append(&fib, fib.data[i-2] + fib.data[i-1]);
    }

    // Only print if N > 0
    if (N > 0) list_print_contents(fib);
    
    list_destroy(&fib);

    return 0;
}
