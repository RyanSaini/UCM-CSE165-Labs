#include <iostream>
#include "Rect.h"
#include "RectStash.h"
using namespace std;

int main(int argc, const char * argv[])
{

    RectStash myRectStash;

    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;

    float x = 0;
    float y = 0;

    cin>> a;
    cin>> b;
    cin>> c;
    cin>> d;


    while(true){
        if(a && b && c && d < 0){
            break;
        }

        Rect* myRect = new Rect(a, b, c , d);

        myRectStash.add(myRect);

        delete myRect;
        cin>> a;
        cin>> b;
        cin>> c;
        cin>> d;

    }

    while(true){
        cin>>x;
        cin>>y;
        Vec temp = Vec(x, y);

        myRectStash.contains(temp);

        if(x == -99 && y == -99){
            break;
        }

    }

}