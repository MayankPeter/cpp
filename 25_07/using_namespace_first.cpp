#include<iostream>
using namespace std;

namespace first
{
int x = 10;
void test()
{
cout << "First" << endl;
}
}

namespace second
{
int x = 20;
void test()
{
cout << "Second" << endl;
}
}

using namespace first;     /* Can't use before namespace first declaration since can be used after declaration */
int main()
{
cout << x << endl;
test();
}
