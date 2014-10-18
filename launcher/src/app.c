/**
 *      T.P.Rupsys 2014
 */

#include "daemon_launcher.h"

int main(int argc, char *argv[]) {
  const int amountOfTasks = argc-1;  

  // Validating the given command arguments
  if (amountOfTasks < 1) {
    print_text(getUsageLineLauncher());
    return getCodeInvalidUsage();
  }

  // 'DAEMON_LOCATION' must be defined at compile time
  #if defined(DAEMON_LOCATION)
  #else
    print_text(getIncorrectCompilation());
    return getCodeIncorrectCompilation()
  #endif

  // Iterating each command and executing
  for (int i=1 ; i<=amountOfTasks ; i++) { 
    int exitCode = launch(argv[i]); 

    if (exitCode != getCodeSuccess()) {
      return getCodeFailedToExecuteCommand();
    }
  }

  // Exiting
  return getCodeSuccess();
}
