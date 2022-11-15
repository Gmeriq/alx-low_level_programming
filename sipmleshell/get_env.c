#include "main.h"

int get_len(char **name);

/**
 * get_env - gets the environment
 * @name: name of the environment
 *
 * Return: pointer to environment
 */

char *get_env(char *name)
{
	int i = 0, j = 0, name_len, x = 0, new_i = 0;
	char *temp, *aux;
	name_len = strlen(name);
	for (x = 0; environ[x]; x++)
	{
		for (i = 0; environ[x][i]; i++)
		{
			j = 0;
			while (environ[x][i] != 61)
			{
				temp[j++] = environ[x][i++];
			}
			while (temp[j])
			{
				printf("%s\n", temp);
				break;
			}

				/*if (strcmp(name, temp) == 0)
				{
					j = 0;
					printf("nyc\n");
					for (new_i = name_len + 1; environ[x][new_i]; new_i++)
					{
						aux[j++] = environ[x][new_i];
						return (aux);
					}
				}
				else
				{
					continue;
				}*/
		}
	}
	
	return (temp);
	
}

int get_len(char **name)
{
	int i = 0, j = 0;

	for (; name[i]; i++)
	{
		j++;
		;
	}
	return (j);
}

/***/

int main()
{
	char *path = "PATH";
	char *c = get_env(path);
	int j = get_len(environ);
	printf("%d\n", j);
	printf("%s\n", c);
}
