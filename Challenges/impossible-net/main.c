#include <stdio.h>

void vuln()
{
        char buf[64];

        puts("Doesn't matter what you enter, you'll lose");
        printf("Enter something => ");

        scanf("%s", buf);

        puts("Lost the game.");
}

void secret()
{
        puts("ctf{conquered_the_impossible}");
}

int main()
{
        setvbuf(stdin, NULL, _IONBF,0);
        setvbuf(stdout, NULL, _IONBF,0);

        puts("Welcome to the IMPOSSIBLE GAME");
        puts("==============================");

        vuln();

        return 0;
}
