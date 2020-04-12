#include <iostream>
#include <string>

using namespace std;

class Animal {
	protected:
		string roar;

	public:
		void makeSound(void) {
			cout << "Animals always makes some sound." << endl;
		}
};

class Pig : public Animal {
	public:
		void makeSound(void) {
			roar = "wee wee";
			cout << "Pig sounds: " << roar << endl;
		}
};

class Lion : public Animal {
	public:
		void makeSound(void) {
			roar = "vroo vroo";
			cout << "Lion sounds: " << roar << endl;
		}
};

int main(void) {
	Animal animal;
	Pig pig;
	Lion lion;

	animal.makeSound();
	pig.makeSound();
	lion.makeSound();

	return 0;
}
