/**
 *      T.P.Rupsys 2014
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int launch(const char *command) {
  // Forming command string
  char *commandToExecute;
  strcpy(commandToExecute, DAEMON_LOCATION);
  strcat(commandToExecute, " ");
  strcat(commandToExecute, command);

  // Calling the command
  int exitCode = system(commandToExecute);
  return exitCode;
}
