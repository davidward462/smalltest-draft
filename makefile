all: main unit_test

testing: unit_test

main: main.o foo.o
	gcc -o main main.o foo.o

main.o: main.c
	gcc -c main.c

unit_test: unit_test.o test_lib.o
	gcc -o unit_test unit_test.o test_lib.o

unit_test.o: unit_test.c unit_test.h test_lib.h foo.h
	gcc -c unit_test.c

test_lib.o: test_lib.c test_lib.h
	gcc -c test_lib.c

foo.o: foo.c foo.h
	gcc -c foo.c

clean:
	rm *.o

cleanall:
	rm main unit_test *.o

