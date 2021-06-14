#pragma once
#include <iostream>

using namespace std;

class AppRect{
    public:

    int x;
    int y;
    int w;
    int h;

    AppRect(){

    }

    AppRect(int a, int b, int c, int d){

        x = a;
        y = b;
        w = c;
        h = d;

    }
};

class AppWindow{

    public:
    
    AppRect r;

    AppWindow(){

    }

    AppWindow( int x, int y, int w, int h){
        r = AppRect(x,y,w,h);
    }

    AppWindow(const AppRect& r){
        this -> r = r;
    }

    const AppRect& rect(){
        return r;
    }

    virtual void resize(int w, int h) = 0;
};

class RectWin : public AppWindow{
    public:

    RectWin(){

    }

    RectWin(int x, int y, int w, int h) : AppWindow(x, y, w, h){

    }

    RectWin(AppRect r) : AppWindow(r){

    }

    void resize(int w, int h){
        cout<< "Area: " << w*h<<"\n";
    }

};

class CircleWin : public AppWindow{
    public:

    CircleWin(){

    }

    CircleWin(int x, int y, int w, int h) : AppWindow(x, y, w, h){

    }

    CircleWin(AppRect r) : AppWindow(r){

    }

    void resize(int w, int h){
        cout<< "radius: " << min(w, h)<<"\n";
    }

};





