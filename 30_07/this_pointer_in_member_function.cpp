#include<iostream>
using namespace std;

class stu
{
int x;
int y;

public:
void write_data()
{
cout <<"This = " << (unsigned int)this << endl;
x=100, y=200;
}

void read_data()
{
cout << x << " " << y <<endl;
}
};

int main()
{
class stu s;
cout << "&s = " << (unsigned int)&s << endl;
s.write_data();
s.read_data();
}
