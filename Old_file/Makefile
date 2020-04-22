CC=gcc
CFLAGS=-c -Wall
LDFLAGS=-o
file=exo12.o
name=exo12

all : $(name)

%.o : %.c
	$(CC) $(CFLAGS) $^

$(name) : $(file)
	$(CC) $(LDFLAGS) $@ $^

clean :
	rm -rf *.o
