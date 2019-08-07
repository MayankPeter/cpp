#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:
void set_data()
{
x = 100, y = 200;
}
friend void read_data(A);
friend void read_data(A*);
};

void read_data(A a1)
{
cout << "A a1" << endl;
cout << a1.x << "   " << a1.y << endl;
}

void read_data(A *a1)
{
cout << "A *a1" << endl;
cout << a1->x << "   " << a1->y << endl;
}

int main()
{
A a1;
a1.set_data();
read_data(a1);
read_data(&a1);
}
