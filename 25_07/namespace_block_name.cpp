#include<iostream>
using namespace std;

namespace first
{
int x = 10;
void display(void)
{
cout << "First One" << endl;
}
}

namespace second
{
int x = 20;
void display(void)
{
cout << "Second One" << endl;
}
}

int main()
{
cout << "x = " << first::x << endl;
second::display();
}
