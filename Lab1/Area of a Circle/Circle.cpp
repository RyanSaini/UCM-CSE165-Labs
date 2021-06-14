//
//  Circle.cpp
//  Area of a Circle
//
//  Created by Ryan Saini on 1/29/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Enter a radius\n";
    int radius;
    std::cin >> radius;
    
    double value = (radius*radius) * 3.14;
    std::cout<<"The area of a circle is about: " <<+ value;
    return 0;
}
