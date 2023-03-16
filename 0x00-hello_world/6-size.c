#include<stdio.h>
/**
 * main- program entry
 * Return: returns 0
 */
int main(void)
{
char a_char;
int an_int;
long int a_long_int;
long long int  a_long_long_int;
float a_float;

printf("size of int: %i byte(s)\n", sizeof(a_char));
printf("size of float: %i byte(s)\n", sizeof(an_int));
printf("size of char: %i byte(s)\n", sizeof(a_long_int));
printf("size of double:%i byte(s)\n", sizeof(a_long_long_int));
printf("size of long long int: %i byte(s)\n", sizeof(a_float);

return (0);
}

