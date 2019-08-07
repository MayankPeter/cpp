#include<iostream>
using namespace std;

class A
{
int x;
static int y;

A()
{
cout << "constructor" << endl;
y++;
}

~A()
{
cout << "destructor" << endl;
y--;
}

public:

static void create()
{
cout << "create functn" << endl;
A a1;
cout << y << endl;
//cin >> x;// not possible
}

};

int A::y;

int main()
{
A::create();
}
