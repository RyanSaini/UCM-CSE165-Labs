#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <iostream>

using namespace std;

class Dog: public Animal{
	
	string dogName;
	int dogAge;

	public:

	Dog(string a, int b){
		cout<<"Creating Dog"<<"\n";
		dogName = a;
		dogAge  = b;
	}

	string getName() {
		return dogName;
	}


	int getAge() {
		return dogAge;
	}

	
	void feed() {
		cout << "A small bone, please!!" << endl;
	}

	~Dog() {
		cout << "Deleting Dog" << endl;
	}

};

#endif

