/sources/wordToFind: /sources/wordToFind.o main.o
	gcc -o /sources/wordToFind /sources/wordToFind.o main.o

/sources/wordToFind.o: /sources/wordToFind.c
	gcc -o /sources/wordToFind.o -c /sources/wordToFind.c -W -Wall -ansi -pedantic

main.o: main.c /headers/wordToFind.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic
