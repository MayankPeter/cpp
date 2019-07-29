#include<iostream>
using namespace std;
int main()
{
int a = 10;
int *p = &a;
int * &rp = p;

cout << "*rp = " << *rp << endl;
}
