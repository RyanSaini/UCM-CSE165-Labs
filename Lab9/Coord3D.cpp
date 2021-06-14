#include <iostream>
#include "Object.h"
using namespace std;

Coord3D::Coord3D(){

}

Coord3D::Coord3D(int x1, int y1, int z1){
    this->x = x1;
    this->y = y1;
    this->z =z1;

}

Coord3D::~Coord3D(){

}

Object* Coord3D::multiply(const Object* other) const{

    if(typeid(*this).name() == typeid(*other).name()){
        const Coord3D* temp = dynamic_cast<const Coord3D*>(other);
        Coord3D *newCoord = new Coord3D(temp->x * this->x, temp->y * this->y, temp->z * this->z);
        return newCoord;
    }

    else{
        const Number *temp = dynamic_cast<const Number*>(other);
        Coord3D *newCoord = new Coord3D(temp->num * this->x, temp->num * this->y, temp->num * this->z);
        return newCoord;
    }

}

void Coord3D::print(){
    cout<<"x = "<< this->x;
    cout<<"y = "<< this->y;
    cout<<"z = "<< this->z;
}



