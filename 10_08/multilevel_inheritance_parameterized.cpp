#include<iostream>
using namespace std;

class A
{
int x;
public:

A()
{
cout << "Constructor A" << endl;
}

A(int a)
{
cout << "Constructor A" << endl;
x = a;
}

~A()
{
cout << "Destructor A" << endl;
}

void get_data()
{
cout << x << endl;
}

};

class B:public A
{
int m;
public:

B()
{
cout << "Constructor B" << endl;
}

B(int a, int b):A(a)
{
cout << "Constructor B" << endl;
m = b;
}

~B()
{
cout << "Destructor B" << endl;
}

void get_data()
{
A::get_data();
cout << m << endl;
}
};

class C:public B
{
int z;
public:

C()
{
cout << "Constructor C" << endl;
}

C(int a, int b, int c):B(a,b)
{
cout << "Constructor C" << endl;
z = c;
}

~C()
{
cout << "Destructor C" << endl;
}

void get_data()
{
B::get_data();
cout << z << endl;
}

};

int main()
{
C c(10,20,30);
cout << sizeof(A) << "   " << sizeof(B) << "   " << sizeof(c) << endl;
c.get_data();
}
