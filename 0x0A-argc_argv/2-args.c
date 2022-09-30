#include "main.h"
/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: pointer of array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
