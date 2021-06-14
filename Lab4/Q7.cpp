#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;


struct one{
    char myChar;
    double myDouble;
};

struct two{
    char myChar;
    char myChar2;
    double myDouble;
};

struct three{
    char myChar;
    char myChar2;
    char myChar3;
    double myDouble;
};

struct four{
    char myChar;
    char myChar2;
    char myChar3;
    char myChar4;
    double myDouble;
};

struct five{

};

struct six{
    char myChar;
    int myInt;
    char myChar2;
};

struct seven{
    char myChar;
    char myChar2;
    int myInt;
};

int main(int argc, const char * argv[]) {

cout<<sizeof(one)<<"\n";
cout<<sizeof(two)<<"\n";
cout<<sizeof(three)<<"\n";
cout<<sizeof(four)<<"\n";
cout<<sizeof(five)<<"\n";
cout<<sizeof(six)<<"\n";
cout<<sizeof(seven)<<"\n";
}