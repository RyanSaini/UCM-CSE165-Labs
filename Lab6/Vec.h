#pragma once
#include <iostream>

class Vec{
	public:

	float x;
	float y;
	static Vec null;

	Vec(){
		x = 0;
		y = 0;
	}

	Vec(float a, float b){
		x = a;
		y = b;
	}

	void add(Vec a){
		x += a.x;
		y += a.y;
	}

	void print(){
		std::cout<<x;
		std::cout<<y;
	}


};

Vec Vec::null = Vec(); //Sets the null = to the (0,0) vec. 