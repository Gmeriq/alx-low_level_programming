#include "main.h"
/**
 * main - add numbers in argv
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if ((*argv[i] < '0' || *argv[i] > '9'))
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
}
return (0);
}
