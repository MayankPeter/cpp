#include<iostream>
using namespace std;
int main()
{
int a = 10;
int &ra = a;
int &ra1 = ra;
int &ra2 = ra1; 


cout << "ra2 = " << ra2 << endl;
}
