#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:
void set_data(int = 1000, int = 2000 );
void get_data();
A sum(A);
};

void A::set_data(int a, int b)
{
x = a, y = b;
}

void A::get_data()
{
cout << x << "   " << y << endl;
}

A A::sum(A a)
{
A tmp;
tmp.x = this->x + a.x;
tmp.y =  this->y + a.y;
return tmp;
}

int main()
{
A a1,a2,a3;
a1.set_data(10,20);
a1.get_data();
 
a2.set_data(40,50);
a2.get_data();

a3 = a1.sum(a2);
a3.get_data();
}
