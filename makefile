all: main

main: main.o test.o unit_test.o mylib.o
	gcc -o main main.o test.o unit_test.o mylib.o

main.o: main.c
	gcc -c main.c

unit_test.o: unit_test.c unit_test.h mylib.h
	gcc -c unit_test.c

test.o: test.c test.h
	gcc -c test.c

mylib.o: mylib.c mylib.h
	gcc -c mylib.c

clean:
	rm *.o

cleanall:
	rm main *.o

