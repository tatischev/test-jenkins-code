test : main.o
	cc -o test main.o

main.o : main.c
	cc -O2 -c main.c

clean :
	rm -f test main.o
