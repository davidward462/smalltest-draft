all: main test

main: main.o foo.o
	gcc -o main main.o foo.o

main.o: main.c
	gcc -c main.c

test: test.o test_lib.o
	gcc -o test test.o test_lib.o

test.o: test.c test.h test_lib.h foo.h
	gcc -c test.c

test_lib.o: test_lib.c test_lib.h
	gcc -c test_lib.c

foo.o: foo.c foo.h
	gcc -c foo.c

clean:
	rm $(wildcard *.o)

cleanall:
	rm main test $(wildcard *.o)

