#include main.h

printer print[] = {
	{"c", printc},
	{"s", prints}
}

void (*get_op(char *c))(va_arg arg)
{
}
