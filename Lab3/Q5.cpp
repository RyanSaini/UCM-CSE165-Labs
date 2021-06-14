#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {

vector<vector<string>*> myVec; //double  vector
int n = 0;

for(int i =0; i<10; i++){
    vector<string>* myVecS = new vector<string>();
    myVec.push_back(myVecS); //initialize
    //fill in vector 10 times
}

string input = "";
cin>> input;

while(input !=  "quit"){
    n = input.size() - 1;
    vector<string> &vec = *myVec[n]; //Reference specfic index of myVec
    vec.push_back(input);
    cin>>input;
}

 for(int j = 0; j<10; j++){
     vector<string> &myVecS = *myVec[j];
     int sum = 0;
     for(int k = 0; k<myVecS.size(); k++){
         sum += myVecS[k].size(); //Adding all letters
     }
    if(sum >0){
        cout<<sum<<" ";
        cout<<myVecS.size(); //# of words
        cout<<"\n";
    }
    }


}
