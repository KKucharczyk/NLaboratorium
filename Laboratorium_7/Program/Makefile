#__start__: obj stos_t1
#	./stos_t1

PROG=a

OBJ=obj/main.o obj/hash.o obj/BST.o

CPPFLAGS=-Wall -pedantic -Iinc -I/home/krzysztof/Deskopt/PAMSI/Laboratorium/Laboratorium_7/Program/inc -c
LDFLAGS= -Wall -L/home/krzysztof/Deskopt/PAMSI/Laboratorium/Laboratorium_7/Program/obj

#obj:
#	mkdir obj

$(PROG):$(OBJ)
	g++ ${LDFLAGS} -o $(PROG) $(OBJ) -lrt


obj/main.o: src/main.cpp
	g++ ${CPPFLAGS} -o $@ $^ -std=c++0x
	
obj/hash.o: src/hash.cpp
	g++ ${CPPFLAGS} -o $@ $^
	
obj/BST.o: src/BST.cpp
	g++ ${CPPFLAGS} -o $@ $^

clean:
	rm -f a obj/*