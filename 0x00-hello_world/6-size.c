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
printf("size of char: %lu byte(s)\n", sizeof(ab));
printf("size of int: %lu byte(s)\n", sizeof(i));
printf("size of long int: %lu byte(s)\n", sizeof(il));
printf("size of long long int: %lu byte(s)\n", sizeof(ill));
printf("size of float: %lu byte(s)\n", sizeof(a));

return (0);
}

