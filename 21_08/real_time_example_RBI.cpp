#include<iostream>
using namespace std;

class RBI
{
public:
virtual void min_bal()=0;//if here instead of pure virtual defination is there then while fetching min_bal this defination is printed which is unintented 
};

class SBI:public RBI
{
public:
virtual void min_bal()
{
cout << "minimum balance is 5000" << endl;
}
};

class ICICI:public RBI
{
public:
virtual void min_bal()//if no defination is should give error that is intention
{
cout << "minimum balance is 10000" << endl;
}
};

int main()
{
RBI *ptr;
SBI obj1;
ICICI obj2;
ptr=&obj1;
ptr->min_bal();

ptr=&obj2;
ptr->min_bal();
}
