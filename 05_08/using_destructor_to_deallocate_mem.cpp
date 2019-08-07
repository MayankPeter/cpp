#include<iostream>
#include<cstring>
using namespace std;
class A
{
char *s;

public:

A()
{
cout << "copy constructor" << endl;
s = new char[20];
strcpy(s,"vector");
}

~A()
{
cout << "Destructor" << endl;
delete []s;
}
};

int main()
{
A a1,a2;
}
