#include<iostream>
using namespace std;

namespace first
{
int x = 10;
void test()
{
cout << "first" << endl;
}
}

namespace second
{
int x = 20;
void test(void)
{
cout << "second" << endl;
}
}

using namespace first; 
using namespace second;

int main()
{
cout << x << endl;
test();
}
