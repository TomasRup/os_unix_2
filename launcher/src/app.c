/**
 *      T.P.Rupsys 2014
 */

#include "commons/constants.h"
#include "commons/user_interface.h"

#include "daemon_launcher.h"

int main(int argc, char *argv[]) {
  const int amountOfTasks = argc-1;

  // Validating the given command arguments
  if (amountOfTasks < 1) {
    print_text(getUsageLineLauncher());
    return getCodeInvalidUsage();
  }

  // Iterating each command and executing
  for (int i=1 ; i<=amountOfTasks ; i++) {
    int daemonExitCode = launch(argv[i]);

    if (daemonExitCode != getCodeSuccess()) {
      return daemonExitCode;
    }
  }

  // Exiting
  return getCodeSuccess();
}
