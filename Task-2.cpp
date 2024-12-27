#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
public:
	virtual void makeSound() = 0;
	virtual ~Animal() {}
};

class Cat : public Animal {
public:
	void makeSound() {
		cout << "Cat : Meow~ Meow~" << endl;
	}
};

class Dog : public Animal {
public:
	void makeSound() {
		cout << "Dog : Woof! Woof!" << endl;
	}
};

class Cow : public Animal {
public:
	void makeSound() {
		cout << "Cow : Moo~ Moo~" << endl;
	}
};

void print(Animal* Animal)
{
	Animal->makeSound();
}

int main() 
{
	vector<Animal*> Animals;
	 Animals.push_back(new Cat());
	 Animals.push_back(new Dog());
	 Animals.push_back(new Cow());

	 for (size_t i = 0; i < Animals.size(); ++i) {
		 cout << "���͸� ������ ���� �Ҹ��� ��µ˴ϴ�" << endl;
		 cin.get(); //ȣ��
		 print(Animals[i]);
	 }

	 for (size_t i = 0; i < Animals.size(); ++i) {
		 delete Animals[i];
	 }

	return 0;
}