/*static data mambers are allocated same memory address for static members*/
#include<iostream>
using namespace std;

class A
{
int x;
static int y;

public:
void set();
void read();
};

void A::set()
{
cout << "Enter the value of x and y: " << endl;
cin >> x >> y;
}

void A::read()
{
cout << x << "  " << y << endl;
}

int A::y;

int main()
{
A a1,a2,a3;
a1.set();
a2.set();
a3.set();

/*for all 3 y's last updated value is shown*/

a1.read();
a2.read();
a3.read();
}
