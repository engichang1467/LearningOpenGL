all: tri

tri: test.o shader.o
	g++ -Wall -o tri test.o shader.o -lGL -lglut -lGLEW -lglfw

shader.o: shader.cpp shader.hpp
	g++ -Wall -c shader.cpp -lGL -lglut -lGLEW -lglfw

test.o: test.cpp shader.hpp
	g++ -Wall -c test.cpp -lGL -lglut -lGLEW -lglfw

clean:
	rm -f tri *.o