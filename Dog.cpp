#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;


//TODO: implement the default constructor
Dog::Dog(){
  
}

//TODO: implement the overloaded constructor
Dog::Dog(string _name, int _age, string _breed): Pet::Pet(_name, _age){
  dogBreed = _breed;
}


void Dog::SetBreed(string userBreed) {
	dogBreed = userBreed;
}

string Dog::GetBreed() {
	return dogBreed;
}