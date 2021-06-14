#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
bool primeNumber(int x);

int main(int argc, const char * argv[]) {

    //Q3
    int N = 0;

    cin>>N;

    for(int i = 2; i<N; i++){
        if(i == 2){
            cout <<i << "\n";
        }
        else{
            if(primeNumber(i) == true){
                cout<<i<<"\n";
            }
        }
    }

}

bool primeNumber(int x){
    for(int j = 2; j<x; j++){
        if(x%j == 0){
            return false;
        }
    }
    return true;
}