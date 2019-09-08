#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:

A(){}

A(int a,int b):x(a),y(b)
{}

void get_data()
{
cout << x << "   " << y << endl;
}

A operator ++(int)
{
A tmp;
tmp.x = x;
tmp.y = y;
++x,++y;
return tmp;
}

A operator ++()
{
A tmp;
tmp.x = ++x;
tmp.y = ++y;
return tmp;
}
};

int main()
{
A a1(100,200),a2,a3;
a2 = a1++;//a1.operator ++(int)
a1.get_data();
a2.get_data();

a3 = ++a1; //a1.operator ++()
a1.get_data();
a3.get_data();
}
