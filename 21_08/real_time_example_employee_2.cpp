#include<iostream>
using namespace std;

class employee
{
public:
virtual void salary()
{
cout << "Employee salary is 5000" << endl;
}
};

class sw_engineer:public employee
{
public:
/*
void salary()//if this def not there it prints employee sal which does not make sense
{
cout << "S/w Engineer salary is 10000" << endl;
}
*/
};

class nw_engineer:public employee
{
public:
void salary()
{
cout << "N/w Engineer salary is 5000" << endl;
}
};

int main()
{
employee *ptr;
sw_engineer obj1;
nw_engineer obj2;

ptr = &obj1;
ptr->salary();

ptr = &obj2;
ptr->salary();
}
