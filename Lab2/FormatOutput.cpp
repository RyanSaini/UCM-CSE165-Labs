#include <string>
#include <iostream>
#include <fstream>
#include<sstream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {

    //Q4

    int x = 0;
    cin>>x;
    int arr[32];

    while(x != -1){

      cout<<hex<<x<<"\n";
      int temp = x;
      for(int i = 0; i<32; i++){
        temp = x%2;
        arr[i]=temp;
        x = x/2;
      }
      for(int k = 31; k>=0; k--){
        cout<<arr[k];
      }
      cout<<"\n";
      
      cin >> x;
    }
}