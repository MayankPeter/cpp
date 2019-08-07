#include<iostream>
using namespace std;

class A
{
int x;
static int y;

};

int A::y;

int main()
{
cout << sizeof(A) << endl;
}
