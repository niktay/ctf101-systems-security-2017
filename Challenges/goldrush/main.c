#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void mine(int n)
{
	printf("Mining");
	for (int i = 0; i < n; i++) {
		sleep(1);
		printf(".");
	}
	puts("");
}

void create_miner()
{
	char name[100];
	int seed, id;

	srand(seed);
	id = rand();

	puts("Welcome to the Alliance of Miners, how should we address you?");
	printf("> ");
	scanf("%99s", name);

	printf("Welcome Miner %s! You are Miner #%d.\n", name, id);
}

void mine_gold()
{
	int seed, input, secret;

	srand(seed);

	puts("");
	puts("------------------------------------------------------------------");
	puts("     Let's start mining! Choose a location by entering a number   ");
	puts("------------------------------------------------------------------");
	printf("Location > ");
	scanf("%d", &input);

	puts("");
	puts("Hold on. Mining takes time...");

	secret = rand();

	puts("");
	mine(3);
	mine(3);
	mine(3);
	puts("");

	if(input == secret) {
		puts("Congrats! You found gold!");
		system("cat flag.txt");
	} else {
		puts("You FAILED to mine any gold");
		puts("What a pity... maybe consider a career switch?");
	}
}


int main()
{
	puts("");
	puts(" ██████╗  ██████╗ ██╗     ██████╗ ██████╗ ██╗   ██╗███████╗██╗  ██╗");
	puts("██╔════╝ ██╔═══██╗██║     ██╔══██╗██╔══██╗██║   ██║██╔════╝██║  ██║");
	puts("██║  ███╗██║   ██║██║     ██║  ██║██████╔╝██║   ██║███████╗███████║");
	puts("██║   ██║██║   ██║██║     ██║  ██║██╔══██╗██║   ██║╚════██║██╔══██║");
	puts("╚██████╔╝╚██████╔╝███████╗██████╔╝██║  ██║╚██████╔╝███████║██║  ██║");
	puts(" ╚═════╝  ╚═════╝ ╚══════╝╚═════╝ ╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚═╝  ╚═╝");
	puts("          ~ Why mine bitcoins, when you can mine gold? ~			 ");
	puts("===================================================================");
	puts("                     mineourownbusiness.org                        ");
	puts("===================================================================");
	puts("");

	create_miner();
	mine_gold();

	return 0;
}

