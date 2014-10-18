/**
 *      T.P.Rupsys 2014
 */

#include <sys/types.h>

typedef struct UnixProcess {

  char *command;
  pid_t pid;
  int state;

} UnixProcess;
