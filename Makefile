CC = gcc
CFLAGS = -Wall -Og

disk:
	@$(CC) $(CFLAGS) -c disk.c disk.h
	@$(CC) $(CFLAGS) disk.o -o disk

gen:
	@$(CC) $(CFLAGS) gen.c -o gen

run: gen disk
	@./gen > tmp
	@./disk tmp

clean:
	@rm -f disk
	@rm -f gen
	@rm -f *.o
	@rm -f *.gch
	@rm -f tmp