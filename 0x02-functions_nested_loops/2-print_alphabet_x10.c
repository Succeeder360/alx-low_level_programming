#include "main.h"
/**
 * void print_alphabet_x10- print alphabet 10 times
 * Return: return 0
 */
void print_alphabet_x10(void)
{
char a_z;
int i;
i = 0;
while (i < 10)
{
a_z = 'a';
while (a_z <= 'z')
{
_putchar(a_z);
a_z++;
}
_putchar('\n');
i++;
}
return (0);
}
