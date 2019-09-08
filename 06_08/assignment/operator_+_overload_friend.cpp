#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:

A(){}

A(int a, int b):x(a),y(b)
{
}

void get_data()
{
cout << x << "\t" << y << endl;
}

friend A operator +(const A &,const A &);
};

A operator +(const A &a,const A &b)
{
A tmp;
tmp.x = a.x + b.x;
tmp.y = a.y + b.y;
return tmp;
}

int main()
{
A a1(100,200), a2(10,20), a3(1,2),a4;
a1.get_data();
a2.get_data();
a3.get_data();

a4 = a1 + a2 + a3;
cout<< endl << "Result:" << endl;
a4.get_data();
}
