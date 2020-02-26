#include "Structs.h"

int main() {
	cout << "hello world" << endl;
	
	// let's make Fruits! now memory is allocated
	Fruit myFruit = {"kiwi", "brown", 2.6};
	
	//cout << myFruit << endl;
	// the above line is acompiler error
	// because << isn't defined for Fruits
	// in CPSC 223 you'll cover operator overloading 
	
	// the dot operator .
	// AKA direct member (AKA component) selection operator
	cout << myFruit.type << endl;
	// task: in Structs.cpp define printFruit(Fruit) that prints out values for Fruit parameter members
	// call here
	printFruit(myFruit);
	// struct types are pass by VALUE
	
	// assignment works
	Fruit myOtherFruit = myFruit; // copies
	// relational operators < <= != == etc.
	// not defined for Fruit
	// 223... operator overloading
	
	// we can have pointers to structs
	Fruit * myFruitPtr = NULL;
	myFruitPtr = &myFruit; // points to myFruit
	//cout << *myFruitPtr.type << endl;
	// compiler error! because . has higher precedence than * 
	cout << (*myFruitPtr).type << endl;
	// because we do the above so often...
	// -> arrow operator
	// AKA indirect member (AKA component) selection operator
	cout << myFruitPtr->type << endl;
	// -> is it derferences and selects
	
	// on Tuesday we will work on how to compare Fruits for sorting
	// write compareFruits(Fruit *, Fruit *)
	// return -1 if left fruit param < right fruit param
	// return 1 if right fruit param > left fruit param
	// return 0 if the fruit params are the same
	myOtherFruit = myFruit;
	cout << compareFruits(&myFruit, &myOtherFruit) << endl;
	myOtherFruit.type = "apple";
	cout << compareFruits(&myFruit, &myOtherFruit) << endl;

	return 0;
}
