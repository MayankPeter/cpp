#include<iostream>
using namespace std;

class singleton
{
private:
static bool instanceflag;
static singleton *single;

singleton()
{
//private constructor
}

public:
static singleton* getinstance();
~singleton()
{
instanceflag = false;
}
void test()
{
cout << "Hey this is test" << endl;
}
};

bool singleton::instanceflag = false;
singleton* singleton::single = NULL;

singleton* singleton::getinstance()
{
if(!instanceflag)
{
single = new singleton;
instanceflag = true;
return single;
}
else
return single;
}

int main()
{
singleton *a1,*a2;
a1 = singleton::getinstance();
a1->test();

a2 = singleton::getinstance();
a2->test();
}
