/**
 *      T.P.Rupsys 2014
 */

#include <stdio.h>

#include "commons/constants.h"
#include "commons/user_interface.h"

#include "unix_adapter.h"

int main(int argc, char *argv[]) {
  // Validating arguments
  if (argc != 2) {
    print_text(getUsageLineDaemoniser());
    return getCodeInvalidUsage();
  }

  // Running as daemon
  switch_to_unix_daemon(argv[1]);

  // Launching the command
  return execute(argv[1]);
}
