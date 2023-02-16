#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ch = sizeof(char);
int in = sizeof(int);
int ln_in = sizeof(long int);
int ln_ln_in = sizeof(long long int);
int fl = sizeof(float);
printf("Size of a char: %d byte(s)\n", ch);
printf("Size of an int: %d byte(s)\n", in);
printf("Size of a long int: %d byte(s)\n", ln_in);
printf("Size of a long long int: %d byte(s)\n", ln_ln_in);
printf("Size of a float: %d byte(s)\n", fl);

return (0);
