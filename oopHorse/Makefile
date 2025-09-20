race: horse.o race.o oopHorse.o
	g++ -g horse.o race.o oopHorse.o -o race

oopHorse.o: race.h horse.h oopHorse.cpp
	g++ -c -g oopHorse.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

race.o: race.h horse.h race.cpp
	g++ -c -g race.cpp

run: race
	./race

debug: race
	gdb ./race

clean:
	rm -f *.o
	rm -f race
