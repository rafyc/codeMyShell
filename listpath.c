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
	listpath_t *listpath = NULL;

	token = strtok(str, delim);
	while (token != NULL)
	{
		add_node_end(&listpath, token);	
		token = strtok(NULL, delim);
	}
	while(listpath != NULL)
	{
		printf("%s\n", listpath->str);
		listpath = listpath->next;
	}
  	return (0);
}
