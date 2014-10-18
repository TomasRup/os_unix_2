/**
 *      T.P.Rupsys 2014
 */

#include <stdlib.h>
#include "unix_process.h"
#include "user_interface.h"

struct UnixProcess init_process(char *command) {
  UnixProcess unixProcess;
  unixProcess.command = command;
  return unixProcess;
}

void run_single_process_in_bg(struct UnixProcess process) {
  // TODO: complete
}

void run_in_bg(struct UnixProcess *processes, const int size) { 
  for (int i=0 ; i<size ; i++) {
    run_single_process_in_bg(processes[i]);
  }
}
