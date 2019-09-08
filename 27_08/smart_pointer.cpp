#include<iostream>
using namespace std;

class person
{
const char * name;
int age;

public:
person(){}

person(const char *s,int a)
{
name = s;
age = a;
}

void get_info()
{
cout << name << "       "  << age << endl;
}
};

class smartptr
{
person *ptr;

public:
smartptr(){}
smartptr(person *p)
{
ptr = p;
}

person* operator ->()
{
return ptr;
}

~smartptr()
{
delete ptr;
}
};

int main()
{
smartptr a1(new person("mayank",23));
a1->get_info();
}
