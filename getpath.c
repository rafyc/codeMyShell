#include "main.h"
/**
 * main - environment variable functions
 * Return: 0
 */
  
int main(void)
{
	char *str = getenv("PATH");
	char *delim = ":";
	char *token;

	token = strtok(str, delim);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
  return (0);
}
