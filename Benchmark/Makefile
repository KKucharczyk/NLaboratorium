#__start__: obj benchmark
#	./benchmark

PROG=benchmark

OBJ=obj/main.o obj/benchmark.o

CPPFLAGS=-Wall -pedantic -Iinc -I/home/krzysztof/Deskopt/PAMSI/Benchmark/inc -c
LDFLAGS= -Wall -L/home/krzysztof/Deskopt/PAMSI/Benchmark/obj

#obj:
#	mkdir obj

$(PROG):$(OBJ)
	g++ ${LDFLAGS} -o $(PROG) $(OBJ)


obj/main.o: src/main.cpp
	g++ ${CPPFLAGS} -o $@ $^
	
obj/benchmark.o: src/benchmark.cpp
	g++ ${CPPFLAGS} -o $@ $^

clean:
	rm -f benchmark obj/*