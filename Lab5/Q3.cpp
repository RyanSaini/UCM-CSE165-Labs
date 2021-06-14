#include <iostream>
#include "Dog.h"
#include <string>
#include "display.h"

using namespace std;

int main(int argc, const char * argv[])
{
	int n = 0;
	char c = ' ';
	string s = "";
	int age = 0;
	vector<Animal*> list;
	cin>> n;

	for(int i = 0; i<n; i++){
		cin>>c;
		cout<<" ";
		cin>> s;
		cout<<" ";
		cin>> age;

		if( c == 'A'){
			Animal* a = new Animal();
			a->setName(s);
			a->setAge(age);
			list.push_back(a);
		}

		else{
			Dog* d = new Dog(s, age);
			d->setName(s);
			d->setAge(age);
			list.push_back(d);
		}
	}

	display(list);

}