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

class B :virtual public A
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

B(int b)//B(int a,int b)//:A(a)
{
cout << "Para. Constructor B" << endl;
y = b;
}
};

class C:virtual public A
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

C(int b)//C(int a,int b)//:A(a)
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

D(int a,int b, int c, int d):A(a),C(c),B(b)
{
cout << "Para. Constructor D" << endl;
m = d;
}

void get_data()
{
//cout << "x = " << B::x << endl;
//cout << "x = " << C::x << endl;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
cout << "z = " << z << endl;
cout << "m = " << m << endl;
}

};


int main()
{
D d(10,20,30,40);
d.get_data();
}
