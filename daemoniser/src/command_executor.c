/**
 *      T.P.Rupsys 2014
 */

#include <stdlib.h>

#include "commons/user_interface.h"

int execute(char *command) {
  int exitCode = system(command);

  if (exitCode == -1) {
    log_error("Error occurred while executing '%s'", command);
  } else {
    log_info("Successfully executed '%s'", command);
  }
  return exitCode;
}
