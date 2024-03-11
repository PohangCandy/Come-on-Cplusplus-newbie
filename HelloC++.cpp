#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
	string Name;
	string sound;
	virtual string GetName();
	virtual void SetName(string newname);
	virtual string GetSound();
	virtual void SetSound(string newsound);
	void Speak();
};

void Animal::Speak() {
	cout<< sound << endl;
}

string Animal::GetName() {
	return Name;
}

void Animal::SetName(string newname) {
	Name = newname;
}

string Animal::GetSound() {
	return sound;
}


void Animal::SetSound(string newsound) {
	sound = newsound;
}



class Dog : Animal{
	//SetName("Dog");
};


int main()
{


}