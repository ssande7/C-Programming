#include "valid_input.h"
#include <ctype.h>

bool valid_input(const char* input) {
  for (int i = 0; input[i] != '\0'; ++i) {
    if (!isdigit(input[i])) {
      return false;
    }
  }
  return true;
}

