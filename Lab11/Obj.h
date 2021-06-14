#ifndef LA10_Obj_h
#define LA10_Obj_h
#include "Shared.h"
#include <ios>

using namespace std;

class Obj:public Shared {

    public: //mimics reference count
        string n;
        Obj(string a){
            n = a;
            cout<<"new "<<n<<"\n";
        }

        ~Obj(){
            cout<<"delete "<<n<<"\n";
        }
    
};

#endif