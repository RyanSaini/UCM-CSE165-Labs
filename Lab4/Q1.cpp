#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "Stash.h"

using namespace std;

int main(int argc, const char * argv[]) {


    Stash myStash =  Stash(); 
    myStash.initialize(100); //Can use 16 since txt file is 16 lines
    ifstream myFile("input.txt");
    string line;

    /*while(!myFile.eof()){
        myFile>>line; //reads each line into
        double temp = stod(line);
        cout<<temp<<"\n";
        myStash.add(&temp);
    }
    
    for(int i = 0; i<myStash.count(); i++){
        cout<<*(double *)myStash.fetch(i)<<"\n";
    }
*/

    while(!myFile.eof()){
        myFile>>line; //reads each line into
        double *temp = new double;
        *temp = stod(line);
        myStash.add(temp);
    }
    
    for(int i = 0; i<myStash.count(); i++){
        cout<<*(double *)myStash.fetch(i)<<"\n"; //casts as a pointer then deference(Value at, then cast as ptr)
    }
    myStash.cleanup();  
}