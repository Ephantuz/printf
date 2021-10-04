#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int ret_char(va_list arg);
int ret_str(va_list arg);
int _putchar(char c);


/**
 * struct TypeStruct - The structure of our own defined type
 *
 * @t: Type to use
 *
 * @out: Function to handle the returns
 */

typedef struct TypeStruct
{
	char *t;

	int (*out)(va_list);
} TypeStruct;

#endif
