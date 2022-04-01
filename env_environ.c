#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av, char **env)
{
	extern char **environ;

	printf("l'adresse de environ est : %p\n", environ);
	printf("l'adresse de env est : %p\n", env);
}

