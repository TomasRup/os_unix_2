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
char *getUsageLineDaemoniser() {
  return "\nUsage: daemoniser 'unixcmd'\n";
}

char *getUsageLineLauncher() {
  return "\nUsage: backgroundtasks 'unixcmd_1' 'unixcmd_2' ... 'unixcmd_n'\n";
}

char *getDaemonLocation() {
  return "daemoniser/target/daemoniser";
}
