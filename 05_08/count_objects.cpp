#include<iostream>
using namespace std;

class A
{
int x;
static int count;

public:
A()
{
cout << "Constructor" << endl;
x = 10;
count++;
}

~A()
{
cout << "Destructor" << endl;
count--;

}

static int object_count()
{
return count;
}
};

int A::count;

int main()
{
A a1,a2,a3;
cout << A::object_count() << endl;
cout << a1.object_count() << endl;

}
