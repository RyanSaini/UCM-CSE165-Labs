#ifndef LA12_Fib_h
#define LA12_Fib_h

using namespace std;

class Fib {
public:
    static int last;
    static int secondLast;
    int sum;

    Fib(){

    }

    int next(bool reset){
        if(reset ==  true){
            last = 1;
            secondLast = 0;
        }
        reset = false;
        return this->next();
    }

    int next(){
        sum = last + secondLast;
        secondLast = last;
        last = sum;

        return sum;
    }
    

};


#endif