# define object files
OBJECTS = \
rela_main.o \
initialization.o \

# define comiler and its flags
CC = gcc
CFLAGS = -Wall -O -g

main: $(OBJECTS)
	$(CC) $(CFLAGS) -o a $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

# Remove all object files and programme executables
clean:
	rm -f *.o *.O main

