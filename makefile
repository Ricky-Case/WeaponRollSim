all: WeaponGen

WeaponGen: main.o WeaponGenerator.o
	g++ -o WeaponGen main.o WeaponGenerator.o

main.o: main.cpp
	g++ -c main.cpp

Term.o: WeaponGenerator.cpp WeaponGenerator.h
	g++ -c WeaponGenerator.cpp