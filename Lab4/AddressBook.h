#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include "Entry.h"
#include <memory>

using namespace std;
struct AddressBook {
    vector<Entry*> ent;
    
    void add(Entry * x){
        ent.push_back(x);
    }

    void print(){
        for(int i = 0; i<ent.size(); i++){
            ent[i]->print();
        }
    }

    void free(){
        for(int i = 0; i<ent.size(); i++){
            delete ent[i]; //removes memory
        }

        ent.clear(); //empties vector
    }
};


#endif