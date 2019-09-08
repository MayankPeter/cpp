#include<iostream>
using namespace std;

class Base
{
public:
//virtual void test(){
void test(){
cout << "This is test in Base class" << endl;
}

};

class Derived:public Base
{
public:
void test()
{
cout << "This is test in Derived class" << endl;
}

};

int main()
{
Base *ptr;
Derived obj;
ptr = &obj;
ptr->test();

return 0;
}
