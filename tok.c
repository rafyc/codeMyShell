#include <stdio.h>
#include <string.h>

/**
* main - fonction
* @ac: param
* @av: param
* Return: 0
*/

int main(void)
{
	char str[] = "Bonjour je m'appelle Côme.";
	const char *delim;
	/**
	* Ne pas remplacer par char * str = " "; 
	* la zone de mémoire pointée serait constante 
	* et la fonction strtok planterait systématiquement.
	*/
	char *ret;

	ret = strtok(str, delim);

	while (ret != NULL)
	{
		printf("%s\n", ret);
		ret = strtok(NULL, delim);
	}
	return (0);
}
