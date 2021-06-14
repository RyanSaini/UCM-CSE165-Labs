//
//  Fillvector.cpp
//
//
//  Created by Ryan Saini on 1/29/21.
//

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector <string> v;
    ifstream in("code.cpp");
    string line;

    while(getline(in, line)){//getline returns true if read successfully
        v.push_back(line);// Add the line to the end of v
    }
    
    for(int i = 0; i< v.size(); i++){ //Add line numbers
        cout << i << ": " << v[i] << endl;
    }
        
    int i = 0;
        
    
    for(int j = v.size()-1; j>=0; j--){ //Add line numbers
        cout << j << ": " << v[i] << endl;
        i++;
    }


    //Q6:

    string S = " ";

    for(int k = 0; k < v.size(); k++){
        S += v[k] + "\n";
    }

   cout << S;
    
}
