all: main

main: main.o test.o unit_test.o
	gcc -o main main.o test.o unit_test.o

main.o: main.c
	gcc -c main.c

unit_test.o: unit_test.c unit_test.h
	gcc -c unit_test.c

test.o: test.c test.h
	gcc -c test.c

clean:
	rm *.o

cleanall:
	rm main *.o

