CC = cl
FLAGS = /std:c++17 /WX /EHsc
OBJECTS = test.obj main.obj 

assignment8: $(OBJECTS)
	$(CC) /Fe"assignment8" $(OBJECTS)

test.obj: src\test.cpp src\Graph.h
	$(CC) $(FLAGS) /I lib\ -c src\test.cpp

main.obj: src\main.cpp
	$(CC) $(FLAGS) /I lib\ -c src\main.cpp

clean:
	del assignment8.exe *.obj
