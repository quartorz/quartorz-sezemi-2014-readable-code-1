all: recipe

recipe: main.o
	g++ bin/main.o -o bin/recipe

main.o: main.cpp
	g++ -c main.cpp -o bin/main.o

