#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:
void get_data();
A(A&);
A();
A(int , int);
};

A::A():x(10),y(20)
{
cout << "Default Constructor" << endl;
}

A::A(int a, int b):x(a),y(b)
{
cout << "Parameterized Constructor" << endl;
}

A::A(A &a)
{
cout << "Copy Constructor" << endl;
this->x = a.x, this->y = a.y;
}

void A::get_data()
{
cout << x << "   " << y << endl;
}

A test(A a1)
{
cout << "This is test " << endl;
return a1;
}

int main()
{
A a1, ret;
ret = test(a1); // assignment operator
}
