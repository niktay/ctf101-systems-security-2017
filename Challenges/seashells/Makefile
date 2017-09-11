CHALL = seashells
CC = gcc
CFLAGS = -g -z execstack -mpreferred-stack-boundary=2 -fno-stack-protector -m32

all:
	$(CC) main.c $(CFLAGS) -o $(CHALL)

clean:
	rm $(CHALL)
