#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	virtual void makeSound() = 0;
};

class Cat : public Animal {
public:
	void makeSound() {
		cout << "Cat meows: Meow! Meow!" << endl;
	}
};

class Dog : public Animal {
public:
	void makeSound() {
		cout << "Dog meows : Woof!Wood!" << endl;
	}
};

class Cow : public Animal {
public:
	void makeSound() {
		cout << "Cow meows : Moo! Moo!" << endl;
	}
};

int main() {
	Animal* myAnimal;
	Cat myCat;
	Dog myDog;
	Cow myCow;

	myAnimal = &myCat;
	myAnimal->makeSound();

	myAnimal = &myDog;
	myAnimal->makeSound();

	myAnimal = &myCow;
	myAnimal->makeSound();

	return 0;
}
