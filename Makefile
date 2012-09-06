CC = g++
CFLAGS = -Wall -Wextra -Werror -Weffc++ -pedantic

all: clean hello problem2

hello: hello.cpp
	$(CC) $(CFLAGS) -o hello hello.cpp

problem2: problem2.cpp
	$(CC) $(CFLAGS) -o problem2 problem2.cpp

clean:
	rm -f *~
	rm -f hello
	rm -f problem2
