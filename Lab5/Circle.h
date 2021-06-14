#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

using namespace std;

class Circle{


	private:
		double x;
		double y;
		double r;
	
	public:

		double area = 3.14159;
		
		Circle(){
			x = 0;
			y = 0;
		}

		Circle(int a, int b, int c){
			x = a;
			y = b;
			r = c;
		}

		double getX(){
			return x;
		}

		double getY(){
			return y;
		}

		double getR(){
			return r;
		}

		void setX(double var){
			x = var;
		}

		void setY(double var){
			y = var;
		}

		void setR(double var){
			r = var;
		}



};

#endif

