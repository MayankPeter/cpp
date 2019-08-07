#include<iostream>
using namespace std;

class A
{
int x;
int y;

/*
//Error
A()
{
x = 10, y = 20;
}
*/

public:
void get_data()
{
cout << x << "   " << y << endl;
}

A();
};

A::A()
{
cout << "Constructor Here!!" << endl << "Enter the data" << endl;
cin >> x >> y;
}

int main()
{
A a1;
a1.get_data();
}
