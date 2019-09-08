#include<iostream>
using namespace std;
int main()
{
int x=10,y=20;
int &ra = x;
ra = &y;
cout << x <<ra << y << endl;
}
