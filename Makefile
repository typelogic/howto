main: main.o object.o interface.o
	g++ -o main main.o object.o interface.o

object.o: object.cpp
	g++ -c object.cpp

interface.o: interface.c
	gcc -c interface.c

main.o: main.c
	gcc -c main.c

clean:
	@rm -f *.o main

.PHONY: clean
