#include <iostream>
#include "Object.h"
using namespace std;


Number::Number(){
    this-> num = 0;
}

Number::Number(int a){
    this-> num = a;
}

Number::~Number(){

}

Object* Number::multiply(const Object* other) const{

    if(typeid(*this).name() == typeid(*other).name()){
        const Number* temp = dynamic_cast<const Number*>(other);
        Number* num = new Number(this->num * temp->num);
        return num;
    }

    else{
        const Coord3D *temp = dynamic_cast<const Coord3D*>(other);
        Coord3D *newCoord = new Coord3D(temp->x * num, temp->y * num, temp->z * num);
        return newCoord;
    }

}

void Number::print(){
    cout<<"Number: "<<this->num<< "\n";
}


