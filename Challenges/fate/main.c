#include <stdio.h>

void vuln()
{
	int checknum = 0xdeadbeef;
	char buf[64];

	puts("Your fate has been decided, but i'll give you a chance to change it!");
	printf("Enter something => ");

	scanf("%s", buf);
	
	if (checknum == 0xcafebabe)
		puts("ctf101{changed_my_fate}");
	else
		puts("Lost the game.");
}

int main()
{
	puts("Welcome to the GAME OF FATE");
	puts("===========================");

	vuln();

	return 0;
}
