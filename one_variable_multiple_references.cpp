#include<iostream>
using namespace std;
int main()
{
int num = 99;
int &ref1 = num;
int &ref2 = num;
int &ref3 = num;

cout << num << " " << ref1 << " " << ref2 << " " << ref3 << endl;
}
