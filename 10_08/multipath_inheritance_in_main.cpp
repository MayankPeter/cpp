#include<iostream>
using namespace std;

class A
{
public:
int x;

A()
{
cout << "Constructor A" << endl;
}

~A()
{
cout << "Destructor A" << endl;
}

A(int a)
{
cout << "Para. Constructor A" << endl;
x = a;
}
};

class B : A
{
public:
int y;

B()
{
cout << "Constructor B" << endl;
}

~B()
{
cout << "Destructor B" << endl;
}

B(int a,int b):A(a)
{
cout << "Para. Constructor B" << endl;
y = b;
}
};

class C: public A
{
public:
int z;

C()
{
cout << "Constructor C" << endl;
}

~C()
{
cout << "Destructor C" << endl;
}

C(int a,int b):A(a)
{
cout << "Para. Constructor C" << endl;
z = b;
}
};

class D:public B, public C
{
public:
int m;

D()
{
cout << "Constructor D" << endl;
}

~D()
{
cout << "Destructor D" << endl;
}

D(int a,int b, int c, int d, int e):B(a,b),C(c,d)
{
cout << "Para. Constructor D" << endl;
m = e;
}

void get_data()
{
cout << "x = " << B::x << endl;
cout << "x = " << C::x << endl;
cout << "y = " << y << endl;
cout << "z = " << z << endl;
cout << "x = " << m << endl;
//cout << "x = " << x << endl;
}

};


int main()
{
A a;
B b;
C c;
D d(10,20,30,40,50);
cout << d.C::x << endl;
d.get_data();
}
