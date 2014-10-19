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

/* Texts */
char *getUsageLineDaemoniser();
char *getUsageLineLauncher();
char *getDaemonLocation();
char *getErrorDaemonising();

#endif
