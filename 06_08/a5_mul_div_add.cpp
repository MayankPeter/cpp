#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:
A(){}

A(int a, int b)
{
x = a,y = b;
}

void get()
{
cout << x << "   " << y << endl;
}

A operator +(const A &a)
{
A ret;
ret.x = x + a.x;
ret.y = y + a.y;
return ret;
}

A operator *(const A &a)
{
A ret;
ret.x = x * a.x;
ret.y = y * a.y;
return ret;
}

A operator /(const A &a)
{
A ret;
ret.x = x/a.x;
ret.y = y/a.y;
return ret;
}
};

int main()
{
A a1(1000,2000),a2(100,200),a3(100,200),a4(2,2),a5;
a5 = a1+a2*a3/a4;
a5.get();
}
