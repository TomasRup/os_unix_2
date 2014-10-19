/**
 *      T.P.Rupsys 2014
 */

#ifndef constants_H
#define constants_H

/* Exit codes */
int getCodeSuccess();
int getCodeInvalidUsage();
int getCodeFailedToExecuteCommand();
int getCodeFailedToCreateProcess();
int getCodeFailedToForkOff();
int getCodeFailedToChangeDir();
int getCodeFailedToCloseStd();
int getCodeFailedToSetSid();
int getCodeFailedToOpenLogs();
int getCodeFailedToClearLogs();

/* Texts */
char *getUsageLineDaemoniser();
char *getUsageLineLauncher();
char *getDaemonLocation();
char *getErrorDaemonising();

/* Locations */
char *getLogsLocation();

#endif
