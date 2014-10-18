/**
 *      T.P.Rupsys 2014
 */

#include <stdio.h>
#include <stdlib.h>

void error_and_exit(char *text, int exitCode) {
  perror(text);
  exit(exitCode);
}

void print_text(char *text) {
  printf("%s", text);
}

void print_number(int number) {
  printf("%i", number);
}
