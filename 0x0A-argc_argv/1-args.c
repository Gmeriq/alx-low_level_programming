#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: the number of arguments
 * @argv: pointer to the array of strings
 * Return: 0 on success
 */
int main(int argc, char __attribute__ ((unused))*argv[])
{
int i;
if (argc == 1)
printf("%d", argc);
else
{
for (i = 0; *argv; i++, argv++)
;
printf("%d\n", i - 1);
}
return (0);
}
