/**
 *	T.P.Rupsys 2014
 */

#ifndef user_interface_H
#define user_interface_H

/* Silently exits from the application with success status */
void silently_exit(int code);

/* Formatted print */
void print(const char *formattedString, ...);

/* Prints given 'text' */
void print_text(char *text);

/* Prints given 'number' */
void print_number(int number);

/* Forms a string with date and level */
char *form_prefix(const char *level);

/* Prints log to a file */
void log_to_file(const char *prefix, const char *formattedString, ...);

/* Logs data at INFO level */
void log_info(const char *formattedString, ...);

/* Logs data at ERROR level */
void log_error(const char *formattedString, ...);

#endif
