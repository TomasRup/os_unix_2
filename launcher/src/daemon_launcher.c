/**
 *      T.P.Rupsys 2014
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "commons/constants.h"

int launch(const char *command) {
  // Forming command string
  char *commandToExecute = (char *) malloc(sizeof(command));
  strcpy(commandToExecute, getDaemonLocation());
  strcat(commandToExecute, " \"");
  strcat(commandToExecute, command);
  strcat(commandToExecute, "\"");

  // Calling the command
  int exitCode = system(commandToExecute);
  return exitCode;
}
