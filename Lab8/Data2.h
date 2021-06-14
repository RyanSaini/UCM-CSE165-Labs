#include <iostream>
#include <vector>
#include "Sortable.h"
using namespace std;

class Data{
    vector<Sortable*> myVec;
    public:

    void add(Sortable* number){
        myVec.push_back(number);
    }

    void print(){

        for (int i =0; i< myVec.size(); i++){
            myVec[i]->print();
        }

    }

    void sort(){
        int i = 0;
        int j = 0;
        int key = 0;
        

        for(i=1;i<myVec.size();i++){ //insertion Sort
        key = myVec[i]->radius;
        
        j = i-1;
        
        while(j>=0 && myVec[j]->radius < key){
            myVec[j+1]->radius = myVec[j]->radius;
            j = j-1;
        }
        
        myVec[j+1]->radius = key;
        }
    }

};