/**
 *      T.P.Rupsys 2014
 */

#include "constants.h"
#include "user_interface.h"
#include "command_executor.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  // Validating arguments
  if (argc != 2) {
    print_text(USAGE_LINE_DAEMONISER);
    return CODE_INVALID_USAGE;
  }

  // Launching the command
  execute(argv[1]);

  // Running as daemon
  // TODO

  // Exiting 
  return CODE_SUCCESS;
}
