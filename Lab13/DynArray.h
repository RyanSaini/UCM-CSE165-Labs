#ifndef LA13_DynArray.h
#define LA13_DynArray.h
#include <vector>

using namespace std;

template <class T>
class DynArray {
public:
    
    std::vector<T> vec;

    DynArray(){

    }

    void add(T var){
        vec.push_back(var);
    }

    T operator[](int index){
        return vec[index];
    }
    
    

};


#endif