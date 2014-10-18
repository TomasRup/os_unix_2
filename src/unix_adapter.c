/**
 *      T.P.Rupsys 2014
 */

#include <string.h>
#include "unix_process.h"
#include "user_interface.h"

struct UnixProcess init_process(const char *command) {
  UnixProcess unixProcess;
  strcpy(unixProcess.command, command);
  return unixProcess;
}

void run_in_bg(struct UnixProcess *processes) {
  print_number(sizeof(processes));
}
