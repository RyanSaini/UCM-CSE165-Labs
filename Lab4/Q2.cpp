#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "Stack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Stack myStack = Stack();
    myStack.initialize();
    ifstream myFile("input.txt");
    string line;

    while(!myFile.eof() ){
        myFile>>line; //reads each line into
        double *temp = new double;
        *temp = stod(line);
        myStack.push(temp);

    }

    Stack temp = Stack();
    temp = myStack;

    while(myStack.head != NULL){
    cout<<*(double *)myStack.head->data <<"\n";
    myStack.head = myStack.head->next;
    }

    myStack.head = temp.head; 

    while(myStack.head!=NULL){
        myStack.pop();
    }

    myStack.cleanup();
}