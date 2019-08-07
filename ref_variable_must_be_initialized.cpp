#include<iostream>
using namespace std;
int main()
{
int a = 10;
int &ra//error;
ra = a;
cout << ra << endl;
}
