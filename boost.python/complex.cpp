#include"complex.h"
using namespace std;
int main()

{
    Complex com(1,-1);
    cout<<com.modulo()<<endl;
    Complex com2=com;

    // com2.set(5,1);
    cout<<com2.modulo()<<endl;
    com.printcomplex();
    com2.printcomplex();
    Complex com3,com4;
    com3=com+com2;
    com3.printcomplex();
    com4=com3;
    com4.printcomplex();



    return 0;
}