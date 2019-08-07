#include<iostream>
using namespace std;
class A
{
int x;
int y;

public:
void get_data()
{
cout << x << "   " << y << endl;
}

A()
{
cout << "Hi this is Constructer here!!" << endl;
x = 100, y = 200;
}

};

int main()
{
A a1,a2,a3,a4;
a1.get_data();
a2.get_data();
a3.get_data();
a4.get_data();
}
