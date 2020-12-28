CC = cl
FLAGS = /std:c++17 /WX /EHsc
OBJECTS = test.obj main.obj 

assignment7: $(OBJECTS)
	$(CC) /Fe"assignment7" $(OBJECTS)

test.obj: src\test.cpp src\Queue.h src\Stack.h
	$(CC) $(FLAGS) /I lib\ -c src\test.cpp

main.obj: src\main.cpp
	$(CC) $(FLAGS) /I lib\ -c src\main.cpp

clean:
	del assignment7.exe *.obj
