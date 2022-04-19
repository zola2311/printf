#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1.
 */

int _putchar(int c)
{
static char buf[BUF_SIZE];
static int idx;

if (c == BUF_FLUSH || idx >= BUF_SIZE)
{
write(1, &buf, idx);
idx = 0;
}
if (c != BUF_FLUSH)
{
buf[idx] = c;
idx++;
}
return (1);
}

/**
 *_puts - prints a string, followed by a new line, to stdout.
 * @str: the input string
 *
 * Return: number of chars printed.
 */

int _puts(char *str)
{
int idx;

for (idx = 0; str[idx]; idx++)
_putchar(str[idx]);

return (idx);
}
