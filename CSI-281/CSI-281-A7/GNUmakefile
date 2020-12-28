CC = g++
FLAGS = -std=c++17 -Wall -Werror -Wextra -Wpedantic
VPATH = src:lib
OBJECTS = test.o main.o 

assignment7: $(OBJECTS)
	$(CC) $(OBJECTS) -o assignment7

debug: FLAGS += -g
debug: assignment7

test.o: test.cpp Stack.h Queue.h
	$(CC) $(FLAGS) -Ilib -c src/test.cpp

main.o: main.cpp
	$(CC) $(FLAGS) -Ilib -c src/main.cpp

clean:
	rm assignment7 *.o
