#include<iostream>
using namespace std;

int sum(int x,int y)
{
return x+y;
}

int sum(char *y,int z)
{
return *y+z;
}

int sum(float x,int y,int z)
{
return x+y+z;
}

int main()
{
cout << sum(10,11) << endl;
}

