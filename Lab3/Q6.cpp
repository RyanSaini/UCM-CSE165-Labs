#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
vector<string> myVec;
int temp = 0;

string input  = "";
cin >>input;

while(input != "quit"){
    if(input.size() >= 4){
        myVec.push_back(input);
        
    }

    else{

        for(int i =0; i<myVec.size(); i++){
            temp = 0;
            for(int j = 0; j<input.size(); j++){
                if(input[j] == myVec[i][j])
                temp = temp + 1;
            }

            if(input.size() == temp){
                cout<<myVec[i] << "\n";
            }
        }
    }
    cin>> input;
}

}
