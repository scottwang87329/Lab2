main: main.o elo.o
	g++ -o main main.o elo.o

main.o: main.cpp
	g++ -c main.cpp

elo.o: elo.h elo.cpp
	g++ -c elo.cpp

clean:
	rm main *.o
