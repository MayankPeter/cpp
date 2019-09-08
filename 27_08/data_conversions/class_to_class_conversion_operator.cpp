#include<iostream>
using namespace std;

class B
{
int m;
int n;

public:
B(){}

void get_data()
{
cout << m << "     " << n << endl;
}

int& getxaddr()
{
return m;
}

int& getyaddr()
{
return n;
}

};

class A
{
int x;
int y;

public:

A(){}

A(int a, int b)
{
x=a,y=b;
}

operator B()
{
B tmp;
tmp.getxaddr() = x;
tmp.getyaddr() = y;
return tmp;
}

};

int main()
{
A a1(10,20);
B b1;
b1 = a1;
b1.get_data();
}
