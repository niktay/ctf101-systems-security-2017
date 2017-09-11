#include <stdio.h>

void vuln()
{
	char buf[1024];

	puts("I like to seashells, can you make one for me?");
	printf("Enter something => ");

	scanf("%s", buf);
}

int main()
{
	puts("I LIKE TO SEASHELLS");
	puts("===================");

	vuln();

	return 0;
}
