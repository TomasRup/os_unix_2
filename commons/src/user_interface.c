/**
 *      T.P.Rupsys 2014
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include "constants.h"

void silently_exit(int code) {
  exit(code);
}

void print(const char *formattedString, ...) {
  va_list arg;
  printf(formattedString, arg);
}

void print_text(char *text) {
  printf("%s", text);
}

void print_number(int number) {
  printf("%i", number);
}
