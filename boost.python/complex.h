#pragma once
#include<iostream>
#include<math.h>
class Complex
{
    private:
        float a;//real
        float b;//virtual
    public:
        Complex(){this->a=this->b=0.0;}
        Complex(float a,float b):a(a),b(b){}
        Complex(float a):a(a){this->b=0.0;}
        // Complex(const Complex& com){this->a=com.a;this->b=com.b;}
        Complex(const Complex& com){this->a=com.a;this->b=com.b;}
        void printcomplex(void)

        {
            std::cout<<"Complex: "<<this->a<<(this->b>=0?"+":"")<<this->b<<"i"<<"\n";

        }
        void set(float a,float b)
        {
            this->a=a;
            this->b=b;
        }
        float modulo()
        {
            
            return sqrt(this->a*this->a+this->b*this->b);
        }
        Complex  operator+(const Complex& com2)
        {
            Complex temp;
            temp.a=this->a+com2.a;
            temp.b=this->b+com2.b;
            return temp;
        }
        void operator=(const Complex& com2)
        {
            Complex temp;
            this->a=com2.a+2;
            this->b=com2.b+2;
            // return temp;
        }


};
