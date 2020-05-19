#include "function.h"
using namespace std;

int FunctionStruct::add()

{
return this->a+this->b;
// cout<<"a"<<this->a<<endl;
// cout<<"b"<<this->b<<endl;
// return 9;
}
int FunctionStruct::subtract()

{
return this->a-this->b;

}

void Function::printinfo()
{
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "id: " << id << endl;
}
void Function::round(long num)
{
    int j = 0;
    for (int i = 0; i < num; i++)
    {
        j += 1;
    }
    cout << "round:  " << j << endl;
}
void Function::doubleround(int num1, int num2)
{
    int k = 0;
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            k += 1;
        }
    }
    cout << "doubleround:  " << k << endl;
}
using namespace boost::python;
BOOST_PYTHON_MODULE(function)
{
    scope().attr("yes")=1;
    scope().attr("no")=2;
    class_<Function>("function", init<char *, int, int>()).def("printinfo", &Function::printinfo).def("round", &Function::round).def("doubleround", &Function::doubleround).def("addtime",&Function::addtime).def_readonly("time1",&Function::time1).def_readonly("time2",&Function::time2).add_property("name",&Function::printinfo).add_property("id",&Function::printid).add_property("age",&Function::printinfo,&Function::setage);
    scope().attr("yesss")=1;
    class_<FunctionStruct>("functionstruct").def("add", &FunctionStruct::add).def("subtract", &FunctionStruct::subtract).def_readwrite("a",&FunctionStruct::a).def_readwrite("b",&FunctionStruct::b);
    scope().attr("yess")=1;
}