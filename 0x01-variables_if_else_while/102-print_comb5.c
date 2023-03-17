#include <stdio.h>
/**
 * main- entery point
 * Return: returns 0
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
if (i != j)
{
int i1 = i / 10;
int i2 = i % 10;
int j1 = j / 10;
int j2 = j % 10;
putchar(i1 + '0');
putchar(i2 + '0');
putchar(' ');
putchar(j1 + '0');
putchar(j2 + '0');
if (i < 99 || j < 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
