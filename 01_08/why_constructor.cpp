#include<iostream>
using namespace std;
class A
{
//public:
int x;
int y;

public:
void get_data()
{
cout << x << "   " << y << endl;
}
};
int main()
{
A s1 = {10,20}; /*for this constructor is needed just to initialize pvt data, public will work like this*/
s1.get_data();
}
