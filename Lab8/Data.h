#include <iostream>
#include <vector>
using namespace std;

class Data{
    vector<int> myVec;
    public:

    void add(int number){
        myVec.push_back(number);
    }

    void print(){

        for (int i =0; i< myVec.size(); i++){
            cout<<myVec[i]<<"\n";
        }

    }

    void sort(){
        int i = 0;
        int j = 0;
        int key = 0;

        for(i=1;i<myVec.size();i++){ //insertion Sort
        key = myVec[i];
        
        j = i-1;
        
        while(j>=0 && myVec[j] < key){
            myVec[j+1] = myVec[j];
            j = j-1;
        }
        
        myVec[j+1] = key;
        }
    }

};