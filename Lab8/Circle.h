#pragma once
#include <iostream>
#include <vector>
#include "Sortable.h"
using namespace std;

class Circle : public Sortable {
    public:
    int radius;

    Circle(){
        radius = 0;
    }

    Circle(int num){
        radius = num;
    }

    bool compare(const Sortable * s){

    }

    void print(){
        cout<<radius;
    }



};