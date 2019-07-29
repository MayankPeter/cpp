#include<iostream>
using namespace std;
int i = 20;
int main()
{
{
int i =10;
}
int i = 30;
cout << i << "  " << ::i << endl;
}
