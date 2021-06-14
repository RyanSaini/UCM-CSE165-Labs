#ifndef LA12_Mat_h
#define LA12_Mat_h

#include <iostream>
#include "Vec.h"

class Mat{
    public:
        static Mat Identity;
        float a;
        float b;
        float c;
        float d;


        Mat(){

        }

        Mat(float a, float b, float c, float d){
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
        }

        Mat(const Mat& m){
            this->a = m.a;
            this->b = m.b;
            this->c = m.c;
            this->d = m.d;
        }

        Mat operator+(const Mat& m) const{
            Mat m1 = Mat(this->a + m.a, this->b + m.b, this->c + m.c, this->d + m.d);
            return m1;
        }

        Mat operator-(const Mat& m) const{
            Mat m1 = Mat(this->a - m.a, this->b - m.b, this->c - m.c, this->d - m.d);
            return m1;
        }

        Mat operator*(const int& m) { //int * matrix
            Mat m1 = Mat(this->a * m, this->b * m, this->c *m, this->d * m);
            return m1;
        }

        Mat operator*(const Mat& m) const{ //matrix * matrix
            Mat m1 = Mat((this->a * m.a + this->b *m.c), (this->a * m.b + this->b *m.d),(this->c * m.a + this->d * m.c), (this->c * m.b + this->d * m.d));
            return m1;
        }

        Vec operator*(const Vec& v) const{ //Vec * matrix
            Vec v1 = Vec((this->a * v.x + this->b *v.x), (this->c * v.y + this->d * v.y));
            return v1;

        }


};

Mat Mat::Identity = Mat(1,0,0,1);

Mat operator*(const int& x,  Mat& m){ //overload first argurment is matrix, makes first argurment#.
    return m*x;
}
#endif