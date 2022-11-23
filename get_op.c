#include "main.h"

/**
  *get_func - returns pointer to function.
  *@c: character to be used to find pointer function.
  *Return: pointer to function or NULL.
  */

int (*get_op(char *c))(va_arg arg)
{
	printer print[] = {
		{"c", print_c},
		{"s", print_s}
	}
	
	int i = 0;


	while (print[i].specifier != '\0')
	{
		if (print[i].specifier == c)
			return (print[i].print);
		i++;
	}

	return (NULL);
}
