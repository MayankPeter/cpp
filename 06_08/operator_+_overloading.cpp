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

A operator +(A t1)
{
A ret;
ret.x = x + t1.x;
ret.y = y + t1.y;
return ret;
}
};

int main()
{
A a1(100,200),a2(10,20),a3;
a3 = a1+a2; //a1.operator +(a2);
a3.get_data();
}
