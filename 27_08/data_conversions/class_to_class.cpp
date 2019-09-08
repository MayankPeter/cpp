/* constructor method */
#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:
A(){}

A(int a, int b)
{
x=a, y=b; 
}

int getx()
{
return x;
}

int gety()
{
return y;
}
};

class B
{
int m;
int n;

public:
B(){}

B(A a1)
{
m = a1.getx();
n = a1.gety();
} 

void get_data()
{
cout << m << "    " << n << endl;
}
};

int main()
{
A a1(10,20);
B b1;
b1 = a1;
b1.get_data();
}
