#__start__: obj stos_t1
#	./stos_t1

PROG=a

OBJ=obj/main.o obj/plecak.o

CPPFLAGS=-Wall -pedantic -Iinc -I/home/krzysztof/Deskopt/PAMSI/Laboratorium/Laboratorium_10/Program/inc -c
LDFLAGS= -Wall -L/home/krzysztof/Deskopt/PAMSI/Laboratorium/Laboratorium_10/Program/obj

#obj:
#	mkdir obj

$(PROG):$(OBJ)
	g++ ${LDFLAGS} -o $(PROG) $(OBJ)


obj/main.o: src/main.cpp
	g++ ${CPPFLAGS} -o $@ $^
	
obj/plecak.o: src/plecak.cpp
	g++ ${CPPFLAGS} -o $@ $^

clean:
	rm -f a obj/*