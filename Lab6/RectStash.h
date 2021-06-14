#pragma once
#include <iostream>
#include "Vec.h"
#include <vector>
#include "Rect.h"
using namespace std;

class RectStash{

	public:
	
	vector<Rect*> myVec;

	void add(Rect* myRec){
		myVec.push_back(myRec);
	}

	void contains(Vec temp){
		for(int i = 0;i<myVec.size();i++){
			if(myVec[i]->contains(temp)){
				cout << "in";
			}
			else{
				cout << "out";
			}
		}
	}
};

