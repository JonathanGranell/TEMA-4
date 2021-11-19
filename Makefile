calcula:calcula.c calc.o
	gcc -Wall -g calcula.c calc.o -o calcula

calc.o:calc.c
	gcc -c calc.c -o calc.o



.PHONY:clean
clean:
	rm -rf calcula calc.o

.PHONY: dist
dist: clean calcula
	mkdir -p /usr/bin/calc
	cp -r ./calcula /usr/bin/calc

.PHONY: targz
targz: clean
	mkdir -p source
	cp *.c *.h Makefile source
	tar -cvf calcula.tar source 
	gzip calcula.tar
	rm -rf calcula.tar
	rm -rf source