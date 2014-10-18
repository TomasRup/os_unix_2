/**
 *      T.P.Rupsys 2014
 */

#include <stdio.h>

#include "commons/constants.h"
#include "commons/user_interface.h"

#include "command_executor.h"

int main(int argc, char *argv[]) {
  // Validating arguments
  if (argc != 2) {
    print_text(getUsageLineDaemoniser());
    return getCodeInvalidUsage();
  }

  // Launching the command
  execute(argv[1]);

  // Running as daemon
  // TODO

  // Exiting
  return getCodeSuccess();
}
