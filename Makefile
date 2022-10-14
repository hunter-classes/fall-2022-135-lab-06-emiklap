main: main.o funcs.o caesar.o vigenere.o decryption.o
	g++ -o main main.o funcs.o caesar.o vigenere.o decryption.o

tests: tests.o funcs.o caesar.o vigenere.o decryption.o
	g++ -o tests tests.o funcs.o caesar.o vigenere.o decryption.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h caesar.h vigenere.h decryption.h

tests.o: tests.cpp doctest.h funcs.h caesar.h vigenere.h decryption.h

#for Task A
test-ascii.o: test-ascii.cpp

#for Task B
caesar.o: caesar.cpp caesar.h

#for Task C
vigenere.o: vigenere.cpp vigenere.h caesar.h

#for Task D
decryption.o: decryption.cpp caesar.h

clean:
	rm -f main.o funcs.o tests.o test-ascii.o
