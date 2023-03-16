#include<stdio.h>
/**
 * main- program entry
 * Return: returns 0
 */
int main(void)
{
char ab;
int i;
long int il;
long long int ill;
float a;
printf("size of a char: %lu byte(s)\n", sizeof(ab));
printf("size of an int: %lu byte(s)\n", sizeof(i));
printf("size of a long int: %lu byte(s)\n", sizeof(il));
printf("size of a long long int: %lu byte(s)\n", sizeof(ill));
printf("size of a float: %lu byte(s)\n", sizeof(a));

return (0);
}

