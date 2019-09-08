/*In vtable only function defination is ther and no access specifier is present Thus it uses Base class access specifier*/
#include<iostream>
using namespace std;

class Base
{
int x;
public:
virtual void test()
{
cout << "Test in Base" << endl;
}
};

class Derived:public Base//:protected Base Error inaccessible
{
void test()//this is in private still it is printed since base test() is in public
{
cout << "Test in Derived" << endl;
}
};

int main()
{
Base *ptr;
Derived obj;
ptr = &obj;
ptr->test();
}
