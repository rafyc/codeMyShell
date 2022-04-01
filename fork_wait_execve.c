#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/**
* main - fonction
* Return: 0
*/

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t id;
	int i;

	for (i = 0; i < 5; i++)
	{
		id = fork();
		if (id != 0)
		{
			wait(NULL);
		}
		else
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error\n");
			}
		}
	}
	return (0);
}
