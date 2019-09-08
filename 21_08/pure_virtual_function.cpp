#include<iostream>
using namespace std;

class Base // since contain a virtual func hence it is abstract type
{
int x;
public:
virtual void test1()
{
cout << "Test1 in Base" << endl;
}
virtual void test()=0;
};

class Derived1:public Base // remove comments and it works
{
//public: 
//void test()
//{
//cout << "Test in Derived 1" << endl;
//}
};

int main()
{
//Base obj1; 
//Base *ptr;
Derived1 obj; // when commented since Derived is pure virtual its object cant be created
//ptr = &obj;
//ptr->test();
}
