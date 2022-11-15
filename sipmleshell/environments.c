#include "main.h"

/***/

int main()
{
	int i = 0, j = 0, temp_len;
	char *temp, *env = "PATH", *aux;
	/*char *path[1024];*/

	while (environ[i])
	{
		j++;
		i++;
	}
	printf("%d", j);
	for (i = 0; i < j; i++)
	{
		temp = NULL;
		temp = malloc(sizeof(char) * strlen(environ[i]));
		strcpy(temp,  environ[i]);
		strncpy(aux, temp, 4);
		if (strcmp(aux, env) == 0)
		{
			temp_len = strlen(temp);
			return (temp_len);
			break;
		}
	}

	printf("PATH = %s \n", temp);
	/*char *ptr = getenv("PATH");

	printf("Path environment is: %s \n", ptr);

	token = strtok(ptr, ":");
	for (j = 0; path[j]; j++)
	{
		path[j] = token;
		token = (NULL, ":");
	}
	for (j = 0; path[j]; j++)
		printf("[%d] path is %s \n", j, path[j]);*/

	return (0);
}
