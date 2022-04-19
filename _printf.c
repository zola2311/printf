#include "main.h"

/**
 * _printf - prints
 * @format: the first parameter
 *
 * Return: number of printed char
 */

int _printf(const char *format, ...)
{
char *ptr, *start;

flags_t fgs = FLAGS_INIT;
int cp = 0;
int (*pF)(va_list, flags_t *);
va_list ap;

va_start(ap, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
for (ptr = (char *)format; *ptr; ptr++)
{
if (*ptr == '%')
{
ptr++;
if (*ptr == '%')
{
cp += _putchar(*ptr);
continue;
}
start = ptr;
while (getFlags(*ptr, &fgs))
ptr++;
pF = getPrint(*ptr);
if (!pF)
{
cp += _putchar('%');
ptr = start - 1;
}
else
cp += pF(ap, &fgs);
}
else
cp += _putchar(*ptr);
}
_putchar(BUF_FLUSH);
va_end(ap);
return (cp);
}
