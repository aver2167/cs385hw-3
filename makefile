# Hannah Pearson
# 10/20/16

main: main.o stack.o link.o
	g++ -o main main.o

main.o: main.cpp stack.o link.o
	g++ -c main.cpp

stack.o: stack.cpp stack.h 
	g++ -c stack.cpp

link.o: link.cpp link.h
	g++ -c link.cpp

clean:
	rm main *.o
