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
  printf("$ ");
  char *line = NULL;
  size_t len = 0;
  ssize_t get;

  get = getline(&line, &len, stdin);
  if (get == -1)
  {
	free(line);
	return (0);
  }
  printf("%s", line);
  free(line);
  return (0);
}
