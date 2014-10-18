/**
 *      T.P.Rupsys 2014
 */

#include "constants.h"
#include "user_interface.h"
#include "unix_adapter.h"
#include "unix_process.h"

int main(const int argc, const char *argv[]) {
  if (argc < 2) {
    print_text(USAGE_LINE);
    return CODE_INVALID_USAGE;
  }

  // Initializing processes
  struct UnixProcess backgroundTasks[argc-1];
  for (int i=1 ; i<argc ; i++) { 
    backgroundTasks[i-1] = init_process(argv[i]); 
  }

  // Moving tasks to background
  run_in_bg(backgroundTasks); 
  return CODE_SUCCESS;
}
