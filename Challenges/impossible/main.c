#include <stdio.h>

void secret()
{
	puts("ctf{conquered_the_impossible}");
}

void vuln()
{
	char buf[64];

	puts("Doesn't matter what you enter, you'll lose");
	printf("Enter something => ");

	scanf("%s", buf);
	
	puts("Lost the game.");
}

int main()
{
	puts("Welcome to the IMPOSSIBLE GAME");
	puts("==============================");

	vuln();

	return 0;
}
