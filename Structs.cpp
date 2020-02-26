#include "Structs.h"

void printFruit(Fruit f) {
	cout << "Type: " << f.type << endl;
	cout << "Color: " << f.color << endl;
	cout << "Weight: " << f.weight << endl;
}

int compareFruits(Fruit * f1, Fruit * f2) {
	// compare member by member for order
	// type, then color, then weight
	// return 0 if all same
	// return -1 if f1 "comes before" f2
	// return 1 if f1 "comes after" f2
	// used by sorting algorithm to order Fruits
	if (f1->type < f2->type) {
		return -1;
	}
	else if (f1->type > f2->type) {
		return 1;
	}
	else { // same type, check color next
		if (f1->color < f2->color) {
			return -1;
		}
		else if (f1->color > f2->color) {
			return 1;
		}
		else { // same type AND color, check weight next
			if (f1->weight < f2->weight) {
				return -1;
			}
			else if (f1->weight > f2->weight) {
				return 1;
			}
			else { // same type AND color AND weight 
				return 0;
			}
		}
	}
}
