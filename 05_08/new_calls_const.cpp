#include<iostream>
using namespace std;
class A
{
int x;

public:

A()
{
cout << "Constructor" << endl;
}

~A()
{
cout << "Constructor" << endl;
}

};
using namespace std;
int main()
{
A *ptr;
ptr = new A;
}
