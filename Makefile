CC=gcc
CFLAGS=-c -Wall
LDFLAGS=-o
file=toolbox.o exo2.o
name=exo2

all : $(name)

%.o : %.c 
	$(CC) $(CFLAGS) $^

$(name) : $(file)
	$(CC) $(LDFLAGS) $@ $^

clean :
	rm -rf *.o