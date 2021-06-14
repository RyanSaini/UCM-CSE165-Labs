#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {

    //Q1
    int x = 0;

    cin>>x;

    if(x >0){
        cout <<"POSITIVE \n";
    }
    else{
        cout <<"NEGATIVE \n";
    }

    if(x%2 == 0){
        cout<<"EVEN \n";
    }
    else{
        cout<<"ODD \n";
    }

    //Q2.

    cin>>x;

    while(x != 0){

    if(x >0){
        cout <<"POSITIVE \n";
    }
    else{
        cout <<"NEGATIVE \n";
    }

    if(x%2 == 0){
        cout<<"EVEN \n";
    }
    else{
        cout<<"ODD \n";
    }
    cin >>x;

    }
}