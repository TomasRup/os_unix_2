/**
 *      T.P.Rupsys 2014
 */

/* Creates a UnixProcess structure by a given string command */
struct UnixProcess init_process(const char *command);

/* Runs given processes in the background */
void run_in_bg(struct UnixProcess *processes);
