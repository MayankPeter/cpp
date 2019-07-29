#include<iostream>
using namespace std;
int main()
{
int a = 10;
int &ra = a;
cout << "a = " << a << endl;
cout << "ra = " << ra << endl;
cout << "&a = " << (unsigned int)&a << endl;
cout << "&ra = " << (unsigned int)&ra << endl;
}
