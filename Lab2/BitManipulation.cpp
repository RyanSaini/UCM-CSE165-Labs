#include <string>
#include <iostream>
#include <fstream>
#include<sstream>
#include <cmath>
using namespace std;
int getBit(int n, int index);
int setBit(int n, int index);
int clearBit(int n, int index);

int main(int argc, const char * argv[]) {

    //Q6
int num = 0;
int n = 0;
int index = 0;
string bit = "";
cout<<"Enter a number: \n";
cin>>n;
int temp = n;
num = n;

for(int i = 0; i<31; i++){
    temp = num%2;
    if(num%2 == 0){
        bit = "0" + bit;
    }
    else{
        bit = "1" + bit;
    }
    num = num/2;
}
cout<<bit<<"\n";

cout<<"Enter a index: \n";
cin>>index;

cout << getBit(n, index)<<"\n";
setBit(n,index);
clearBit(n, index);

}

int getBit(int n, int index){
    return n >> index & 1;    
}

int setBit(int n, int index){
    
}

int clearBit(int n, int index){

}