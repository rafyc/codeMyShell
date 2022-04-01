#define EXT "exit"
#include <stdio.h>
#include <stdlib.h>

/**
* main - fonction
* @ac: param
* @av: param
* Return: 0
*/

int main(void)
{
  		char *line = NULL;
  		size_t len = 0;
  		ssize_t get;

		for (;;)
		{
			printf("$ ");
			get = getline(&line, &len, stdin);
			printf("%s", line);
			free(line);
			return (0);

			if (get == -1)
  			{
				free(line);
				return (0);
  			}
		}
}
