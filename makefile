# Makefile for HW 3
# Hannah Pearson
# 10/20/16

main: main.cpp stack.o link.o
	g++ -o main main.cpp stack.o link.o

stack.o: stack.cpp stack.h link.h
	g++ -c stack.cpp

link.o: link.cpp link.h
	g++ -c link.cpp

clean:
	rm main *.o
