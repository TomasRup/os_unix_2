/**
 *      T.P.Rupsys 2014
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

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

char *form_prefix(const char *level) {
  char *stringToReturn = (char *) malloc(1024);

  // Retrieving time
  time_t t = time(NULL);
  struct tm *tm = localtime(&t);
  strftime(stringToReturn, 1024 * sizeof(char), "%Y.%m.%d %H:%M:%S", tm);

  // Adding the level
  strcat(stringToReturn, " ");
  strcat(stringToReturn, level);

  return stringToReturn;
}

void log_to_file(const char *prefix, const char *formattedString) {
  // Forming a string
  int stringToLogSize = sizeof(prefix) + sizeof(formattedString) + 1024;
  char *stringToLog = (char *) malloc(stringToLogSize);
  strcpy(stringToLog, prefix);
  strcat(stringToLog, ": ");
  strcat(stringToLog, formattedString);
  strcat(stringToLog, "\n");

  // Opening log file
  FILE *logFile = NULL;
  if ((logFile = fopen(getLogsLocation(), "a")) == NULL) {
    silently_exit(getCodeFailedToOpenLogs());
  }

  // Logging
  fprintf(logFile, stringToLog, NULL);
  fflush(logFile);
  fclose(logFile);
}

void log_info(const char *formattedString, ...) {
  char fullString[1024];
  va_list arg;
  va_start(arg, formattedString);
  vsprintf(fullString, formattedString, arg);
  va_end(arg);

  log_to_file(form_prefix("INFO"), fullString);
}

void log_error(const char *formattedString, ...) {
  char fullString[1024];
  va_list arg;
  va_start(arg, formattedString);
  vsprintf(fullString, formattedString, arg);
  va_end(arg);

  log_to_file(form_prefix("ERROR"), fullString);
}
