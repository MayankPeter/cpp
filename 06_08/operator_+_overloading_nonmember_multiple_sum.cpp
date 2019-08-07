#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:
A()
{}

A(int a, int b):x(a),y(b)
{}

void get_data()
{
cout << x << "  " << y << endl; 
}
friend A operator +(const A&,const A&);
};

A operator +(const A &t1,const A &t2) // A operator +(A &t1, A &t2) gives error coz internal buffer is of const type
{
A ret;
ret.x = t1.x + t2.x;
ret.y = t1.y + t2.y;
return ret;
}

int main()
{
A a1(100,200),a2(10,20),a3(1,2),a4(1000,2000),a5;
a5 = a1+a2+a3+a4; //a1.operator +(a2);
a5.get_data();
}
