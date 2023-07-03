all: add-nbo

add-nbo: add-nbo.cpp
	g++ -o add-nbo add-nbo.cpp

clean:
	rm -f *.o
	rm -f add-nbo
