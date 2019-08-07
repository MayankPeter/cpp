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
x = a, y = b;
}

void get()
{
cout << x << "   " << y << endl;
}

A operator +(int a)
{
A ret;
ret.x = x + a;
ret.y = y + a;
return ret;
}

};

int main()
{
A a1(10,20),a2;
a2 = a1+10; //a1.operator +(10)
a2.get();
}
