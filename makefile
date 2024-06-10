all: main

main: main.o test.o
	gcc -o main main.o test.o

main.o: main.c
	gcc -c main.c

test.o: test.c test.h
	gcc -c test.c

clean:
	rm *.o

cleanall:
	rm main *.o

