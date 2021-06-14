#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {

int input = 0;
cin>>input;
int sum;

vector<int> myVec;

while(input != 0){
    if(input > 0){
        myVec.push_back(input);
    }
    else{
        for(int i = 0; i<myVec.size(); i++){
            input = input * -1;
            if(myVec[i] == input){
                myVec.erase(myVec.begin() + i);
            }
        }
    }
    cin>>input;
}

for(int i = 0;i<myVec.size();i++){
    cout<<myVec[i]<<"\n";
}

for(int i = 0;i<myVec.size();i++){
    sum += myVec[i];
}
cout<<sum<<"\n";

}
