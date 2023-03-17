#include <stdio.h>
/**
 * main- entry point
 * Return: returns 0
 */
int main(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
putchar(alp);
}
for (alp = 'A'; alp <= 'Z'; alp++)
{
putchar(alp);
}
putchar('\n');
return (0);
}
