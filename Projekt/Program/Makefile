#__start__: obj stos_t1
#	./stos_t1

PROG=a

OBJ=obj/main.o obj/Pionek.o obj/Bialy_pionek.o obj/Plansza.o

CPPFLAGS=-Wall -pedantic -Iinc -I/home/krzysztof/Deskopt/PAMSI/Laboratorium/Projekt/Program/inc -c
LDFLAGS= -Wall -L/home/krzysztof/Deskopt/PAMSI/Laboratorium/Projekt/Program/obj

#obj:
#	mkdir obj

$(PROG):$(OBJ)
	g++ ${LDFLAGS} -o $(PROG) $(OBJ) -lrt

obj/main.o: src/main.cpp
	g++ ${CPPFLAGS} -o $@ $^ -std=c++0x

obj/Pionek.o: src/Pionek.cpp
	g++ ${CPPFLAGS} -o $@ $^ -std=c++0x

obj/Bialy_pionek.o: src/Bialy_pionek.cpp
	g++ ${CPPFLAGS} -o $@ $^ -std=c++0x

obj/Plansza.o: src/Plansza.cpp
	g++ ${CPPFLAGS} -o $@ $^ -std=c++0x
	
clean:
	rm -f a obj/*