//
//  WordOccurences.cpp
//  WordOccurences
//
//  Created by Ryan Saini on 1/29/21.
//

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

int main(int argc, const char * argv[]) {
    std::string word;
    std::cout << "Enter a word: \n";
    std::cin>>word;
    
    std::transform(word.begin(), word.end(), word.begin(), ::tolower); //setting word to lowercase for easy comparison
    
    std::ifstream in("words.txt");
    std::string line;
    std::string temp;
    
    int count = 0;
    
    while(getline(in, line)){
        temp = "";
            for(int i = 0; i<line.size();i++){
                std::transform(line.begin(), line.end(), line.begin(), ::tolower);
                
                if(line[i] >= 97 && line[i] <= 122){
                    temp += line[i];
                }
                
                if(line[i] < 97  || line[i] > 122){
                    if(temp == word){
                        count++;
                    }
                    temp = "";
                }
            }
        
    }
    
    std::cout<<"The word, " << word << " , appears "<< count <<" times";
    return 0;
}
