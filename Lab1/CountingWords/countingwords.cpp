//
//  countingwords.cpp
//  CountingWords
//
//  Created by Ryan Saini on 1/29/21.
//

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, const char * argv[]) {
    
    std::ifstream in("words.txt");
    std::string line;
    int count = 0;
    while(getline(in, line)){
        for(int i = 0; i<line.size();i++){
            if(line[i] == ' '){
            count += 1;
            }
        }
        count +=1;
    }
    
    std::cout << "Number of words in file: "<< count;
}
