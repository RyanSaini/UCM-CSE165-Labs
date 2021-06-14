#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {

string input = "";

cin >> input;
vector<string> source;

while(input != "quit"){
    if(input.length() > 1){
        source.push_back(input);
    } 
    else{
        for(int i = 0; i<= source.size(); i++){
            string temp = source[i];
            char compare = input[0];
            char ch = temp[0];
            if(ch == compare){
                cout<<temp<<"\n";
            }
            
        }
    }

    cin >> input;
}

}
