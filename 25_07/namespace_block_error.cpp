#include<iostream>
using namespace std;

{
int x = 10;
void display(void)
{
cout << "First One" << endl;
}
}

{
int x = 20;
void display(void)
{
cout << "Second One" << endl;
}
}

int main()
{
cout << "x = " << x << endl;
display();
}
