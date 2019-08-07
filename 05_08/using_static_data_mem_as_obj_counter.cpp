#include<iostream>
using namespace std;

class A
{
int x;

public:
static int y;

A()
{
cout << "Default"<< endl;
y++;
}

~A()
{
cout << "Destructor"<< endl;
y--;
}
};

int A::y;

int main()
{
A a1,a2,a3;
{
A a4;
cout << A::y << " or " << a1.y << endl;
}
cout << A::y << " or " << a1.y << endl;
A a4;

cout << A::y << " or " << a1.y << endl;
}
