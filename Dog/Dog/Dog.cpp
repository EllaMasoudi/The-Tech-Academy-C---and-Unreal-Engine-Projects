#include <string>

#include <iostream>
using namespace std;

class Doggy
{
public:
	//Constructor
	string breed;
	double height_feet;
	double weight;
	string color;

public:
	void printDetails() {
		cout << "Breed : " << breed << endl;
		cout << "Height : " << height_feet << endl;
		cout << "Weight : " << weight << endl;
		cout << "Color : " << color << endl;

	}
	void Shake() {
		cout << "He knows shake command" << endl;
	}
	void Sit() {
		cout << "He knows sit command" << endl;
	}
	void Laydown() {
		cout << "He knows lay down command" << endl;
	}
	
};

int main()
{
	Doggy dog_1;
	dog_1.breed = "Hound";
	dog_1.height_feet = 2;
	dog_1.weight = 60;
	dog_1.color = "Brown";

	dog_1.printDetails();
	dog_1.Laydown();
	dog_1.Shake();
	dog_1.Sit();
}


