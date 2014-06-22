all: recipe

recipe: main.o
	g++ bin/main.o -o bin/recipe

main.o: src/main.cpp
	g++ -c src/main.cpp -o bin/main.o

