CC=gcc
CFLAGS=-c -Wall
LDFLAGS=-o
file=main.o
name=main

all : $(name)

%.o : %.c 
	$(CC) $(CFLAGS) $^

$(name) : $(file)
	$(CC) $(LDFLAGS) $@ $^

clean :
	rm -rf *.o