#include<iostream>
using namespace std;
class A
{
const int x;
const int y;

public:
A(int , int);
A();
};

A::A():x(10),y(20)
{
cout << x << "   " << y << " - " << "Default Constructor Executed" << endl;
}

A::A(int a, int b):x(a),y(b)
{
cout << x << "  " << y << " - " << "parameterized constructor" << endl;
}

using namespace std;
int main()
{
A a1;
A a2(100,200);
}
