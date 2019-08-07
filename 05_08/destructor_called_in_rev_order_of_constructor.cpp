#include<iostream>
using namespace std;

class A
{
public:
A()
{
cout << "Constructor : " << (unsigned int)this << endl;
}

~A()
{
cout << "Destructor : " << (unsigned int)this << endl;
}

};

int main()
{
A a1,a2,a3,a4;
}
