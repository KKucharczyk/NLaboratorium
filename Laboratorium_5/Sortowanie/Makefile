#__start__: obj stos_t1
#	./stos_t1

PROG=a

OBJ=obj/main.o obj/sort.o obj/obiekt.o

CPPFLAGS=-Wall -pedantic -Iinc -I/home/krzysztof/Deskopt/PAMSI/Laboratorium_5/inc -c
LDFLAGS= -Wall -L/home/krzysztof/Deskopt/PAMSI/Laboratorium_5/obj

#obj:
#	mkdir obj

$(PROG):$(OBJ)
	g++ ${LDFLAGS} -o $(PROG) $(OBJ) -lrt


obj/main.o: src/main.cpp
	g++ ${CPPFLAGS} -std=c++0x -o $@ $^
	
obj/sort.o: src/sort.cpp
	g++ ${CPPFLAGS} -o $@ $^

obj/obiekt.o: src/obiekt.cpp
	g++ ${CPPFLAGS} -std=c++0x -o $@ $^
	
clean:
	rm -f stos_t1 obj/*