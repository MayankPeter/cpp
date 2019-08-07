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

friend A operator +(int, A);
};

A operator +(int a,A t1)
{
A ret;
ret.x = t1.x + a;
ret.y = t1.y + a;
return ret;
}

int main()
{
A a1(100,200),a2;
a2 = 10+a1;
a2.get();
}
