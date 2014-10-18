/**
 *      T.P.Rupsys 2014
 */

/* Creates a UnixProcess structure by a given string command */
struct UnixProcess init_process(char *command);

/* Runs a single given process in background */
void run_single_process_in_bg(struct UnixProcess process);

/* Runs given processes in the background */
void run_in_bg(struct UnixProcess *processes, const int size);
