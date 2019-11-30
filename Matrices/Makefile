cppsrc = $(wildcard ../common/*.cpp)
hppsrc = $(wildcard ../common/*.hpp)
objsrc = $(cppsrc:*.cpp=*.o)

LDFLAGS = -lGL -lglut -lGLEW -lglfw

all: tri commonPrep

commonPrep: $(cppsrc) $(hppsrc)
	g++ -Wall -c $(cppsrc) $(LDFLAGS)

tri: test.o $(objsrc)
	g++ -Wall -o tri test.o $(objsrc) $(LDFLAGS)

test.o: test.cpp $(hppsrc)
	g++ -Wall -c test.cpp $(LDFLAGS)

clean:
	rm -f tri *.o