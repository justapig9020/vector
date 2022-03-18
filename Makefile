all: example

example: example.o vector.o
	gcc -o example example.o vector.o

%.o: %.c vector.h
	gcc -c $< -o $@

clean:
	rm -f *.o example
