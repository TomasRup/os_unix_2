/**
 *      T.P.Rupsys 2014
 */

#ifndef unix_adapter_H
#define unix_adapter_H

/* Forks from the process, exits if it's a parent or erroneous process */
void do_handle_fork(char *command);

/* Changes directory to root, handles errors */
void do_change_dir(char *command);

/* Closes STD IN/OUT/ERR, handles errors */
void do_close_std(char *command);

/* Creates a new process by setting a SID, handles errors */
void do_set_sid(char *command);

/* Changes umask to zero */
void do_umask(char *command);

/* Transforms the currently working application to a UNIX daemon */
int switch_to_unix_daemon(char *command);

/* Executes command in the UNIX system */
int execute(const char *command);

#endif
