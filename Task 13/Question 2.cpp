#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal(){}
	virtual void makeSound() {

	}
};
class Dog : public Animal {
public:
	void makeSound() {
		cout << "hoho" << endl;
	}
};
class Cat : public Animal {
public:
	void makeSound() {
		cout << "nono" << endl;
	}
};

int main(){

	Animal* d = new Dog;
	Animal* c = new Cat;

	d->makeSound();
	c->makeSound();

	delete d;
	delete c;
	
	return 0;
}
