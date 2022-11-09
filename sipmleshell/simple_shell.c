#include "main.h"
/**
 * main - gets commands and executes them
 *
 * Return: 0 on success
 */

int main()
{
	char *buf = NULL, *p;
	ssize_t bufsize = 1024;
	char **array = NULL;
	int i = 0;
	char *copy_buffer = NULL;
	int num_p;
	char *envp[] = { (char *) "PATH=/bin", 0 };

	while (1)
	{
		buf = (char *)malloc(bufsize * sizeof(char));
		if (buf == NULL)
		{
			exit(1);
		}
		printf ("$");

		ssize_t read = getline(&buf, &bufsize, stdin);
		if (read == -1)
		{
			printf("Exiting shell...");
			return (-1);
		}

		copy_buffer = malloc(sizeof(char) * read);

		strcpy(copy_buffer, buf);
		p = strtok(buf, " \n");
		while (p)
		{
			num_p++;
			p = strtok(NULL, " \n");
		}
		num_p++;

		array = (char **)malloc(sizeof(char) * num_p);
		p = strtok(copy_buffer, " \n");
		while (p)
		{
			array[i] = malloc(sizeof(char) * strlen(p));
			strcpy(array[i], p);
			i++;
			p = strtok(NULL, "\n");
		}
		array[i] = NULL;
	
		if ((strcmp(array[0], "exit")) == 0)
		{
			break;
		}
		if (fork() != 0)
		{
			wait(NULL);
		}
		else
		{
			if (execve(array[0], array, envp) == -1)
				perror("Error:");
		}	
	}
	free(buf);
	free(array);
	free(copy_buffer);
	return (0);

}
