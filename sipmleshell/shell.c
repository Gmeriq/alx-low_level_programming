#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * type_prompt - clears the screen and prompts user to type command
 *
 * Returns: nothing
 */

void type_prompt()
{
	static int first_time = 1;

	if (first_time)
	{
		const char* clear_screen = " \e[1;1h\e[2J";
		write(STDOUT_FILENO, clear_screen, 12);
		first_time = 0;
	}
	printf("$");
}

/**
 * get_line - reads line entered by user
 * @cmd: the command to be executed
 * @par: parameters to the command
 *
 * Return: nothing
 */

void get_line(char *cmd, char **par)
{
	char *buf, *p;
	ssize_t bufsize = 1024;
	int i = 0, j;
	char **words;

	buf = (char *)malloc(bufsize * sizeof(char));
	words = (char **)malloc(bufsize * sizeof(char));
	if (buf == NULL)
	{
		printf("Unable to allocate memory.");
		exit(1);
	}

	getline(&buf, &bufsize, stdin);
	p = strtok(buf, "\n");
	while (p != NULL)
	{
		words[i++] = strdup(p);
		p = strtok(NULL, "\n");
	}
	strcpy(cmd, words[0]);
	
	for (j = 0; j < i; j++)
	{
		par[j] = words[j];
		words[i] = NULL;
	}	
}

/**
 * main - executes the commands
 *
 * Returns: 0 on success -1 on failure
 */

int main()
{
	char cmd[100], command[100], *parameters[20];
	char *envp[] = {(char *) "PATH = /bin", 0};
	while (1)
	{
		type_prompt();
		get_line(command, parameters);

		if (fork() != 0)
			wait(NULL);
		else
		{
			strcpy(cmd, "/bin/");
			strcat(cmd, command);
			execve(cmd, parameters, envp);
		}
		if (strcmp(command, "exit") == 0)
			break;
	}
	return (0);
}
