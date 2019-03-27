CC = gcc
CFLAGS = -Wall -Oggdb

disk:
	$(CC) $(CFLAGS) disk.c disk.h -o disk

gen:
	$(CC) $(CFLAGS) gen.c -o gen