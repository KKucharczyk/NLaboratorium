#__start__: obj stos_t1
#	./stos_t1

PROG=a

OBJ=obj/main.o obj/graf.o

CPPFLAGS=-Wall -pedantic -Iinc -I/home/krzysztof/Deskopt/PAMSI/Laboratorium/Laboratorium_8_9/Program/inc -c
LDFLAGS= -Wall -L/home/krzysztof/Deskopt/PAMSI/Laboratorium/Laboratorium_8_9/Program/obj

#obj:
#	mkdir obj

$(PROG):$(OBJ)
	g++ ${LDFLAGS} -o $(PROG) $(OBJ) -lrt


obj/main.o: src/main.cpp
	g++ ${CPPFLAGS} -o $@ $^ -std=c++0x
	
obj/graf.o: src/graf.cpp
	g++ ${CPPFLAGS} -o $@ $^

clean:
	rm -f a obj/*