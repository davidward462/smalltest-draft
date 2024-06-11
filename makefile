all: main unit_test

testing: unit_test

main: main.o mylib.o
	gcc -o main main.o mylib.o

main.o: main.c
	gcc -c main.c

unit_test: unit_test.o test.o
	gcc -o unit_test unit_test.o test.o

unit_test.o: unit_test.c unit_test.h test.h mylib.h
	gcc -c unit_test.c

test.o: test.c test.h
	gcc -c test.c

mylib.o: mylib.c mylib.h
	gcc -c mylib.c

clean:
	rm *.o

cleanall:
	rm main unit_test *.o

