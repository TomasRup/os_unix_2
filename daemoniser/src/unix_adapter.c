/**
 *      T.P.Rupsys 2014
 */

#include <errno.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "commons/constants.h"
#include "commons/user_interface.h"

void do_handle_fork() {
  // Creating a PID
  pid_t pid;

  // Forking off
  pid = fork();

  // Exiting from the parent process
  if (pid > 0) {
    // TODO: log
    silently_exit(getCodeSuccess());

  // Error occurred while trying to fork off
  } else if (pid < 0) {
    // TODO: log print_text(getErrorDaemonising());
    silently_exit(getCodeFailedToForkOff());
  }
}

void do_change_dir() {
  if (chdir("/") == -1) {
    // TODO: LOG
    silently_exit(getCodeFailedToChangeDir());
  } else {
    // TODO: LOG
  }
}

void do_close_std() {
  if (close(STDIN_FILENO) == -1
       || close(STDOUT_FILENO) == -1
       || close(STDERR_FILENO) == -1) {
    // TODO: log
    silently_exit(getCodeFailedToCloseStd());
  }
}

void do_set_sid() {
  if (setsid() == -1) {
    // TODO: log
    silently_exit(getCodeFailedToSetSid());
  }
}

int switch_to_unix_daemon() {
  // Forking off to become a child process and exit the parent
  do_handle_fork();

  // Set the current working directory to root to avoid getting unmounted
  do_change_dir();

  // Setting file mode creation mask
  umask(0);

  // Detaching from the terminal by closing file descriptors
  do_close_std();

  // Creating own process
  do_set_sid();

  // Forking off for the second time to avoid taking control of the terminal
  do_handle_fork();

  // Exiting
  return getCodeSuccess();
}
