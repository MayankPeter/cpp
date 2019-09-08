#include<iostream>
using namespace std;

class A
{
int x,y;

public:

A()
{
cout << "Constructor A" << endl;
x = 10, y = 20;
}

~A()
{
cout << "Destructor A" << endl;
}

};

class B:public A
{
int m,n;

public:

B():A()//internally called like this if no ":A()" it also works
{
cout << "Constructor B" << endl;
m = 30, n = 40;
}

~B()//cannot call ":~A()" explilcitly coz only constructors take memberwise initialization
{
cout << "Destructor B" << endl;
}

};

int main()
{
B b1;
//A a1;
}
