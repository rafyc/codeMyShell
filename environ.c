#include <unistd.h>
#include <stdio.h>

int main(void)
{

extern char **environ;
//...

int i = 0;
	while(environ[i]) {
  		printf("%s\n", environ[i++]); // prints in form of "variable=value"
	}
}
