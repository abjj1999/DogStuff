#include <iostream>
#include<string>
#include "Dog.h"

using namespace std;

int main() {

	string petName, dogName, dogBreed;
	int petAge, dogAge;

	Pet myPet;
	Dog myDog;

	getline(cin, petName);
	cin >> petAge;
	cin.ignore();
	getline(cin, dogName);
	cin >> dogAge;
	cin.ignore();
	getline(cin, dogBreed);

	// TODO: Create generic pet (using petName, petAge) and then call PrintInfo      
  // myPet(petName, petAge);
  Pet MyP(petName, petAge);
  MyP.PrintInfo();

	// TODO: Create dog pet (using dogName, dogAge, dogBreed) and then call PrintInfo
  Dog myD(dogName, dogAge, dogBreed);
  myD.PrintInfo();
	// TODO: Use GetBreed(), to output the breed of the dog
  cout << "   Breed: " << myD.GetBreed() <<endl; 

}
