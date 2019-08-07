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

int main()
{
A a1, a2(a1), a3(100,200) , a4, a5=a2;
a1.get_data();
a2.get_data();
a3.get_data();
a4.get_data();
a5.get_data();
}
