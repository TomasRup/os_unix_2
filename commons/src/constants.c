/**
 *      T.P.Rupsys 2014
 */

int getCodeSuccess() {
  return 0;
}

int getCodeInvalidUsage() {
  return 1;
}

int getCodeFailedToExecuteCommand() {
  return 2;
}

int getCodeFailedToCreateProcess() {
  return 3;
}

int getCodeIncorrectCompilation() {
  return 4;
}

char *getUsageLineDaemoniser() {
  return "\nUsage: daemoniser 'unixcmd'";
}

char *getUsageLineLauncher() {
  return"\nUsage: backgroundtasks 'unixcmd_1' 'unixcmd_2' ... 'unixcmd_n'\n";
}

char *getIncorrectCompilation() {
  return "\n'DAEMON_LOCATION' has not been defined during compilation!\n\n";
}
