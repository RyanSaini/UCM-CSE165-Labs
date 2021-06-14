#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {

int number = 0;
char c = ' ';

cout<<"Enter a character: ";
cin>>c;

cout<<"Enter a number: ";
cin>>number;

while(number != -2){
if(number != -1){
    for(int i = 0; i<number; i++){
        cout<<c;
    }
}

else{
    cout<<"\n";
}

cout<<"Enter a character: ";
cin>>c;

cout<<"Enter a number: ";
cin>>number;

}

}
