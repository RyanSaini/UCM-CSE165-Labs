#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>

using namespace std;

void printFrequencies(const string &str)
{
	//write your code here
	std::string myWord;
	std::unordered_map<std:: string, int> myMap;


	for(int i = 0; i<str.size(); i++){
		
		if(str[i] != 32){
			myWord = myWord + str[i];
		}

		else{
			auto found = myMap.find(myWord); //returns iterator in hashmap where the word occurs.

			if(found == myMap.end()){
				myMap.insert({myWord, 1});
			}

			else{
				found->second++;
			}

			myWord = "";
		}

	}

	for(const auto&print : myMap){
		std::cout<<"("<<print.first<<", "<<print.second<<")";
	}

}

int main(int argc, char** argv)
{

	std::ifstream ifs("file.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));

	printFrequencies(content);

	return 0;
}