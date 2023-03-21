#include <stdio.h>
/**
 * main- Entry point
 * Return: always returns 0
 */
int main(void)
{
char str[8] = "_putchar";
for (int i = 0; i <= 7; i++)
{
putchar(str[i]);
}
putchar('\n');

return (0);
}
