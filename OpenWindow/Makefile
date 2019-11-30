OS := $(shell uname)

ifeq ($(OS), Darwin)
	# Check if its in MAC OS
	LDFLAGS = -framework OpenGl -lGLEW -lglfw
else
	# Check if its Linux
	LDFLAGS = -lGL -lglut -lGLEW -lglfw 
endif

all:
	g++ test.cpp $(LDFLAGS)

clean:
	rm -f a.out