#include<iostream>
using namespace std;
class B;
class C;

class A
{
int x;
int y;

public:
friend void set_data(A&,B&,C&);
friend void get_data(A&,B&,C&);
};

class B
{
int x;
int y;

public:
friend void set_data(A&,B&,C&);
friend void get_data(A&,B&,C&);
};

class C
{
int x;
int y;

public:
friend void set_data(A&,B&,C&);
friend void get_data(A&,B&,C&);
};


void set_data(A &a, B &b, C &c)
{
cout << "Enter x and y values for all 3 classes" << endl;
cin >> a.x >> a.y;
cin >> b.x >> b.y;
cin >> c.x >> c.y;
}

void get_data(A &a, B &b, C &c)
{
cout << endl << "Output : " << endl << a.x << " " << a.y << endl;
cout << b.x << " " << b.y << endl;
cout << c.x << " " << c.y << endl;
}


int main()
{
A a;
B b;
C c;

set_data(a,b,c);
get_data(a,b,c);
}
