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
friend A operator ++(A&);
friend A operator ++(A&,int);

};

A operator ++(A& a,int)
{
A tmp;
tmp.x = a.x;
tmp.y = a.y;
++a.x,++a.y;
return tmp;
}


A operator ++(A& a)
{
A tmp;
tmp.x = ++a.x;
tmp.y = ++a.y;
return tmp;
}

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
