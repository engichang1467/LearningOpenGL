cppsrc = $(wildcard ../common/*.cpp)
hppsrc = $(wildcard ../common/*.hpp)
objsrc = $(cppsrc:*.cpp=*.o)

OS := $(shell uname)

ifeq ($(OS), Darwin)
	# Check if its in MAC OS
	LDFLAGS = -framework OpenGl -lGLEW -lglfw
else
	# Check if its Linux
	LDFLAGS = -lGL -lglut -lGLEW -lglfw 
endif

# LDFLAGS = -lGL -lglut -lGLEW -lglfw

all: tri commonPrep

commonPrep: $(cppsrc) $(hppsrc)
	g++ -Wall -c $(cppsrc) $(LDFLAGS)

tri: test.o $(objsrc)
	g++ -Wall -o tri test.o $(objsrc) $(LDFLAGS)

test.o: test.cpp $(hppsrc)
	g++ -Wall -c test.cpp $(LDFLAGS)

clean:
	rm -f tri *.o