/* constructor can be ambigious */
#include<iostream>
using namespace std;
class A
{
int x;
int y;

public:
A();
A(int ,int = 2000);
void get_data(void);
};

A::A()
{
cout << "constructor with No Arguments" << endl;
cin >> x >> y;
}

A::A(int a, int b)
{
cout << "constructor with Arguments" << endl;
x = a, y = b;
}

void A::get_data(void)
{
cout << x << "   " << y << endl;
}

int main()
{
A a1, a2(100, 200),a3(400);
a1.get_data();
a2.get_data();
a3.get_data();
}
