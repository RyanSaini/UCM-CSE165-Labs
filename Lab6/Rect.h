#pragma once
#include <iostream>
#include "Vec.h"

class Rect{
	public:

	Vec corner;
	float w;
	float h;

	Rect(float a, float b, float c, float d){
		corner = Vec(a, b);
		w = c;
		h = d;
	}

	bool contains(Vec myVec){
		if(corner.x < myVec.x && corner.y > myVec.y && corner.x + w > myVec.x && corner.y - h < myVec.y){
			return true;

		}
		return false;
	}



};

