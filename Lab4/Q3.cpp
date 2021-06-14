#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "LinkedList.h"

using namespace std;

int main(int argc, const char * argv[]) {
    LinkedList myList = LinkedList();
    myList.initialize();
    ifstream myFile("input.txt");
    string line;

    while(!myFile.eof()){
        myFile>>line;
        double *temp = new double;
        *temp = stod(line);
        myList.add(temp);
    }

     while(myList.head != NULL){
        cout<<*(double *)myList.head->data <<"\n";
        myList.head = myList.head->next;
    }

    myList.cleanup();

}