main: main.o funcs.o caesar.o
	g++ -o main main.o funcs.o caesar.o

tests: tests.o funcs.o caesar.o
	g++ -o tests tests.o funcs.o caesar.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h caesar.h

tests.o: tests.cpp doctest.h funcs.h caesar.h

#for Task A
test-ascii.o: test-ascii.cpp

#for Task B
caesar.o: caesar.cpp caesar.h

clean:
	rm -f main.o funcs.o tests.o test-ascii.o
