#include<iostream>
using namespace std;

class A
{
int x;
public:

void get_data()
{
cout << x << endl;
}

A()
{
cout << "Constructor A" << endl;
}

~A()
{
cout << "Destructor A" << endl;
}

};

class B:public A
{
int m;
public:

void get_data()
{
cout << m << endl;
}

B()
{
cout << "Constructor B" << endl;
}

~B()
{
cout << "Destructor B" << endl;
}
};

class C:public B
{
int z;
public:

void get_data()
{
cout << z << endl;
}

C()
{
cout << "Constructor C" << endl;
}

~C()
{
cout << "Destructor C" << endl;
}

};
int main()
{
C c;
cout << sizeof(A) << "   " << sizeof(B) << "   " << sizeof(c) << endl;
}
