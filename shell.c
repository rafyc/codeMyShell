#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
* main - fonction
* Return: 0
*/

int main(void)
{
	char *argv[] = {""}, *ret, *line = NULL;
  	size_t len = 0;
  	ssize_t get;
	pid_t id;
	int i;

	while (1)
	{	
		id = fork();
		if (id != 0)
			wait(NULL);
		else
		{
			printf("#cisfun$ ");
			get = getline(&line, &len, stdin);
			if (get == -1)
			{
				free(line);
				return (0);
			}
			line[get - 1] = '\0';
			ret = strtok(line, " ");
			for (i = 0; ret != NULL; i++)
			{
				argv[i] = ret;
				ret = strtok(NULL, " ");
			}
			argv[i] = NULL;		
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error\n");
		}
	}
	free(line);
}
