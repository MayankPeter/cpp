#include<iostream>
using namespace std;
class A
{
int x;
int y;

public:
void write_data(void);
friend int main();
};

void A::write_data(void)
{
x = 10, y = 20;
}

int main()
{
A a1;
a1.write_data();
cout << a1.x << "  " << a1.y << endl;
}
