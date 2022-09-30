#include "main.h"
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
int result = 1;
int i = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else if (argc > 1)
{
for (; i < 3; i++)
result *= atoi(argv[i]);
printf("%d\n", result);
}
return (0);
}
