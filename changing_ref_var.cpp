#include<iostream>
using namespace std;
int main()
{
int a = 10, b = 20;
int &ref = a;
cout << "a = " << ref << endl;
ref = b;
cout << "b = " << ref << endl;
}
