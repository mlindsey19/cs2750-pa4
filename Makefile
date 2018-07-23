#David Lindsey
#cs 2750 pa5
#22-07-18

CC = gcc -std=c99
CFLAGS = -Wall -g

OBJ = main.o func.o
OBJ1 = phone.o phone_fmt.o

all: deater phone

deater: $(OBJ)
	$(CC) $(CFLAGS) -o deater $(OBJ)
main.o: main.c func.h
	$(CC) $(CFLAGS) -c  main.c
func.o: func.c
	$(CC) $(CFLAGS) -c func.c
phone: $(OBJ1)
	$(CC) $(CFLAGS) -o phone $(OBJ1)
phone.o: phone.c phone_fmt.h
	$(CC) $(CFLAGS) -c phone.c
phone_fmt.o: phone_fmt.c
	$(CC) $(CFLAGS) -c phone_fmt.c

clean:
	rm $(OBJ) deater $(OBJ1) phone
