/**
 *      T.P.Rupsys 2014
 */

#include "constants.h"
#include "user_interface.h"
#include "unix_adapter.h"
#include "unix_process.h"

int main(int argc, char *argv[]) {
  const int amountOfTasks = argc-1;  

  if (amountOfTasks < 1) {
    print_text(USAGE_LINE);
    return CODE_INVALID_USAGE;
  }

  // Initializing processes
  UnixProcess backgroundTasks[amountOfTasks];

  for (int i=0 ; i<amountOfTasks ; i++) { 
    backgroundTasks[i] = init_process(argv[i+1]); 
  }

  // Moving tasks to background
  run_in_bg(backgroundTasks, amountOfTasks); 
  return CODE_SUCCESS;
}
