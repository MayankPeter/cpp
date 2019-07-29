#include<iostream>
using namespace std;

namespace first
{
int x = 10;
void display()
{
cout << "first display" << endl;
}
}

namespace second
{
int x = 20;
void display()
{
cout << "second display" << endl;
}
}

using first::x;
using second::display;

int main()
{
{
cout << x << endl;
display();
}

cout << x << endl;
display();
}
