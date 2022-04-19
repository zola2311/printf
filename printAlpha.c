#include "main.h"

/**
 * printChar - prints character
 * @ap: the argument
 * @f: pointer to the flags structure
 * Return: number of chars printed.
 */
int printChar(va_list ap, flags_t *f)
{
	(void)f;
	return (_putchar(va_arg(ap, int)));
}

/**
 * printStr - prints string
 * @ap: the argument
 * @f: pointer to the flags structure
 * Return: numbers of chars printed.
 */
int printStr(va_list ap, flags_t *f)
{
	char *str = va_arg(ap, char *);

	(void)f;
	if (str == NULL)
		str = "(null)";
	return (_puts(str));
}

/**
 * printModulo - printModulo
 * @ap: the argument
 * @f: pointer to the flags structure
 * Return: number of char
 */

int printModulo(va_list ap, flags_t *f)
{
	(void)ap;
	(void)f;
	return (_putchar('%'));
}
