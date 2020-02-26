#ifndef STRUCTS_H
#define STRUCTS_H
// header file guard code prevents double inclusion of this header file

#include <iostream>

using namespace std;

// a struct is a programmer defined collection of data members
// define structs in the header file
struct Fruit {
	string type; // e.g. kiwi pear apple
	string color; // e.g. green red
	double weight; // e.g. in ounces
};
// no memory is allocated until we make Fruit variables!!

void printFruit(Fruit);
int compareFruits(Fruit *, Fruit *);

#endif
