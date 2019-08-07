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

void get_data()
{
cout << x << "   " << y << endl;
}

friend A operator +(A, int);
};

A operator +(A t1, int a)
{
A ret;
ret.x = t1.x + a;
ret.y = t1.y + a;
return ret;
}

int main()
{
A a1(100,200), a2;
a2 = a1+10;
a2.get_data();
}
