#pragma once
#include<iostream>
#include<boost/python.hpp>
struct FunctionStruct
{
int a;
int b;
int add();
int subtract();
};
class Function
{
    private:
        char *name;
        int age;
        int id;
        
    public:
    int time1;
        int time2;
        
        int addtime(){return this->time1+this->time2;}
        Function(char * name,int age,int id):
            name(name),age(age),id(id){}
        void printinfo(void);
        void printid(void){std::cout<<"id"<<id<<"\n";}
        void setage(int age){this->age=age;}
        void round(long num);
        void doubleround(int num1,int num2);



};
