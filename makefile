all: main.o
	gcc -o program main.o

main.o: main.c header.h
	gcc -c main.c header.h

run:
	./program

clean:
	rm *.o
	rm *~
