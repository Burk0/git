//only test for seg fault
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *pole=(char*)malloc(sizeof(char));
	printf("%c\n",pole[333333]);
return 0;
}
