#include<iostream>
using namespace std;

int sum(int x,int y,int z)
{
return x+y+z;
}

float sum(float x,int y,int z)
{
return x+y+z;
}

float sum(int x,int y,float z)
{
return x+y+z;
}

int sum(int x,int y)
{
return x+y;
}

float sum(float x,float y)
{
return x+y;
}

float sum(int x,float y,int z)
{
return x+y+z;
}

float sum(float x,float y,int z)
{
return x+y+z;
}

int sum(int x,float y,float z)
{
return x+y+z;
}

float sum(float x,float y,float z)
{
return x+y+z;
}
int main()
{
cout << sum(10.9f,11.23f,33.98f) << endl;
}

