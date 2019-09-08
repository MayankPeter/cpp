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
cout << x << "   "  << y << endl;
}

A operator -()
{
A tmp;
tmp.x = -x;
tmp.y = -y;
return tmp;
}

};

int main()
{
A a1(10,20), a2;
a2 = -a1;//a1.operator -();
a1.get_data();
a2.get_data();

}
