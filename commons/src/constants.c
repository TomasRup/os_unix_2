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

int getCodeFailedToForkOff() {
  return 4;
}

int getCodeFailedToChangeDir() {
  return 5;
}

int getCodeFailedToCloseStd() {
  return 6;
}

int getCodeFailedToSetSid() {
  return 7;
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

char *getErrorDaemonising() {
  return "\n\nFailed to daemonise!\n";
}
