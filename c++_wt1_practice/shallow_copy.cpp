#include<iostream>
#include<cstring>

using namespace std;
class A
{
char *ptr;

public:

void read_data()
{
cout << ptr << endl;
}

A(){}

A(const char *s)
{
ptr = new char[strlen(s)+1];
strcpy(ptr,s);
}

void modify()
{
ptr[0] = 's';
}

};

int main()
{
A a1("vector") , a2(a1);
a1.read_data();
a2.read_data();

a1.modify();

a1.read_data();
a2.read_data();
}
