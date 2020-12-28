CC = g++
FLAGS = -std=c++17 -Wall -Werror -Wextra -Wpedantic
VPATH = src:lib
OBJECTS = test.o main.o 

assignment8: $(OBJECTS)
	$(CC) $(OBJECTS) -o assignment8

debug: FLAGS += -g
debug: assignment8

test.o: test.cpp Graph.h
	$(CC) $(FLAGS) -Ilib -c src/test.cpp

main.o: main.cpp
	$(CC) $(FLAGS) -Ilib -c src/main.cpp

clean:
	rm assignment8 *.o
