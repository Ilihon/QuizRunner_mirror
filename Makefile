.PHONY: all run clean

g = g++
flags = -Wall -c
GDIR = test-cover/googletest

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

test: googletest bin/test
	bin/test

googletest:
	$(g) -std=c++11 -isystem ${GDIR}/include -I ${GDIR} -pthread -c ${GDIR}/src/gtest-all.cc -o build/gtest-all.o
	ar -rv build/libgtest.a build/gtest-all.o

bin/test:  build/test.o build/testload.o build/testwork.o
	$(g) -std=c++11 -isystem ${GDIR}/include -pthread $^ build/libgtest.a -o bin/test

build/test.o:
	$(g) -std=c++11 $(flags) test-cover/test.cpp -I $(GDIR)/include -o $@

format:
	clang-format -i ./src/*.h
	clang-format -i ./src/*.cpp
	clang-format -i ./test-cover/*.cpp
