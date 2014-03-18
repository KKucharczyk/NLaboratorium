# Krzysztof Kucharczyk
# -----------------------
#
# Podstawowy makefile

OBJS = main.o
CC = g++
CFLAGS = -c -Wall -pedantic
LFLAGS = -Wall -pedantic

a.out: $(OBJS)
	$(CC) $(LFLAGS) -o a.out $(OBJS)
	
main.o: main.cpp
	$(CC) $(CFLAGS) -o main.o main.cpp
	
clean:
	\rm *.o