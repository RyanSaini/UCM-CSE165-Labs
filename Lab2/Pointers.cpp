#include <string>
#include <iostream>
#include <fstream>
#include<sstream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {

    //Q5
    int x = 0;
    int y = 0;
    cout << "Enter the first int: \n";
    cin >> x;
    cout << "Enter the second int: \n";
    cin >> y;

    int *ptrX = &x;
    int*ptrY = &y;
    int sum, sub, mult, div;

    //cout<<ptrX<<"\n";

    //cout<<ptrY<<"\n";

    sum = *ptrX + *ptrY;
    sub = *ptrX - *ptrY;
    mult = *ptrX * *ptrY;
    div = *ptrX / *ptrY;

    cout<<"Adding the ints: "<<sum<<"\n";
    cout<<"Subtracting the ints: "<<sub<<"\n";
    cout<<"Multiplying the ints: "<<mult<<"\n";
    cout<<"Dividing the ints: "<<div<<"\n";


}