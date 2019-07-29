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
int main()
{
using namespace second;
cout << x << endl;
display();
}
