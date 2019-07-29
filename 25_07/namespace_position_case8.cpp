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
{
using namespace first; /*no error in this line since before this only one namespace */
cout << x << endl;
display();
}

using namespace second; /* Error since two namespace before this line */
cout << x << endl;
display();
}
