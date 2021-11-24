all: connections

connections: main.c my_mat_lib.a
	gcc -Wall -o connections main.c my_mat_lib.a

my_mat_lib.a: my_mat.o
	ar -rcs my_mat_lib.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -c my_mat.c -o my_mat.o

.PHONY: clean all

clean:
	rm -f *.o *.a connections
