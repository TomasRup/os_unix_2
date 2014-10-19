/**
 *      T.P.Rupsys 2014
 */

#include <errno.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "commons/constants.h"
#include "commons/user_interface.h"

void do_handle_fork(char *command) {
  // Creating a PID
  pid_t pid;

  // Forking off
  pid = fork();

  // Exiting from the parent process
  if (pid > 0) {
    log_info("Exiting from the parent process PID '%d' while executing '%s'", pid, command);
    silently_exit(getCodeSuccess());

  // Error occurred while trying to fork off
  } else if (pid < 0) {
    log_error("Fatal error while executing '%s': retrieved PID: %d", command, pid);
    silently_exit(getCodeFailedToForkOff());
  }
}

void do_change_dir(char *command) {
  if (chdir("/") == -1) {
    log_error("Failed to change dir to '/' while executing '%s'", command);
    silently_exit(getCodeFailedToChangeDir());
  } else {
    log_info("Successfully changed dir to '/' while executing '%s'", command);
  }
}

void do_close_std(char *command) {
  if (close(STDIN_FILENO) == -1
       || close(STDOUT_FILENO) == -1
       || close(STDERR_FILENO) == -1) {
     log_error("Failed to close one of STD streams while executing '%s'", command);
     silently_exit(getCodeFailedToCloseStd());
  } else {
    log_info("Successfully closed all STD streams while executing '%s'", command);
  }
}

void do_set_sid(char *command) {
  if (setsid() == -1) {
    log_error("Failed to set new SID while executing '%s'", command);
    silently_exit(getCodeFailedToSetSid());
  } else {
    log_info("Successfully set new SID while executing '%s'", command);
  }
}

void do_umask(char *command) {
  umask(0);
  log_info("Successfuly changed mask to value 0 while executing '%s'", command);
}

int switch_to_unix_daemon(char *command) {
  // Forking off to become a child process and exit the parent
  do_handle_fork(command);

  // Set the current working directory to root to avoid getting unmounted
  do_change_dir(command);

  // Setting file mode creation mask
  do_umask(command);

  // Detaching from the terminal by closing file descriptors
  do_close_std(command);

  // Creating own process
  do_set_sid(command);

  // Forking off for the second time to avoid taking control of the terminal
  do_handle_fork(command);

  // Exiting
  log_info("Successfully became a daemon while executing '%s'", command);
  return getCodeSuccess();
}

int execute(char *command) {
  int exitCode = system(command);

  if (exitCode == -1) {
    log_error("Error occurred while executing '%s'", command);
  } else {
    log_info("Successfully executed '%s'", command);
  }

  return exitCode;
}
