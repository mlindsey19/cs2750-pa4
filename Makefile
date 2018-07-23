#David Lindsey
#cs 2750 pa5
#22-07-18

CC = gcc -std=c99
CFLAGS = -Wall -g

OBJ = main.o func.o

all: deater

deater: $(OBJ)
	$(CC) $(CFLAGS) -o deater $(OBJ)
main.o: main.c func.h
	$(CC) $(CFLAGS) -c  main.c
func.o: func.c
	$(CC) $(CFLAGS) -c func.c



clean:
	rm $(OBJ) deater
