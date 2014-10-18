/**
 *	T.P.Rupsys 2014
 */

#ifndef user_interface_H
#define user_interface_H

/* Silently exits from the application with success status */
void silently_exit();

/* Formatted print */
void print(const char *formattedString, ...);

/* Prints given 'text' */
void print_text(char *text);

/* Prints given 'number' */
void print_number(int number);

#endif
