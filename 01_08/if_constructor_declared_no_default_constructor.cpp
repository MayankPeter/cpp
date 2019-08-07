#include<iostream>
using namespace std;
class A
{
int x;
int y;

public:
void get_data();
A(int = 100, int = 200);
};

A::A(int a, int b)
{
x = a, y = b;
}

void A::get_data()
{
cout << x << "  " << y << endl;
}

using namespace std;
int main()
{
A a1, a2(1), a3(1,2);
a1.get_data();
a2.get_data();
a3.get_data();
}
