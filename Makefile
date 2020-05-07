.PHONY: all

g = g++
flags = -Wall -c

all: bin/main

run:
	bin/main

clean:
	rm build/*.o

bin/main: build/main.o build/testload.o build/testwork.o
	$(g) $^ -o bin/main

build/main.o:
	$(g)  $(flags) src/main.cpp -o $@

build/testload.o:
	$(g)  $(flags) src/testload.cpp -o $@

build/testwork.o:
	$(g)  $(flags) src/testwork.cpp -o $@
