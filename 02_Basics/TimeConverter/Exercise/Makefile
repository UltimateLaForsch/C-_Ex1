build: main.o lib.o
	g++ out/main.o out/lib.o -o out/main

main.o:
	g++ main.cc -c -o out/main.o

lib.o:
	g++ lib.cc -c -o out/lib.o

execute:
	./out/main

clean:
	rm -f out/*.o